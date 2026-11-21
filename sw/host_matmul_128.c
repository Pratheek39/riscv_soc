/*
 * host_matmul_128.c - multiply two 128x128 matrices on the Boolean board.
 *
 * Runs on the PC. Reads A_128.txt and B_128.txt, sends them to the board in
 * 64x64 blocks over the UART, runs every block on the accelerator and on the
 * board's CPU, shows live progress, then reports cycles, time and speed-up
 * and checks every value of C against a multiply done on the PC.
 *
 * The board must be running sw/fpga/matmul_server.c
 * (make -C sw/fpga APP=matmul_server, then rebuild and program the bitstream).
 *
 *   make -C sw host
 *   cd sw && python3 gen_matrices.py 128     # creates A_128.txt and B_128.txt
 *   ./build_host/host_matmul_128 /dev/ttyUSB1
 *
 * All the work is in host_matmul_common.c, shared with the other sizes.
 */
#include "host_matmul_common.h"

int main(int argc, char **argv)
{
    const matmul_test test = {
        .test_name = "128 x 128",
        .size      = 128,
        .a_file    = "A_128.txt",
        .b_file    = "B_128.txt",
    };
    return run_matmul_test(&test, argc, argv);
}
