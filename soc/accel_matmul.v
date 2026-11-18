`include "accel_matmul_defs.v"

//-----------------------------------------------------------------------------
// accel_matmul: DIM x DIM output-stationary systolic array with hardware tiling
//
//   C[M x N] = A[M x K] * B[K x N]   (int32, row-major, any M, N, K >= 1)
//
//   Rows may be padded: LDA / LDB / LDC give the distance in bytes between the
//   start of two rows (0 = dense). This also lets a job work on a sub-matrix.
//
// Tiling: the array can only compute a DIM x DIM block of C at a time, using
// at most MAX_K values of K. The engine therefore walks C in tiles:
//
//   for i0 = 0, DIM, 2*DIM ... < M          (row panel of C)
//     for j0 = 0, DIM, 2*DIM ... < N        (one C tile, kept in the PEs)
//       clear the PE accumulators
//       for k0 = 0, MAX_K, 2*MAX_K ... < K  (one K chunk, accumulated)
//         LOAD    A[i0.., k0..] and B[k0.., j0..] into a_mem / b_mem
//         COMPUTE the chunk (the PEs add it to what they already hold)
//       STORE   the finished C tile
//
//   Tiles at the right/bottom edge (and the last K chunk) can be smaller.
//
// Job flow (state_q):
//
//   IDLE --START--> SETUP --> LOAD --> COMPUTE --+--> STORE --+--> DONE
//                     ^                          |            |
//                     +---- next K chunk --------+            |
//                     +---- next tile ------------------------+
//
//   SETUP    One cycle. The loop counters already point at the new tile/chunk;
//            the load, compute and store engines take their start addresses
//            and sizes from them. The PE accumulators are cleared at the first
//            chunk of each tile.
//   LOAD     Read A then B into a_mem / b_mem using AXI INCR bursts. The read
//            *issuer* sends burst requests (AR) and the read *receiver* stores
//            returning data beats (R); they run independently so several
//            bursts can be in flight at once.
//            A-panel reuse: when K fits in one chunk, the A rows of a tile row
//            panel are the same for every tile in that panel, so they are only
//            loaded for the first tile (j0 = 0) and only B is loaded after.
//   COMPUTE  Stream the buffers through the PE array. PE(r,c) holds C[r][c];
//            A[r][k] and B[k][c] meet in PE(r,c) at compute step k + r + c.
//   STORE    Write the C tile back with AXI INCR bursts (AW, then its W beats),
//            then wait for every write response (B).
//
// AXI rules this module follows:
//   * A burst never crosses a 4 KB address boundary (AXI spec).
//   * Each write burst's AW is sent before its W data. The SoC arbiter and the
//     testbench memory model both depend on this.
//   * All reads use the same ID, so their data comes back in request order.
//-----------------------------------------------------------------------------
module accel_matmul
#(
     parameter DIM             = 4   // systolic array is DIM x DIM PEs
    ,parameter MAX_K           = DIM // K values held in the buffers per chunk
    ,parameter MAX_BURST       = 16  // max beats per AXI burst (1..256)
    ,parameter MAX_OUTSTANDING = 4   // max read bursts in flight (>= 1)
)
(
     input clk_i, input rst_i
    ,input cfg_awvalid_i, input [31:0] cfg_awaddr_i
    ,input cfg_wvalid_i, input [31:0] cfg_wdata_i, input [3:0] cfg_wstrb_i
    ,input cfg_bready_i, input cfg_arvalid_i, input [31:0] cfg_araddr_i
    ,input cfg_rready_i
    ,input m_awready_i, input m_wready_i, input m_bvalid_i
    ,input [1:0] m_bresp_i, input [3:0] m_bid_i
    ,input m_arready_i, input m_rvalid_i, input [31:0] m_rdata_i
    ,input [1:0] m_rresp_i, input [3:0] m_rid_i, input m_rlast_i

    ,output cfg_awready_o, output cfg_wready_o, output cfg_bvalid_o
    ,output [1:0] cfg_bresp_o, output cfg_arready_o, output cfg_rvalid_o
    ,output [31:0] cfg_rdata_o, output [1:0] cfg_rresp_o
    ,output m_awvalid_o, output [31:0] m_awaddr_o, output [3:0] m_awid_o
    ,output [7:0] m_awlen_o, output [1:0] m_awburst_o
    ,output m_wvalid_o, output [31:0] m_wdata_o, output [3:0] m_wstrb_o
    ,output m_wlast_o, output m_bready_o, output m_arvalid_o
    ,output [31:0] m_araddr_o, output [3:0] m_arid_o, output [7:0] m_arlen_o
    ,output [1:0] m_arburst_o, output m_rready_o, output intr_o
    ,output [31:0] status_o
);

//-----------------------------------------------------------------------------
// Constants
//-----------------------------------------------------------------------------
// Index widths for the DIM- and MAX_K-sized buffer dimensions
localparam DIW = (DIM   > 1) ? $clog2(DIM)   : 1;
localparam KIW = (MAX_K > 1) ? $clog2(MAX_K) : 1;
localparam PIW = (DIM*DIM > 1) ? $clog2(DIM*DIM) : 1;  // PE index width

// Sized versions of the parameters for comparisons and address arithmetic
localparam [15:0] DIM_U             = DIM;
localparam [15:0] MAX_K_U           = MAX_K;
localparam [15:0] MAX_BURST_U       = MAX_BURST;
localparam [7:0]  MAX_OUTSTANDING_U = MAX_OUTSTANDING;
localparam [31:0] DIM_32            = DIM;
localparam [31:0] MAX_K_32          = MAX_K;

// Last compute step: PE(DIM-1,DIM-1) sees k = K-1 at step (K-1) + 2*(DIM-1)
localparam [15:0] DRAIN_STEPS_U = 2*DIM - 3;

localparam [3:0] AXI_ID         = 4'hc;   // arbiter routes responses by ID[3:2]
localparam [1:0] AXI_BURST_INCR = 2'b01;

// Main state machine
localparam [2:0] STATE_IDLE    = 3'd0;
localparam [2:0] STATE_SETUP   = 3'd1;
localparam [2:0] STATE_LOAD    = 3'd2;
localparam [2:0] STATE_COMPUTE = 3'd3;
localparam [2:0] STATE_STORE   = 3'd4;
localparam [2:0] STATE_DONE    = 3'd5;

// Which matrix the read engine is working on
localparam MATRIX_A = 1'b0;
localparam MATRIX_B = 1'b1;

//-----------------------------------------------------------------------------
// burst_length: number of words in the next burst starting at start_addr.
//   The smallest of:
//     - the words left in the current matrix row
//     - MAX_BURST
//     - the words left before the next 4 KB boundary (AXI: bursts must not
//       cross one)
//-----------------------------------------------------------------------------
function [8:0] burst_length;
    input [31:0] start_addr;
    input [15:0] words_left_in_row;
    reg   [15:0] words_to_4kb_boundary;
    reg   [15:0] length;
    begin
        words_to_4kb_boundary = 16'd1024 - {6'b0, start_addr[11:2]};

        length = words_left_in_row;
        if (length > MAX_BURST_U)
            length = MAX_BURST_U;
        if (length > words_to_4kb_boundary)
            length = words_to_4kb_boundary;

        burst_length = length[8:0];
    end
endfunction

//-----------------------------------------------------------------------------
// Registers
//-----------------------------------------------------------------------------
reg [2:0]  state_q;

// Job configuration (written by the CPU)
reg [31:0] a_addr_q, b_addr_q, c_addr_q;
reg [15:0] m_q, n_q, k_q;
reg [31:0] lda_q, ldb_q, ldc_q;  // row strides in bytes, 0 = dense
reg        no_reuse_q;           // START was written with CTRL_NO_REUSE

// Status and performance counters
reg [31:0] error_q;
reg [31:0] cycle_q;          // all busy cycles
reg [31:0] mac_cycle_q;      // cycles in COMPUTE
reg [31:0] load_cycle_q;     // cycles in LOAD
reg [31:0] store_cycle_q;    // cycles in STORE
reg [31:0] tiles_done_q;     // C tiles stored
reg [31:0] words_read_q;     // R beats received (A + B words)
reg [31:0] words_written_q;  // W beats sent (C words)

// Compute step counter
reg [15:0] compute_step_q;

// Config-port (AXI-lite slave) handshake state
reg        cfg_bvalid_q, cfg_rvalid_q;
reg [31:0] cfg_rdata_q;
reg [31:0] cfg_read_value_r;

// Input buffers (no reset: only entries loaded for the current chunk are read)
reg signed [31:0] a_mem [0:DIM-1][0:MAX_K-1];   // A[row][k]
reg signed [31:0] b_mem [0:MAX_K-1][0:DIM-1];   // B[k][col]

// Array edge inputs and PE outputs (PE outputs flattened as [row*DIM + col])
reg  signed [31:0] a_feed [0:DIM-1];
reg  signed [31:0] b_feed [0:DIM-1];
wire signed [31:0] pe_a_w   [0:DIM*DIM-1];
wire signed [31:0] pe_b_w   [0:DIM*DIM-1];
wire signed [31:0] pe_acc_w [0:DIM*DIM-1];

integer row, col, feed_step, feed_k;

//-----------------------------------------------------------------------------
// Row strides actually used: the programmed value, or the row length when the
// CPU left it at 0 (dense matrix).
//-----------------------------------------------------------------------------
wire [31:0] a_row_stride_w = (lda_q == 32'd0) ? {14'b0, k_q, 2'b00} : lda_q;
wire [31:0] b_row_stride_w = (ldb_q == 32'd0) ? {14'b0, n_q, 2'b00} : ldb_q;
wire [31:0] c_row_stride_w = (ldc_q == 32'd0) ? {14'b0, n_q, 2'b00} : ldc_q;

//-----------------------------------------------------------------------------
// Job start and configuration checks
//-----------------------------------------------------------------------------
wire cfg_read_w  = cfg_arvalid_i && cfg_arready_o;
wire cfg_write_w = cfg_awvalid_i && cfg_awready_o;

wire start_request_w = cfg_write_w && (cfg_awaddr_i[7:0] == `ACCEL_CTRL) &&
                       cfg_wstrb_i[0] && cfg_wdata_i[`ACCEL_CTRL_START];

// Every dimension must be at least 1 (there is no upper limit any more)
wire dims_ok_w      = (m_q != 0) && (n_q != 0) && (k_q != 0);

// Addresses and strides must be word aligned
wire addresses_ok_w = ((a_addr_q[1:0] | b_addr_q[1:0] | c_addr_q[1:0] |
                        lda_q[1:0]    | ldb_q[1:0]    | ldc_q[1:0]) == 2'b00);

// A non-zero stride must be at least one row long, or rows would overlap
wire strides_ok_w   = (a_row_stride_w >= {14'b0, k_q, 2'b00}) &&
                      (b_row_stride_w >= {14'b0, n_q, 2'b00}) &&
                      (c_row_stride_w >= {14'b0, n_q, 2'b00});

wire engine_free_w  = (state_q == STATE_IDLE) || (state_q == STATE_DONE);

// A valid START: the tile loop counters reset on this pulse
wire job_start_w = start_request_w && engine_free_w &&
                   dims_ok_w && addresses_ok_w && strides_ok_w;

wire busy_w = (state_q != STATE_IDLE) && (state_q != STATE_DONE);

// High for the single SETUP cycle before each LOAD. The load, compute and
// store engines (re)start from the current tile on this cycle.
wire tile_setup_w = (state_q == STATE_SETUP);

//=============================================================================
// TILE LOOP
//=============================================================================

//-----------------------------------------------------------------------------
// Loop counters (element indices of the current tile's top-left corner) and
// running base addresses. The addresses are only ever *added to*, so no
// multiplier by a run-time value is needed:
//   a_panel_addr_q  = &A[i0][0]   (+ DIM rows of A per row panel)
//   c_panel_addr_q  = &C[i0][0]   (+ DIM rows of C per row panel)
//   b_chunk_addr_q  = &B[k0][0]   (+ MAX_K rows of B per K chunk)
//-----------------------------------------------------------------------------
reg [15:0] tile_i0_q;        // first C row of the tile
reg [15:0] tile_j0_q;        // first C column of the tile
reg [15:0] tile_k0_q;        // first K index of the chunk
reg [31:0] a_panel_addr_q;
reg [31:0] c_panel_addr_q;
reg [31:0] b_chunk_addr_q;

// Size of the current tile/chunk: a full DIM (or MAX_K), or whatever is
// left at the matrix edge
wire [15:0] rows_left_w  = m_q - tile_i0_q;
wire [15:0] cols_left_w  = n_q - tile_j0_q;
wire [15:0] k_left_w     = k_q - tile_k0_q;

wire [15:0] tile_m_w = (rows_left_w > DIM_U)   ? DIM_U   : rows_left_w;
wire [15:0] tile_n_w = (cols_left_w > DIM_U)   ? DIM_U   : cols_left_w;
wire [15:0] tile_k_w = (k_left_w    > MAX_K_U) ? MAX_K_U : k_left_w;

// Is there more work after the current chunk / tile / row panel?
wire more_k_chunks_w   = (k_left_w    > MAX_K_U);
wire more_col_tiles_w  = (cols_left_w > DIM_U);
wire more_row_panels_w = (rows_left_w > DIM_U);

// Where the current tile starts in memory
wire [31:0] a_tile_addr_w = a_panel_addr_q + {14'b0, tile_k0_q, 2'b00};  // &A[i0][k0]
wire [31:0] b_tile_addr_w = b_chunk_addr_q + {14'b0, tile_j0_q, 2'b00};  // &B[k0][j0]
wire [31:0] c_tile_addr_w = c_panel_addr_q + {14'b0, tile_j0_q, 2'b00};  // &C[i0][j0]

// A-panel reuse: with a single K chunk, a_mem still holds A[i0..][0..K-1]
// from the previous tile of this row panel, so only B has to be loaded.
wire single_k_chunk_w = (k_q <= MAX_K_U);
wire reuse_a_panel_w  = single_k_chunk_w && (tile_j0_q != 16'd0) && !no_reuse_q;

// Loop steps (decided at the end of COMPUTE / STORE, see below)
wire compute_complete_w;
wire store_complete_w;
wire next_k_chunk_w = compute_complete_w && more_k_chunks_w;
wire last_tile_w    = !more_col_tiles_w && !more_row_panels_w;
wire next_tile_w    = store_complete_w && !last_tile_w;

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    tile_i0_q      <= 16'd0;
    tile_j0_q      <= 16'd0;
    tile_k0_q      <= 16'd0;
    a_panel_addr_q <= 32'd0;
    c_panel_addr_q <= 32'd0;
    b_chunk_addr_q <= 32'd0;
end
else if (job_start_w)
begin
    // First tile: top-left corner of C, first K chunk
    tile_i0_q      <= 16'd0;
    tile_j0_q      <= 16'd0;
    tile_k0_q      <= 16'd0;
    a_panel_addr_q <= a_addr_q;
    c_panel_addr_q <= c_addr_q;
    b_chunk_addr_q <= b_addr_q;
end
else if (next_k_chunk_w)
begin
    // Same C tile, next MAX_K values of K
    tile_k0_q      <= tile_k0_q + MAX_K_U;
    b_chunk_addr_q <= b_chunk_addr_q + b_row_stride_w * MAX_K_32;
end
else if (next_tile_w)
begin
    // New C tile: start again from the first K chunk
    tile_k0_q      <= 16'd0;
    b_chunk_addr_q <= b_addr_q;

    if (more_col_tiles_w)
        // Next tile to the right
        tile_j0_q <= tile_j0_q + DIM_U;
    else
    begin
        // End of the row panel: back to the left edge, DIM rows further down
        tile_j0_q      <= 16'd0;
        tile_i0_q      <= tile_i0_q + DIM_U;
        a_panel_addr_q <= a_panel_addr_q + a_row_stride_w * DIM_32;
        c_panel_addr_q <= c_panel_addr_q + c_row_stride_w * DIM_32;
    end
end

//=============================================================================
// READ ENGINE (state LOAD)
//=============================================================================

//-----------------------------------------------------------------------------
// Read issuer: walks the A tile row by row, then the B tile row by row, and
// sends one AR burst per row segment. It stops while MAX_OUTSTANDING bursts
// are in flight. Consecutive rows are one stride apart in memory.
//-----------------------------------------------------------------------------
reg        rd_issue_matrix_q;    // MATRIX_A or MATRIX_B
reg [15:0] rd_issue_row_q;       // row being requested
reg [15:0] rd_issue_col_q;       // first word of the next burst within the row
reg [31:0] rd_issue_addr_q;      // memory address of the next burst
reg [31:0] rd_issue_row_addr_q;  // memory address of the current row's start
reg        rd_issue_done_q;      // every burst of the tile has been requested
reg [7:0]  rd_bursts_in_flight_q;

// Row geometry of the tile being requested: A tile is tile_m x tile_k,
// B tile is tile_k x tile_n
wire [15:0] rd_issue_row_words_w = (rd_issue_matrix_q == MATRIX_A) ? tile_k_w : tile_n_w;
wire [15:0] rd_issue_row_count_w = (rd_issue_matrix_q == MATRIX_A) ? tile_m_w : tile_k_w;
wire [31:0] rd_issue_stride_w    = (rd_issue_matrix_q == MATRIX_A) ? a_row_stride_w
                                                                   : b_row_stride_w;

wire [8:0]  rd_burst_len_w = burst_length(rd_issue_addr_q,
                                          rd_issue_row_words_w - rd_issue_col_q);

wire rd_burst_ends_row_w    = (rd_issue_col_q + {7'b0, rd_burst_len_w}) == rd_issue_row_words_w;
wire rd_burst_ends_matrix_w = rd_burst_ends_row_w &&
                              (rd_issue_row_q == rd_issue_row_count_w - 16'd1);

// Start address of the next row
wire [31:0] rd_next_row_addr_w = rd_issue_row_addr_q + rd_issue_stride_w;

assign m_arvalid_o  = (state_q == STATE_LOAD) && !rd_issue_done_q &&
                      (rd_bursts_in_flight_q < MAX_OUTSTANDING_U);
assign m_araddr_o   = rd_issue_addr_q;
assign m_arlen_o    = rd_burst_len_w[7:0] - 8'd1;   // AXI length is beats - 1
assign m_arid_o     = AXI_ID;
assign m_arburst_o  = AXI_BURST_INCR;

wire rd_burst_sent_w = m_arvalid_o && m_arready_i;

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    rd_issue_matrix_q   <= MATRIX_A;
    rd_issue_row_q      <= 16'd0;
    rd_issue_col_q      <= 16'd0;
    rd_issue_addr_q     <= 32'd0;
    rd_issue_row_addr_q <= 32'd0;
    rd_issue_done_q     <= 1'b0;
end
else if (tile_setup_w)
begin
    // Start with A, or go straight to B when the A panel is reused
    rd_issue_matrix_q   <= reuse_a_panel_w ? MATRIX_B : MATRIX_A;
    rd_issue_row_q      <= 16'd0;
    rd_issue_col_q      <= 16'd0;
    rd_issue_addr_q     <= reuse_a_panel_w ? b_tile_addr_w : a_tile_addr_w;
    rd_issue_row_addr_q <= reuse_a_panel_w ? b_tile_addr_w : a_tile_addr_w;
    rd_issue_done_q     <= 1'b0;
end
else if (rd_burst_sent_w)
begin
    if (!rd_burst_ends_row_w)
    begin
        // Rest of the same row: it continues right after this burst
        rd_issue_col_q  <= rd_issue_col_q + {7'b0, rd_burst_len_w};
        rd_issue_addr_q <= rd_issue_addr_q + {21'b0, rd_burst_len_w, 2'b00};
    end
    else if (!rd_burst_ends_matrix_w)
    begin
        // Next row starts one stride after the start of this row
        rd_issue_col_q      <= 16'd0;
        rd_issue_row_q      <= rd_issue_row_q + 16'd1;
        rd_issue_addr_q     <= rd_next_row_addr_w;
        rd_issue_row_addr_q <= rd_next_row_addr_w;
    end
    else if (rd_issue_matrix_q == MATRIX_A)
    begin
        // Finished requesting the A tile: continue with the B tile
        rd_issue_matrix_q   <= MATRIX_B;
        rd_issue_row_q      <= 16'd0;
        rd_issue_col_q      <= 16'd0;
        rd_issue_addr_q     <= b_tile_addr_w;
        rd_issue_row_addr_q <= b_tile_addr_w;
    end
    else
        rd_issue_done_q <= 1'b1;
end

//-----------------------------------------------------------------------------
// Read receiver: accepts one data beat per cycle and writes it into a_mem,
// then b_mem, in the same row/column order the issuer requested it.
//-----------------------------------------------------------------------------
reg        rd_recv_matrix_q;     // MATRIX_A or MATRIX_B
reg [15:0] rd_recv_row_q;
reg [15:0] rd_recv_col_q;

wire [15:0] rd_recv_row_words_w = (rd_recv_matrix_q == MATRIX_A) ? tile_k_w : tile_n_w;
wire [15:0] rd_recv_row_count_w = (rd_recv_matrix_q == MATRIX_A) ? tile_m_w : tile_k_w;

wire rd_recv_row_end_w    = (rd_recv_col_q == rd_recv_row_words_w - 16'd1);
wire rd_recv_matrix_end_w = rd_recv_row_end_w &&
                            (rd_recv_row_q == rd_recv_row_count_w - 16'd1);

assign m_rready_o = (state_q == STATE_LOAD);

wire rd_beat_w           = m_rvalid_i && m_rready_o;
wire rd_burst_finished_w = rd_beat_w && m_rlast_i;
wire rd_bus_error_w      = rd_beat_w && (m_rresp_i != 2'b00);

// The last word of the B tile has arrived: this load is complete
wire load_complete_w = rd_beat_w && rd_recv_matrix_end_w &&
                       (rd_recv_matrix_q == MATRIX_B);

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    rd_recv_matrix_q <= MATRIX_A;
    rd_recv_row_q    <= 16'd0;
    rd_recv_col_q    <= 16'd0;
end
else if (tile_setup_w)
begin
    // Must match the issuer: A is skipped when the A panel is reused
    rd_recv_matrix_q <= reuse_a_panel_w ? MATRIX_B : MATRIX_A;
    rd_recv_row_q    <= 16'd0;
    rd_recv_col_q    <= 16'd0;
end
else if (rd_beat_w)
begin
    if (!rd_recv_row_end_w)
        rd_recv_col_q <= rd_recv_col_q + 16'd1;
    else if (!rd_recv_matrix_end_w)
    begin
        rd_recv_col_q <= 16'd0;
        rd_recv_row_q <= rd_recv_row_q + 16'd1;
    end
    else
    begin
        // End of A: following beats belong to B
        rd_recv_matrix_q <= MATRIX_B;
        rd_recv_row_q    <= 16'd0;
        rd_recv_col_q    <= 16'd0;
    end
end

// Store each received word in its buffer (kept in a separate block without
// reset so the buffers can be mapped to plain registers/RAM)
always @(posedge clk_i)
if (rd_beat_w)
begin
    if (rd_recv_matrix_q == MATRIX_A)
        a_mem[rd_recv_row_q[DIW-1:0]][rd_recv_col_q[KIW-1:0]] <= m_rdata_i;
    else
        b_mem[rd_recv_row_q[KIW-1:0]][rd_recv_col_q[DIW-1:0]] <= m_rdata_i;
end

//-----------------------------------------------------------------------------
// Read bursts in flight: +1 when a burst is requested, -1 when its last beat
// arrives. Both can happen in the same cycle.
//-----------------------------------------------------------------------------
always @(posedge clk_i or posedge rst_i)
if (rst_i)
    rd_bursts_in_flight_q <= 8'd0;
else if (job_start_w)
    rd_bursts_in_flight_q <= 8'd0;
else if (rd_burst_sent_w && !rd_burst_finished_w)
    rd_bursts_in_flight_q <= rd_bursts_in_flight_q + 8'd1;
else if (!rd_burst_sent_w && rd_burst_finished_w)
    rd_bursts_in_flight_q <= rd_bursts_in_flight_q - 8'd1;

//=============================================================================
// COMPUTE
//=============================================================================

//-----------------------------------------------------------------------------
// Skewed feed into the array edges at compute step s:
//   row r gets A[r][s-r], column c gets B[s-c][c] (zero outside 0..tile_k-1)
//-----------------------------------------------------------------------------
always @*
begin
    feed_step = {16'b0, compute_step_q};

    for (row = 0; row < DIM; row = row + 1)
    begin
        feed_k = feed_step - row;
        a_feed[row] = 0;
        if ((feed_step >= row) && (feed_k < {16'b0, tile_k_w}))
            a_feed[row] = a_mem[row][feed_k[KIW-1:0]];
    end

    for (col = 0; col < DIM; col = col + 1)
    begin
        feed_k = feed_step - col;
        b_feed[col] = 0;
        if ((feed_step >= col) && (feed_k < {16'b0, tile_k_w}))
            b_feed[col] = b_mem[feed_k[KIW-1:0]][col];
    end
end

assign compute_complete_w = (state_q == STATE_COMPUTE) &&
                            (compute_step_q == tile_k_w + DRAIN_STEPS_U);

always @(posedge clk_i or posedge rst_i)
if (rst_i)
    compute_step_q <= 16'd0;
else if (tile_setup_w)
    compute_step_q <= 16'd0;
else if ((state_q == STATE_COMPUTE) && !compute_complete_w)
    compute_step_q <= compute_step_q + 16'd1;

//=============================================================================
// WRITE ENGINE (state STORE)
//=============================================================================

//-----------------------------------------------------------------------------
// Writes the C tile row by row. For each burst: send AW, then stream its W
// beats. The next burst's AW goes out right after the last W beat; write
// responses (B) are counted and not waited for until the end of the tile.
//-----------------------------------------------------------------------------
reg        wr_sending_data_q;    // 0: sending AW, 1: sending W beats
reg [15:0] wr_row_q;             // C element (within the tile) of the next W beat
reg [15:0] wr_col_q;
reg [31:0] wr_addr_q;            // memory address of the next burst
reg [31:0] wr_row_addr_q;        // memory address of the current row's start
reg [8:0]  wr_beats_left_q;      // W beats left in the current burst
reg        wr_all_data_sent_q;   // last W beat of the tile has been sent
reg [15:0] wr_responses_pending_q; // bursts still waiting for their B

wire [8:0] wr_burst_len_w = burst_length(wr_addr_q, tile_n_w - wr_col_q);

// Does the burst being requested on AW reach the end of its row?
wire wr_burst_ends_row_w = (wr_col_q + {7'b0, wr_burst_len_w}) == tile_n_w;

wire wr_row_end_w      = (wr_col_q == tile_n_w - 16'd1);
wire wr_last_element_w = wr_row_end_w && (wr_row_q == tile_m_w - 16'd1);

// PE holding the C element of the current W beat
wire [15:0] wr_pe_index_w = wr_row_q * DIM_U + wr_col_q;

assign m_awvalid_o = (state_q == STATE_STORE) && !wr_sending_data_q &&
                     !wr_all_data_sent_q;
assign m_awaddr_o  = wr_addr_q;
assign m_awlen_o   = wr_burst_len_w[7:0] - 8'd1;   // AXI length is beats - 1
assign m_awid_o    = AXI_ID;
assign m_awburst_o = AXI_BURST_INCR;

assign m_wvalid_o  = (state_q == STATE_STORE) && wr_sending_data_q;
assign m_wdata_o   = pe_acc_w[wr_pe_index_w[PIW-1:0]];
assign m_wstrb_o   = 4'hf;
assign m_wlast_o   = (wr_beats_left_q == 9'd1);

assign m_bready_o  = (state_q == STATE_STORE);

wire wr_burst_started_w  = m_awvalid_o && m_awready_i;
wire wr_beat_w           = m_wvalid_o && m_wready_i;
wire wr_response_w       = m_bvalid_i && m_bready_o;
wire wr_bus_error_w      = wr_response_w && (m_bresp_i != 2'b00);

// Every W beat of the tile sent and every B response received
assign store_complete_w = (state_q == STATE_STORE) && wr_all_data_sent_q &&
                          (wr_responses_pending_q == 16'd0);

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    wr_sending_data_q  <= 1'b0;
    wr_row_q           <= 16'd0;
    wr_col_q           <= 16'd0;
    wr_addr_q          <= 32'd0;
    wr_row_addr_q      <= 32'd0;
    wr_beats_left_q    <= 9'd0;
    wr_all_data_sent_q <= 1'b0;
end
else if (tile_setup_w)
begin
    wr_sending_data_q  <= 1'b0;
    wr_row_q           <= 16'd0;
    wr_col_q           <= 16'd0;
    wr_addr_q          <= c_tile_addr_w;
    wr_row_addr_q      <= c_tile_addr_w;
    wr_beats_left_q    <= 9'd0;
    wr_all_data_sent_q <= 1'b0;
end
else if (wr_burst_started_w)
begin
    // AW accepted: send this burst's data next
    wr_sending_data_q <= 1'b1;
    wr_beats_left_q   <= wr_burst_len_w;

    // Address of the following burst: the rest of this row, or the start of
    // the next row (one stride further on)
    if (wr_burst_ends_row_w)
    begin
        wr_addr_q     <= wr_row_addr_q + c_row_stride_w;
        wr_row_addr_q <= wr_row_addr_q + c_row_stride_w;
    end
    else
        wr_addr_q <= wr_addr_q + {21'b0, wr_burst_len_w, 2'b00};
end
else if (wr_beat_w)
begin
    wr_beats_left_q <= wr_beats_left_q - 9'd1;

    // Last beat of this burst: next cycle sends the next AW
    if (m_wlast_o)
        wr_sending_data_q <= 1'b0;

    if (wr_last_element_w)
        wr_all_data_sent_q <= 1'b1;
    else if (wr_row_end_w)
    begin
        wr_col_q <= 16'd0;
        wr_row_q <= wr_row_q + 16'd1;
    end
    else
        wr_col_q <= wr_col_q + 16'd1;
end

//-----------------------------------------------------------------------------
// Write responses pending: +1 per AW sent, -1 per B received
//-----------------------------------------------------------------------------
always @(posedge clk_i or posedge rst_i)
if (rst_i)
    wr_responses_pending_q <= 16'd0;
else if (job_start_w)
    wr_responses_pending_q <= 16'd0;
else if (wr_burst_started_w && !wr_response_w)
    wr_responses_pending_q <= wr_responses_pending_q + 16'd1;
else if (!wr_burst_started_w && wr_response_w)
    wr_responses_pending_q <= wr_responses_pending_q - 16'd1;

//=============================================================================
// MAIN STATE MACHINE, ERRORS AND COUNTERS
//=============================================================================
always @(posedge clk_i or posedge rst_i)
if (rst_i)
    state_q <= STATE_IDLE;
else if (job_start_w)
    state_q <= STATE_SETUP;
else
    case (state_q)
    STATE_SETUP:   state_q <= STATE_LOAD;
    STATE_LOAD:    if (load_complete_w) state_q <= STATE_COMPUTE;
    STATE_COMPUTE:
        if (compute_complete_w)
            // More K to add into this tile? Otherwise write the tile out
            state_q <= more_k_chunks_w ? STATE_SETUP : STATE_STORE;
    STATE_STORE:
        if (store_complete_w)
            state_q <= last_tile_w ? STATE_DONE : STATE_SETUP;
    default: ;
    endcase

// Why a START was rejected (checked in this order)
wire [31:0] start_error_w = !addresses_ok_w ? `ACCEL_ERR_ALIGN  :
                            !dims_ok_w      ? `ACCEL_ERR_DIM    :
                                              `ACCEL_ERR_STRIDE;

// Errors: a rejected START reports why; bus errors are recorded but the job
// still runs to completion so the engine always returns to DONE. A START
// while busy is ignored.
always @(posedge clk_i or posedge rst_i)
if (rst_i)
    error_q <= 32'd0;
else if (job_start_w)
    error_q <= 32'd0;
else if (start_request_w && engine_free_w)   // START rejected
    error_q <= start_error_w;
else if (rd_bus_error_w || wr_bus_error_w)
    error_q <= `ACCEL_ERR_BUS;

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    cycle_q         <= 32'd0;
    mac_cycle_q     <= 32'd0;
    load_cycle_q    <= 32'd0;
    store_cycle_q   <= 32'd0;
    tiles_done_q    <= 32'd0;
    words_read_q    <= 32'd0;
    words_written_q <= 32'd0;
end
else if (job_start_w)
begin
    cycle_q         <= 32'd0;
    mac_cycle_q     <= 32'd0;
    load_cycle_q    <= 32'd0;
    store_cycle_q   <= 32'd0;
    tiles_done_q    <= 32'd0;
    words_read_q    <= 32'd0;
    words_written_q <= 32'd0;
end
else
begin
    if (busy_w)                      cycle_q         <= cycle_q + 32'd1;
    if (state_q == STATE_COMPUTE)    mac_cycle_q     <= mac_cycle_q + 32'd1;
    if (state_q == STATE_LOAD)       load_cycle_q    <= load_cycle_q + 32'd1;
    if (state_q == STATE_STORE)      store_cycle_q   <= store_cycle_q + 32'd1;
    if (store_complete_w)            tiles_done_q    <= tiles_done_q + 32'd1;
    if (rd_beat_w)                   words_read_q    <= words_read_q + 32'd1;
    if (wr_beat_w)                   words_written_q <= words_written_q + 32'd1;
end

assign intr_o   = 1'b0;
assign status_o = {29'b0, (error_q != 0), (state_q == STATE_DONE), busy_w};

//=============================================================================
// CONFIG PORT (AXI-lite slave, CPU side)
//=============================================================================
assign cfg_awready_o = !cfg_bvalid_q && !cfg_arvalid_i;
assign cfg_wready_o  = cfg_awready_o;
assign cfg_bvalid_o  = cfg_bvalid_q;
assign cfg_bresp_o   = 2'b00;
assign cfg_arready_o = !cfg_rvalid_q;
assign cfg_rvalid_o  = cfg_rvalid_q;
assign cfg_rdata_o   = cfg_rdata_q;
assign cfg_rresp_o   = 2'b00;

always @*
begin
    cfg_read_value_r = 32'd0;
    case (cfg_araddr_i[7:0])
    `ACCEL_STATUS:
    begin
        cfg_read_value_r[`ACCEL_STATUS_BUSY]  = busy_w;
        cfg_read_value_r[`ACCEL_STATUS_DONE]  = (state_q == STATE_DONE);
        cfg_read_value_r[`ACCEL_STATUS_ERROR] = (error_q != 0);
    end
    `ACCEL_A_ADDR:    cfg_read_value_r = a_addr_q;
    `ACCEL_B_ADDR:    cfg_read_value_r = b_addr_q;
    `ACCEL_C_ADDR:    cfg_read_value_r = c_addr_q;
    `ACCEL_M:         cfg_read_value_r = {16'b0, m_q};
    `ACCEL_N:         cfg_read_value_r = {16'b0, n_q};
    `ACCEL_K:         cfg_read_value_r = {16'b0, k_q};
    `ACCEL_CYC:       cfg_read_value_r = cycle_q;
    `ACCEL_MAC_CYC:   cfg_read_value_r = mac_cycle_q;
    `ACCEL_ERR:       cfg_read_value_r = error_q;
    `ACCEL_CFG:       cfg_read_value_r = {MAX_K_U, DIM_U};
    `ACCEL_LDA:       cfg_read_value_r = lda_q;
    `ACCEL_LDB:       cfg_read_value_r = ldb_q;
    `ACCEL_LDC:       cfg_read_value_r = ldc_q;
    `ACCEL_TILES:     cfg_read_value_r = tiles_done_q;
    `ACCEL_LOAD_CYC:  cfg_read_value_r = load_cycle_q;
    `ACCEL_STORE_CYC: cfg_read_value_r = store_cycle_q;
    `ACCEL_RD_WORDS:  cfg_read_value_r = words_read_q;
    `ACCEL_WR_WORDS:  cfg_read_value_r = words_written_q;
    default: ;
    endcase
end

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    cfg_bvalid_q <= 1'b0;
    cfg_rvalid_q <= 1'b0;
    cfg_rdata_q  <= 32'd0;
    a_addr_q <= 32'd0; b_addr_q <= 32'd0; c_addr_q <= 32'd0;
    m_q <= 16'd0; n_q <= 16'd0; k_q <= 16'd0;
    lda_q <= 32'd0; ldb_q <= 32'd0; ldc_q <= 32'd0;
    no_reuse_q <= 1'b0;
end
else
begin
    if (cfg_write_w)       cfg_bvalid_q <= 1'b1;
    else if (cfg_bready_i) cfg_bvalid_q <= 1'b0;

    if (cfg_read_w)        cfg_rvalid_q <= 1'b1;
    else if (cfg_rready_i) cfg_rvalid_q <= 1'b0;

    if (cfg_read_w)
        cfg_rdata_q <= cfg_read_value_r;

    if (job_start_w)
        no_reuse_q <= cfg_wdata_i[`ACCEL_CTRL_NO_REUSE];

    if (cfg_write_w)
        case (cfg_awaddr_i[7:0])
        `ACCEL_A_ADDR: a_addr_q <= cfg_wdata_i;
        `ACCEL_B_ADDR: b_addr_q <= cfg_wdata_i;
        `ACCEL_C_ADDR: c_addr_q <= cfg_wdata_i;
        `ACCEL_M:      m_q      <= cfg_wdata_i[15:0];
        `ACCEL_N:      n_q      <= cfg_wdata_i[15:0];
        `ACCEL_K:      k_q      <= cfg_wdata_i[15:0];
        `ACCEL_LDA:    lda_q    <= cfg_wdata_i;
        `ACCEL_LDB:    ldb_q    <= cfg_wdata_i;
        `ACCEL_LDC:    ldc_q    <= cfg_wdata_i;
        default: ;
        endcase
end

//=============================================================================
// PE ARRAY: DIM x DIM grid. A flows left -> right, B flows top -> bottom.
//=============================================================================
// SETUP before the first K chunk of a tile: start the tile from zero.
// SETUP before any later chunk: keep the accumulators (they hold the partial
// sums of this tile) but empty the A/B pass-through registers.
wire pe_clear_acc_w  = tile_setup_w && (tile_k0_q == 16'd0);
wire pe_clear_pipe_w = tile_setup_w;
wire pe_enable_w     = (state_q == STATE_COMPUTE);

genvar gr, gc;
generate
for (gr = 0; gr < DIM; gr = gr + 1) begin : g_row
    for (gc = 0; gc < DIM; gc = gc + 1) begin : g_col
        localparam [15:0] ROW_U = gr;
        localparam [15:0] COL_U = gc;
        wire signed [31:0] a_in_w;
        wire signed [31:0] b_in_w;

        // Left column takes A from the feed, others from the PE to the left
        if (gc == 0) begin : g_a_edge
            assign a_in_w = a_feed[gr];
        end else begin : g_a_link
            assign a_in_w = pe_a_w[gr*DIM + gc - 1];
        end

        // Top row takes B from the feed, others from the PE above
        if (gr == 0) begin : g_b_edge
            assign b_in_w = b_feed[gc];
        end else begin : g_b_link
            assign b_in_w = pe_b_w[(gr-1)*DIM + gc];
        end

        accel_pe u_pe
        (
             .clk_i(clk_i)
            ,.rst_i(rst_i)
            ,.clear_acc_i(pe_clear_acc_w)
            ,.clear_pipe_i(pe_clear_pipe_w)
            ,.en_i(pe_enable_w)
            // PEs outside the current tile only pass data through
            ,.valid_i((ROW_U < tile_m_w) && (COL_U < tile_n_w))
            ,.a_i(a_in_w)
            ,.b_i(b_in_w)
            ,.a_o(pe_a_w[gr*DIM + gc])
            ,.b_o(pe_b_w[gr*DIM + gc])
            ,.acc_o(pe_acc_w[gr*DIM + gc])
        );
    end
end
endgenerate

endmodule

//-----------------------------------------------------------------------------
// accel_pe: one output-stationary MAC cell.
//   Each enabled cycle: acc += a_i * b_i (only if valid_i), and a_i/b_i are
//   registered to a_o/b_o for the right/lower neighbour.
//   clear_acc_i  zeroes the accumulator and the pass-through registers
//                (start of a new C tile).
//   clear_pipe_i zeroes only the pass-through registers (start of a new K
//                chunk of the same tile: the accumulator keeps its sum).
//-----------------------------------------------------------------------------
module accel_pe
(
     input                clk_i
    ,input                rst_i
    ,input                clear_acc_i
    ,input                clear_pipe_i
    ,input                en_i
    ,input                valid_i
    ,input  signed [31:0] a_i
    ,input  signed [31:0] b_i
    ,output signed [31:0] a_o
    ,output signed [31:0] b_o
    ,output signed [31:0] acc_o
);

reg signed [31:0] a_q, b_q, acc_q;

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    a_q <= 0; b_q <= 0; acc_q <= 0;
end
else if (clear_acc_i)
begin
    a_q <= 0; b_q <= 0; acc_q <= 0;
end
else if (clear_pipe_i)
begin
    a_q <= 0; b_q <= 0;
end
else if (en_i)
begin
    if (valid_i)
        acc_q <= acc_q + a_i * b_i;
    a_q <= a_i;
    b_q <= b_i;
end

assign a_o   = a_q;
assign b_o   = b_q;
assign acc_o = acc_q;

endmodule
