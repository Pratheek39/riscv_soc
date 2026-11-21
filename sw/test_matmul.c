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
#define ACCEL_LDA        0x30u   /* A row stride in bytes, 0 = dense */
#define ACCEL_LDB        0x34u   /* B row stride in bytes, 0 = dense */
#define ACCEL_LDC        0x38u   /* C row stride in bytes, 0 = dense */
#define ACCEL_TILES      0x3cu   /* C tiles finished */
#define ACCEL_LOAD_CYC   0x40u   /* cycles spent loading A and B */
#define ACCEL_STORE_CYC  0x44u   /* cycles spent storing C */
#define ACCEL_RD_WORDS   0x48u   /* words read from memory */
#define ACCEL_WR_WORDS   0x4cu   /* words written to memory */

#define ACCEL_CTRL_START    0x00000001u
#define ACCEL_CTRL_NO_REUSE 0x00000002u   /* disable A-panel reuse */
#define ACCEL_STATUS_BUSY   0x00000001u
#define ACCEL_STATUS_DONE   0x00000002u
#define ACCEL_STATUS_ERROR  0x00000004u
#define ACCEL_ERR_ALIGN     0x00000001u
#define ACCEL_ERR_DIM       0x00000002u
#define ACCEL_ERR_STRIDE    0x00000008u

#define ACCEL_TIMEOUT 5000000u

/* Each test matrix (including any row padding) must fit in this many words */
#define TEST_MAX_WORDS (64u * 64u)

static int32_t matrix_a[TEST_MAX_WORDS];
static int32_t matrix_b[TEST_MAX_WORDS];
static int32_t matrix_c[TEST_MAX_WORDS];
static int32_t expected_c[TEST_MAX_WORDS];

/* 8 pages of memory, page aligned, for the 4 KB boundary test. Each matrix is
 * placed 8 bytes before a page boundary so its rows straddle the boundary,
 * which forces the accelerator to split its AXI bursts there. */
#define PAGE_WORDS (4096u / 4u)
static int32_t boundary_region[8 * PAGE_WORDS] __attribute__((aligned(4096)));

/* Buffers used by the current test case: normally matrix_a/b/c above,
 * switched to boundary_region by the 4 KB boundary test. */
static int32_t *case_a = matrix_a;
static int32_t *case_b = matrix_b;
static int32_t *case_c = matrix_c;
static uint32_t case_capacity = TEST_MAX_WORDS;   /* words per buffer */

static void use_buffers(int32_t *a, int32_t *b, int32_t *c, uint32_t capacity)
{
    case_a = a;
    case_b = b;
    case_c = c;
    case_capacity = capacity;
}

/* Values written into row padding (A, B) and around C. The accelerator must
 * never read the A/B padding (it would corrupt the result) and never write
 * the C padding (it would be overwritten). */
#define PAD_VALUE   0x5a5a5a5a
#define C_UNWRITTEN 0x7eadbeef

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

/* One accelerator job: C[m x n] = A[m x k] * B[k x n].
 * lda/ldb/ldc are row strides in WORDS (0 = dense, i.e. the row length).
 * A stride larger than the row length leaves a gap after every row, which is
 * how a sub-matrix of a bigger matrix is described. */
typedef struct
{
    uint32_t m, n, k;
    uint32_t lda, ldb, ldc;
    uint32_t ctrl_flags;    /* extra CTRL bits, e.g. ACCEL_CTRL_NO_REUSE */
    int      fixed;         /* use fixed_a / fixed_b instead of random data */
} matmul_job;

/* Stride actually used: the given one, or the row length when 0 */
static uint32_t stride_of(uint32_t stride, uint32_t row_length)
{
    return stride ? stride : row_length;
}

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

/* Full int16 range (-32768..32767): exercises the 16-bit operands and the wrap-around */
static int wide_values = 0;

static int32_t next_rand16(void)
{
    lcg_state = lcg_state * 1103515245u + 12345u;
    return (int32_t)((lcg_state >> 8) & 0xffffu) - 32768;   /* -32768..32767 */
}

static void print_dec(const char *label, uint32_t value)
{
    sim_puts(label);
    sim_put_dec((int32_t)value);
}

/* Fill A and B (padding included) and pre-set all of C to C_UNWRITTEN */
static void fill_inputs(const matmul_job *job)
{
    uint32_t lda = stride_of(job->lda, job->k);
    uint32_t ldb = stride_of(job->ldb, job->n);
    uint32_t ldc = stride_of(job->ldc, job->n);

    for (uint32_t row = 0; row < job->m; ++row)
        for (uint32_t col = 0; col < lda; ++col)
            case_a[row * lda + col] = (col >= job->k) ? PAD_VALUE :
                job->fixed ? fixed_a[row * job->k + col] : (wide_values ? next_rand16() : next_rand());

    for (uint32_t row = 0; row < job->k; ++row)
        for (uint32_t col = 0; col < ldb; ++col)
            case_b[row * ldb + col] = (col >= job->n) ? PAD_VALUE :
                job->fixed ? fixed_b[row * job->n + col] : (wide_values ? next_rand16() : next_rand());

    for (uint32_t i = 0; i < job->m * ldc; ++i)
        case_c[i] = C_UNWRITTEN;
}

/* Plain CPU matrix multiply into expected_c (dense, m x n) */
static void calculate_reference(const matmul_job *job)
{
    uint32_t lda = stride_of(job->lda, job->k);
    uint32_t ldb = stride_of(job->ldb, job->n);

    for (uint32_t row = 0; row < job->m; ++row)
        for (uint32_t col = 0; col < job->n; ++col)
        {
            /* The PEs use the low 16 bits of each operand; the sum wraps mod 2^32 like the 48-bit accumulator's low 32 bits */
            uint32_t sum = 0;
            for (uint32_t index = 0; index < job->k; ++index)
                sum += (uint32_t)(int16_t)case_a[row * lda + index] *
                       (uint32_t)(int16_t)case_b[index * ldb + col];
            expected_c[row * job->n + col] = (int32_t)sum;
        }
}

/* Check every C element, and that the C padding was left alone */
static int check_result(const matmul_job *job)
{
    uint32_t ldc = stride_of(job->ldc, job->n);

    for (uint32_t row = 0; row < job->m; ++row)
        for (uint32_t col = 0; col < ldc; ++col)
        {
            int32_t got = case_c[row * ldc + col];
            int32_t want = (col < job->n) ? expected_c[row * job->n + col]
                                          : C_UNWRITTEN;
            if (got != want)
            {
                print_dec("  FAIL: C[", row);
                print_dec("][", col);
                print_dec("] expected ", (uint32_t)want);
                print_dec(" got ", (uint32_t)got);
                sim_putc('\n');
                return 0;
            }
        }
    return 1;
}

/* Program the job, start the accelerator and wait. Returns STATUS. */
static uint32_t accel_run(const matmul_job *job)
{
    accel_write(ACCEL_A_ADDR, (uint32_t)(uintptr_t)case_a);
    accel_write(ACCEL_B_ADDR, (uint32_t)(uintptr_t)case_b);
    accel_write(ACCEL_C_ADDR, (uint32_t)(uintptr_t)case_c);
    accel_write(ACCEL_M, job->m);
    accel_write(ACCEL_N, job->n);
    accel_write(ACCEL_K, job->k);
    accel_write(ACCEL_LDA, job->lda * 4u);   /* registers take bytes */
    accel_write(ACCEL_LDB, job->ldb * 4u);
    accel_write(ACCEL_LDC, job->ldc * 4u);
    accel_write(ACCEL_CTRL, ACCEL_CTRL_START | job->ctrl_flags);

    uint32_t status = 0;
    for (uint32_t count = 0; count < ACCEL_TIMEOUT; ++count)
    {
        status = accel_read(ACCEL_STATUS);
        if (status & (ACCEL_STATUS_ERROR | ACCEL_STATUS_DONE))
            break;
    }
    return status;
}

static int run_job(const matmul_job *job)
{
    print_dec("case ", job->m);
    print_dec("x", job->k);
    print_dec(" * ", job->k);
    print_dec("x", job->n);
    if (job->lda || job->ldb || job->ldc)
    {
        print_dec(" lda=", job->lda);
        print_dec(" ldb=", job->ldb);
        print_dec(" ldc=", job->ldc);
    }
    if (job->ctrl_flags & ACCEL_CTRL_NO_REUSE)
        sim_puts(" no-reuse");
    sim_puts(": ");

    uint32_t a_words = job->m * stride_of(job->lda, job->k);
    uint32_t b_words = job->k * stride_of(job->ldb, job->n);
    uint32_t c_words = job->m * stride_of(job->ldc, job->n);
    if (a_words > case_capacity || b_words > case_capacity ||
        c_words > case_capacity)
    {
        sim_puts("SKIP (too big for the test buffers)\n");
        return 1;
    }

    fill_inputs(job);
    calculate_reference(job);
    uint32_t status = accel_run(job);

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
    if (!check_result(job))
        return 0;

    print_dec("PASS cyc=", accel_read(ACCEL_CYC));
    print_dec(" load=",    accel_read(ACCEL_LOAD_CYC));
    print_dec(" mac=",     accel_read(ACCEL_MAC_CYC));
    print_dec(" store=",   accel_read(ACCEL_STORE_CYC));
    print_dec(" tiles=",   accel_read(ACCEL_TILES));
    print_dec(" rd_words=", accel_read(ACCEL_RD_WORDS));
    print_dec(" wr_words=", accel_read(ACCEL_WR_WORDS));
    sim_putc('\n');
    return 1;
}

/* Shorthand for a dense job with random data */
static int run_case(uint32_t m, uint32_t n, uint32_t k)
{
    matmul_job job = { m, n, k, 0, 0, 0, 0, 0 };
    return run_job(&job);
}

/* A job the accelerator must reject with the given ERR bit */
static int expect_error(const char *name, const matmul_job *job,
                        uint32_t expected_err)
{
    sim_puts("case ");
    sim_puts(name);
    sim_puts(" (expect error): ");

    uint32_t status = accel_run(job);
    uint32_t err = accel_read(ACCEL_ERR);
    if ((status & ACCEL_STATUS_ERROR) && (err & expected_err))
    {
        sim_puts("PASS\n");
        return 1;
    }
    sim_puts("FAIL: status=0x");
    sim_put_hex(status);
    sim_puts(" err=0x");
    sim_put_hex(err);
    sim_putc('\n');
    return 0;
}

int main(void)
{
    uint32_t cfg = accel_read(ACCEL_CFG);
    uint32_t dim = cfg & 0xffffu;
    uint32_t max_k = cfg >> 16;

    print_dec("Accelerator DIM=", dim);
    print_dec(" MAX_K=", max_k);
    sim_putc('\n');

    int ok = 1;

    /* --- Single-tile jobs (fit in the array in one go) --- */
    sim_puts("-- single tile --\n");
    if (dim >= 4 && max_k >= 3)
    {
        matmul_job fixed_job = { 4, 4, 3, 0, 0, 0, 0, 1 };
        ok &= run_job(&fixed_job);
    }
    ok &= run_case(1, 1, 1);
    ok &= run_case(dim, dim, dim < max_k ? dim : max_k);
    ok &= run_case(dim, dim, max_k);

    /* --- Tiled jobs: bigger than the array, edge tiles, K chunks --- */
    sim_puts("-- tiled --\n");
    ok &= run_case(2 * dim, 2 * dim, 2 * dim);          /* whole tiles only */
    ok &= run_case(dim + 1, dim + 1, dim + 1);          /* tiny edge tiles */
    ok &= run_case(2 * dim + 3, 7, 3 * max_k + 1);      /* odd sizes, K chunks */
    ok &= run_case(1, 1, 3 * max_k + 1);                /* row * column (dot product) */
    ok &= run_case(2 * dim + 1, 2 * dim + 1, 1);        /* column * row (outer product) */

    /* --- Strided: a sub-matrix inside bigger matrices --- */
    sim_puts("-- strided --\n");
    {
        uint32_t m = dim + 2, n = dim + 3, k = max_k + 2;
        matmul_job job = { m, n, k, k + 3, n + 5, n + 1, 0, 0 };
        ok &= run_job(&job);
    }

    /* --- A-panel reuse on/off (same shape, K fits in one chunk) --- */
    sim_puts("-- A-panel reuse --\n");
    {
        matmul_job job = { 2 * dim, 4 * dim, max_k, 0, 0, 0, 0, 0 };
        ok &= run_job(&job);
        job.ctrl_flags = ACCEL_CTRL_NO_REUSE;
        ok &= run_job(&job);
    }

    /* --- 4 KB boundary: every matrix starts 2 words before a page --- */
    sim_puts("-- 4KB boundary --\n");
    use_buffers(&boundary_region[1 * PAGE_WORDS - 2],
                &boundary_region[3 * PAGE_WORDS - 2],
                &boundary_region[5 * PAGE_WORDS - 2],
                2 * PAGE_WORDS);
    ok &= run_case(2 * dim + 1, 2 * dim + 1, 2 * max_k + 1);
    use_buffers(matrix_a, matrix_b, matrix_c, TEST_MAX_WORDS);

    /* --- Full int16 range: products up to 2^30, sums that overflow 32 bits --- */
    wide_values = 1;
    {
        matmul_job job = { 8, 8, 64, 0, 0, 0, 0, 0 };
        ok &= run_job(&job);
        matmul_job job_tall = { 13, 5, 37, 0, 0, 0, 0, 0 };
        ok &= run_job(&job_tall);
    }
    wide_values = 0;

    /* --- Bad configurations must be rejected --- */
    sim_puts("-- errors --\n");
    {
        matmul_job zero_k = { dim, dim, 0, 0, 0, 0, 0, 0 };
        ok &= expect_error("K=0", &zero_k, ACCEL_ERR_DIM);

        matmul_job short_stride = { dim, dim, 4, 3, 0, 0, 0, 0 };  /* lda < k */
        ok &= expect_error("lda<k", &short_stride, ACCEL_ERR_STRIDE);
    }

    /* --- Larger jobs for performance numbers --- */
    sim_puts("-- performance --\n");
    for (uint32_t size = 16; size <= 64; size *= 2)
    {
        matmul_job job = { size, size, size, 0, 0, 0, 0, 0 };
        ok &= run_job(&job);
        if (size <= max_k)   /* reuse only applies when K fits in one chunk */
        {
            job.ctrl_flags = ACCEL_CTRL_NO_REUSE;
            ok &= run_job(&job);
        }
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
