/*
 * accel_regs.h - matrix-multiply accelerator registers (at 0x9500_0000).
 *
 * Same register map as soc/accel_matmul_defs.v. The CPU talks to the
 * accelerator with ordinary loads and stores to these addresses
 * (memory-mapped I/O); the address decoder (soc/axi4_lite_tap.v) routes
 * anything at 0x95xx_xxxx to the accelerator.
 */
#ifndef ACCEL_REGS_H
#define ACCEL_REGS_H

#include <stdint.h>

#define ACCEL_BASE       0x95000000u

/* Register offsets */
#define ACCEL_CTRL       0x00u   /* write: bit0 START, bit1 NO_REUSE         */
#define ACCEL_STATUS     0x04u   /* bit0 BUSY, bit1 DONE, bit2 ERROR         */
#define ACCEL_A_ADDR     0x08u   /* where A starts in RAM                    */
#define ACCEL_B_ADDR     0x0cu   /* where B starts in RAM                    */
#define ACCEL_C_ADDR     0x10u   /* where to write C                         */
#define ACCEL_M          0x14u   /* rows of A and C                          */
#define ACCEL_N          0x18u   /* columns of B and C                       */
#define ACCEL_K          0x1cu   /* columns of A = rows of B                 */
#define ACCEL_CYC        0x20u   /* cycles START to DONE                     */
#define ACCEL_MAC_CYC    0x24u   /* cycles spent multiplying                 */
#define ACCEL_ERR        0x28u   /* why it failed                            */
#define ACCEL_CFG        0x2cu   /* [15:0] = DIM, [31:16] = MAX_K            */
#define ACCEL_LDA        0x30u   /* A row stride in bytes, 0 = dense         */
#define ACCEL_LDB        0x34u   /* B row stride in bytes, 0 = dense         */
#define ACCEL_LDC        0x38u   /* C row stride in bytes, 0 = dense         */
#define ACCEL_TILES      0x3cu   /* C tiles finished                         */
#define ACCEL_LOAD_CYC   0x40u   /* cycles spent loading A and B             */
#define ACCEL_STORE_CYC  0x44u   /* cycles spent storing C                   */
#define ACCEL_RD_WORDS   0x48u   /* words read from memory                   */
#define ACCEL_WR_WORDS   0x4cu   /* words written to memory                  */

/* Register bits */
#define ACCEL_CTRL_START    0x00000001u
#define ACCEL_CTRL_NO_REUSE 0x00000002u
#define ACCEL_STATUS_BUSY   0x00000001u
#define ACCEL_STATUS_DONE   0x00000002u
#define ACCEL_STATUS_ERROR  0x00000004u

static inline void accel_write(uint32_t offset, uint32_t value)
{
    *(volatile uint32_t *)(ACCEL_BASE + offset) = value;
}

static inline uint32_t accel_read(uint32_t offset)
{
    return *(volatile uint32_t *)(ACCEL_BASE + offset);
}

#endif
