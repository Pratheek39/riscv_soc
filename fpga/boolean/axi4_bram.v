//-----------------------------------------------------------------
// AXI4 slave backed by block RAM (single outstanding transaction)
//   - INCR bursts only (the core's icache and dport bridge use INCR)
//   - Byte strobes supported on write
//   - Preloaded from INIT_FILE (hex, one 32-bit word per line)
//-----------------------------------------------------------------
module axi4_bram
#(
    parameter DEPTH_WORDS = 32768,          // 32K x 32 = 128KB
    parameter INIT_FILE   = "boolean_mem.hex"
)
(
    input            clk_i,
    input            rst_i,

    // Write address
    input            awvalid_i,
    input   [31:0]   awaddr_i,
    input   [3:0]    awid_i,
    input   [7:0]    awlen_i,
    input   [1:0]    awburst_i,
    output reg       awready_o,

    // Write data
    input            wvalid_i,
    input   [31:0]   wdata_i,
    input   [3:0]    wstrb_i,
    input            wlast_i,
    output reg       wready_o,

    // Write response
    output reg       bvalid_o,
    output reg [1:0] bresp_o,
    output reg [3:0] bid_o,
    input            bready_i,

    // Read address
    input            arvalid_i,
    input   [31:0]   araddr_i,
    input   [3:0]    arid_i,
    input   [7:0]    arlen_i,
    input   [1:0]    arburst_i,
    output reg       arready_o,

    // Read data
    output reg       rvalid_o,
    output reg [31:0] rdata_o,
    output reg [1:0] rresp_o,
    output reg [3:0] rid_o,
    output reg       rlast_o,
    input            rready_i
);

localparam IDX_W = $clog2(DEPTH_WORDS);

//-----------------------------------------------------------------
// Memory
//-----------------------------------------------------------------
reg [31:0] mem [0:DEPTH_WORDS-1];

initial
begin
    $readmemh(INIT_FILE, mem);
end

//-----------------------------------------------------------------
// Write channel
//-----------------------------------------------------------------
localparam W_IDLE = 2'd0;
localparam W_DATA = 2'd1;
localparam W_RESP = 2'd2;

reg [1:0]        wstate_q;
reg [31:0]       waddr_q;
reg [3:0]        wid_q;
reg [7:0]        wlen_q;
reg [7:0]        wcnt_q;

wire [IDX_W-1:0] widx_w = waddr_q[IDX_W+1:2];

always @ (posedge clk_i)
begin
    if (rst_i)
    begin
        wstate_q  <= W_IDLE;
        awready_o <= 1'b0;
        wready_o  <= 1'b0;
        bvalid_o  <= 1'b0;
        bresp_o   <= 2'b00;
        bid_o     <= 4'd0;
        waddr_q   <= 32'd0;
        wid_q     <= 4'd0;
        wlen_q    <= 8'd0;
        wcnt_q    <= 8'd0;
    end
    else
    begin
        awready_o <= 1'b0;
        wready_o  <= 1'b0;

        case (wstate_q)
        //---------------------------------------------------------
        W_IDLE:
        begin
            awready_o <= 1'b1;
            if (awvalid_i && awready_o)
            begin
                waddr_q  <= awaddr_i;
                wid_q    <= awid_i;
                wlen_q   <= awlen_i;
                wcnt_q   <= 8'd0;
                awready_o <= 1'b0;
                wstate_q <= W_DATA;
            end
        end
        //---------------------------------------------------------
        W_DATA:
        begin
            wready_o <= 1'b1;
            if (wvalid_i && wready_o)
            begin
                if (wstrb_i[0]) mem[widx_w][7:0]   <= wdata_i[7:0];
                if (wstrb_i[1]) mem[widx_w][15:8]  <= wdata_i[15:8];
                if (wstrb_i[2]) mem[widx_w][23:16] <= wdata_i[23:16];
                if (wstrb_i[3]) mem[widx_w][31:24] <= wdata_i[31:24];

                waddr_q <= waddr_q + 32'd4;
                wcnt_q  <= wcnt_q + 8'd1;

                if (wlast_i || (wcnt_q == wlen_q))
                begin
                    wready_o <= 1'b0;
                    wstate_q <= W_RESP;
                    bvalid_o <= 1'b1;
                    bresp_o  <= 2'b00;
                    bid_o    <= wid_q;
                end
            end
        end
        //---------------------------------------------------------
        W_RESP:
        begin
            if (bvalid_o && bready_i)
            begin
                bvalid_o <= 1'b0;
                wstate_q <= W_IDLE;
            end
        end
        //---------------------------------------------------------
        default:
            wstate_q <= W_IDLE;
        endcase
    end
end

//-----------------------------------------------------------------
// Read channel
//   Read-first synchronous BRAM access; data is registered and held
//   until the master accepts it (rvalid && !rready stalls issue).
//-----------------------------------------------------------------
reg              rbusy_q;
reg [31:0]       raddr_q;
reg [3:0]        rid_q;
reg [7:0]        rlen_q;
reg [7:0]        rcnt_q;

wire [IDX_W-1:0] ridx_w = raddr_q[IDX_W+1:2];
wire             issue_w = rbusy_q && (!rvalid_o || rready_i);

always @ (posedge clk_i)
begin
    if (rst_i)
    begin
        rbusy_q   <= 1'b0;
        arready_o <= 1'b0;
        rvalid_o  <= 1'b0;
        rdata_o   <= 32'd0;
        rresp_o   <= 2'b00;
        rid_o     <= 4'd0;
        rlast_o   <= 1'b0;
        raddr_q   <= 32'd0;
        rid_q     <= 4'd0;
        rlen_q    <= 8'd0;
        rcnt_q    <= 8'd0;
    end
    else
    begin
        arready_o <= !rbusy_q && !arready_o;

        // Accept new read burst
        if (arvalid_i && arready_o)
        begin
            rbusy_q   <= 1'b1;
            raddr_q   <= araddr_i;
            rid_q     <= arid_i;
            rlen_q    <= arlen_i;
            rcnt_q    <= 8'd0;
            arready_o <= 1'b0;
        end

        // Issue one beat per cycle when the output register is free
        if (issue_w)
        begin
            rdata_o  <= mem[ridx_w];
            rresp_o  <= 2'b00;
            rid_o    <= rid_q;
            rlast_o  <= (rcnt_q == rlen_q);
            rvalid_o <= 1'b1;

            raddr_q  <= raddr_q + 32'd4;
            rcnt_q   <= rcnt_q + 8'd1;

            if (rcnt_q == rlen_q)
                rbusy_q <= 1'b0;
        end
        else if (rvalid_o && rready_i)
        begin
            rvalid_o <= 1'b0;
            rlast_o  <= 1'b0;
        end
    end
end

endmodule
