`ifndef ACCEL_MATMUL_DEFS_V
`define ACCEL_MATMUL_DEFS_V

// Systolic array size (DIM x DIM PEs) and maximum supported K.
// Override at build time, e.g. verilator +define+ACCEL_DIM=8
`ifndef ACCEL_DIM
`define ACCEL_DIM 5
`endif
`ifndef ACCEL_MAX_K
`define ACCEL_MAX_K `ACCEL_DIM
`endif

`define ACCEL_CTRL       8'h00
`define ACCEL_STATUS     8'h04
`define ACCEL_A_ADDR     8'h08
`define ACCEL_B_ADDR     8'h0c
`define ACCEL_C_ADDR     8'h10
`define ACCEL_M          8'h14
`define ACCEL_N          8'h18
`define ACCEL_K          8'h1c
`define ACCEL_CYC        8'h20
`define ACCEL_MAC_CYC    8'h24
`define ACCEL_ERR        8'h28
`define ACCEL_CFG        8'h2c   // RO: [15:0] = DIM, [31:16] = MAX_K

`define ACCEL_CTRL_START 0
`define ACCEL_STATUS_BUSY  0
`define ACCEL_STATUS_DONE  1
`define ACCEL_STATUS_ERROR 2
`define ACCEL_ERR_ALIGN    32'h00000001
`define ACCEL_ERR_DIM      32'h00000002
`define ACCEL_ERR_BUS      32'h00000004

`endif
