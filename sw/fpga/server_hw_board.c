/*
 * server_hw_board.c - matmul_server's hardware jobs on the real Boolean board
 * (see server_hw.h). Real UART, real accelerator, real CPU cycle counter.
 */
#include <stdint.h>

#include "accel_regs.h"
#include "fpga_uart.h"
#include "matmul_protocol.h"
#include "server_hw.h"

/* The accelerator should finish a 64x64x64 block in well under 1 ms;
 * give up after 1 second. */
#define ACCEL_TIMEOUT_CYCLES BOARD_CLOCK_HZ

uint32_t hw_read_cycles(void)
{
    uint32_t cycles;
    __asm__ volatile("csrr %0, 0xc00" : "=r"(cycles));   /* CSR 0xc00 = cycle counter */
    return cycles;
}

int hw_uart_read_byte(uint8_t *byte, uint32_t timeout_cycles)
{
    uint32_t start = hw_read_cycles();

    /* Tight loop: nothing else happens until the byte arrives */
    while (!uart_byte_waiting())
    {
        if (hw_read_cycles() - start > timeout_cycles)
            return 0;
    }
    *byte = uart_read_byte();
    return 1;
}

void hw_uart_write_byte(uint8_t byte)
{
    uart_write_byte(byte);
}

void hw_accel_config(uint32_t *dim, uint32_t *max_k)
{
    uint32_t config = accel_read(ACCEL_CFG);
    *dim   = config & 0xffffu;
    *max_k = config >> 16;
}

int hw_accel_multiply(const int32_t *a, const int32_t *b, int32_t *product,
                      uint32_t m, uint32_t n, uint32_t k,
                      accel_stats *stats, uint32_t *error_detail)
{
    /* Tell the accelerator where everything is, then press START.
     * Strides of 0 mean "dense": each row follows straight after the last. */
    accel_write(ACCEL_A_ADDR, (uint32_t)(uintptr_t)a);
    accel_write(ACCEL_B_ADDR, (uint32_t)(uintptr_t)b);
    accel_write(ACCEL_C_ADDR, (uint32_t)(uintptr_t)product);
    accel_write(ACCEL_M, m);
    accel_write(ACCEL_N, n);
    accel_write(ACCEL_K, k);
    accel_write(ACCEL_LDA, 0);
    accel_write(ACCEL_LDB, 0);
    accel_write(ACCEL_LDC, 0);
    accel_write(ACCEL_CTRL, ACCEL_CTRL_START);

    /* Wait for DONE (or ERROR) by asking STATUS again and again */
    uint32_t start = hw_read_cycles();
    uint32_t status;
    for (;;)
    {
        status = accel_read(ACCEL_STATUS);
        if (status & (ACCEL_STATUS_DONE | ACCEL_STATUS_ERROR))
            break;
        if (hw_read_cycles() - start > ACCEL_TIMEOUT_CYCLES)
            return PROTO_ERR_ACCEL_TIMEOUT;
    }

    if (status & ACCEL_STATUS_ERROR)
    {
        *error_detail = accel_read(ACCEL_ERR);
        return PROTO_ERR_ACCEL_ERROR;
    }

    stats->total_cycles = accel_read(ACCEL_CYC);
    stats->load_cycles  = accel_read(ACCEL_LOAD_CYC);
    stats->mac_cycles   = accel_read(ACCEL_MAC_CYC);
    stats->store_cycles = accel_read(ACCEL_STORE_CYC);
    stats->read_words   = accel_read(ACCEL_RD_WORDS);
    stats->write_words  = accel_read(ACCEL_WR_WORDS);
    return 0;
}

int main(void)
{
    matmul_server_run();   /* never returns */
    return 0;
}
