/*
 * fpga_uart.h - raw byte access to the SoC UART (soc/uart_lite.v at 0x9200_0000)
 * on the Boolean board. 1,000,000 baud, 8 data bits, no parity, 1 stop bit.
 *
 * The receiver holds only ONE byte. Read it before the next one arrives
 * (10 us later), or it is overwritten.
 */
#ifndef FPGA_UART_H
#define FPGA_UART_H

#include <stdint.h>

int     uart_byte_waiting(void);   /* 1 if a received byte is waiting      */
uint8_t uart_read_byte(void);      /* take it (also clears "byte waiting") */
void    uart_write_byte(uint8_t);  /* wait for the transmitter, then send  */

#endif
