#include "sim_console.h"

extern int cpp_sum_of_squares(const int *values, int count);

static unsigned mul(unsigned a, unsigned b) { return a * b; }
static unsigned div7(unsigned v)            { return v / 7u; }
static unsigned rem7(unsigned v)            { return v % 7u; }

int main(void)
{
    sim_puts("hello from rv32im on riscv_soc\n");

    int vals[4] = { 1, 2, 3, 4 };
    sim_puts("cpp_sum_of_squares(1,2,3,4) = ");
    sim_put_dec(cpp_sum_of_squares(vals, 4));
    sim_putc('\n');

    unsigned x = 0x1234abcdu;
    sim_puts("M/D check: 0x");
    sim_put_hex(mul(0x10000u, 0x10000u) & x);
    sim_puts(" div7=0x");
    sim_put_hex(div7(x));
    sim_puts(" rem7=0x");
    sim_put_hex(rem7(x));
    sim_putc('\n');

    sim_puts("DONE\n");
    sim_exit(0);
    return 0;
}
