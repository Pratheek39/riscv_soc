`include "accel_matmul_defs.v"

//-----------------------------------------------------------------------------
// accel_matmul: DIM x DIM output-stationary systolic array
//
//   C[M x N] = A[M x K] * B[K x N], 1 <= M,N <= DIM, 1 <= K <= MAX_K
//   A, B, C are row-major int32 matrices in memory.
//
//   PE(r,c) holds accum[r][c]. A values enter row r from the left, B values
//   enter column c from the top, each skewed by r (resp. c) cycles, so
//   A[r][k]*B[k][c] meets in PE(r,c) at compute step k + r + c.
//-----------------------------------------------------------------------------
module accel_matmul
#(
     parameter DIM   = 4    // systolic array is DIM x DIM PEs
    ,parameter MAX_K = DIM  // max inner dimension held in the input buffers
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
// Derived sizes
//-----------------------------------------------------------------------------
// Index widths for the DIM- and MAX_K-sized buffer dimensions
localparam DIW = (DIM   > 1) ? $clog2(DIM)   : 1;
localparam KIW = (MAX_K > 1) ? $clog2(MAX_K) : 1;

// Dimension registers, loop counters and the compute counter are 16 bits
localparam [15:0] DIM_U    = DIM;
localparam [15:0] MAX_K_U  = MAX_K;
// Last compute step: final PE(DIM-1,DIM-1) sees k = K-1 at step K-1 + 2*(DIM-1)
localparam [15:0] DRAIN_U  = 2*DIM - 3;

localparam IDLE=4'd0, READ_A=4'd1, WAIT_A=4'd2, READ_B=4'd3;
localparam WAIT_B=4'd4, COMPUTE=4'd5, STORE=4'd6, WAIT_C=4'd7, DONE=4'd8;

reg [3:0] state_q;
reg [31:0] a_addr_q, b_addr_q, c_addr_q, cycle_q, mac_cycle_q, error_q;
reg [31:0] addr_q;              // running memory address for load/store
reg [15:0] m_q, n_q, k_q;
reg [15:0] row_q, col_q;        // load/store position
reg [15:0] compute_q;
reg bvalid_q, rvalid_q;
reg [31:0] rd_data_q;
// Input buffers (no reset: only entries loaded for the current job are read)
reg signed [31:0] a_mem [0:DIM-1][0:MAX_K-1];   // A[row][k]
reg signed [31:0] b_mem [0:MAX_K-1][0:DIM-1];   // B[k][col]
reg signed [31:0] a_feed [0:DIM-1];
reg signed [31:0] b_feed [0:DIM-1];
// PE outputs, flattened as [row*DIM + col]
wire signed [31:0] pe_a_w   [0:DIM*DIM-1];
wire signed [31:0] pe_b_w   [0:DIM*DIM-1];
wire signed [31:0] pe_acc_w [0:DIM*DIM-1];
reg [31:0] data_r;
integer row, col, q_idx, k_idx;

wire read_en_w = cfg_arvalid_i && cfg_arready_o;
wire write_en_w = cfg_awvalid_i && cfg_awready_o;
wire start_w = write_en_w && (cfg_awaddr_i[7:0] == `ACCEL_CTRL) &&
               cfg_wstrb_i[0] && cfg_wdata_i[`ACCEL_CTRL_START];
wire dims_ok_w = (m_q != 0) && (m_q <= DIM_U) &&
                 (n_q != 0) && (n_q <= DIM_U) &&
                 (k_q != 0) && (k_q <= MAX_K_U);
wire addresses_ok_w = ((a_addr_q[1:0] | b_addr_q[1:0] | c_addr_q[1:0]) == 0);
wire start_ok_w = dims_ok_w && addresses_ok_w &&
                  ((state_q == IDLE) || (state_q == DONE));

// Load/store walk: end-of-row and end-of-matrix flags per phase
wire a_col_last_w = (col_q == k_q - 16'd1);
wire a_row_last_w = (row_q == m_q - 16'd1);
wire b_col_last_w = (col_q == n_q - 16'd1);
wire b_row_last_w = (row_q == k_q - 16'd1);
wire c_col_last_w = (col_q == n_q - 16'd1);
wire c_row_last_w = (row_q == m_q - 16'd1);
wire compute_last_w = (compute_q == k_q + DRAIN_U);
wire pe_clear_w = start_w && start_ok_w;
wire pe_en_w = (state_q == COMPUTE);
// PE index of the C element being stored
localparam PIW = (DIM*DIM > 1) ? $clog2(DIM*DIM) : 1;
wire [15:0] pe_sel_w = row_q * DIM_U + col_q;

assign cfg_awready_o = ~bvalid_q && ~cfg_arvalid_i;
assign cfg_wready_o = cfg_awready_o;
assign cfg_bvalid_o = bvalid_q;
assign cfg_bresp_o = 2'b0;
assign cfg_arready_o = ~rvalid_q;
assign cfg_rvalid_o = rvalid_q;
assign cfg_rdata_o = rd_data_q;
assign cfg_rresp_o = 2'b0;
assign intr_o = 1'b0;
assign status_o = {29'b0, (error_q != 0), (state_q == DONE),
                   ((state_q != IDLE) && (state_q != DONE))};

//-----------------------------------------------------------------------------
// Skewed feed into the array edges: row r gets A[r][q-r], col c gets B[q-c][c]
//-----------------------------------------------------------------------------
always @*
begin
    for (row = 0; row < DIM; row = row + 1)
    begin
        a_feed[row] = 0;
        b_feed[row] = 0;
    end
    q_idx = {16'b0, compute_q};
    for (row = 0; row < DIM; row = row + 1)
    begin
        k_idx = q_idx - row;
        if ((q_idx >= row) && (k_idx < {16'b0, k_q}))
            a_feed[row] = a_mem[row][k_idx[KIW-1:0]];
    end
    for (col = 0; col < DIM; col = col + 1)
    begin
        k_idx = q_idx - col;
        if ((q_idx >= col) && (k_idx < {16'b0, k_q}))
            b_feed[col] = b_mem[k_idx[KIW-1:0]][col];
    end
end

always @*
begin
    data_r = 0;
    case (cfg_araddr_i[7:0])
    `ACCEL_STATUS:
    begin
        data_r[`ACCEL_STATUS_BUSY] = (state_q != IDLE) &&
                                        (state_q != DONE);
        data_r[`ACCEL_STATUS_DONE] = (state_q == DONE);
        data_r[`ACCEL_STATUS_ERROR] = (error_q != 0);
    end
    `ACCEL_A_ADDR: data_r = a_addr_q;
    `ACCEL_B_ADDR: data_r = b_addr_q;
    `ACCEL_C_ADDR: data_r = c_addr_q;
    `ACCEL_M: data_r = {16'b0, m_q};
    `ACCEL_N: data_r = {16'b0, n_q};
    `ACCEL_K: data_r = {16'b0, k_q};
    `ACCEL_CYC: data_r = cycle_q;
    `ACCEL_MAC_CYC: data_r = mac_cycle_q;
    `ACCEL_ERR: data_r = error_q;
    `ACCEL_CFG: data_r = {MAX_K_U, DIM_U};
    default: data_r = 0;
    endcase
end

assign m_arvalid_o = (state_q == READ_A) || (state_q == READ_B);
assign m_araddr_o = addr_q;
assign m_arid_o = 4'hc;
assign m_arlen_o = 0;
assign m_arburst_o = 2'b01;
assign m_rready_o = (state_q == WAIT_A) || (state_q == WAIT_B);
assign m_awvalid_o = (state_q == STORE);
assign m_awaddr_o = addr_q;
assign m_awid_o = 4'hc;
assign m_awlen_o = 0;
assign m_awburst_o = 2'b01;
assign m_wvalid_o = (state_q == STORE);
assign m_wdata_o = pe_acc_w[pe_sel_w[PIW-1:0]];
assign m_wstrb_o = 4'hf;
assign m_wlast_o = 1'b1;
assign m_bready_o = (state_q == WAIT_C);

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    state_q <= IDLE; a_addr_q <= 0; b_addr_q <= 0; c_addr_q <= 0;
    addr_q <= 0; m_q <= 0; n_q <= 0; k_q <= 0;
    row_q <= 0; col_q <= 0; compute_q <= 0;
    cycle_q <= 0; mac_cycle_q <= 0; error_q <= 0;
    bvalid_q <= 0; rvalid_q <= 0; rd_data_q <= 0;
end
else
begin
    if (write_en_w) bvalid_q <= 1'b1;
    else if (cfg_bready_i) bvalid_q <= 1'b0;
    if (read_en_w) rvalid_q <= 1'b1;
    else if (cfg_rready_i) rvalid_q <= 1'b0;
    if (read_en_w) rd_data_q <= data_r;

    if (write_en_w)
        case (cfg_awaddr_i[7:0])
        `ACCEL_A_ADDR: a_addr_q <= cfg_wdata_i;
        `ACCEL_B_ADDR: b_addr_q <= cfg_wdata_i;
        `ACCEL_C_ADDR: c_addr_q <= cfg_wdata_i;
        `ACCEL_M: m_q <= cfg_wdata_i[15:0];
        `ACCEL_N: n_q <= cfg_wdata_i[15:0];
        `ACCEL_K: k_q <= cfg_wdata_i[15:0];
        default: ;
        endcase

    if (start_w)
    begin
        if (start_ok_w)
        begin
            state_q <= READ_A; addr_q <= a_addr_q;
            row_q <= 0; col_q <= 0; compute_q <= 0;
            cycle_q <= 0; mac_cycle_q <= 0; error_q <= 0;
            // PE accumulators/pipes are cleared via pe_clear_w
        end
        else
            error_q <= addresses_ok_w ? `ACCEL_ERR_DIM : `ACCEL_ERR_ALIGN;
    end

    if ((state_q != IDLE) && (state_q != DONE))
        cycle_q <= cycle_q + 1;

    case (state_q)
    READ_A: if (m_arready_i) state_q <= WAIT_A;
    WAIT_A:
        if (m_rvalid_i)
        begin
            if (m_rresp_i != 2'b0)
                error_q <= `ACCEL_ERR_BUS;
            a_mem[row_q[DIW-1:0]][col_q[KIW-1:0]] <= m_rdata_i;
            addr_q <= addr_q + 32'd4;
            state_q <= READ_A;
            if (a_col_last_w)
            begin
                col_q <= 0;
                row_q <= row_q + 16'd1;
                if (a_row_last_w)
                begin
                    row_q <= 0; addr_q <= b_addr_q; state_q <= READ_B;
                end
            end
            else
                col_q <= col_q + 16'd1;
        end
    READ_B: if (m_arready_i) state_q <= WAIT_B;
    WAIT_B:
        if (m_rvalid_i)
        begin
            if (m_rresp_i != 2'b0)
                error_q <= `ACCEL_ERR_BUS;
            b_mem[row_q[KIW-1:0]][col_q[DIW-1:0]] <= m_rdata_i;
            addr_q <= addr_q + 32'd4;
            state_q <= READ_B;
            if (b_col_last_w)
            begin
                col_q <= 0;
                row_q <= row_q + 16'd1;
                if (b_row_last_w)
                begin
                    row_q <= 0; compute_q <= 0; state_q <= COMPUTE;
                end
            end
            else
                col_q <= col_q + 16'd1;
        end
    COMPUTE:
    begin
        // PEs step on pe_en_w
        mac_cycle_q <= mac_cycle_q + 1;
        if (compute_last_w)
        begin
            row_q <= 0; col_q <= 0; addr_q <= c_addr_q; state_q <= STORE;
        end
        else compute_q <= compute_q + 16'd1;
    end
    STORE: if (m_awready_i && m_wready_i) state_q <= WAIT_C;
    WAIT_C:
        if (m_bvalid_i)
        begin
            if (m_bresp_i != 2'b0)
                error_q <= `ACCEL_ERR_BUS;
            addr_q <= addr_q + 32'd4;
            state_q <= STORE;
            if (c_col_last_w)
            begin
                col_q <= 0;
                row_q <= row_q + 16'd1;
                if (c_row_last_w)
                    state_q <= DONE;
            end
            else
                col_q <= col_q + 16'd1;
        end
    default: ;
    endcase
end

//-----------------------------------------------------------------------------
// DIM x DIM PE grid. A flows left->right, B flows top->bottom.
//-----------------------------------------------------------------------------
genvar gr, gc;
generate
for (gr = 0; gr < DIM; gr = gr + 1) begin : g_row
    for (gc = 0; gc < DIM; gc = gc + 1) begin : g_col
        localparam [15:0] R_U = gr;
        localparam [15:0] C_U = gc;
        wire signed [31:0] a_in_w;
        wire signed [31:0] b_in_w;

        if (gc == 0) begin : g_a_edge
            assign a_in_w = a_feed[gr];
        end else begin : g_a_link
            assign a_in_w = pe_a_w[gr*DIM + gc - 1];
        end

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
            ,.en_i(pe_en_w)
            ,.valid_i((R_U < m_q) && (C_U < n_q))
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
