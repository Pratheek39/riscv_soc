`include "accel_matmul_defs.v"

module accel_matmul
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

localparam IDLE=4'd0, READ_A=4'd1, WAIT_A=4'd2, READ_B=4'd3;
localparam WAIT_B=4'd4, COMPUTE=4'd5, STORE=4'd6, WAIT_C=4'd7, DONE=4'd8;

reg [3:0] state_q;
reg [31:0] a_addr_q, b_addr_q, c_addr_q, cycle_q, mac_cycle_q, error_q;
reg [2:0] m_q, n_q, k_q;
reg [3:0] index_q, compute_q;
reg bvalid_q, rvalid_q;
reg [31:0] rd_data_q;
reg signed [31:0] a_mem [0:15];
reg signed [31:0] b_mem [0:15];
reg signed [31:0] accum [0:3][0:3];
reg signed [31:0] a_pipe [0:3][0:3];
reg signed [31:0] b_pipe [0:3][0:3];
reg signed [31:0] a_feed [0:3];
reg signed [31:0] b_feed [0:3];
reg [31:0] data_r;
integer i, row, col, q_idx;

wire read_en_w = cfg_arvalid_i && cfg_arready_o;
wire write_en_w = cfg_awvalid_i && cfg_awready_o;
wire start_w = write_en_w && (cfg_awaddr_i[7:0] == `ACCEL_CTRL) &&
               cfg_wstrb_i[0] && cfg_wdata_i[`ACCEL_CTRL_START];
wire dims_ok_w = (m_q != 0) && (m_q <= 4) && (n_q != 0) && (n_q <= 4) &&
                 (k_q != 0) && (k_q <= 4);
wire addresses_ok_w = ((a_addr_q[1:0] | b_addr_q[1:0] | c_addr_q[1:0]) == 0);
wire start_ok_w = dims_ok_w && addresses_ok_w &&
                  ((state_q == IDLE) || (state_q == DONE));

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

always @*
begin
    a_feed[0] = 0; a_feed[1] = 0; a_feed[2] = 0; a_feed[3] = 0;
    b_feed[0] = 0; b_feed[1] = 0; b_feed[2] = 0; b_feed[3] = 0;
    q_idx = compute_q;
    for (row = 0; row < 4; row = row + 1)
        if ((q_idx >= row) && ((q_idx-row) < k_q))
            a_feed[row] = a_mem[row*k_q + q_idx-row];
    for (col = 0; col < 4; col = col + 1)
        if ((q_idx >= col) && ((q_idx-col) < k_q))
            b_feed[col] = b_mem[(q_idx-col)*n_q + col];
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
    `ACCEL_M: data_r = {29'b0,m_q};
    `ACCEL_N: data_r = {29'b0,n_q};
    `ACCEL_K: data_r = {29'b0,k_q};
    `ACCEL_CYC: data_r = cycle_q;
    `ACCEL_MAC_CYC: data_r = mac_cycle_q;
    `ACCEL_ERR: data_r = error_q;
    default: data_r = 0;
    endcase
end

assign m_arvalid_o = (state_q == READ_A) || (state_q == READ_B);
assign m_araddr_o = (state_q == READ_A) ?
                    (a_addr_q + ({28'b0,index_q} << 2)) :
                    (b_addr_q + ({28'b0,index_q} << 2));
assign m_arid_o = 0;
assign m_arlen_o = 0;
assign m_arburst_o = 2'b01;
assign m_rready_o = (state_q == WAIT_A) || (state_q == WAIT_B);
assign m_awvalid_o = (state_q == STORE);
assign m_awaddr_o = c_addr_q + ({28'b0,index_q} << 2);
assign m_awid_o = 0;
assign m_awlen_o = 0;
assign m_awburst_o = 2'b01;
assign m_wvalid_o = (state_q == STORE);
assign m_wdata_o = (n_q != 0) ? accum[index_q / n_q][index_q % n_q] : 32'b0;
assign m_wstrb_o = 4'hf;
assign m_wlast_o = 1'b1;
assign m_bready_o = (state_q == WAIT_C);

always @(posedge clk_i or posedge rst_i)
if (rst_i)
begin
    state_q <= IDLE; a_addr_q <= 0; b_addr_q <= 0; c_addr_q <= 0;
    m_q <= 0; n_q <= 0; k_q <= 0; index_q <= 0; compute_q <= 0;
    cycle_q <= 0; mac_cycle_q <= 0; error_q <= 0;
    bvalid_q <= 0; rvalid_q <= 0; rd_data_q <= 0;
    for (i = 0; i < 16; i = i + 1)
    begin
        a_mem[i] <= 0; b_mem[i] <= 0;
    end
    for (row = 0; row < 4; row = row + 1)
        for (col = 0; col < 4; col = col + 1)
        begin
            accum[row][col] <= 0; a_pipe[row][col] <= 0; b_pipe[row][col] <= 0;
        end
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
        `ACCEL_M: m_q <= cfg_wdata_i[2:0];
        `ACCEL_N: n_q <= cfg_wdata_i[2:0];
        `ACCEL_K: k_q <= cfg_wdata_i[2:0];
        default: ;
        endcase

    if (start_w)
    begin
        if (start_ok_w)
        begin
            state_q <= READ_A; index_q <= 0; compute_q <= 0;
            cycle_q <= 0; mac_cycle_q <= 0; error_q <= 0;
            for (row = 0; row < 4; row = row + 1)
                for (col = 0; col < 4; col = col + 1)
                begin
                    accum[row][col] <= 0;
                    a_pipe[row][col] <= 0;
                    b_pipe[row][col] <= 0;
                end
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
            a_mem[index_q] <= m_rdata_i;
            if (index_q == (m_q*k_q-1))
            begin index_q <= 0; state_q <= READ_B; end
            else begin index_q <= index_q + 1; state_q <= READ_A; end
        end
    READ_B: if (m_arready_i) state_q <= WAIT_B;
    WAIT_B:
        if (m_rvalid_i)
        begin
            if (m_rresp_i != 2'b0)
                error_q <= `ACCEL_ERR_BUS;
            b_mem[index_q] <= m_rdata_i;
            if (index_q == (k_q*n_q-1))
            begin compute_q <= 0; state_q <= COMPUTE; end
            else begin index_q <= index_q + 1; state_q <= READ_B; end
        end
    COMPUTE:
    begin
        for (row = 0; row < 4; row = row + 1)
            for (col = 0; col < 4; col = col + 1)
            begin
                if ((row < m_q) && (col < n_q))
                    if ((col == 0) && (row == 0))
                        accum[row][col] <= accum[row][col] + a_feed[row]*b_feed[col];
                    else if (col == 0)
                        accum[row][col] <= accum[row][col] + a_feed[row]*b_pipe[row-1][col];
                    else if (row == 0)
                        accum[row][col] <= accum[row][col] + a_pipe[row][col-1]*b_feed[col];
                    else
                        accum[row][col] <= accum[row][col] + a_pipe[row][col-1]*b_pipe[row-1][col];
            end
        for (row = 0; row < 4; row = row + 1)
        begin
            a_pipe[row][0] <= a_feed[row];
            b_pipe[0][row] <= b_feed[row];
            for (col = 1; col < 4; col = col + 1)
            begin
                a_pipe[row][col] <= a_pipe[row][col-1];
                b_pipe[col][row] <= b_pipe[col-1][row];
            end
        end
        mac_cycle_q <= mac_cycle_q + 1;
        if (compute_q == (k_q+5))
        begin index_q <= 0; state_q <= STORE; end
        else compute_q <= compute_q + 1;
    end
    STORE: if (m_awready_i && m_wready_i) state_q <= WAIT_C;
    WAIT_C:
        if (m_bvalid_i)
        begin
            if (m_bresp_i != 2'b0)
                error_q <= `ACCEL_ERR_BUS;
            if (index_q == (m_q*n_q-1)) state_q <= DONE;
            else begin index_q <= index_q + 1; state_q <= STORE; end
        end
    default: ;
    endcase
end

endmodule
