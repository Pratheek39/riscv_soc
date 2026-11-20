/*
 * host_matmul_1024.c - multiply two 1024x1024 matrices on the Boolean board.
 *
 * Runs on the PC. Reads A_1024.txt and B_1024.txt, sends them to the board in
 * 64x64 blocks over the UART, runs every block on the accelerator and on the
 * board's CPU, shows live progress, then reports cycles, time and speed-up
 * and checks every value of C against a multiply done on the PC.
 *
 * The board must be running sw/fpga/matmul_server.c
 * (make -C sw/fpga APP=matmul_server, then rebuild and program the bitstream).
 *
 *   make -C sw host
 *   cd sw && python3 gen_matrices.py 1024     # creates A_1024.txt and B_1024.txt
 *   ./build_host/host_matmul_1024 /dev/ttyUSB1
 *
 * All the work is in host_matmul_common.c, shared with the other sizes.
 */
#include "host_matmul_common.h"

int main(int argc, char **argv)
{
    const matmul_test test = {
        .test_name = "1024 x 1024",
        .size      = 1024,
        .a_file    = "A_1024.txt",
        .b_file    = "B_1024.txt",
    };
    return run_matmul_test(&test, argc, argv);
}
