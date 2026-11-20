`ifndef ACCEL_MATMUL_DEFS_V
`define ACCEL_MATMUL_DEFS_V

// Systolic array size (DIM x DIM PEs) and maximum supported K.
// Override at build time, e.g. verilator +define+ACCEL_DIM=8
`ifndef ACCEL_DIM
`define ACCEL_DIM 5
`endif
`ifndef ACCEL_MAX_K
`define ACCEL_MAX_K 64
`endif

// AXI master: max beats per burst (1..256) and max read bursts in flight
`ifndef ACCEL_MAX_BURST
`define ACCEL_MAX_BURST 16
`endif
`ifndef ACCEL_MAX_OUTSTANDING
`define ACCEL_MAX_OUTSTANDING 4
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
// Tiling: row strides ("leading dimensions") in BYTES. 0 = dense matrix,
// i.e. the stride is the row length (A: K*4, B: N*4, C: N*4).
`define ACCEL_LDA        8'h30   // A row stride
`define ACCEL_LDB        8'h34   // B row stride
`define ACCEL_LDC        8'h38   // C row stride
`define ACCEL_TILES      8'h3c   // RO: C tiles finished so far
`define ACCEL_LOAD_CYC   8'h40   // RO: cycles spent loading A and B
`define ACCEL_STORE_CYC  8'h44   // RO: cycles spent storing C
`define ACCEL_RD_WORDS   8'h48   // RO: words read from memory (A + B)
`define ACCEL_WR_WORDS   8'h4c   // RO: words written to memory (C)

`define ACCEL_CTRL_START    0   // write 1 to start a job
`define ACCEL_CTRL_NO_REUSE 1   // with START: disable A-panel reuse (for experiments)
`define ACCEL_STATUS_BUSY  0
`define ACCEL_STATUS_DONE  1
`define ACCEL_STATUS_ERROR 2
`define ACCEL_ERR_ALIGN    32'h00000001
`define ACCEL_ERR_DIM      32'h00000002
`define ACCEL_ERR_BUS      32'h00000004
`define ACCEL_ERR_STRIDE   32'h00000008   // a stride is shorter than its row

`endif
