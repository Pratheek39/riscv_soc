/*
 * matmul_protocol.h - the "language" the PC and the board speak over the UART
 * for the big-matrix tests (256x256, 512x512, 1024x1024).
 *
 * Used by BOTH sides, so they can never disagree:
 *   - PC side:    sw/host_matmul_common.c   (+ host_matmul_256/512/1024.c)
 *   - Board side: sw/fpga/matmul_server.c
 *
 * Why a protocol at all?
 *   The board's UART receiver (soc/uart_lite.v) holds only ONE byte. If the
 *   CPU is busy when the next byte arrives, the old byte is overwritten and
 *   lost. So the PC must only send data while the board is sitting in its
 *   receive loop. Rule: after every command or chunk, the PC waits for the
 *   board's reply before sending anything else.
 *
 * Every multi-byte number is sent little-endian (lowest byte first).
 *
 * Commands (PC -> board) and replies (board -> PC):
 *
 *   'I'  INFO / sync
 *        reply: 'K' magic(u32) accel_dim(u32) accel_max_k(u32) max_block_dim(u32)
 *
 *   'A'  LOAD block A        'B'  LOAD block B
 *        then: rows(u16) cols(u16) element_bytes(u8, 1 = int8, 4 = int32)
 *        reply: 'K', or 'E' error_code(u8)
 *        then the data, in chunks of up to PROTO_CHUNK_BYTES:
 *            PC sends:  chunk bytes, checksum(u32)
 *            board:     'K' (good, next chunk) / 'E' (bad checksum) /
 *                       'T' (bytes went missing) -> PC resends the same chunk
 *                       'X' (too many failures, board gave up the block)
 *
 *   'Z'  ZERO the C block    then: rows(u16) cols(u16)
 *        reply: 'K', or 'E' error_code(u8)
 *
 *   'M'  MULTIPLY: product = A x B on the accelerator, then C += product
 *        then: flags(u8)  (PROTO_MULTIPLY_CPU_CHECK = also run the CPU)
 *        reply: 'K' followed by PROTO_RESULT_WORDS u32 values (see below),
 *               or 'E' error_code(u8) detail(u32)
 *
 *   'C'  READ the C block (int32 values)
 *        reply: 'K', then for each chunk:
 *            board sends: chunk bytes, checksum(u32)
 *            PC replies:  'K' (good, next chunk) / 'E' (bad, send it again)
 */
#ifndef MATMUL_PROTOCOL_H
#define MATMUL_PROTOCOL_H

#include <stdint.h>

/* Commands */
#define PROTO_CMD_INFO       'I'
#define PROTO_CMD_LOAD_A     'A'
#define PROTO_CMD_LOAD_B     'B'
#define PROTO_CMD_ZERO_C     'Z'
#define PROTO_CMD_MULTIPLY   'M'
#define PROTO_CMD_READ_C     'C'

/* Replies */
#define PROTO_REPLY_OK       'K'
#define PROTO_REPLY_ERROR    'E'
#define PROTO_REPLY_TIMEOUT  'T'
#define PROTO_REPLY_GAVE_UP  'X'

/* "MMS1" - lets the PC recognise the right firmware during sync */
#define PROTO_INFO_MAGIC     0x31534d4du

/* Largest block the board can hold (rows and columns). The board keeps four
 * blocks of 64 x 64 int32 = 16 KB each, i.e. 64 KB of its 128 KB RAM. */
#define PROTO_MAX_BLOCK_DIM  64u

/* Data is moved in chunks of this many bytes, each confirmed by the other side */
#define PROTO_CHUNK_BYTES    1024u

/* MULTIPLY flags */
#define PROTO_MULTIPLY_CPU_CHECK  0x01u

/* MULTIPLY result: PROTO_RESULT_WORDS u32 values, in this order */
#define PROTO_RESULT_ACCEL_CYCLES   0   /* accelerator CYC: START to DONE      */
#define PROTO_RESULT_LOAD_CYCLES    1   /* accelerator LOAD_CYC                */
#define PROTO_RESULT_MAC_CYCLES     2   /* accelerator MAC_CYC                 */
#define PROTO_RESULT_STORE_CYCLES   3   /* accelerator STORE_CYC               */
#define PROTO_RESULT_READ_WORDS     4   /* accelerator RD_WORDS                */
#define PROTO_RESULT_WRITE_WORDS    5   /* accelerator WR_WORDS                */
#define PROTO_RESULT_CPU_CYCLES     6   /* CPU cycles for the same product (0 if not run) */
#define PROTO_RESULT_MISMATCHES     7   /* CPU result != accelerator result count */
#define PROTO_RESULT_WORDS          8

/* Error codes (sent after 'E') */
#define PROTO_ERR_BAD_SIZE        1   /* rows/cols are 0 or above PROTO_MAX_BLOCK_DIM */
#define PROTO_ERR_BAD_ELEMENT     2   /* element_bytes is not 1 or 4                  */
#define PROTO_ERR_SHAPE_MISMATCH  3   /* A cols != B rows, or C block has wrong size  */
#define PROTO_ERR_ACCEL_ERROR     4   /* accelerator raised ERROR; detail = ERR reg   */
#define PROTO_ERR_ACCEL_TIMEOUT   5   /* accelerator never finished                   */

/* A chunk is given up after this many failed attempts in a row */
#define PROTO_MAX_CHUNK_ATTEMPTS  5

/*
 * Chunk checksum: two running sums (Fletcher-style, without the modulo).
 *   sum1 = total of all bytes
 *   sum2 = total of all the running sum1 values
 * sum2 changes if two bytes are swapped, so it catches more mistakes than a
 * plain total, and it costs the board's CPU only two additions per byte.
 */
typedef struct
{
    uint32_t sum1;
    uint32_t sum2;
} proto_checksum;

static inline void proto_checksum_reset(proto_checksum *checksum)
{
    checksum->sum1 = 0;
    checksum->sum2 = 0;
}

static inline void proto_checksum_add(proto_checksum *checksum, uint8_t byte)
{
    checksum->sum1 += byte;
    checksum->sum2 += checksum->sum1;
}

static inline uint32_t proto_checksum_value(const proto_checksum *checksum)
{
    return (checksum->sum2 << 16) ^ checksum->sum1;
}

#endif
