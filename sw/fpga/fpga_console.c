/* sim_console API implemented over the SoC uart_lite (0x9200_0000) for the FPGA.
 * Output appears on the board's USB-UART at 1000000 baud (uart_lite BIT_DIV=24
 * at 25 MHz). sim_exit() parks the core because the simulator exit CSR does not
 * exist on hardware. */
#include <stdint.h>
#include "sim_console.h"
#include "fpga_uart.h"

#define ULITE_BASE      0x92000000u
#define ULITE_RX        (*(volatile uint32_t *)(ULITE_BASE + 0x0u))
#define ULITE_TX        (*(volatile uint32_t *)(ULITE_BASE + 0x4u))
#define ULITE_STATUS    (*(volatile uint32_t *)(ULITE_BASE + 0x8u))
#define ULITE_RXVALID   (1u << 0)   /* a received byte is waiting in RX */
#define ULITE_TXFULL    (1u << 3)   /* transmitter busy sending a byte  */

/*-----------------------------------------------------------------
 * Raw UART bytes (see fpga_uart.h)
 *-----------------------------------------------------------------*/
int uart_byte_waiting(void)
{
    return (ULITE_STATUS & ULITE_RXVALID) != 0;
}

uint8_t uart_read_byte(void)
{
    return (uint8_t)ULITE_RX;     /* reading RX also lowers "byte waiting" */
}

void uart_write_byte(uint8_t c)
{
    while (ULITE_STATUS & ULITE_TXFULL)
        ;
    ULITE_TX = c;
}

/*-----------------------------------------------------------------
 * sim_console API
 *-----------------------------------------------------------------*/
void sim_putc(uint8_t c)
{
    uart_write_byte(c);
}

void sim_puts(const char *s)
{
    while (*s)
        sim_putc((uint8_t)*s++);
}

void sim_put_hex(uint32_t v)
{
    static const char digits[] = "0123456789abcdef";
    for (int i = 28; i >= 0; i -= 4)
        sim_putc(digits[(v >> i) & 0xF]);
}

void sim_put_dec(int32_t v)
{
    char buf[12];
    int i = 0;

    if (v < 0)
    {
        sim_putc('-');
        v = -(int32_t)(uint32_t)v;
    }

    do
    {
        buf[i++] = '0' + (uint32_t)v % 10;
        v = (int32_t)((uint32_t)v / 10);
    } while (v != 0);

    while (i--)
        sim_putc(buf[i]);
}

void sim_exit(int code)
{
    (void)code;
    for (;;)
        ;
}
