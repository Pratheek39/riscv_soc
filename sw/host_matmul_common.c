/*
 * host_matmul_common.c - PC side of the big-matrix tests.
 * See host_matmul_common.h for the overview and matmul_protocol.h for the
 * byte-level protocol spoken with the board (sw/fpga/matmul_server.c).
 *
 * The PC does the "blocking": it cuts the N x N matrices into 64 x 64 blocks,
 * because the board's 128 KB of RAM can only hold a few blocks at a time.
 *
 *     for each 64x64 block of C          (block_row, block_col)
 *         ZERO the board's C block
 *         for each 64-wide slice of K    (block_k)
 *             send A[block_row, block_k]
 *             send B[block_k, block_col]
 *             MULTIPLY  (board: accelerator, then CPU; both timed)
 *         READ the finished C block back
 */
#include <errno.h>
#include <fcntl.h>
#include <linux/serial.h>
#include <poll.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <time.h>
#include <unistd.h>

#include "host_matmul_common.h"
#include "matmul_protocol.h"

#define DEFAULT_PORT       "/dev/ttyUSB1"
#define BOARD_CLOCK_HZ     25000000.0     /* the board's system clock          */

#define REPLY_TIMEOUT_MS   3000           /* normal replies                    */
#define MULTIPLY_TIMEOUT_MS 30000         /* MULTIPLY includes the slow CPU run */
#define CHUNK_TIMEOUT_MS   1000           /* one chunk of C from the board     */

/*-----------------------------------------------------------------
 * Options and running totals
 *-----------------------------------------------------------------*/
typedef struct
{
    const char *port;
    const char *a_file;
    const char *b_file;
    int         cpu_every;       /* run the CPU on every Nth job (0 = never) */
    int         corrupt_once;    /* damage one checksum on purpose (test)    */
} options;

typedef struct
{
    /* accelerator, all jobs */
    uint64_t accel_cycles;
    uint64_t load_cycles;
    uint64_t mac_cycles;
    uint64_t store_cycles;
    uint64_t read_words;
    uint64_t write_words;
    /* CPU, only the jobs where it ran */
    uint64_t cpu_cycles;
    uint64_t accel_cycles_on_cpu_jobs;   /* accelerator cycles on those same jobs */
    int      cpu_jobs;
    uint64_t cpu_accel_mismatches;
    /* the cable */
    double   transfer_seconds;
    double   multiply_seconds;
    int      resent_chunks;
} totals;

static int corrupt_pending = 0;    /* set by --corrupt-once, cleared after use */

/*-----------------------------------------------------------------
 * Time helpers
 *-----------------------------------------------------------------*/
static double now_seconds(void)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return ts.tv_sec + ts.tv_nsec / 1e9;
}

/* "1:23" or "1:02:03" */
static void format_duration(double seconds, char *text, size_t size)
{
    long total = (long)(seconds + 0.5);
    if (total >= 3600)
        snprintf(text, size, "%ld:%02ld:%02ld", total / 3600, (total / 60) % 60, total % 60);
    else
        snprintf(text, size, "%ld:%02ld", total / 60, total % 60);
}

/*-----------------------------------------------------------------
 * Reading the .txt matrix files: N x N whitespace-separated integers
 *-----------------------------------------------------------------*/
static int read_matrix_file(const char *path, int size, int32_t *matrix)
{
    FILE *file = fopen(path, "r");
    if (!file)
    {
        fprintf(stderr, "ERROR: cannot open %s: %s\n", path, strerror(errno));
        fprintf(stderr, "       (make the files with: python3 gen_matrices.py %d)\n", size);
        return 0;
    }

    long count = (long)size * size;
    for (long index = 0; index < count; ++index)
    {
        long long value;
        if (fscanf(file, "%lld", &value) != 1)
        {
            fprintf(stderr, "ERROR: %s has only %ld numbers, expected %ld (%d x %d)\n",
                    path, index, count, size, size);
            fclose(file);
            return 0;
        }
        if (value < INT32_MIN || value > INT32_MAX)
        {
            fprintf(stderr, "ERROR: %s: value %lld does not fit in 32 bits\n", path, value);
            fclose(file);
            return 0;
        }
        matrix[index] = (int32_t)value;
    }

    long long extra;
    if (fscanf(file, "%lld", &extra) == 1)
        fprintf(stderr, "WARNING: %s has more than %ld numbers; the rest are ignored\n", path, count);

    fclose(file);
    return 1;
}

/* 1 byte per value if every value fits in int8 (-128..127), otherwise 4 */
static int choose_element_bytes(const int32_t *a, const int32_t *b, long count)
{
    for (long index = 0; index < count; ++index)
        if (a[index] < -128 || a[index] > 127 || b[index] < -128 || b[index] > 127)
            return 4;
    return 1;
}

/*-----------------------------------------------------------------
 * The serial port
 *-----------------------------------------------------------------*/
static int open_serial_port(const char *path)
{
    int fd = open(path, O_RDWR | O_NOCTTY);
    if (fd < 0)
    {
        fprintf(stderr, "ERROR: cannot open %s: %s\n", path, strerror(errno));
        return -1;
    }

    /* Raw bytes, 1,000,000 baud, 8 data bits, no parity, 1 stop bit, no flow control */
    struct termios settings;
    if (tcgetattr(fd, &settings) != 0)
    {
        fprintf(stderr, "ERROR: %s is not a serial port\n", path);
        close(fd);
        return -1;
    }
    cfmakeraw(&settings);
    cfsetispeed(&settings, B1000000);
    cfsetospeed(&settings, B1000000);
    settings.c_cflag |= CLOCAL | CREAD;
    settings.c_cflag &= ~(CSTOPB | PARENB | CRTSCTS);
    settings.c_cc[VMIN]  = 0;
    settings.c_cc[VTIME] = 0;
    tcsetattr(fd, TCSANOW, &settings);

    /* The FTDI USB chip normally holds received bytes for up to 16 ms before
     * passing them on. We wait for a reply after every chunk, so that delay
     * would slow everything down a lot. Ask for "low latency" (1 ms). */
    struct serial_struct serial;
    if (ioctl(fd, TIOCGSERIAL, &serial) == 0)
    {
        serial.flags |= ASYNC_LOW_LATENCY;
        if (ioctl(fd, TIOCSSERIAL, &serial) != 0)
            fprintf(stderr, "NOTE: could not set low latency; if transfers are slow run:\n"
                            "      echo 1 | sudo tee /sys/bus/usb-serial/devices/%s/latency_timer\n",
                    strrchr(path, '/') ? strrchr(path, '/') + 1 : path);
    }
    return fd;
}

static int write_all(int fd, const uint8_t *data, size_t length)
{
    while (length > 0)
    {
        ssize_t written = write(fd, data, length);
        if (written < 0)
        {
            if (errno == EINTR)
                continue;
            fprintf(stderr, "\nERROR: serial write failed: %s\n", strerror(errno));
            return 0;
        }
        data += written;
        length -= (size_t)written;
    }
    return 1;
}

/* Read exactly 'length' bytes, or give up after timeout_ms. Returns 1 on success. */
static int read_exact(int fd, uint8_t *data, size_t length, int timeout_ms)
{
    double deadline = now_seconds() + timeout_ms / 1000.0;

    while (length > 0)
    {
        int remaining_ms = (int)((deadline - now_seconds()) * 1000.0);
        if (remaining_ms <= 0)
            return 0;

        struct pollfd waiting = { .fd = fd, .events = POLLIN };
        int ready = poll(&waiting, 1, remaining_ms);
        if (ready < 0 && errno == EINTR)
            continue;
        if (ready <= 0)
            return 0;

        ssize_t got = read(fd, data, length);
        if (got < 0)
        {
            if (errno == EINTR || errno == EAGAIN)
                continue;
            return 0;
        }
        data += got;
        length -= (size_t)got;
    }
    return 1;
}

static int read_byte(int fd, uint8_t *value, int timeout_ms)
{
    return read_exact(fd, value, 1, timeout_ms);
}

static uint32_t get_u32(const uint8_t *bytes)
{
    return (uint32_t)bytes[0] | ((uint32_t)bytes[1] << 8) |
           ((uint32_t)bytes[2] << 16) | ((uint32_t)bytes[3] << 24);
}

static void put_u32(uint8_t *bytes, uint32_t value)
{
    bytes[0] = (uint8_t)value;
    bytes[1] = (uint8_t)(value >> 8);
    bytes[2] = (uint8_t)(value >> 16);
    bytes[3] = (uint8_t)(value >> 24);
}

static void put_u16(uint8_t *bytes, uint16_t value)
{
    bytes[0] = (uint8_t)value;
    bytes[1] = (uint8_t)(value >> 8);
}

static const char *error_name(uint8_t code)
{
    switch (code)
    {
    case PROTO_ERR_BAD_SIZE:       return "bad block size";
    case PROTO_ERR_BAD_ELEMENT:    return "bad element size";
    case PROTO_ERR_SHAPE_MISMATCH: return "blocks don't fit together";
    case PROTO_ERR_ACCEL_ERROR:    return "accelerator reported an error";
    case PROTO_ERR_ACCEL_TIMEOUT:  return "accelerator never finished";
    default:                       return "unknown error";
    }
}

/* After a command header, the board answers 'K' or 'E' + code */
static int expect_ok(int fd, const char *what)
{
    uint8_t reply;
    if (!read_byte(fd, &reply, REPLY_TIMEOUT_MS))
    {
        fprintf(stderr, "\nERROR: no reply from the board to %s\n", what);
        return 0;
    }
    if (reply == PROTO_REPLY_OK)
        return 1;
    if (reply == PROTO_REPLY_ERROR)
    {
        uint8_t code = 0;
        read_byte(fd, &code, REPLY_TIMEOUT_MS);
        fprintf(stderr, "\nERROR: board refused %s: %s (code %u)\n", what, error_name(code), code);
        return 0;
    }
    fprintf(stderr, "\nERROR: unexpected reply 0x%02x to %s\n", reply, what);
    return 0;
}

/*-----------------------------------------------------------------
 * 'I': find the board and check it runs matmul_server
 *-----------------------------------------------------------------*/
static int sync_with_board(int fd, uint32_t *accel_dim, uint32_t *accel_max_k)
{
    for (int attempt = 1; attempt <= 12; ++attempt)
    {
        tcflush(fd, TCIOFLUSH);                 /* drop boot text and leftovers */
        uint8_t command = PROTO_CMD_INFO;
        if (!write_all(fd, &command, 1))
            return 0;

        /* Look for 'K' followed by the magic number */
        double deadline = now_seconds() + 0.7;
        uint8_t byte;
        while (now_seconds() < deadline && read_byte(fd, &byte, 100))
        {
            if (byte != PROTO_REPLY_OK)
                continue;
            uint8_t info[16];
            if (read_exact(fd, info, sizeof(info), 300) && get_u32(info) == PROTO_INFO_MAGIC)
            {
                *accel_dim   = get_u32(info + 4);
                *accel_max_k = get_u32(info + 8);
                if (get_u32(info + 12) < PROTO_MAX_BLOCK_DIM)
                {
                    fprintf(stderr, "ERROR: board holds blocks of only %u, need %u\n",
                            get_u32(info + 12), PROTO_MAX_BLOCK_DIM);
                    return 0;
                }
                return 1;
            }
        }
        fprintf(stderr, "  waiting for the board (attempt %d)...\n", attempt);
    }
    fprintf(stderr, "ERROR: the board did not answer. Is it programmed with matmul_server\n"
                    "       (make -C sw/fpga APP=matmul_server, rebuild bitstream, program)?\n"
                    "       Try pressing btn[0] to reset it.\n");
    return 0;
}

/*-----------------------------------------------------------------
 * 'A' / 'B': send one block (rows x cols, starting at row0, col0 of an
 * N x N matrix) in chunks, each confirmed by the board.
 *-----------------------------------------------------------------*/
static int send_block(int fd, uint8_t command, const int32_t *matrix, int size,
                      int row0, int col0, int rows, int cols,
                      int element_bytes, totals *sum)
{
    double start = now_seconds();

    /* 1. Header: command, rows, cols, element size */
    uint8_t header[6];
    header[0] = command;
    put_u16(header + 1, (uint16_t)rows);
    put_u16(header + 3, (uint16_t)cols);
    header[5] = (uint8_t)element_bytes;
    if (!write_all(fd, header, sizeof(header)) || !expect_ok(fd, command == 'A' ? "LOAD A" : "LOAD B"))
        return 0;

    /* 2. Pack the block row by row: int8 = 1 byte, int32 = 4 bytes little-endian */
    static uint8_t payload[PROTO_MAX_BLOCK_DIM * PROTO_MAX_BLOCK_DIM * 4];
    size_t total_bytes = 0;
    for (int row = 0; row < rows; ++row)
        for (int col = 0; col < cols; ++col)
        {
            int32_t value = matrix[(long)(row0 + row) * size + (col0 + col)];
            if (element_bytes == 1)
                payload[total_bytes++] = (uint8_t)(int8_t)value;
            else
            {
                put_u32(payload + total_bytes, (uint32_t)value);
                total_bytes += 4;
            }
        }

    /* 3. Send it chunk by chunk; resend a chunk until the board says 'K' */
    size_t bytes_done = 0;
    while (bytes_done < total_bytes)
    {
        size_t chunk_bytes = total_bytes - bytes_done;
        if (chunk_bytes > PROTO_CHUNK_BYTES)
            chunk_bytes = PROTO_CHUNK_BYTES;

        proto_checksum checksum;
        proto_checksum_reset(&checksum);
        for (size_t index = 0; index < chunk_bytes; ++index)
            proto_checksum_add(&checksum, payload[bytes_done + index]);

        uint8_t trailer[4];
        uint32_t checksum_value = proto_checksum_value(&checksum);
        if (corrupt_pending)
        {
            checksum_value ^= 1u;          /* --corrupt-once: test the resend path */
            corrupt_pending = 0;
            fprintf(stderr, "\n  (test) damaged one chunk's checksum on purpose\n");
        }
        put_u32(trailer, checksum_value);

        if (!write_all(fd, payload + bytes_done, chunk_bytes) || !write_all(fd, trailer, 4))
            return 0;

        uint8_t reply;
        if (!read_byte(fd, &reply, REPLY_TIMEOUT_MS))
        {
            fprintf(stderr, "\nERROR: no reply from the board after a chunk\n");
            return 0;
        }
        if (reply == PROTO_REPLY_OK)
            bytes_done += chunk_bytes;
        else if (reply == PROTO_REPLY_ERROR || reply == PROTO_REPLY_TIMEOUT)
            sum->resent_chunks++;          /* same chunk goes again */
        else if (reply == PROTO_REPLY_GAVE_UP)
        {
            fprintf(stderr, "\nERROR: the board gave up after %d bad chunks in a row\n",
                    PROTO_MAX_CHUNK_ATTEMPTS);
            return 0;
        }
        else
        {
            fprintf(stderr, "\nERROR: unexpected reply 0x%02x after a chunk\n", reply);
            return 0;
        }
    }

    sum->transfer_seconds += now_seconds() - start;
    return 1;
}

/*-----------------------------------------------------------------
 * 'Z': start a fresh C block on the board
 *-----------------------------------------------------------------*/
static int zero_c_block(int fd, int rows, int cols)
{
    uint8_t message[5];
    message[0] = PROTO_CMD_ZERO_C;
    put_u16(message + 1, (uint16_t)rows);
    put_u16(message + 3, (uint16_t)cols);
    return write_all(fd, message, sizeof(message)) && expect_ok(fd, "ZERO C");
}

/*-----------------------------------------------------------------
 * 'M': multiply the loaded blocks; collect the board's measurements
 *-----------------------------------------------------------------*/
static int multiply_block(int fd, int run_cpu, uint32_t result[PROTO_RESULT_WORDS], totals *sum)
{
    double start = now_seconds();

    uint8_t message[2] = { PROTO_CMD_MULTIPLY, (uint8_t)(run_cpu ? PROTO_MULTIPLY_CPU_CHECK : 0) };
    if (!write_all(fd, message, sizeof(message)))
        return 0;

    uint8_t reply;
    if (!read_byte(fd, &reply, MULTIPLY_TIMEOUT_MS))
    {
        fprintf(stderr, "\nERROR: no reply from the board to MULTIPLY\n");
        return 0;
    }
    if (reply == PROTO_REPLY_ERROR)
    {
        uint8_t code = 0;
        uint8_t detail[4] = { 0 };
        read_byte(fd, &code, REPLY_TIMEOUT_MS);
        if (code == PROTO_ERR_ACCEL_ERROR || code == PROTO_ERR_ACCEL_TIMEOUT)
            read_exact(fd, detail, 4, REPLY_TIMEOUT_MS);
        fprintf(stderr, "\nERROR: MULTIPLY failed: %s (code %u, detail 0x%08x)\n",
                error_name(code), code, get_u32(detail));
        return 0;
    }
    if (reply != PROTO_REPLY_OK)
    {
        fprintf(stderr, "\nERROR: unexpected reply 0x%02x to MULTIPLY\n", reply);
        return 0;
    }

    uint8_t bytes[PROTO_RESULT_WORDS * 4];
    if (!read_exact(fd, bytes, sizeof(bytes), REPLY_TIMEOUT_MS))
    {
        fprintf(stderr, "\nERROR: MULTIPLY results were cut short\n");
        return 0;
    }
    for (int index = 0; index < PROTO_RESULT_WORDS; ++index)
        result[index] = get_u32(bytes + 4 * index);

    sum->multiply_seconds += now_seconds() - start;
    return 1;
}

/*-----------------------------------------------------------------
 * 'C': fetch the finished C block (rows x cols int32) into C at row0, col0
 *-----------------------------------------------------------------*/
static int read_c_block(int fd, int32_t *c_matrix, int size,
                        int row0, int col0, int rows, int cols, totals *sum)
{
    double start = now_seconds();

    uint8_t command = PROTO_CMD_READ_C;
    if (!write_all(fd, &command, 1) || !expect_ok(fd, "READ C"))
        return 0;

    static uint8_t received[PROTO_MAX_BLOCK_DIM * PROTO_MAX_BLOCK_DIM * 4];
    size_t total_bytes = (size_t)rows * cols * 4;
    size_t bytes_done = 0;
    int failed_attempts = 0;

    while (bytes_done < total_bytes)
    {
        size_t chunk_bytes = total_bytes - bytes_done;
        if (chunk_bytes > PROTO_CHUNK_BYTES)
            chunk_bytes = PROTO_CHUNK_BYTES;

        uint8_t trailer[4];
        int good = read_exact(fd, received + bytes_done, chunk_bytes, CHUNK_TIMEOUT_MS) &&
                   read_exact(fd, trailer, 4, CHUNK_TIMEOUT_MS);
        if (good)
        {
            proto_checksum checksum;
            proto_checksum_reset(&checksum);
            for (size_t index = 0; index < chunk_bytes; ++index)
                proto_checksum_add(&checksum, received[bytes_done + index]);
            good = (proto_checksum_value(&checksum) == get_u32(trailer));
        }

        uint8_t answer;
        if (good)
        {
            answer = PROTO_REPLY_OK;
            bytes_done += chunk_bytes;
            failed_attempts = 0;
        }
        else
        {
            if (++failed_attempts >= PROTO_MAX_CHUNK_ATTEMPTS)
            {
                fprintf(stderr, "\nERROR: C chunk failed %d times in a row\n", failed_attempts);
                return 0;
            }
            usleep(50000);                 /* let any stray bytes arrive...  */
            tcflush(fd, TCIFLUSH);         /* ...and throw them away         */
            answer = PROTO_REPLY_ERROR;    /* board sends the chunk again    */
            sum->resent_chunks++;
        }
        if (!write_all(fd, &answer, 1))
            return 0;
    }

    /* Unpack into the big C matrix */
    for (int row = 0; row < rows; ++row)
        for (int col = 0; col < cols; ++col)
            c_matrix[(long)(row0 + row) * size + (col0 + col)] =
                (int32_t)get_u32(received + 4 * ((size_t)row * cols + col));

    sum->transfer_seconds += now_seconds() - start;
    return 1;
}

/*-----------------------------------------------------------------
 * Reference multiply on the PC, to check every value of C.
 * Unsigned maths wraps around exactly like the board's 32-bit hardware.
 * Loop order row -> k -> col keeps memory access fast on the PC.
 *-----------------------------------------------------------------*/
static void reference_multiply(const int32_t *a, const int32_t *b, int32_t *c, int size)
{
    uint32_t *c_unsigned = (uint32_t *)c;
    memset(c, 0, sizeof(int32_t) * (size_t)size * size);

    for (int row = 0; row < size; ++row)
        for (int index = 0; index < size; ++index)
        {
            uint32_t a_value = (uint32_t)a[(long)row * size + index];
            const int32_t *b_row = b + (long)index * size;
            uint32_t *c_row = c_unsigned + (long)row * size;
            for (int col = 0; col < size; ++col)
                c_row[col] += a_value * (uint32_t)b_row[col];
        }
}

/*-----------------------------------------------------------------
 * Live progress line (rewritten in place with '\r')
 *-----------------------------------------------------------------*/
static void show_progress(int jobs_done, int total_jobs, double start_time, const totals *sum, int force)
{
    static double last_shown = 0;
    double now = now_seconds();
    if (!force && now - last_shown < 0.25)
        return;
    last_shown = now;

    double elapsed = now - start_time;
    double eta = jobs_done > 0 ? elapsed * (total_jobs - jobs_done) / jobs_done : 0;
    char elapsed_text[16], eta_text[16];
    format_duration(elapsed, elapsed_text, sizeof(elapsed_text));
    format_duration(eta, eta_text, sizeof(eta_text));

    const int bar_width = 24;
    int filled = (int)((double)jobs_done / total_jobs * bar_width);
    char bar[32];
    for (int index = 0; index < bar_width; ++index)
        bar[index] = index < filled ? '#' : '.';
    bar[bar_width] = '\0';

    printf("\r  [%s] %3d%%  block %d/%d  elapsed %s  ETA %s  accel %.1f M cyc  cpu %.1f M cyc ",
           bar, (int)(100.0 * jobs_done / total_jobs), jobs_done, total_jobs,
           elapsed_text, eta_text, sum->accel_cycles / 1e6, sum->cpu_cycles / 1e6);
    fflush(stdout);
}

/*-----------------------------------------------------------------
 * Command line
 *-----------------------------------------------------------------*/
static void print_usage(const char *program, const matmul_test *test)
{
    printf("Usage: %s [port] [options]\n"
           "  port              serial port of the board (default %s)\n"
           "  --a FILE          matrix A file (default %s)\n"
           "  --b FILE          matrix B file (default %s)\n"
           "  --cpu-every K     time the CPU on every K-th block only, project the rest\n"
           "                    (default 1 = every block; 0 = accelerator only)\n"
           "  --corrupt-once    damage one chunk on purpose to test the resend path\n",
           program, DEFAULT_PORT, test->a_file, test->b_file);
}

static int parse_options(const matmul_test *test, int argc, char **argv, options *opt)
{
    opt->port = DEFAULT_PORT;
    opt->a_file = test->a_file;
    opt->b_file = test->b_file;
    opt->cpu_every = 1;
    opt->corrupt_once = 0;

    for (int index = 1; index < argc; ++index)
    {
        const char *arg = argv[index];
        if (!strcmp(arg, "--a") && index + 1 < argc)
            opt->a_file = argv[++index];
        else if (!strcmp(arg, "--b") && index + 1 < argc)
            opt->b_file = argv[++index];
        else if (!strcmp(arg, "--cpu-every") && index + 1 < argc)
            opt->cpu_every = atoi(argv[++index]);
        else if (!strcmp(arg, "--corrupt-once"))
            opt->corrupt_once = 1;
        else if (!strcmp(arg, "-h") || !strcmp(arg, "--help"))
        {
            print_usage(argv[0], test);
            return 0;
        }
        else if (arg[0] != '-')
            opt->port = arg;
        else
        {
            fprintf(stderr, "Unknown option %s\n", arg);
            print_usage(argv[0], test);
            return 0;
        }
    }
    if (opt->cpu_every < 0)
        opt->cpu_every = 0;
    return 1;
}

/*-----------------------------------------------------------------
 * The test
 *-----------------------------------------------------------------*/
int run_matmul_test(const matmul_test *test, int argc, char **argv)
{
    options opt;
    if (!parse_options(test, argc, argv, &opt))
        return 1;

    const int size = test->size;
    const long count = (long)size * size;
    const int block = PROTO_MAX_BLOCK_DIM;
    const int blocks_per_side = (size + block - 1) / block;
    const int total_jobs = blocks_per_side * blocks_per_side * blocks_per_side;

    printf("=== Matrix multiply %s on the Boolean board ===\n", test->test_name);

    /* 1. Read A and B */
    int32_t *a = malloc(sizeof(int32_t) * count);
    int32_t *b = malloc(sizeof(int32_t) * count);
    int32_t *c_board = malloc(sizeof(int32_t) * count);
    int32_t *c_reference = malloc(sizeof(int32_t) * count);
    if (!a || !b || !c_board || !c_reference)
    {
        fprintf(stderr, "ERROR: out of memory\n");
        return 1;
    }
    if (!read_matrix_file(opt.a_file, size, a) || !read_matrix_file(opt.b_file, size, b))
        return 1;

    int element_bytes = choose_element_bytes(a, b, count);
    printf("Inputs      : %s, %s (%s values, sent as %d byte%s each)\n",
           opt.a_file, opt.b_file, element_bytes == 1 ? "int8" : "int32",
           element_bytes, element_bytes == 1 ? "" : "s");

    /* 2. Reference result on the PC */
    double reference_start = now_seconds();
    reference_multiply(a, b, c_reference, size);
    printf("PC reference: computed in %.2f s\n", now_seconds() - reference_start);

    /* 3. Connect to the board */
    int fd = open_serial_port(opt.port);
    if (fd < 0)
        return 1;
    uint32_t accel_dim = 0, accel_max_k = 0;
    if (!sync_with_board(fd, &accel_dim, &accel_max_k))
        return 1;
    printf("Board       : %s, matmul_server, accelerator %ux%u grid, MAX_K %u\n",
           opt.port, accel_dim, accel_dim, accel_max_k);
    printf("Plan        : %d blocks of %dx%dx%d (CPU timed on %s)\n\n",
           total_jobs, block, block, block,
           opt.cpu_every == 0 ? "no blocks" :
           opt.cpu_every == 1 ? "every block" : "a sample of blocks");

    corrupt_pending = opt.corrupt_once;

    /* 4. The blocked multiply */
    totals sum;
    memset(&sum, 0, sizeof(sum));
    double run_start = now_seconds();
    int jobs_done = 0;
    int ok = 1;

    for (int block_row = 0; ok && block_row < blocks_per_side; ++block_row)
        for (int block_col = 0; ok && block_col < blocks_per_side; ++block_col)
        {
            int row0 = block_row * block, col0 = block_col * block;
            int rows = size - row0 < block ? size - row0 : block;
            int cols = size - col0 < block ? size - col0 : block;

            ok = zero_c_block(fd, rows, cols);

            for (int block_k = 0; ok && block_k < blocks_per_side; ++block_k)
            {
                int k0 = block_k * block;
                int depth = size - k0 < block ? size - k0 : block;
                int run_cpu = opt.cpu_every > 0 && (jobs_done % opt.cpu_every) == 0;
                uint32_t result[PROTO_RESULT_WORDS];

                ok = send_block(fd, PROTO_CMD_LOAD_A, a, size, row0, k0, rows, depth, element_bytes, &sum) &&
                     send_block(fd, PROTO_CMD_LOAD_B, b, size, k0, col0, depth, cols, element_bytes, &sum) &&
                     multiply_block(fd, run_cpu, result, &sum);
                if (!ok)
                    break;

                sum.accel_cycles += result[PROTO_RESULT_ACCEL_CYCLES];
                sum.load_cycles  += result[PROTO_RESULT_LOAD_CYCLES];
                sum.mac_cycles   += result[PROTO_RESULT_MAC_CYCLES];
                sum.store_cycles += result[PROTO_RESULT_STORE_CYCLES];
                sum.read_words   += result[PROTO_RESULT_READ_WORDS];
                sum.write_words  += result[PROTO_RESULT_WRITE_WORDS];
                if (run_cpu)
                {
                    sum.cpu_cycles += result[PROTO_RESULT_CPU_CYCLES];
                    sum.accel_cycles_on_cpu_jobs += result[PROTO_RESULT_ACCEL_CYCLES];
                    sum.cpu_accel_mismatches += result[PROTO_RESULT_MISMATCHES];
                    sum.cpu_jobs++;
                }

                jobs_done++;
                show_progress(jobs_done, total_jobs, run_start, &sum, jobs_done == total_jobs);
            }

            if (ok)
                ok = read_c_block(fd, c_board, size, row0, col0, rows, cols, &sum);
        }

    double wall_seconds = now_seconds() - run_start;
    close(fd);
    printf("\n\n");

    if (!ok)
    {
        printf("RESULT: FAILED (communication stopped after %d of %d blocks)\n", jobs_done, total_jobs);
        return 1;
    }

    /* 5. Check every value of C against the PC */
    long wrong_values = 0;
    for (long index = 0; index < count; ++index)
        if (c_board[index] != c_reference[index])
        {
            if (wrong_values < 5)
                printf("  C[%ld][%ld]: board %d, PC %d\n",
                       index / size, index % size, c_board[index], c_reference[index]);
            wrong_values++;
        }

    /* 6. Report */
    char wall_text[16], transfer_text[16];
    format_duration(wall_seconds, wall_text, sizeof(wall_text));
    format_duration(sum.transfer_seconds, transfer_text, sizeof(transfer_text));
    double multiply_accumulates = (double)size * size * size;

    printf("Wall time        : %s total, of which %s moving data over the UART\n", wall_text, transfer_text);
    printf("Data resent      : %d chunk%s\n", sum.resent_chunks, sum.resent_chunks == 1 ? "" : "s");
    printf("\nAccelerator (all %d blocks)\n", total_jobs);
    printf("  cycles         : %llu  (%.3f s at 25 MHz)\n",
           (unsigned long long)sum.accel_cycles, sum.accel_cycles / BOARD_CLOCK_HZ);
    printf("  load/mac/store : %llu / %llu / %llu cycles\n",
           (unsigned long long)sum.load_cycles, (unsigned long long)sum.mac_cycles,
           (unsigned long long)sum.store_cycles);
    printf("  words moved    : %llu read, %llu written\n",
           (unsigned long long)sum.read_words, (unsigned long long)sum.write_words);
    printf("  multiply-adds  : %.0f  (%.2f per cycle)\n",
           multiply_accumulates, multiply_accumulates / (double)sum.accel_cycles);

    int all_passed = (wrong_values == 0);
    if (sum.cpu_jobs > 0)
    {
        int projected = sum.cpu_jobs < total_jobs;
        double cpu_total = (double)sum.cpu_cycles * total_jobs / sum.cpu_jobs;

        printf("\nCPU (%d of %d blocks)\n", sum.cpu_jobs, total_jobs);
        printf("  cycles         : %llu measured  (%.3f s at 25 MHz)\n",
               (unsigned long long)sum.cpu_cycles, sum.cpu_cycles / BOARD_CLOCK_HZ);
        if (projected)
            printf("  all blocks     : %.0f cycles PROJECTED  (%.1f s)\n", cpu_total, cpu_total / BOARD_CLOCK_HZ);
        printf("  CPU vs accel   : %llu values differ\n", (unsigned long long)sum.cpu_accel_mismatches);
        printf("\nSpeed-up (compute only, same blocks): %.1fx  (CPU cycles / accelerator cycles)\n",
               (double)sum.cpu_cycles / (double)sum.accel_cycles_on_cpu_jobs);
        if (sum.cpu_accel_mismatches != 0)
            all_passed = 0;
    }

    printf("\nResult check     : %ld of %ld values differ from the PC reference\n", wrong_values, count);
    printf("RESULT: %s\n", all_passed ? "PASS" : "FAIL");

    free(a);
    free(b);
    free(c_board);
    free(c_reference);
    return all_passed ? 0 : 1;
}
