/*
 * server_hw.h - the few hardware jobs matmul_server.c needs done.
 *
 * matmul_server.c (the protocol logic) never touches hardware directly; it
 * calls these functions instead. That keeps it readable and lets the same
 * file run in two places:
 *   - on the board:  sw/fpga/server_hw_board.c  (real UART, real accelerator)
 *   - on the PC:     sw/host_fake_board.c       (virtual serial port and a
 *                    software multiply, to test the protocol without a board)
 */
#ifndef SERVER_HW_H
#define SERVER_HW_H

#include <stdint.h>

/* Wait up to timeout_cycles for a UART byte. Returns 1 and the byte, or 0 on timeout. */
int      hw_uart_read_byte(uint8_t *byte, uint32_t timeout_cycles);

/* Send one byte over the UART (waits until the transmitter is free). */
void     hw_uart_write_byte(uint8_t byte);

/* The CPU's cycle counter (CSR 0xc00). 32-bit, counts every clock tick. */
uint32_t hw_read_cycles(void);

/* Accelerator build settings: grid size (DIM) and K buffer depth (MAX_K). */
void     hw_accel_config(uint32_t *dim, uint32_t *max_k);

/* Accelerator measurements for one job. */
typedef struct
{
    uint32_t total_cycles;
    uint32_t load_cycles;
    uint32_t mac_cycles;
    uint32_t store_cycles;
    uint32_t read_words;
    uint32_t write_words;
} accel_stats;

/*
 * product[m x n] = a[m x k] * b[k x n] on the accelerator (all dense, row-major).
 * Returns 0 when done, otherwise a PROTO_ERR_* code; *error_detail gets the
 * accelerator's ERR register when it reported an error.
 */
int      hw_accel_multiply(const int32_t *a, const int32_t *b, int32_t *product,
                           uint32_t m, uint32_t n, uint32_t k,
                           accel_stats *stats, uint32_t *error_detail);

/* The server's main loop (in matmul_server.c). Never returns. */
void     matmul_server_run(void);

/* Clock ticks per second on the board (25 MHz system clock) */
#define BOARD_CLOCK_HZ 25000000u

#endif
