#ifndef SIM_CONSOLE_H
#define SIM_CONSOLE_H

#include <stdint.h>

/* CSR_DSCRATCH is intercepted by the Verilated core (riscv_csr.v, SIM_CTRL).
 * Writes with [31:24] == 0x01 emit the low byte to stdout (PUTC).
 * Writes with [31:24] == 0x00 terminate the simulation ($finish).
 */
#define CSR_DSCRATCH     0x7b2
#define SIM_CTRL_EXIT    0x00000000u
#define SIM_CTRL_PUTC    0x01000000u

void sim_putc(uint8_t c);
void sim_puts(const char *s);
void sim_put_hex(uint32_t v);
void sim_put_dec(int32_t v);
void sim_exit(int code);

#endif
