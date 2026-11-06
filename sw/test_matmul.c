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

#define ACCEL_CTRL_START 0x00000001u
#define ACCEL_STATUS_BUSY  0x00000001u
#define ACCEL_STATUS_DONE  0x00000002u
#define ACCEL_STATUS_ERROR 0x00000004u

#define MATRIX_M 2u
#define MATRIX_N 2u
#define MATRIX_K 3u
#define ACCEL_TIMEOUT 1000000u

static int32_t matrix_a[MATRIX_M * MATRIX_K] = {
    1, -2, 3,
    4,  5, -6
};

static int32_t matrix_b[MATRIX_K * MATRIX_N] = {
     7,  8,
    -9, 10,
    11, 12
};

static int32_t matrix_c[MATRIX_M * MATRIX_N];
static int32_t expected_c[MATRIX_M * MATRIX_N];

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

static void print_matrix(const char *name,
                         const int32_t *matrix,
                         uint32_t rows,
                         uint32_t cols)
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

static void calculate_reference(void)
{
    for (uint32_t row = 0; row < MATRIX_M; ++row)
    {
        for (uint32_t col = 0; col < MATRIX_N; ++col)
        {
            int32_t sum = 0;
            for (uint32_t index = 0; index < MATRIX_K; ++index)
                sum += matrix_a[row * MATRIX_K + index] *
                       matrix_b[index * MATRIX_N + col];
            expected_c[row * MATRIX_N + col] = sum;
        }
    }
}

static int check_result(void)
{
    for (uint32_t index = 0; index < MATRIX_M * MATRIX_N; ++index)
    {
        if (matrix_c[index] != expected_c[index])
        {
            sim_puts("FAIL: C[");
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

int main(void)
{
    calculate_reference();
    print_matrix("Input A", matrix_a, MATRIX_M, MATRIX_K);
    print_matrix("Input B", matrix_b, MATRIX_K, MATRIX_N);
    print_matrix("Expected C", expected_c, MATRIX_M, MATRIX_N);

    accel_write(ACCEL_A_ADDR, (uint32_t)(uintptr_t)matrix_a);
    accel_write(ACCEL_B_ADDR, (uint32_t)(uintptr_t)matrix_b);
    accel_write(ACCEL_C_ADDR, (uint32_t)(uintptr_t)matrix_c);
    accel_write(ACCEL_M, MATRIX_M);
    accel_write(ACCEL_N, MATRIX_N);
    accel_write(ACCEL_K, MATRIX_K);
    accel_write(ACCEL_CTRL, ACCEL_CTRL_START);

    uint32_t status = 0;
    for (uint32_t count = 0; count < ACCEL_TIMEOUT; ++count)
    {
        status = accel_read(ACCEL_STATUS);
        if (status & ACCEL_STATUS_ERROR)
        {
            sim_puts("FAIL: accelerator error, status=0x");
            sim_put_hex(status);
            sim_putc('\n');
            sim_exit(1);
        }
        if (status & ACCEL_STATUS_DONE)
            break;
    }

    if (!(status & ACCEL_STATUS_DONE))
    {
        sim_puts("FAIL: accelerator timeout, status=0x");
        sim_put_hex(status);
        sim_puts(" busy=");
        sim_put_dec((status & ACCEL_STATUS_BUSY) != 0);
        sim_putc('\n');
        sim_exit(1);
    }

    print_matrix("Output C", matrix_c, MATRIX_M, MATRIX_N);

    if (!check_result())
        sim_exit(1);

    sim_puts("PASS: matrix multiplication\n");
    sim_exit(0);
    return 0;
}