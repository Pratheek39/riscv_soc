#include <stdint.h>

#include "sim_console.h"

#define ACCEL_BASE       0x95000000u
#define ACCEL_CTRL       0x00u
#define ACCEL_STATUS     0x04u
#define ACCEL_A_ADDR     0x08u
#define ACCEL_B_ADDR     0x0cu
#define ACCEL_C_ADDR     0x10u
#define ACCEL_M          0x14u
#define ACCEL_N          0x18u
#define ACCEL_K          0x1cu
#define ACCEL_CYC        0x20u
#define ACCEL_MAC_CYC    0x24u
#define ACCEL_ERR        0x28u
#define ACCEL_CFG        0x2cu   /* [15:0] = DIM, [31:16] = MAX_K */

#define ACCEL_CTRL_START   0x00000001u
#define ACCEL_STATUS_BUSY  0x00000001u
#define ACCEL_STATUS_DONE  0x00000002u
#define ACCEL_STATUS_ERROR 0x00000004u
#define ACCEL_ERR_DIM      0x00000002u

#define ACCEL_TIMEOUT 1000000u

/* Largest array size this test has buffers for; the hardware DIM/MAX_K
 * (read from ACCEL_CFG) must not exceed it. */
#ifndef TEST_MAX_DIM
#define TEST_MAX_DIM 16u
#endif

static int32_t matrix_a[TEST_MAX_DIM * TEST_MAX_DIM];
static int32_t matrix_b[TEST_MAX_DIM * TEST_MAX_DIM];
static int32_t matrix_c[TEST_MAX_DIM * TEST_MAX_DIM];
static int32_t expected_c[TEST_MAX_DIM * TEST_MAX_DIM];

/* Original hand-written 4x3 * 3x4 case */
static const int32_t fixed_a[4 * 3] = {
    1, -2,  3,
    4,  5, -6,
    3,  0,  0,
    0,  2,  1,
    2,  2,  2
};
static const int32_t fixed_b[3 * 4] = {
     7,  8,  4, 0,
    -9, 10,  9, 0,
    11, 12, -1, 2
};

static volatile uint32_t *const accel_regs =
    (volatile uint32_t *)ACCEL_BASE;

static void accel_write(uint32_t offset, uint32_t value)
{
    accel_regs[offset >> 2] = value;
}

static uint32_t accel_read(uint32_t offset)
{
    return accel_regs[offset >> 2];
}

static uint32_t lcg_state = 12345u;

static int32_t next_rand(void)
{
    lcg_state = lcg_state * 1103515245u + 12345u;
    return (int32_t)((lcg_state >> 16) & 0xfu) - 8;   /* -8..7 */
}

static void print_matrix(const char *name, const int32_t *matrix,
                         uint32_t rows, uint32_t cols)
{
    sim_puts(name);
    sim_puts(":\n");
    for (uint32_t row = 0; row < rows; ++row)
    {
        for (uint32_t col = 0; col < cols; ++col)
        {
            sim_put_dec(matrix[row * cols + col]);
            sim_puts(" ");
        }
        sim_putc('\n');
    }
}

static void calculate_reference(uint32_t m, uint32_t n, uint32_t k)
{
    for (uint32_t row = 0; row < m; ++row)
        for (uint32_t col = 0; col < n; ++col)
        {
            int32_t sum = 0;
            for (uint32_t index = 0; index < k; ++index)
                sum += matrix_a[row * k + index] * matrix_b[index * n + col];
            expected_c[row * n + col] = sum;
        }
}

static int check_result(uint32_t m, uint32_t n)
{
    for (uint32_t index = 0; index < m * n; ++index)
    {
        if (matrix_c[index] != expected_c[index])
        {
            sim_puts("  FAIL: C[");
            sim_put_dec((int32_t)index);
            sim_puts("] expected ");
            sim_put_dec(expected_c[index]);
            sim_puts(" got ");
            sim_put_dec(matrix_c[index]);
            sim_putc('\n');
            return 0;
        }
    }
    return 1;
}

/* Start the accelerator and wait. Returns the final STATUS value. */
static uint32_t accel_run(uint32_t m, uint32_t n, uint32_t k)
{
    accel_write(ACCEL_A_ADDR, (uint32_t)(uintptr_t)matrix_a);
    accel_write(ACCEL_B_ADDR, (uint32_t)(uintptr_t)matrix_b);
    accel_write(ACCEL_C_ADDR, (uint32_t)(uintptr_t)matrix_c);
    accel_write(ACCEL_M, m);
    accel_write(ACCEL_N, n);
    accel_write(ACCEL_K, k);
    accel_write(ACCEL_CTRL, ACCEL_CTRL_START);

    uint32_t status = 0;
    for (uint32_t count = 0; count < ACCEL_TIMEOUT; ++count)
    {
        status = accel_read(ACCEL_STATUS);
        if (status & (ACCEL_STATUS_ERROR | ACCEL_STATUS_DONE))
            break;
    }
    return status;
}

static int run_case(uint32_t m, uint32_t n, uint32_t k, int fixed)
{
    sim_puts("case ");
    sim_put_dec((int32_t)m);
    sim_putc('x');
    sim_put_dec((int32_t)k);
    sim_puts(" * ");
    sim_put_dec((int32_t)k);
    sim_putc('x');
    sim_put_dec((int32_t)n);
    sim_puts(": ");

    if (fixed)
    {
        for (uint32_t i = 0; i < m * k; ++i) matrix_a[i] = fixed_a[i];
        for (uint32_t i = 0; i < k * n; ++i) matrix_b[i] = fixed_b[i];
    }
    else
    {
        for (uint32_t i = 0; i < m * k; ++i) matrix_a[i] = next_rand();
        for (uint32_t i = 0; i < k * n; ++i) matrix_b[i] = next_rand();
    }
    for (uint32_t i = 0; i < m * n; ++i) matrix_c[i] = 0x7eadbeef;

    calculate_reference(m, n, k);
    uint32_t status = accel_run(m, n, k);

    if (status & ACCEL_STATUS_ERROR)
    {
        sim_puts("FAIL: accelerator error, err=0x");
        sim_put_hex(accel_read(ACCEL_ERR));
        sim_putc('\n');
        return 0;
    }
    if (!(status & ACCEL_STATUS_DONE))
    {
        sim_puts("FAIL: timeout, status=0x");
        sim_put_hex(status);
        sim_putc('\n');
        return 0;
    }

    uint32_t cyc = accel_read(ACCEL_CYC);
    uint32_t mac = accel_read(ACCEL_MAC_CYC);

    if (!check_result(m, n))
    {
        print_matrix("  Expected C", expected_c, m, n);
        print_matrix("  Output C", matrix_c, m, n);
        return 0;
    }

    sim_puts("PASS cyc=");
    sim_put_dec((int32_t)cyc);
    sim_puts(" mac_cyc=");
    sim_put_dec((int32_t)mac);
    sim_putc('\n');
    return 1;
}

static uint32_t clamp(uint32_t v, uint32_t max)
{
    if (v < 1) return 1;
    return v > max ? max : v;
}

int main(void)
{
    uint32_t cfg = accel_read(ACCEL_CFG);
    uint32_t dim = cfg & 0xffffu;
    uint32_t max_k = cfg >> 16;

    /* Hardware without ACCEL_CFG reads back 0: assume the original 4x4 */
    if (dim == 0) dim = 4;
    if (max_k == 0) max_k = dim;

    sim_puts("Accelerator DIM=");
    sim_put_dec((int32_t)dim);
    sim_puts(" MAX_K=");
    sim_put_dec((int32_t)max_k);
    sim_putc('\n');

    if (dim > TEST_MAX_DIM || max_k > TEST_MAX_DIM)
    {
        sim_puts("FAIL: rebuild test with larger TEST_MAX_DIM\n");
        sim_exit(1);
    }

    int ok = 1;

    if (dim >= 4 && max_k >= 3)
        ok &= run_case(4, 4, 3, 1);

    ok &= run_case(1, 1, 1, 0);
    ok &= run_case(dim, dim, clamp(dim, max_k), 0);
    ok &= run_case(dim, dim, max_k, 0);
    ok &= run_case(1, dim, clamp(3, max_k), 0);
    ok &= run_case(dim, 1, clamp(3, max_k), 0);
    ok &= run_case(clamp(dim - 1, dim), clamp(dim - 2, dim), clamp(3, max_k), 0);

    /* Negative test: M larger than the array must be rejected */
    sim_puts("case M=DIM+1 (expect error): ");
    uint32_t status = accel_run(dim + 1, dim, 1);
    if ((status & ACCEL_STATUS_ERROR) && (accel_read(ACCEL_ERR) & ACCEL_ERR_DIM))
        sim_puts("PASS\n");
    else
    {
        sim_puts("FAIL: status=0x");
        sim_put_hex(status);
        sim_putc('\n');
        ok = 0;
    }

    if (!ok)
    {
        sim_puts("FAIL: matrix multiplication\n");
        sim_exit(1);
    }

    sim_puts("PASS: matrix multiplication\n");
    sim_exit(0);
    return 0;
}
