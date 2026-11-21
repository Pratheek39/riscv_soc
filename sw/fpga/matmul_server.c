/*
 * matmul_server.c - board firmware for the big-matrix tests.
 *
 * The board only has 128 KB of RAM, so a 256x256 (or bigger) multiply can
 * never sit in memory at once. Instead the PC program (sw/host_matmul_*.c)
 * splits the job into 64x64 blocks and sends them here one at a time:
 *
 *     for each 64x64 block of C:
 *         ZERO      C_block = 0
 *         for each 64-wide slice of K:
 *             LOAD A    one 64x64 block of A
 *             LOAD B    one 64x64 block of B
 *             MULTIPLY  product = A x B on the accelerator   (timed)
 *                       product = A x B again on the CPU     (timed, compared)
 *                       C_block += product
 *         READ C    send C_block back to the PC
 *
 * The protocol (commands, replies, chunks, checksums) is described in
 * sw/matmul_protocol.h. Hardware access goes through sw/fpga/server_hw.h.
 *
 * Important rule: while a chunk is arriving, the CPU must do nothing but
 * collect bytes. The UART holds only one byte and a byte arrives every
 * 10 us (250 cycles), so any detour would lose data.
 */
#include <stdint.h>

#include "matmul_protocol.h"
#include "server_hw.h"

/*-----------------------------------------------------------------
 * Timeouts (in CPU clock cycles, 25 MHz)
 *-----------------------------------------------------------------*/
/* Inside a chunk, bytes arrive back to back; 0.2 s of silence means some went missing */
#define BYTE_TIMEOUT_CYCLES   (BOARD_CLOCK_HZ / 5u)
/* After a bad chunk, wait for 20 ms of silence so no stray byte is left behind */
#define DRAIN_QUIET_CYCLES    (BOARD_CLOCK_HZ / 50u)
/* Waiting for the PC to acknowledge a chunk of C */
#define ACK_TIMEOUT_CYCLES    (BOARD_CLOCK_HZ * 2u)

/*-----------------------------------------------------------------
 * The four blocks kept on the board (16 KB each, 64 KB in total)
 *-----------------------------------------------------------------*/
#define BLOCK_WORDS (PROTO_MAX_BLOCK_DIM * PROTO_MAX_BLOCK_DIM)

static int32_t block_a[BLOCK_WORDS];        /* current block of A            */
static int32_t block_b[BLOCK_WORDS];        /* current block of B            */
static int32_t block_product[BLOCK_WORDS];  /* accelerator output: A x B     */
static int32_t block_c[BLOCK_WORDS];        /* running sum for one C block   */

static uint32_t a_rows, a_cols;             /* sizes of what is loaded now   */
static uint32_t b_rows, b_cols;
static uint32_t c_rows, c_cols;

/*-----------------------------------------------------------------
 * Small send / receive helpers
 *-----------------------------------------------------------------*/
static void send_byte(uint8_t value)
{
    hw_uart_write_byte(value);
}

static void send_u32(uint32_t value)
{
    send_byte((uint8_t)(value));
    send_byte((uint8_t)(value >> 8));
    send_byte((uint8_t)(value >> 16));
    send_byte((uint8_t)(value >> 24));
}

static void send_error(uint8_t error_code)
{
    send_byte(PROTO_REPLY_ERROR);
    send_byte(error_code);
}

/* Read one byte, giving up after BYTE_TIMEOUT_CYCLES. Returns 1 on success. */
static int receive_byte(uint8_t *value)
{
    return hw_uart_read_byte(value, BYTE_TIMEOUT_CYCLES);
}

static int receive_u16(uint16_t *value)
{
    uint8_t low, high;
    if (!receive_byte(&low) || !receive_byte(&high))
        return 0;
    *value = (uint16_t)(low | (high << 8));
    return 1;
}

static int receive_u32(uint32_t *value)
{
    uint32_t result = 0;
    for (int shift = 0; shift < 32; shift += 8)
    {
        uint8_t byte;
        if (!receive_byte(&byte))
            return 0;
        result |= (uint32_t)byte << shift;
    }
    *value = result;
    return 1;
}

/* Throw away incoming bytes until the line has been quiet for DRAIN_QUIET_CYCLES.
 * Used after a bad chunk, so a stray byte can't shift the next chunk. */
static void drain_receiver(void)
{
    uint8_t ignored;
    while (hw_uart_read_byte(&ignored, DRAIN_QUIET_CYCLES))
        ;
}

/*-----------------------------------------------------------------
 * Receiving one chunk of a block
 *
 * The bytes go straight into the block buffer:
 *   element_bytes = 1: each byte is one int8 value, widened to int32
 *   element_bytes = 4: bytes are copied as they are (little-endian int32)
 * If the chunk turns out bad, the PC resends it and the same buffer
 * positions are simply written again.
 *
 * Returns PROTO_REPLY_OK, PROTO_REPLY_ERROR (bad checksum) or
 * PROTO_REPLY_TIMEOUT (bytes went missing).
 *-----------------------------------------------------------------*/
static uint8_t receive_chunk(int32_t *block, uint32_t element_bytes,
                             uint32_t first_byte, uint32_t chunk_bytes)
{
    uint8_t *block_bytes = (uint8_t *)block;
    proto_checksum checksum;
    proto_checksum_reset(&checksum);

    for (uint32_t index = 0; index < chunk_bytes; ++index)
    {
        uint8_t byte;
        if (!receive_byte(&byte))
            return PROTO_REPLY_TIMEOUT;

        proto_checksum_add(&checksum, byte);

        uint32_t position = first_byte + index;
        if (element_bytes == 1)
            block[position] = (int8_t)byte;         /* sign-extend int8 to int32 */
        else
            block_bytes[position] = byte;           /* int32, byte by byte       */
    }

    uint32_t checksum_from_pc;
    if (!receive_u32(&checksum_from_pc))
        return PROTO_REPLY_TIMEOUT;

    if (checksum_from_pc != proto_checksum_value(&checksum))
        return PROTO_REPLY_ERROR;

    return PROTO_REPLY_OK;
}

/*-----------------------------------------------------------------
 * 'A' / 'B': load a block of A or B
 *-----------------------------------------------------------------*/
static void handle_load_block(int32_t *block, uint32_t *rows_out, uint32_t *cols_out)
{
    uint16_t rows, cols;
    uint8_t element_bytes;

    if (!receive_u16(&rows) || !receive_u16(&cols) || !receive_byte(&element_bytes))
    {
        send_byte(PROTO_REPLY_TIMEOUT);
        return;
    }
    if (rows == 0 || cols == 0 || rows > PROTO_MAX_BLOCK_DIM || cols > PROTO_MAX_BLOCK_DIM)
    {
        send_error(PROTO_ERR_BAD_SIZE);
        return;
    }
    if (element_bytes != 1 && element_bytes != 4)
    {
        send_error(PROTO_ERR_BAD_ELEMENT);
        return;
    }

    /* Forget the old size until the new block has fully arrived */
    *rows_out = 0;
    *cols_out = 0;
    send_byte(PROTO_REPLY_OK);

    uint32_t total_bytes = (uint32_t)rows * cols * element_bytes;
    uint32_t bytes_done = 0;
    uint32_t failed_attempts = 0;

    while (bytes_done < total_bytes)
    {
        uint32_t chunk_bytes = total_bytes - bytes_done;
        if (chunk_bytes > PROTO_CHUNK_BYTES)
            chunk_bytes = PROTO_CHUNK_BYTES;

        uint8_t reply = receive_chunk(block, element_bytes, bytes_done, chunk_bytes);

        if (reply == PROTO_REPLY_OK)
        {
            bytes_done += chunk_bytes;
            failed_attempts = 0;
        }
        else
        {
            drain_receiver();
            if (++failed_attempts >= PROTO_MAX_CHUNK_ATTEMPTS)
            {
                send_byte(PROTO_REPLY_GAVE_UP);
                return;      /* back to waiting for commands */
            }
        }
        send_byte(reply);
    }

    *rows_out = rows;
    *cols_out = cols;
}

/*-----------------------------------------------------------------
 * 'Z': start a new C block at zero
 *-----------------------------------------------------------------*/
static void handle_zero_c(void)
{
    uint16_t rows, cols;

    if (!receive_u16(&rows) || !receive_u16(&cols))
    {
        send_byte(PROTO_REPLY_TIMEOUT);
        return;
    }
    if (rows == 0 || cols == 0 || rows > PROTO_MAX_BLOCK_DIM || cols > PROTO_MAX_BLOCK_DIM)
    {
        send_error(PROTO_ERR_BAD_SIZE);
        return;
    }

    for (uint32_t index = 0; index < (uint32_t)rows * cols; ++index)
        block_c[index] = 0;

    c_rows = rows;
    c_cols = cols;
    send_byte(PROTO_REPLY_OK);
}

/*-----------------------------------------------------------------
 * The CPU's own multiply of the same blocks, used to time the CPU and to
 * check the accelerator. It is the plain textbook triple loop.
 * Returns how many values differ from the accelerator's product.
 *-----------------------------------------------------------------*/
static uint32_t cpu_multiply_and_compare(uint32_t m, uint32_t n, uint32_t k)
{
    uint32_t mismatches = 0;

    for (uint32_t row = 0; row < m; ++row)
        for (uint32_t col = 0; col < n; ++col)
        {
            /* int16 operands (the PEs use the low 16 bits); unsigned maths wraps like the hardware */
            uint32_t sum = 0;
            for (uint32_t index = 0; index < k; ++index)
                sum += (uint32_t)(int16_t)block_a[row * k + index] *
                       (uint32_t)(int16_t)block_b[index * n + col];

            if ((int32_t)sum != block_product[row * n + col])
                mismatches++;
        }
    return mismatches;
}

/* CPU-only product: block_product = A x B on the CPU (no compare, no accelerator) */
static void cpu_multiply_into_product(uint32_t m, uint32_t n, uint32_t k)
{
    for (uint32_t row = 0; row < m; ++row)
        for (uint32_t col = 0; col < n; ++col)
        {
            uint32_t sum = 0;
            for (uint32_t index = 0; index < k; ++index)
                sum += (uint32_t)(int16_t)block_a[row * k + index] *
                       (uint32_t)(int16_t)block_b[index * n + col];
            block_product[row * n + col] = (int32_t)sum;
        }
}

/*-----------------------------------------------------------------
 * 'M': product = A x B on the accelerator (and optionally on the CPU),
 *      then C_block += product
 *-----------------------------------------------------------------*/
static void handle_multiply(void)
{
    uint8_t flags;
    if (!receive_byte(&flags))
    {
        send_byte(PROTO_REPLY_TIMEOUT);
        return;
    }

    uint32_t m = a_rows;
    uint32_t k = a_cols;
    uint32_t n = b_cols;

    /* The loaded blocks must fit together: (m x k) * (k x n) -> (m x n) */
    if (m == 0 || n == 0 || k == 0 || b_rows != k || c_rows != m || c_cols != n)
    {
        send_error(PROTO_ERR_SHAPE_MISMATCH);
        return;
    }

    /* CPU-only pass: the CPU does the multiply and the accelerator is not used.
     * Reply has the same 8 words; the accelerator fields are zero. */
    if (flags & PROTO_MULTIPLY_CPU_ONLY)
    {
        uint32_t start = hw_read_cycles();
        cpu_multiply_into_product(m, n, k);
        uint32_t cpu_cycles = hw_read_cycles() - start;

        for (uint32_t index = 0; index < m * n; ++index)
            block_c[index] = (int32_t)((uint32_t)block_c[index] + (uint32_t)block_product[index]);

        send_byte(PROTO_REPLY_OK);
        for (int field = 0; field < PROTO_RESULT_CPU_CYCLES; ++field)
            send_u32(0);
        send_u32(cpu_cycles);
        send_u32(0);
        return;
    }

    /* 1. The accelerator (it times itself with its own cycle counters) */
    accel_stats stats;
    uint32_t error_detail = 0;
    int accel_result = hw_accel_multiply(block_a, block_b, block_product,
                                         m, n, k, &stats, &error_detail);
    if (accel_result != 0)
    {
        send_error((uint8_t)accel_result);
        send_u32(error_detail);
        return;
    }

    /* 2. The CPU on the same blocks, timed with the CPU's cycle counter */
    uint32_t cpu_cycles = 0;
    uint32_t mismatches = 0;
    if (flags & PROTO_MULTIPLY_CPU_CHECK)
    {
        uint32_t start = hw_read_cycles();
        mismatches = cpu_multiply_and_compare(m, n, k);
        cpu_cycles = hw_read_cycles() - start;
    }

    /* 3. Add this K slice into the C block (not timed) */
    for (uint32_t index = 0; index < m * n; ++index)
        block_c[index] = (int32_t)((uint32_t)block_c[index] + (uint32_t)block_product[index]);

    /* 4. Report, in the order listed in matmul_protocol.h */
    send_byte(PROTO_REPLY_OK);
    send_u32(stats.total_cycles);
    send_u32(stats.load_cycles);
    send_u32(stats.mac_cycles);
    send_u32(stats.store_cycles);
    send_u32(stats.read_words);
    send_u32(stats.write_words);
    send_u32(cpu_cycles);
    send_u32(mismatches);
}

/*-----------------------------------------------------------------
 * 'C': send the C block back, chunk by chunk, each acknowledged by the PC
 *-----------------------------------------------------------------*/
static void handle_read_c(void)
{
    if (c_rows == 0 || c_cols == 0)
    {
        send_error(PROTO_ERR_SHAPE_MISMATCH);
        return;
    }
    send_byte(PROTO_REPLY_OK);

    const uint8_t *c_bytes = (const uint8_t *)block_c;
    uint32_t total_bytes = c_rows * c_cols * 4u;
    uint32_t bytes_done = 0;
    uint32_t failed_attempts = 0;

    while (bytes_done < total_bytes)
    {
        uint32_t chunk_bytes = total_bytes - bytes_done;
        if (chunk_bytes > PROTO_CHUNK_BYTES)
            chunk_bytes = PROTO_CHUNK_BYTES;

        proto_checksum checksum;
        proto_checksum_reset(&checksum);
        for (uint32_t index = 0; index < chunk_bytes; ++index)
        {
            uint8_t byte = c_bytes[bytes_done + index];
            proto_checksum_add(&checksum, byte);
            send_byte(byte);
        }
        send_u32(proto_checksum_value(&checksum));

        /* Wait for the PC: 'K' = next chunk, anything else = send it again */
        uint8_t answer;
        if (!hw_uart_read_byte(&answer, ACK_TIMEOUT_CYCLES))
            return;                       /* PC has gone away; give up */

        if (answer == PROTO_REPLY_OK)
        {
            bytes_done += chunk_bytes;
            failed_attempts = 0;
        }
        else if (++failed_attempts >= PROTO_MAX_CHUNK_ATTEMPTS)
            return;
    }
}

/*-----------------------------------------------------------------
 * 'I': tell the PC who we are and what the accelerator looks like
 *-----------------------------------------------------------------*/
static void handle_info(void)
{
    uint32_t dim, max_k;
    hw_accel_config(&dim, &max_k);

    send_byte(PROTO_REPLY_OK);
    send_u32(PROTO_INFO_MAGIC);
    send_u32(dim);
    send_u32(max_k);
    send_u32(PROTO_MAX_BLOCK_DIM);
}

/*-----------------------------------------------------------------
 * Main loop: wait for a command byte, handle it, repeat.
 * Unknown bytes (e.g. leftovers after a reset) are ignored.
 *-----------------------------------------------------------------*/
void matmul_server_run(void)
{
    const char *banner = "matmul_server ready\r\n";
    while (*banner)
        send_byte((uint8_t)*banner++);

    for (;;)
    {
        uint8_t command;
        if (!hw_uart_read_byte(&command, BOARD_CLOCK_HZ))
            continue;                     /* nothing yet, keep waiting */

        switch (command)
        {
        case PROTO_CMD_INFO:     handle_info();                                  break;
        case PROTO_CMD_LOAD_A:   handle_load_block(block_a, &a_rows, &a_cols);   break;
        case PROTO_CMD_LOAD_B:   handle_load_block(block_b, &b_rows, &b_cols);   break;
        case PROTO_CMD_ZERO_C:   handle_zero_c();                                break;
        case PROTO_CMD_MULTIPLY: handle_multiply();                              break;
        case PROTO_CMD_READ_C:   handle_read_c();                                break;
        default:                 /* not a command: ignore it */                  break;
        }
    }
}
