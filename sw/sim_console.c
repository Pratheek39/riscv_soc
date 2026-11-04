#include "sim_console.h"

void sim_putc(uint8_t c)
{
    __asm__ volatile("csrw %0, %1" :: "i"(CSR_DSCRATCH),
                     "r"(SIM_CTRL_PUTC | c));
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
    int neg = 0;

    if (v < 0)
    {
        neg = 1;
        /* safe for INT32_MIN: negate in unsigned space */
        v = -(int32_t)(uint32_t)v;
    }

    do
    {
        buf[i++] = '0' + (uint32_t)v % 10;
        v = (int32_t)((uint32_t)v / 10);
    } while (v != 0);

    if (neg)
        sim_putc('-');

    while (i--)
        sim_putc(buf[i]);
}

void sim_exit(int code)
{
    __asm__ volatile("csrw %0, %1" :: "i"(CSR_DSCRATCH),
                     "r"(SIM_CTRL_EXIT | ((uint32_t)code & 0xFFu)));
    for (;;)
        ;
}
