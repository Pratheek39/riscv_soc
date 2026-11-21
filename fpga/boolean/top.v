//-----------------------------------------------------------------
// Boolean board (XC7S50-CSG324) top level
//   - riscv_soc directly (no DDR3 on this board)
//   - 128KB block RAM main memory at address 0x0000_0000
//   - UART, 16 LEDs (SoC GPIO), btn[0] = reset
//-----------------------------------------------------------------
module top
#(
    parameter MEM_INIT_FILE = "boolean_mem.hex"
)
(
    input            clk,
    input   [15:0]   sw,
    output  [15:0]   led,
    input   [3:0]    btn,
    input            UART_rxd,
    output           UART_txd
);

//-----------------------------------------------------------------
// Clock and reset
//-----------------------------------------------------------------
wire clk_sys_w;
wire pll_locked_w;

boolean_pll u_pll
(
    .clkref_i(clk),
    .clkout0_o(clk_sys_w),
    .locked_o(pll_locked_w)
);

// Reset held until PLL locks, or while btn[0] is pressed (active high assumed)
reg [2:0] rst_sync_q = 3'b111;
wire      rst_async_w = ~pll_locked_w | btn[0];

always @ (posedge clk_sys_w or posedge rst_async_w)
if (rst_async_w)
    rst_sync_q <= 3'b111;
else
    rst_sync_q <= {rst_sync_q[1:0], 1'b0};

wire rst_sys_w = rst_sync_q[2];

//-----------------------------------------------------------------
// SoC <-> block RAM main memory
//-----------------------------------------------------------------
wire        mem_awvalid_w;
wire [31:0] mem_awaddr_w;
wire [3:0]  mem_awid_w;
wire [7:0]  mem_awlen_w;
wire [1:0]  mem_awburst_w;
wire        mem_awready_w;
wire        mem_wvalid_w;
wire [31:0] mem_wdata_w;
wire [3:0]  mem_wstrb_w;
wire        mem_wlast_w;
wire        mem_wready_w;
wire        mem_bvalid_w;
wire [1:0]  mem_bresp_w;
wire [3:0]  mem_bid_w;
wire        mem_bready_w;
wire        mem_arvalid_w;
wire [31:0] mem_araddr_w;
wire [3:0]  mem_arid_w;
wire [7:0]  mem_arlen_w;
wire [1:0]  mem_arburst_w;
wire        mem_arready_w;
wire        mem_rvalid_w;
wire [31:0] mem_rdata_w;
wire [1:0]  mem_rresp_w;
wire [3:0]  mem_rid_w;
wire        mem_rlast_w;
wire        mem_rready_w;

axi4_bram
#(
    .DEPTH_WORDS(65536),
    .INIT_FILE(MEM_INIT_FILE)
)
u_mem
(
    .clk_i(clk_sys_w),
    .rst_i(rst_sys_w),

    .awvalid_i(mem_awvalid_w),
    .awaddr_i(mem_awaddr_w),
    .awid_i(mem_awid_w),
    .awlen_i(mem_awlen_w),
    .awburst_i(mem_awburst_w),
    .awready_o(mem_awready_w),

    .wvalid_i(mem_wvalid_w),
    .wdata_i(mem_wdata_w),
    .wstrb_i(mem_wstrb_w),
    .wlast_i(mem_wlast_w),
    .wready_o(mem_wready_w),

    .bvalid_o(mem_bvalid_w),
    .bresp_o(mem_bresp_w),
    .bid_o(mem_bid_w),
    .bready_i(mem_bready_w),

    .arvalid_i(mem_arvalid_w),
    .araddr_i(mem_araddr_w),
    .arid_i(mem_arid_w),
    .arlen_i(mem_arlen_w),
    .arburst_i(mem_arburst_w),
    .arready_o(mem_arready_w),

    .rvalid_o(mem_rvalid_w),
    .rdata_o(mem_rdata_w),
    .rresp_o(mem_rresp_w),
    .rid_o(mem_rid_w),
    .rlast_o(mem_rlast_w),
    .rready_i(mem_rready_w)
);

//-----------------------------------------------------------------
// SoC
//-----------------------------------------------------------------
wire        uart_tx_w;
wire [31:0] gpio_output_w;
wire        unused_w;
wire [31:0] accel_status_w;   // matmul accelerator status register (not wired to board I/O yet)

riscv_soc u_soc
(
    .clk_i(clk_sys_w),
    .rst_i(rst_sys_w),
    .rst_cpu_i(rst_sys_w),
    .reset_vector_i(32'h00002000),

    // Debug/external AXI4-Lite port: not used on this board
    .inport_awvalid_i(1'b0),
    .inport_awaddr_i(32'd0),
    .inport_wvalid_i(1'b0),
    .inport_wdata_i(32'd0),
    .inport_wstrb_i(4'd0),
    .inport_bready_i(1'b0),
    .inport_arvalid_i(1'b0),
    .inport_araddr_i(32'd0),
    .inport_rready_i(1'b0),
    .inport_awready_o(unused_w),
    .inport_wready_o(unused_w),
    .inport_bvalid_o(unused_w),
    .inport_bresp_o(),
    .inport_arready_o(unused_w),
    .inport_rvalid_o(unused_w),
    .inport_rdata_o(),
    .inport_rresp_o(),

    // SPI: not connected
    .spi_miso_i(1'b0),
    .spi_clk_o(),
    .spi_mosi_o(),
    .spi_cs_o(),

    // UART (FPGA perspective: UART_rxd is FPGA input, UART_txd is FPGA output)
    .uart_txd_i(UART_rxd),
    .uart_rxd_o(uart_tx_w),

    // GPIO: outputs drive the 16 LEDs
    .gpio_input_i({16'd0, sw}),
    .gpio_output_o(gpio_output_w),
    .gpio_output_enable_o(),

    // Accelerator status (accel is wired inside soc.v)
    .accel_status_o(accel_status_w),

    // Main memory (block RAM)
    .mem_awvalid_o(mem_awvalid_w),
    .mem_awaddr_o(mem_awaddr_w),
    .mem_awid_o(mem_awid_w),
    .mem_awlen_o(mem_awlen_w),
    .mem_awburst_o(mem_awburst_w),
    .mem_wvalid_o(mem_wvalid_w),
    .mem_wdata_o(mem_wdata_w),
    .mem_wstrb_o(mem_wstrb_w),
    .mem_wlast_o(mem_wlast_w),
    .mem_bready_o(mem_bready_w),
    .mem_arvalid_o(mem_arvalid_w),
    .mem_araddr_o(mem_araddr_w),
    .mem_arid_o(mem_arid_w),
    .mem_arlen_o(mem_arlen_w),
    .mem_arburst_o(mem_arburst_w),
    .mem_rready_o(mem_rready_w),
    .mem_awready_i(mem_awready_w),
    .mem_wready_i(mem_wready_w),
    .mem_bvalid_i(mem_bvalid_w),
    .mem_bresp_i(mem_bresp_w),
    .mem_bid_i(mem_bid_w),
    .mem_arready_i(mem_arready_w),
    .mem_rvalid_i(mem_rvalid_w),
    .mem_rdata_i(mem_rdata_w),
    .mem_rresp_i(mem_rresp_w),
    .mem_rid_i(mem_rid_w),
    .mem_rlast_i(mem_rlast_w)
);

//-----------------------------------------------------------------
// Board outputs
//-----------------------------------------------------------------
assign UART_txd = uart_tx_w;

//-----------------------------------------------------------------
// Debug status LEDs (temporary)
//   led[0] PLL locked
//   led[1] reset released
//   led[2] heartbeat (blinks when the 25 MHz clock runs)
//   led[3] memory bus has seen a read request (sticky)
//   led[4] UART TX has toggled (sticky)
//   led[15:5] SoC GPIO output
//-----------------------------------------------------------------
reg [24:0] hb_cnt_q;
reg        mem_seen_q;
reg        uart_seen_q;
reg        uart_last_q;

always @ (posedge clk_sys_w)
    hb_cnt_q <= hb_cnt_q + 25'd1;

always @ (posedge clk_sys_w)
if (rst_sys_w)
begin
    mem_seen_q  <= 1'b0;
    uart_seen_q <= 1'b0;
    uart_last_q <= 1'b1;
end
else
begin
    if (mem_arvalid_w && mem_arready_w)
        mem_seen_q <= 1'b1;
    uart_last_q <= uart_tx_w;
    if (uart_tx_w != uart_last_q)
        uart_seen_q <= 1'b1;
end

assign led[0]    = pll_locked_w;
assign led[1]    = ~rst_sys_w;
assign led[2]    = hb_cnt_q[24];
assign led[3]    = mem_seen_q;
assign led[4]    = uart_seen_q;
assign led[15:5] = gpio_output_w[15:5];

endmodule
