/*
 * host_fake_board.c - a pretend Boolean board, for testing on the PC only.
 *
 * It runs the REAL board protocol code (sw/fpga/matmul_server.c) on the PC,
 * but with fake hardware underneath (the functions from server_hw.h):
 *   - UART        -> a virtual serial port (pseudo-terminal)
 *   - accelerator -> a plain software multiply, with made-up cycle counts
 *   - cycle count -> the PC clock, scaled to 25 MHz
 *
 * This checks the whole conversation (blocking, chunks, checksums, resends,
 * results) end to end without a board. Its cycle counts and speed-up are NOT
 * real measurements.
 *
 *   ./build_host/host_fake_board          # prints e.g. "fake board on /dev/pts/5"
 *   ./build_host/host_matmul_256 /dev/pts/5   (in another terminal)
 */
#define _XOPEN_SOURCE 600      /* for posix_openpt / grantpt / unlockpt / ptsname */
#define _DEFAULT_SOURCE        /* for cfmakeraw and usleep */
#include <errno.h>
#include <fcntl.h>
#include <poll.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <time.h>
#include <unistd.h>

#include "matmul_protocol.h"
#include "server_hw.h"

static int pty_fd = -1;

uint32_t hw_read_cycles(void)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    uint64_t nanoseconds = (uint64_t)ts.tv_sec * 1000000000ull + (uint64_t)ts.tv_nsec;
    return (uint32_t)(nanoseconds / 40);    /* 40 ns per tick = 25 MHz */
}

int hw_uart_read_byte(uint8_t *byte, uint32_t timeout_cycles)
{
    int timeout_ms = (int)(timeout_cycles / (BOARD_CLOCK_HZ / 1000u));
    if (timeout_ms < 1)
        timeout_ms = 1;

    for (;;)
    {
        struct pollfd waiting = { .fd = pty_fd, .events = POLLIN };
        int ready = poll(&waiting, 1, timeout_ms);
        if (ready < 0 && errno == EINTR)
            continue;
        if (ready <= 0)
            return 0;
        if (waiting.revents & POLLHUP)
        {
            usleep(1000);                 /* no program connected yet */
            return 0;
        }
        ssize_t got = read(pty_fd, byte, 1);
        if (got == 1)
            return 1;
        if (got < 0 && (errno == EINTR || errno == EAGAIN))
            continue;
        return 0;
    }
}

void hw_uart_write_byte(uint8_t byte)
{
    while (write(pty_fd, &byte, 1) != 1)
        if (errno != EINTR && errno != EAGAIN)
            return;
}

void hw_accel_config(uint32_t *dim, uint32_t *max_k)
{
    *dim = 5;        /* same settings as the board build */
    *max_k = 64;
}

int hw_accel_multiply(const int32_t *a, const int32_t *b, int32_t *product,
                      uint32_t m, uint32_t n, uint32_t k,
                      accel_stats *stats, uint32_t *error_detail)
{
    (void)error_detail;
    for (uint32_t row = 0; row < m; ++row)
        for (uint32_t col = 0; col < n; ++col)
        {
            uint32_t sum = 0;
            for (uint32_t index = 0; index < k; ++index)
                sum += (uint32_t)(int16_t)a[row * k + index] * (uint32_t)(int16_t)b[index * n + col];
            product[row * n + col] = (int32_t)sum;
        }

    /* Made-up numbers so the report has something to show */
    stats->mac_cycles   = m * n * k / 25u;
    stats->load_cycles  = 3u * stats->mac_cycles;
    stats->store_cycles = m * n;
    stats->total_cycles = stats->mac_cycles + stats->load_cycles + stats->store_cycles;
    stats->read_words   = m * k + k * n;
    stats->write_words  = m * n;
    return 0;
}

int main(void)
{
    pty_fd = posix_openpt(O_RDWR | O_NOCTTY);
    if (pty_fd < 0 || grantpt(pty_fd) != 0 || unlockpt(pty_fd) != 0)
    {
        perror("posix_openpt");
        return 1;
    }

    /* Raw bytes on both ends of the virtual serial port */
    struct termios settings;
    tcgetattr(pty_fd, &settings);
    cfmakeraw(&settings);
    tcsetattr(pty_fd, TCSANOW, &settings);

    printf("fake board on %s  (Ctrl-C to stop)\n", ptsname(pty_fd));
    fflush(stdout);

    matmul_server_run();
    return 0;
}
