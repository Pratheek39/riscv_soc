/*
 * host_matmul_common.h - shared code for the three PC test programs
 * (host_matmul_256.c, host_matmul_512.c, host_matmul_1024.c).
 *
 * These programs run on the PC (not on the board). Each one:
 *   1. reads A and B (N x N integers) from .txt files,
 *   2. sends them to the board in 64x64 blocks over the UART,
 *   3. has the board multiply every block on the accelerator AND on its CPU,
 *   4. shows live progress, then a report: cycles, time, speed-up,
 *   5. checks the full result C against a multiply done on the PC.
 */
#ifndef HOST_MATMUL_COMMON_H
#define HOST_MATMUL_COMMON_H

typedef struct
{
    const char *test_name;   /* e.g. "256 x 256"                          */
    int         size;        /* N: A, B and C are N x N                   */
    const char *a_file;      /* default .txt file names (can be overridden) */
    const char *b_file;
} matmul_test;

/* Runs the whole test. Returns 0 if every check passed, 1 otherwise. */
int run_matmul_test(const matmul_test *test, int argc, char **argv);

#endif
