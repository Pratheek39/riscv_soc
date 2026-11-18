`include "accel_matmul_defs.v"

//-----------------------------------------------------------------------------
// accel_matmul: DIM x DIM output-stationary systolic array
//
//   C[M x N] = A[M x K] * B[K x N], 1 <= M,N <= DIM, 1 <= K <= MAX_K
//   A, B, C are dense row-major int32 matrices in memory.
//
// Job flow (state_q):
//
//   IDLE --START--> LOAD --> COMPUTE --> STORE --> DONE
//
//   LOAD     Read A then B into the on-chip buffers a_mem / b_mem using AXI
//            INCR bursts. The read *issuer* sends burst requests (AR) and the
//            read *receiver* stores returning data beats (R); they run
//            independently so several bursts can be in flight at once.
//   COMPUTE  Stream the buffers through the PE array. PE(r,c) holds C[r][c];
//            A[r][k] and B[k][c] meet in PE(r,c) at compute step k + r + c.
//   STORE    Write C back with AXI INCR bursts (AW, then its W beats), then
//            wait for every write response (B).
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
    ,parameter MAX_K           = DIM // max inner dimension held in the buffers
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

// 16-bit versions of the parameters for comparisons with 16-bit registers
localparam [15:0] DIM_U             = DIM;
localparam [15:0] MAX_K_U           = MAX_K;
localparam [15:0] MAX_BURST_U       = MAX_BURST;
localparam [7:0]  MAX_OUTSTANDING_U = MAX_OUTSTANDING;

// Last compute step: PE(DIM-1,DIM-1) sees k = K-1 at step (K-1) + 2*(DIM-1)
localparam [15:0] DRAIN_STEPS_U = 2*DIM - 3;

localparam [3:0] AXI_ID         = 4'hc;   // arbiter routes responses by ID[3:2]
localparam [1:0] AXI_BURST_INCR = 2'b01;

// Main state machine
localparam [2:0] STATE_IDLE    = 3'd0;
localparam [2:0] STATE_LOAD    = 3'd1;
localparam [2:0] STATE_COMPUTE = 3'd2;
localparam [2:0] STATE_STORE   = 3'd3;
localparam [2:0] STATE_DONE    = 3'd4;

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

// Status and performance counters
reg [31:0] error_q;
reg [31:0] cycle_q;          // all busy cycles
reg [31:0] mac_cycle_q;      // cycles in COMPUTE
reg [31:0] load_cycle_q;     // cycles in LOAD
reg [31:0] store_cycle_q;    // cycles in STORE

// Compute step counter
reg [15:0] compute_step_q;

// Config-port (AXI-lite slave) handshake state
reg        cfg_bvalid_q, cfg_rvalid_q;
reg [31:0] cfg_rdata_q;
reg [31:0] cfg_read_value_r;

// Input buffers (no reset: only entries loaded for the current job are read)
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
// Job start
//-----------------------------------------------------------------------------
wire cfg_read_w  = cfg_arvalid_i && cfg_arready_o;
wire cfg_write_w = cfg_awvalid_i && cfg_awready_o;

wire start_request_w = cfg_write_w && (cfg_awaddr_i[7:0] == `ACCEL_CTRL) &&
                       cfg_wstrb_i[0] && cfg_wdata_i[`ACCEL_CTRL_START];

wire dims_ok_w      = (m_q != 0) && (m_q <= DIM_U) &&
                      (n_q != 0) && (n_q <= DIM_U) &&
                      (k_q != 0) && (k_q <= MAX_K_U);
wire addresses_ok_w = ((a_addr_q[1:0] | b_addr_q[1:0] | c_addr_q[1:0]) == 0);
wire engine_free_w  = (state_q == STATE_IDLE) || (state_q == STATE_DONE);

// A valid START: every engine below resets its counters on this pulse
wire job_start_w = start_request_w && dims_ok_w && addresses_ok_w && engine_free_w;

wire busy_w = (state_q != STATE_IDLE) && (state_q != STATE_DONE);

//=============================================================================
// READ ENGINE (state LOAD)
//=============================================================================

//-----------------------------------------------------------------------------
// Read issuer: walks A row by row, then B row by row, and sends one AR burst
// per row segment. It stops while MAX_OUTSTANDING bursts are in flight.
//-----------------------------------------------------------------------------
reg        rd_issue_matrix_q;    // MATRIX_A or MATRIX_B
reg [15:0] rd_issue_row_q;       // row being requested
reg [15:0] rd_issue_col_q;       // first word of the next burst within the row
reg [31:0] rd_issue_addr_q;      // memory address of the next burst
reg        rd_issue_done_q;      // every burst of A and B has been requested
reg [7:0]  rd_bursts_in_flight_q;

// Row geometry of the matrix being requested: A is M x K, B is K x N
wire [15:0] rd_issue_row_words_w = (rd_issue_matrix_q == MATRIX_A) ? k_q : n_q;
wire [15:0] rd_issue_row_count_w = (rd_issue_matrix_q == MATRIX_A) ? m_q : k_q;

wire [8:0]  rd_burst_len_w = burst_length(rd_issue_addr_q,
                                          rd_issue_row_words_w - rd_issue_col_q);

wire rd_burst_ends_row_w    = (rd_issue_col_q + {7'b0, rd_burst_len_w}) == rd_issue_row_words_w;
wire rd_burst_ends_matrix_w = rd_burst_ends_row_w &&
                              (rd_issue_row_q == rd_issue_row_count_w - 16'd1);

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
    rd_issue_matrix_q <= MATRIX_A;
    rd_issue_row_q    <= 16'd0;
    rd_issue_col_q    <= 16'd0;
    rd_issue_addr_q   <= 32'd0;
    rd_issue_done_q   <= 1'b0;
end
else if (job_start_w)
begin
    rd_issue_matrix_q <= MATRIX_A;
    rd_issue_row_q    <= 16'd0;
    rd_issue_col_q    <= 16'd0;
    rd_issue_addr_q   <= a_addr_q;
    rd_issue_done_q   <= 1'b0;
end
else if (rd_burst_sent_w)
begin
    // Matrices are dense, so the next word is always at the next address
    // (except when switching from A to B)
    rd_issue_addr_q <= rd_issue_addr_q + {21'b0, rd_burst_len_w, 2'b00};

    if (!rd_burst_ends_row_w)
        rd_issue_col_q <= rd_issue_col_q + {7'b0, rd_burst_len_w};
    else if (!rd_burst_ends_matrix_w)
    begin
        rd_issue_col_q <= 16'd0;
        rd_issue_row_q <= rd_issue_row_q + 16'd1;
    end
    else if (rd_issue_matrix_q == MATRIX_A)
    begin
        // Finished requesting A: continue with B
        rd_issue_matrix_q <= MATRIX_B;
        rd_issue_row_q    <= 16'd0;
        rd_issue_col_q    <= 16'd0;
        rd_issue_addr_q   <= b_addr_q;
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

wire [15:0] rd_recv_row_words_w = (rd_recv_matrix_q == MATRIX_A) ? k_q : n_q;
wire [15:0] rd_recv_row_count_w = (rd_recv_matrix_q == MATRIX_A) ? m_q : k_q;

wire rd_recv_row_end_w    = (rd_recv_col_q == rd_recv_row_words_w - 16'd1);
wire rd_recv_matrix_end_w = rd_recv_row_end_w &&
                            (rd_recv_row_q == rd_recv_row_count_w - 16'd1);

assign m_rready_o = (state_q == STATE_LOAD);

wire rd_beat_w           = m_rvalid_i && m_rready_o;
wire rd_burst_finished_w = rd_beat_w && m_rlast_i;
wire rd_bus_error_w      = rd_beat_w && (m_rresp_i != 2'b00);

// The last word of B has arrived: the whole load is complete
wire load_complete_w = rd_beat_w && rd_recv_matrix_end_w &&
                       (rd_recv_matrix_q == MATRIX_B);

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    rd_recv_matrix_q <= MATRIX_A;
    rd_recv_row_q    <= 16'd0;
    rd_recv_col_q    <= 16'd0;
end
else if (job_start_w)
begin
    rd_recv_matrix_q <= MATRIX_A;
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
//   row r gets A[r][s-r], column c gets B[s-c][c] (zero outside 0..K-1)
//-----------------------------------------------------------------------------
always @*
begin
    feed_step = {16'b0, compute_step_q};

    for (row = 0; row < DIM; row = row + 1)
    begin
        feed_k = feed_step - row;
        a_feed[row] = 0;
        if ((feed_step >= row) && (feed_k < {16'b0, k_q}))
            a_feed[row] = a_mem[row][feed_k[KIW-1:0]];
    end

    for (col = 0; col < DIM; col = col + 1)
    begin
        feed_k = feed_step - col;
        b_feed[col] = 0;
        if ((feed_step >= col) && (feed_k < {16'b0, k_q}))
            b_feed[col] = b_mem[feed_k[KIW-1:0]][col];
    end
end

wire compute_complete_w = (state_q == STATE_COMPUTE) &&
                          (compute_step_q == k_q + DRAIN_STEPS_U);

always @(posedge clk_i or posedge rst_i)
if (rst_i)
    compute_step_q <= 16'd0;
else if (job_start_w)
    compute_step_q <= 16'd0;
else if ((state_q == STATE_COMPUTE) && !compute_complete_w)
    compute_step_q <= compute_step_q + 16'd1;

//=============================================================================
// WRITE ENGINE (state STORE)
//=============================================================================

//-----------------------------------------------------------------------------
// Writes C row by row. For each burst: send AW, then stream its W beats. The
// next burst's AW goes out right after the last W beat; write responses (B)
// are counted and not waited for until the very end.
//-----------------------------------------------------------------------------
reg        wr_sending_data_q;    // 0: sending AW, 1: sending W beats
reg [15:0] wr_row_q;             // C element of the next W beat
reg [15:0] wr_col_q;
reg [31:0] wr_addr_q;            // memory address of the next burst
reg [8:0]  wr_beats_left_q;      // W beats left in the current burst
reg        wr_all_data_sent_q;   // last W beat of C has been sent
reg [15:0] wr_responses_pending_q; // bursts still waiting for their B

wire [8:0] wr_burst_len_w = burst_length(wr_addr_q, n_q - wr_col_q);

wire wr_row_end_w = (wr_col_q == n_q - 16'd1);
wire wr_last_element_w = wr_row_end_w && (wr_row_q == m_q - 16'd1);

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

// Every W beat sent and every B response received
wire store_complete_w = (state_q == STATE_STORE) && wr_all_data_sent_q &&
                        (wr_responses_pending_q == 16'd0);

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    wr_sending_data_q  <= 1'b0;
    wr_row_q           <= 16'd0;
    wr_col_q           <= 16'd0;
    wr_addr_q          <= 32'd0;
    wr_beats_left_q    <= 9'd0;
    wr_all_data_sent_q <= 1'b0;
end
else if (job_start_w)
begin
    wr_sending_data_q  <= 1'b0;
    wr_row_q           <= 16'd0;
    wr_col_q           <= 16'd0;
    wr_addr_q          <= c_addr_q;
    wr_beats_left_q    <= 9'd0;
    wr_all_data_sent_q <= 1'b0;
end
else if (wr_burst_started_w)
begin
    // AW accepted: send this burst's data next
    wr_sending_data_q <= 1'b1;
    wr_beats_left_q   <= wr_burst_len_w;
    wr_addr_q         <= wr_addr_q + {21'b0, wr_burst_len_w, 2'b00};
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
    state_q <= STATE_LOAD;
else
    case (state_q)
    STATE_LOAD:    if (load_complete_w)    state_q <= STATE_COMPUTE;
    STATE_COMPUTE: if (compute_complete_w) state_q <= STATE_STORE;
    STATE_STORE:   if (store_complete_w)   state_q <= STATE_DONE;
    default: ;
    endcase

// Errors: a rejected START reports why; bus errors are recorded but the job
// still runs to completion so the engine always returns to DONE.
always @(posedge clk_i or posedge rst_i)
if (rst_i)
    error_q <= 32'd0;
else if (job_start_w)
    error_q <= 32'd0;
else if (start_request_w)   // START rejected
    error_q <= addresses_ok_w ? `ACCEL_ERR_DIM : `ACCEL_ERR_ALIGN;
else if (rd_bus_error_w || wr_bus_error_w)
    error_q <= `ACCEL_ERR_BUS;

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    cycle_q       <= 32'd0;
    mac_cycle_q   <= 32'd0;
    load_cycle_q  <= 32'd0;
    store_cycle_q <= 32'd0;
end
else if (job_start_w)
begin
    cycle_q       <= 32'd0;
    mac_cycle_q   <= 32'd0;
    load_cycle_q  <= 32'd0;
    store_cycle_q <= 32'd0;
end
else
begin
    if (busy_w)                      cycle_q       <= cycle_q + 32'd1;
    if (state_q == STATE_COMPUTE)    mac_cycle_q   <= mac_cycle_q + 32'd1;
    if (state_q == STATE_LOAD)       load_cycle_q  <= load_cycle_q + 32'd1;
    if (state_q == STATE_STORE)      store_cycle_q <= store_cycle_q + 32'd1;
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
    `ACCEL_LOAD_CYC:  cfg_read_value_r = load_cycle_q;
    `ACCEL_STORE_CYC: cfg_read_value_r = store_cycle_q;
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
end
else
begin
    if (cfg_write_w)       cfg_bvalid_q <= 1'b1;
    else if (cfg_bready_i) cfg_bvalid_q <= 1'b0;

    if (cfg_read_w)        cfg_rvalid_q <= 1'b1;
    else if (cfg_rready_i) cfg_rvalid_q <= 1'b0;

    if (cfg_read_w)
        cfg_rdata_q <= cfg_read_value_r;

    if (cfg_write_w)
        case (cfg_awaddr_i[7:0])
        `ACCEL_A_ADDR: a_addr_q <= cfg_wdata_i;
        `ACCEL_B_ADDR: b_addr_q <= cfg_wdata_i;
        `ACCEL_C_ADDR: c_addr_q <= cfg_wdata_i;
        `ACCEL_M:      m_q      <= cfg_wdata_i[15:0];
        `ACCEL_N:      n_q      <= cfg_wdata_i[15:0];
        `ACCEL_K:      k_q      <= cfg_wdata_i[15:0];
        default: ;
        endcase
end

//=============================================================================
// PE ARRAY: DIM x DIM grid. A flows left -> right, B flows top -> bottom.
//=============================================================================
wire pe_clear_w  = job_start_w;
wire pe_enable_w = (state_q == STATE_COMPUTE);

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
            ,.clear_i(pe_clear_w)
            ,.en_i(pe_enable_w)
            // PEs outside the M x N result only pass data through
            ,.valid_i((ROW_U < m_q) && (COL_U < n_q))
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
//-----------------------------------------------------------------------------
module accel_pe
(
     input                clk_i
    ,input                rst_i
    ,input                clear_i
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
else if (clear_i)
begin
    a_q <= 0; b_q <= 0; acc_q <= 0;
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
