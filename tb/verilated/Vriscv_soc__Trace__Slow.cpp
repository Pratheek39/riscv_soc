// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vriscv_soc__Syms.h"


//======================

void Vriscv_soc::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vriscv_soc::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_soc__Syms* __restrict vlSymsp = static_cast<Vriscv_soc__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vriscv_soc::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vriscv_soc::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vriscv_soc__Syms* __restrict vlSymsp = static_cast<Vriscv_soc__Syms*>(userp);
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vriscv_soc::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_soc__Syms* __restrict vlSymsp = static_cast<Vriscv_soc__Syms*>(userp);
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+3,"riscv_soc clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc rst_i", false,-1);
        tracep->declBus(c+5,"riscv_soc reset_vector_i", false,-1, 31,0);
        tracep->declBit(c+6,"riscv_soc inport_awvalid_i", false,-1);
        tracep->declBus(c+7,"riscv_soc inport_awaddr_i", false,-1, 31,0);
        tracep->declBit(c+8,"riscv_soc inport_wvalid_i", false,-1);
        tracep->declBus(c+9,"riscv_soc inport_wdata_i", false,-1, 31,0);
        tracep->declBus(c+10,"riscv_soc inport_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+11,"riscv_soc inport_bready_i", false,-1);
        tracep->declBit(c+12,"riscv_soc inport_arvalid_i", false,-1);
        tracep->declBus(c+13,"riscv_soc inport_araddr_i", false,-1, 31,0);
        tracep->declBit(c+14,"riscv_soc inport_rready_i", false,-1);
        tracep->declBit(c+15,"riscv_soc rst_cpu_i", false,-1);
        tracep->declBit(c+16,"riscv_soc spi_miso_i", false,-1);
        tracep->declBit(c+17,"riscv_soc uart_txd_i", false,-1);
        tracep->declBus(c+18,"riscv_soc gpio_input_i", false,-1, 31,0);
        tracep->declBit(c+19,"riscv_soc mem_awready_i", false,-1);
        tracep->declBit(c+20,"riscv_soc mem_wready_i", false,-1);
        tracep->declBit(c+21,"riscv_soc mem_bvalid_i", false,-1);
        tracep->declBus(c+22,"riscv_soc mem_bresp_i", false,-1, 1,0);
        tracep->declBus(c+23,"riscv_soc mem_bid_i", false,-1, 3,0);
        tracep->declBit(c+24,"riscv_soc mem_arready_i", false,-1);
        tracep->declBit(c+25,"riscv_soc mem_rvalid_i", false,-1);
        tracep->declBus(c+26,"riscv_soc mem_rdata_i", false,-1, 31,0);
        tracep->declBus(c+27,"riscv_soc mem_rresp_i", false,-1, 1,0);
        tracep->declBus(c+28,"riscv_soc mem_rid_i", false,-1, 3,0);
        tracep->declBit(c+29,"riscv_soc mem_rlast_i", false,-1);
        tracep->declBit(c+138,"riscv_soc inport_awready_o", false,-1);
        tracep->declBit(c+30,"riscv_soc inport_wready_o", false,-1);
        tracep->declBit(c+150,"riscv_soc inport_bvalid_o", false,-1);
        tracep->declBus(c+151,"riscv_soc inport_bresp_o", false,-1, 1,0);
        tracep->declBit(c+31,"riscv_soc inport_arready_o", false,-1);
        tracep->declBit(c+152,"riscv_soc inport_rvalid_o", false,-1);
        tracep->declBus(c+820,"riscv_soc inport_rdata_o", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc inport_rresp_o", false,-1, 1,0);
        tracep->declBit(c+153,"riscv_soc spi_clk_o", false,-1);
        tracep->declBit(c+154,"riscv_soc spi_mosi_o", false,-1);
        tracep->declBit(c+155,"riscv_soc spi_cs_o", false,-1);
        tracep->declBit(c+156,"riscv_soc uart_rxd_o", false,-1);
        tracep->declBus(c+157,"riscv_soc gpio_output_o", false,-1, 31,0);
        tracep->declBus(c+158,"riscv_soc gpio_output_enable_o", false,-1, 31,0);
        tracep->declBit(c+159,"riscv_soc mem_awvalid_o", false,-1);
        tracep->declBus(c+160,"riscv_soc mem_awaddr_o", false,-1, 31,0);
        tracep->declBus(c+161,"riscv_soc mem_awid_o", false,-1, 3,0);
        tracep->declBus(c+162,"riscv_soc mem_awlen_o", false,-1, 7,0);
        tracep->declBus(c+163,"riscv_soc mem_awburst_o", false,-1, 1,0);
        tracep->declBit(c+164,"riscv_soc mem_wvalid_o", false,-1);
        tracep->declBus(c+165,"riscv_soc mem_wdata_o", false,-1, 31,0);
        tracep->declBus(c+166,"riscv_soc mem_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+167,"riscv_soc mem_wlast_o", false,-1);
        tracep->declBit(c+168,"riscv_soc mem_bready_o", false,-1);
        tracep->declBit(c+169,"riscv_soc mem_arvalid_o", false,-1);
        tracep->declBus(c+170,"riscv_soc mem_araddr_o", false,-1, 31,0);
        tracep->declBus(c+171,"riscv_soc mem_arid_o", false,-1, 3,0);
        tracep->declBus(c+172,"riscv_soc mem_arlen_o", false,-1, 7,0);
        tracep->declBus(c+173,"riscv_soc mem_arburst_o", false,-1, 1,0);
        tracep->declBit(c+174,"riscv_soc mem_rready_o", false,-1);
        tracep->declBus(c+175,"riscv_soc accel_status_o", false,-1, 31,0);
        tracep->declBus(c+176,"riscv_soc axi4_conv_bid_w", false,-1, 3,0);
        tracep->declBus(c+10,"riscv_soc axi4_conv_wstrb_w", false,-1, 3,0);
        tracep->declBus(c+951,"riscv_soc axi4_d_awid_w", false,-1, 3,0);
        tracep->declBus(c+952,"riscv_soc axi4_conv_awburst_w", false,-1, 1,0);
        tracep->declBit(c+822,"riscv_soc axi4_i_rvalid_w", false,-1);
        tracep->declBus(c+953,"riscv_soc axi4_i_awaddr_w", false,-1, 31,0);
        tracep->declBit(c+954,"riscv_soc axi4_conv_wlast_w", false,-1);
        tracep->declBit(c+11,"riscv_soc axi4_conv_bready_w", false,-1);
        tracep->declBus(c+820,"riscv_soc axi4_d_rdata_w", false,-1, 31,0);
        tracep->declBus(c+554,"riscv_soc axi4_d_awaddr_w", false,-1, 31,0);
        tracep->declBus(c+955,"riscv_soc axi4_conv_awlen_w", false,-1, 7,0);
        tracep->declBit(c+828,"riscv_soc axi4_d_awvalid_w", false,-1);
        tracep->declBit(c+829,"riscv_soc axi4_i_arvalid_w", false,-1);
        tracep->declBus(c+956,"riscv_soc axi4_i_wstrb_w", false,-1, 3,0);
        tracep->declBus(c+13,"riscv_soc axi4_conv_araddr_w", false,-1, 31,0);
        tracep->declBus(c+955,"riscv_soc axi4_i_awlen_w", false,-1, 7,0);
        tracep->declBus(c+955,"riscv_soc axi4_d_arlen_w", false,-1, 7,0);
        tracep->declBit(c+14,"riscv_soc axi4_conv_rready_w", false,-1);
        tracep->declBit(c+954,"riscv_soc axi4_d_rready_w", false,-1);
        tracep->declBit(c+8,"riscv_soc axi4_conv_wvalid_w", false,-1);
        tracep->declBus(c+952,"riscv_soc axi4_d_awburst_w", false,-1, 1,0);
        tracep->declBit(c+957,"riscv_soc axi4_i_wlast_w", false,-1);
        tracep->declBus(c+151,"riscv_soc axi4_d_bresp_w", false,-1, 1,0);
        tracep->declBit(c+177,"riscv_soc axi4_d_bvalid_w", false,-1);
        tracep->declBit(c+178,"riscv_soc axi4_i_bvalid_w", false,-1);
        tracep->declBit(c+957,"riscv_soc axi4_i_awvalid_w", false,-1);
        tracep->declBus(c+952,"riscv_soc axi4_conv_arburst_w", false,-1, 1,0);
        tracep->declBit(c+179,"riscv_soc irq_w", false,-1);
        tracep->declBit(c+32,"riscv_soc axi4_d_awready_w", false,-1);
        tracep->declBit(c+823,"riscv_soc axi4_i_rlast_w", false,-1);
        tracep->declBus(c+953,"riscv_soc axi4_i_wdata_w", false,-1, 31,0);
        tracep->declBit(c+30,"riscv_soc axi4_conv_wready_w", false,-1);
        tracep->declBus(c+176,"riscv_soc axi4_d_bid_w", false,-1, 3,0);
        tracep->declBit(c+152,"riscv_soc axi4_conv_rvalid_w", false,-1);
        tracep->declBit(c+823,"riscv_soc axi4_conv_rlast_w", false,-1);
        tracep->declBit(c+957,"riscv_soc axi4_i_bready_w", false,-1);
        tracep->declBus(c+821,"riscv_soc axi4_d_rresp_w", false,-1, 1,0);
        tracep->declBit(c+33,"riscv_soc axi4_i_wready_w", false,-1);
        tracep->declBit(c+31,"riscv_soc axi4_conv_arready_w", false,-1);
        tracep->declBus(c+176,"riscv_soc axi4_i_bid_w", false,-1, 3,0);
        tracep->declBit(c+957,"riscv_soc axi4_i_wvalid_w", false,-1);
        tracep->declBit(c+954,"riscv_soc axi4_i_rready_w", false,-1);
        tracep->declBus(c+956,"riscv_soc axi4_conv_awid_w", false,-1, 3,0);
        tracep->declBit(c+34,"riscv_soc axi4_i_arready_w", false,-1);
        tracep->declBus(c+151,"riscv_soc axi4_conv_bresp_w", false,-1, 1,0);
        tracep->declBit(c+150,"riscv_soc axi4_conv_bvalid_w", false,-1);
        tracep->declBus(c+151,"riscv_soc axi4_i_bresp_w", false,-1, 1,0);
        tracep->declBus(c+958,"riscv_soc axi4_i_arid_w", false,-1, 3,0);
        tracep->declBus(c+820,"riscv_soc axi4_conv_rdata_w", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc axi4_conv_arid_w", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc axi4_d_bready_w", false,-1);
        tracep->declBus(c+555,"riscv_soc axi4_d_wdata_w", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc axi4_i_rresp_w", false,-1, 1,0);
        tracep->declBus(c+556,"riscv_soc axi4_d_wstrb_w", false,-1, 3,0);
        tracep->declBus(c+180,"riscv_soc axi4_conv_rid_w", false,-1, 3,0);
        tracep->declBus(c+952,"riscv_soc axi4_d_arburst_w", false,-1, 1,0);
        tracep->declBus(c+959,"riscv_soc axi4_i_arlen_w", false,-1, 7,0);
        tracep->declBus(c+955,"riscv_soc axi4_conv_arlen_w", false,-1, 7,0);
        tracep->declBus(c+956,"riscv_soc axi4_i_awid_w", false,-1, 3,0);
        tracep->declBit(c+12,"riscv_soc axi4_conv_arvalid_w", false,-1);
        tracep->declBus(c+554,"riscv_soc axi4_d_araddr_w", false,-1, 31,0);
        tracep->declBus(c+952,"riscv_soc axi4_i_arburst_w", false,-1, 1,0);
        tracep->declBit(c+181,"riscv_soc axi4_d_rvalid_w", false,-1);
        tracep->declBus(c+557,"riscv_soc axi4_i_araddr_w", false,-1, 31,0);
        tracep->declBus(c+7,"riscv_soc axi4_conv_awaddr_w", false,-1, 31,0);
        tracep->declBus(c+180,"riscv_soc axi4_d_rid_w", false,-1, 3,0);
        tracep->declBus(c+9,"riscv_soc axi4_conv_wdata_w", false,-1, 31,0);
        tracep->declBit(c+139,"riscv_soc axi4_i_awready_w", false,-1);
        tracep->declBus(c+951,"riscv_soc axi4_d_arid_w", false,-1, 3,0);
        tracep->declBit(c+830,"riscv_soc axi4_d_arvalid_w", false,-1);
        tracep->declBus(c+955,"riscv_soc axi4_d_awlen_w", false,-1, 7,0);
        tracep->declBit(c+35,"riscv_soc axi4_d_arready_w", false,-1);
        tracep->declBit(c+36,"riscv_soc axi4_d_wready_w", false,-1);
        tracep->declBit(c+823,"riscv_soc axi4_d_rlast_w", false,-1);
        tracep->declBus(c+821,"riscv_soc axi4_conv_rresp_w", false,-1, 1,0);
        tracep->declBus(c+960,"riscv_soc axi4_i_awburst_w", false,-1, 1,0);
        tracep->declBit(c+831,"riscv_soc axi4_d_wvalid_w", false,-1);
        tracep->declBit(c+6,"riscv_soc axi4_conv_awvalid_w", false,-1);
        tracep->declBus(c+180,"riscv_soc axi4_i_rid_w", false,-1, 3,0);
        tracep->declBus(c+820,"riscv_soc axi4_i_rdata_w", false,-1, 31,0);
        tracep->declBit(c+138,"riscv_soc axi4_conv_awready_w", false,-1);
        tracep->declBit(c+954,"riscv_soc axi4_d_wlast_w", false,-1);
        tracep->declBit(c+3,"riscv_soc u_conv clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_conv rst_i", false,-1);
        tracep->declBit(c+6,"riscv_soc u_conv inport_awvalid_i", false,-1);
        tracep->declBus(c+7,"riscv_soc u_conv inport_awaddr_i", false,-1, 31,0);
        tracep->declBit(c+8,"riscv_soc u_conv inport_wvalid_i", false,-1);
        tracep->declBus(c+9,"riscv_soc u_conv inport_wdata_i", false,-1, 31,0);
        tracep->declBus(c+10,"riscv_soc u_conv inport_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+11,"riscv_soc u_conv inport_bready_i", false,-1);
        tracep->declBit(c+12,"riscv_soc u_conv inport_arvalid_i", false,-1);
        tracep->declBus(c+13,"riscv_soc u_conv inport_araddr_i", false,-1, 31,0);
        tracep->declBit(c+14,"riscv_soc u_conv inport_rready_i", false,-1);
        tracep->declBit(c+138,"riscv_soc u_conv outport_awready_i", false,-1);
        tracep->declBit(c+30,"riscv_soc u_conv outport_wready_i", false,-1);
        tracep->declBit(c+150,"riscv_soc u_conv outport_bvalid_i", false,-1);
        tracep->declBus(c+151,"riscv_soc u_conv outport_bresp_i", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_conv outport_bid_i", false,-1, 3,0);
        tracep->declBit(c+31,"riscv_soc u_conv outport_arready_i", false,-1);
        tracep->declBit(c+152,"riscv_soc u_conv outport_rvalid_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_conv outport_rdata_i", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_conv outport_rresp_i", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_conv outport_rid_i", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_conv outport_rlast_i", false,-1);
        tracep->declBit(c+138,"riscv_soc u_conv inport_awready_o", false,-1);
        tracep->declBit(c+30,"riscv_soc u_conv inport_wready_o", false,-1);
        tracep->declBit(c+150,"riscv_soc u_conv inport_bvalid_o", false,-1);
        tracep->declBus(c+151,"riscv_soc u_conv inport_bresp_o", false,-1, 1,0);
        tracep->declBit(c+31,"riscv_soc u_conv inport_arready_o", false,-1);
        tracep->declBit(c+152,"riscv_soc u_conv inport_rvalid_o", false,-1);
        tracep->declBus(c+820,"riscv_soc u_conv inport_rdata_o", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_conv inport_rresp_o", false,-1, 1,0);
        tracep->declBit(c+6,"riscv_soc u_conv outport_awvalid_o", false,-1);
        tracep->declBus(c+7,"riscv_soc u_conv outport_awaddr_o", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_conv outport_awid_o", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_conv outport_awlen_o", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_conv outport_awburst_o", false,-1, 1,0);
        tracep->declBit(c+8,"riscv_soc u_conv outport_wvalid_o", false,-1);
        tracep->declBus(c+9,"riscv_soc u_conv outport_wdata_o", false,-1, 31,0);
        tracep->declBus(c+10,"riscv_soc u_conv outport_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_conv outport_wlast_o", false,-1);
        tracep->declBit(c+11,"riscv_soc u_conv outport_bready_o", false,-1);
        tracep->declBit(c+12,"riscv_soc u_conv outport_arvalid_o", false,-1);
        tracep->declBus(c+13,"riscv_soc u_conv outport_araddr_o", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_conv outport_arid_o", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_conv outport_arlen_o", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_conv outport_arburst_o", false,-1, 1,0);
        tracep->declBit(c+14,"riscv_soc u_conv outport_rready_o", false,-1);
        tracep->declBit(c+3,"riscv_soc u_soc clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc rst_i", false,-1);
        tracep->declBit(c+6,"riscv_soc u_soc inport_awvalid_i", false,-1);
        tracep->declBus(c+7,"riscv_soc u_soc inport_awaddr_i", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_soc inport_awid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc inport_awlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc inport_awburst_i", false,-1, 1,0);
        tracep->declBit(c+8,"riscv_soc u_soc inport_wvalid_i", false,-1);
        tracep->declBus(c+9,"riscv_soc u_soc inport_wdata_i", false,-1, 31,0);
        tracep->declBus(c+10,"riscv_soc u_soc inport_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_soc inport_wlast_i", false,-1);
        tracep->declBit(c+11,"riscv_soc u_soc inport_bready_i", false,-1);
        tracep->declBit(c+12,"riscv_soc u_soc inport_arvalid_i", false,-1);
        tracep->declBus(c+13,"riscv_soc u_soc inport_araddr_i", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_soc inport_arid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc inport_arlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc inport_arburst_i", false,-1, 1,0);
        tracep->declBit(c+14,"riscv_soc u_soc inport_rready_i", false,-1);
        tracep->declBit(c+19,"riscv_soc u_soc mem_awready_i", false,-1);
        tracep->declBit(c+20,"riscv_soc u_soc mem_wready_i", false,-1);
        tracep->declBit(c+21,"riscv_soc u_soc mem_bvalid_i", false,-1);
        tracep->declBus(c+22,"riscv_soc u_soc mem_bresp_i", false,-1, 1,0);
        tracep->declBus(c+23,"riscv_soc u_soc mem_bid_i", false,-1, 3,0);
        tracep->declBit(c+24,"riscv_soc u_soc mem_arready_i", false,-1);
        tracep->declBit(c+25,"riscv_soc u_soc mem_rvalid_i", false,-1);
        tracep->declBus(c+26,"riscv_soc u_soc mem_rdata_i", false,-1, 31,0);
        tracep->declBus(c+27,"riscv_soc u_soc mem_rresp_i", false,-1, 1,0);
        tracep->declBus(c+28,"riscv_soc u_soc mem_rid_i", false,-1, 3,0);
        tracep->declBit(c+29,"riscv_soc u_soc mem_rlast_i", false,-1);
        tracep->declBit(c+957,"riscv_soc u_soc cpu_i_awvalid_i", false,-1);
        tracep->declBus(c+953,"riscv_soc u_soc cpu_i_awaddr_i", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_soc cpu_i_awid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc cpu_i_awlen_i", false,-1, 7,0);
        tracep->declBus(c+960,"riscv_soc u_soc cpu_i_awburst_i", false,-1, 1,0);
        tracep->declBit(c+957,"riscv_soc u_soc cpu_i_wvalid_i", false,-1);
        tracep->declBus(c+953,"riscv_soc u_soc cpu_i_wdata_i", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_soc cpu_i_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+957,"riscv_soc u_soc cpu_i_wlast_i", false,-1);
        tracep->declBit(c+957,"riscv_soc u_soc cpu_i_bready_i", false,-1);
        tracep->declBit(c+829,"riscv_soc u_soc cpu_i_arvalid_i", false,-1);
        tracep->declBus(c+557,"riscv_soc u_soc cpu_i_araddr_i", false,-1, 31,0);
        tracep->declBus(c+958,"riscv_soc u_soc cpu_i_arid_i", false,-1, 3,0);
        tracep->declBus(c+959,"riscv_soc u_soc cpu_i_arlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc cpu_i_arburst_i", false,-1, 1,0);
        tracep->declBit(c+954,"riscv_soc u_soc cpu_i_rready_i", false,-1);
        tracep->declBit(c+828,"riscv_soc u_soc cpu_d_awvalid_i", false,-1);
        tracep->declBus(c+554,"riscv_soc u_soc cpu_d_awaddr_i", false,-1, 31,0);
        tracep->declBus(c+951,"riscv_soc u_soc cpu_d_awid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc cpu_d_awlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc cpu_d_awburst_i", false,-1, 1,0);
        tracep->declBit(c+831,"riscv_soc u_soc cpu_d_wvalid_i", false,-1);
        tracep->declBus(c+555,"riscv_soc u_soc cpu_d_wdata_i", false,-1, 31,0);
        tracep->declBus(c+556,"riscv_soc u_soc cpu_d_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_soc cpu_d_wlast_i", false,-1);
        tracep->declBit(c+954,"riscv_soc u_soc cpu_d_bready_i", false,-1);
        tracep->declBit(c+830,"riscv_soc u_soc cpu_d_arvalid_i", false,-1);
        tracep->declBus(c+554,"riscv_soc u_soc cpu_d_araddr_i", false,-1, 31,0);
        tracep->declBus(c+951,"riscv_soc u_soc cpu_d_arid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc cpu_d_arlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc cpu_d_arburst_i", false,-1, 1,0);
        tracep->declBit(c+954,"riscv_soc u_soc cpu_d_rready_i", false,-1);
        tracep->declBit(c+16,"riscv_soc u_soc spi_miso_i", false,-1);
        tracep->declBit(c+17,"riscv_soc u_soc uart_txd_i", false,-1);
        tracep->declBus(c+18,"riscv_soc u_soc gpio_input_i", false,-1, 31,0);
        tracep->declBit(c+179,"riscv_soc u_soc intr_o", false,-1);
        tracep->declBit(c+138,"riscv_soc u_soc inport_awready_o", false,-1);
        tracep->declBit(c+30,"riscv_soc u_soc inport_wready_o", false,-1);
        tracep->declBit(c+150,"riscv_soc u_soc inport_bvalid_o", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc inport_bresp_o", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc inport_bid_o", false,-1, 3,0);
        tracep->declBit(c+31,"riscv_soc u_soc inport_arready_o", false,-1);
        tracep->declBit(c+152,"riscv_soc u_soc inport_rvalid_o", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc inport_rdata_o", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc inport_rresp_o", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc inport_rid_o", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc inport_rlast_o", false,-1);
        tracep->declBit(c+159,"riscv_soc u_soc mem_awvalid_o", false,-1);
        tracep->declBus(c+160,"riscv_soc u_soc mem_awaddr_o", false,-1, 31,0);
        tracep->declBus(c+161,"riscv_soc u_soc mem_awid_o", false,-1, 3,0);
        tracep->declBus(c+162,"riscv_soc u_soc mem_awlen_o", false,-1, 7,0);
        tracep->declBus(c+163,"riscv_soc u_soc mem_awburst_o", false,-1, 1,0);
        tracep->declBit(c+164,"riscv_soc u_soc mem_wvalid_o", false,-1);
        tracep->declBus(c+165,"riscv_soc u_soc mem_wdata_o", false,-1, 31,0);
        tracep->declBus(c+166,"riscv_soc u_soc mem_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+167,"riscv_soc u_soc mem_wlast_o", false,-1);
        tracep->declBit(c+168,"riscv_soc u_soc mem_bready_o", false,-1);
        tracep->declBit(c+169,"riscv_soc u_soc mem_arvalid_o", false,-1);
        tracep->declBus(c+170,"riscv_soc u_soc mem_araddr_o", false,-1, 31,0);
        tracep->declBus(c+171,"riscv_soc u_soc mem_arid_o", false,-1, 3,0);
        tracep->declBus(c+172,"riscv_soc u_soc mem_arlen_o", false,-1, 7,0);
        tracep->declBus(c+173,"riscv_soc u_soc mem_arburst_o", false,-1, 1,0);
        tracep->declBit(c+174,"riscv_soc u_soc mem_rready_o", false,-1);
        tracep->declBus(c+175,"riscv_soc u_soc accel_status_o", false,-1, 31,0);
        tracep->declBit(c+139,"riscv_soc u_soc cpu_i_awready_o", false,-1);
        tracep->declBit(c+33,"riscv_soc u_soc cpu_i_wready_o", false,-1);
        tracep->declBit(c+178,"riscv_soc u_soc cpu_i_bvalid_o", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc cpu_i_bresp_o", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc cpu_i_bid_o", false,-1, 3,0);
        tracep->declBit(c+34,"riscv_soc u_soc cpu_i_arready_o", false,-1);
        tracep->declBit(c+822,"riscv_soc u_soc cpu_i_rvalid_o", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc cpu_i_rdata_o", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc cpu_i_rresp_o", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc cpu_i_rid_o", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc cpu_i_rlast_o", false,-1);
        tracep->declBit(c+32,"riscv_soc u_soc cpu_d_awready_o", false,-1);
        tracep->declBit(c+36,"riscv_soc u_soc cpu_d_wready_o", false,-1);
        tracep->declBit(c+177,"riscv_soc u_soc cpu_d_bvalid_o", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc cpu_d_bresp_o", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc cpu_d_bid_o", false,-1, 3,0);
        tracep->declBit(c+35,"riscv_soc u_soc cpu_d_arready_o", false,-1);
        tracep->declBit(c+181,"riscv_soc u_soc cpu_d_rvalid_o", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc cpu_d_rdata_o", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc cpu_d_rresp_o", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc cpu_d_rid_o", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc cpu_d_rlast_o", false,-1);
        tracep->declBit(c+153,"riscv_soc u_soc spi_clk_o", false,-1);
        tracep->declBit(c+154,"riscv_soc u_soc spi_mosi_o", false,-1);
        tracep->declBit(c+155,"riscv_soc u_soc spi_cs_o", false,-1);
        tracep->declBit(c+156,"riscv_soc u_soc uart_rxd_o", false,-1);
        tracep->declBus(c+157,"riscv_soc u_soc gpio_output_o", false,-1, 31,0);
        tracep->declBus(c+158,"riscv_soc u_soc gpio_output_enable_o", false,-1, 31,0);
        tracep->declBus(c+37,"riscv_soc u_soc axi_retime_arid_w", false,-1, 3,0);
        tracep->declBit(c+38,"riscv_soc u_soc axi_arb_out_arvalid_w", false,-1);
        tracep->declBit(c+39,"riscv_soc u_soc axi_retime_arvalid_w", false,-1);
        tracep->declBit(c+40,"riscv_soc u_soc axi_tap_output2_wvalid_w", false,-1);
        tracep->declBit(c+41,"riscv_soc u_soc axi_arb_out_rready_w", false,-1);
        tracep->declBit(c+42,"riscv_soc u_soc axi_arb_out_wvalid_w", false,-1);
        tracep->declBit(c+43,"riscv_soc u_soc axi_tap_output0_awready_w", false,-1);
        tracep->declBus(c+37,"riscv_soc u_soc axi_arb_out_arid_w", false,-1, 3,0);
        tracep->declBus(c+44,"riscv_soc u_soc axi_tap_output3_wdata_w", false,-1, 31,0);
        tracep->declBit(c+45,"riscv_soc u_soc axi_tap_output2_arvalid_w", false,-1);
        tracep->declBus(c+46,"riscv_soc u_soc axi_retime_wstrb_w", false,-1, 3,0);
        tracep->declBus(c+176,"riscv_soc u_soc axi_arb_out_bid_w", false,-1, 3,0);
        tracep->declBit(c+182,"riscv_soc u_soc axi_tap_output2_rvalid_w", false,-1);
        tracep->declBit(c+47,"riscv_soc u_soc axi_tap_output3_wready_w", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc axi_tap_output0_araddr_w", false,-1, 31,0);
        tracep->declBit(c+49,"riscv_soc u_soc axi_tap_output4_awready_w", false,-1);
        tracep->declBit(c+50,"riscv_soc u_soc axi_tap_output4_wvalid_w", false,-1);
        tracep->declBit(c+51,"riscv_soc u_soc axi_tap_output3_wvalid_w", false,-1);
        tracep->declBus(c+46,"riscv_soc u_soc axi_tap_output3_wstrb_w", false,-1, 3,0);
        tracep->declBit(c+52,"riscv_soc u_soc axi_arb_out_awready_w", false,-1);
        tracep->declBit(c+53,"riscv_soc u_soc axi_arb_out_wready_w", false,-1);
        tracep->declBit(c+183,"riscv_soc u_soc axi_retime_wready_w", false,-1);
        tracep->declBit(c+54,"riscv_soc u_soc axi_arb_out_bready_w", false,-1);
        tracep->declBit(c+184,"riscv_soc u_soc axi_tap_output0_arready_w", false,-1);
        tracep->declBit(c+55,"riscv_soc u_soc axi_arb_out_wlast_w", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc axi_tap_output4_awaddr_w", false,-1, 31,0);
        tracep->declBit(c+57,"riscv_soc u_soc axi_tap_output4_arvalid_w", false,-1);
        tracep->declBit(c+185,"riscv_soc u_soc axi_tap_output3_arready_w", false,-1);
        tracep->declBit(c+55,"riscv_soc u_soc axi_retime_wlast_w", false,-1);
        tracep->declBus(c+1,"riscv_soc u_soc axi_arb_out_awlen_w", false,-1, 7,0);
        tracep->declBit(c+186,"riscv_soc u_soc axi_tap_output3_bvalid_w", false,-1);
        tracep->declBit(c+58,"riscv_soc u_soc axi_tap_output1_awready_w", false,-1);
        tracep->declBit(c+59,"riscv_soc u_soc axi_retime_awvalid_w", false,-1);
        tracep->declBit(c+60,"riscv_soc u_soc axi_tap_output4_awvalid_w", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output2_rresp_w", false,-1, 1,0);
        tracep->declBus(c+61,"riscv_soc u_soc axi_arb_out_awburst_w", false,-1, 1,0);
        tracep->declBit(c+62,"riscv_soc u_soc axi_tap_output1_arvalid_w", false,-1);
        tracep->declBus(c+180,"riscv_soc u_soc axi_arb_out_rid_w", false,-1, 3,0);
        tracep->declBus(c+151,"riscv_soc u_soc axi_arb_out_bresp_w", false,-1, 1,0);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output3_bresp_w", false,-1, 1,0);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output2_bresp_w", false,-1, 1,0);
        tracep->declBus(c+2,"riscv_soc u_soc axi_retime_arburst_w", false,-1, 1,0);
        tracep->declBus(c+56,"riscv_soc u_soc axi_tap_output3_awaddr_w", false,-1, 31,0);
        tracep->declBus(c+187,"riscv_soc u_soc axi_retime_rdata_w", false,-1, 31,0);
        tracep->declBit(c+188,"riscv_soc u_soc axi_tap_output2_arready_w", false,-1);
        tracep->declBus(c+189,"riscv_soc u_soc axi_tap_output4_rdata_w", false,-1, 31,0);
        tracep->declBit(c+190,"riscv_soc u_soc axi_tap_output4_arready_w", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output0_bresp_w", false,-1, 1,0);
        tracep->declBit(c+191,"riscv_soc u_soc axi_retime_bvalid_w", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output4_bresp_w", false,-1, 1,0);
        tracep->declBit(c+54,"riscv_soc u_soc axi_tap_output1_bready_w", false,-1);
        tracep->declBit(c+54,"riscv_soc u_soc axi_tap_output0_bready_w", false,-1);
        tracep->declBit(c+192,"riscv_soc u_soc axi_retime_awready_w", false,-1);
        tracep->declBit(c+63,"riscv_soc u_soc axi_tap_output1_awvalid_w", false,-1);
        tracep->declBit(c+193,"riscv_soc u_soc axi_retime_rlast_w", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc axi_arb_out_araddr_w", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc axi_tap_output0_rready_w", false,-1);
        tracep->declBit(c+54,"riscv_soc u_soc axi_tap_output2_bready_w", false,-1);
        tracep->declBit(c+64,"riscv_soc u_soc axi_tap_output2_wready_w", false,-1);
        tracep->declBus(c+194,"riscv_soc u_soc axi_retime_rid_w", false,-1, 3,0);
        tracep->declBus(c+821,"riscv_soc u_soc axi_arb_out_rresp_w", false,-1, 1,0);
        tracep->declBit(c+195,"riscv_soc u_soc axi_retime_arready_w", false,-1);
        tracep->declBus(c+1,"riscv_soc u_soc axi_retime_awlen_w", false,-1, 7,0);
        tracep->declBit(c+65,"riscv_soc u_soc axi_tap_output0_arvalid_w", false,-1);
        tracep->declBus(c+196,"riscv_soc u_soc axi_retime_rresp_w", false,-1, 1,0);
        tracep->declBus(c+48,"riscv_soc u_soc axi_tap_output4_araddr_w", false,-1, 31,0);
        tracep->declBus(c+197,"riscv_soc u_soc axi_retime_bid_w", false,-1, 3,0);
        tracep->declBit(c+198,"riscv_soc u_soc axi_tap_output0_rvalid_w", false,-1);
        tracep->declBit(c+66,"riscv_soc u_soc axi_tap_output0_wvalid_w", false,-1);
        tracep->declBit(c+199,"riscv_soc u_soc axi_tap_output3_rvalid_w", false,-1);
        tracep->declBit(c+43,"riscv_soc u_soc axi_tap_output0_wready_w", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc axi_tap_output0_awaddr_w", false,-1, 31,0);
        tracep->declBit(c+58,"riscv_soc u_soc axi_tap_output1_wready_w", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc axi_arb_out_awaddr_w", false,-1, 31,0);
        tracep->declBit(c+200,"riscv_soc u_soc axi_arb_out_rvalid_w", false,-1);
        tracep->declBit(c+201,"riscv_soc u_soc interrupt1_w", false,-1);
        tracep->declBit(c+202,"riscv_soc u_soc interrupt0_w", false,-1);
        tracep->declBit(c+203,"riscv_soc u_soc interrupt3_w", false,-1);
        tracep->declBit(c+204,"riscv_soc u_soc interrupt2_w", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc axi_retime_wdata_w", false,-1, 31,0);
        tracep->declBit(c+67,"riscv_soc u_soc axi_tap_output3_awvalid_w", false,-1);
        tracep->declBit(c+41,"riscv_soc u_soc axi_tap_output4_rready_w", false,-1);
        tracep->declBit(c+205,"riscv_soc u_soc axi_tap_output1_rvalid_w", false,-1);
        tracep->declBus(c+206,"riscv_soc u_soc axi_tap_output3_rdata_w", false,-1, 31,0);
        tracep->declBit(c+54,"riscv_soc u_soc axi_retime_bready_w", false,-1);
        tracep->declBus(c+61,"riscv_soc u_soc axi_retime_awburst_w", false,-1, 1,0);
        tracep->declBus(c+46,"riscv_soc u_soc axi_arb_out_wstrb_w", false,-1, 3,0);
        tracep->declBit(c+68,"riscv_soc u_soc axi_tap_output1_wvalid_w", false,-1);
        tracep->declBus(c+46,"riscv_soc u_soc axi_tap_output1_wstrb_w", false,-1, 3,0);
        tracep->declBit(c+41,"riscv_soc u_soc axi_tap_output2_rready_w", false,-1);
        tracep->declBus(c+46,"riscv_soc u_soc axi_tap_output2_wstrb_w", false,-1, 3,0);
        tracep->declBus(c+56,"riscv_soc u_soc axi_tap_output1_awaddr_w", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc axi_tap_output4_wstrb_w", false,-1, 3,0);
        tracep->declBit(c+207,"riscv_soc u_soc axi_tap_output0_bvalid_w", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc axi_arb_out_wdata_w", false,-1, 31,0);
        tracep->declBit(c+823,"riscv_soc u_soc axi_arb_out_rlast_w", false,-1);
        tracep->declBus(c+208,"riscv_soc u_soc axi_tap_output0_rdata_w", false,-1, 31,0);
        tracep->declBus(c+2,"riscv_soc u_soc axi_arb_out_arburst_w", false,-1, 1,0);
        tracep->declBit(c+69,"riscv_soc u_soc axi_tap_output0_awvalid_w", false,-1);
        tracep->declBit(c+209,"riscv_soc u_soc axi_tap_output4_rvalid_w", false,-1);
        tracep->declBit(c+210,"riscv_soc u_soc axi_tap_output1_bvalid_w", false,-1);
        tracep->declBit(c+41,"riscv_soc u_soc axi_retime_rready_w", false,-1);
        tracep->declBit(c+41,"riscv_soc u_soc axi_tap_output1_rready_w", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc axi_tap_output4_wdata_w", false,-1, 31,0);
        tracep->declBus(c+44,"riscv_soc u_soc axi_tap_output2_wdata_w", false,-1, 31,0);
        tracep->declBus(c+44,"riscv_soc u_soc axi_tap_output0_wdata_w", false,-1, 31,0);
        tracep->declBus(c+48,"riscv_soc u_soc axi_tap_output2_araddr_w", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output0_rresp_w", false,-1, 1,0);
        tracep->declBit(c+211,"riscv_soc u_soc axi_retime_rvalid_w", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc axi_tap_output2_awaddr_w", false,-1, 31,0);
        tracep->declBus(c+212,"riscv_soc u_soc axi_tap_output2_rdata_w", false,-1, 31,0);
        tracep->declBit(c+49,"riscv_soc u_soc axi_tap_output4_wready_w", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc axi_tap_output1_araddr_w", false,-1, 31,0);
        tracep->declBus(c+48,"riscv_soc u_soc axi_retime_araddr_w", false,-1, 31,0);
        tracep->declBit(c+70,"riscv_soc u_soc axi_tap_output3_arvalid_w", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output3_rresp_w", false,-1, 1,0);
        tracep->declBit(c+213,"riscv_soc u_soc axi_arb_out_bvalid_w", false,-1);
        tracep->declBit(c+71,"riscv_soc u_soc axi_arb_out_arready_w", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc axi_arb_out_rdata_w", false,-1, 31,0);
        tracep->declBit(c+72,"riscv_soc u_soc axi_arb_out_awvalid_w", false,-1);
        tracep->declBit(c+47,"riscv_soc u_soc axi_tap_output3_awready_w", false,-1);
        tracep->declBit(c+64,"riscv_soc u_soc axi_tap_output2_awready_w", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc axi_retime_awaddr_w", false,-1, 31,0);
        tracep->declBus(c+73,"riscv_soc u_soc axi_arb_out_awid_w", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc axi_tap_output3_bready_w", false,-1);
        tracep->declBus(c+214,"riscv_soc u_soc axi_retime_bresp_w", false,-1, 1,0);
        tracep->declBit(c+74,"riscv_soc u_soc axi_retime_wvalid_w", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output1_bresp_w", false,-1, 1,0);
        tracep->declBus(c+215,"riscv_soc u_soc axi_tap_output1_rdata_w", false,-1, 31,0);
        tracep->declBit(c+216,"riscv_soc u_soc axi_tap_output1_arready_w", false,-1);
        tracep->declBus(c+75,"riscv_soc u_soc axi_retime_arlen_w", false,-1, 7,0);
        tracep->declBit(c+41,"riscv_soc u_soc axi_tap_output3_rready_w", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc axi_tap_output3_araddr_w", false,-1, 31,0);
        tracep->declBit(c+76,"riscv_soc u_soc axi_tap_output2_awvalid_w", false,-1);
        tracep->declBus(c+75,"riscv_soc u_soc axi_arb_out_arlen_w", false,-1, 7,0);
        tracep->declBus(c+73,"riscv_soc u_soc axi_retime_awid_w", false,-1, 3,0);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output4_rresp_w", false,-1, 1,0);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output1_rresp_w", false,-1, 1,0);
        tracep->declBit(c+77,"riscv_soc u_soc axi_tap_output5_awvalid_w", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc axi_tap_output5_awaddr_w", false,-1, 31,0);
        tracep->declBit(c+78,"riscv_soc u_soc axi_tap_output5_wvalid_w", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc axi_tap_output5_wdata_w", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc axi_tap_output5_wstrb_w", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc axi_tap_output5_bready_w", false,-1);
        tracep->declBit(c+79,"riscv_soc u_soc axi_tap_output5_arvalid_w", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc axi_tap_output5_araddr_w", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc axi_tap_output5_rready_w", false,-1);
        tracep->declBit(c+80,"riscv_soc u_soc axi_tap_output5_awready_w", false,-1);
        tracep->declBit(c+80,"riscv_soc u_soc axi_tap_output5_wready_w", false,-1);
        tracep->declBit(c+217,"riscv_soc u_soc axi_tap_output5_bvalid_w", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output5_bresp_w", false,-1, 1,0);
        tracep->declBit(c+218,"riscv_soc u_soc axi_tap_output5_arready_w", false,-1);
        tracep->declBit(c+219,"riscv_soc u_soc axi_tap_output5_rvalid_w", false,-1);
        tracep->declBus(c+220,"riscv_soc u_soc axi_tap_output5_rdata_w", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc axi_tap_output5_rresp_w", false,-1, 1,0);
        tracep->declBit(c+221,"riscv_soc u_soc accel_awvalid_w", false,-1);
        tracep->declBus(c+222,"riscv_soc u_soc accel_awaddr_w", false,-1, 31,0);
        tracep->declBus(c+961,"riscv_soc u_soc accel_awid_w", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc accel_awlen_w", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc accel_awburst_w", false,-1, 1,0);
        tracep->declBit(c+221,"riscv_soc u_soc accel_wvalid_w", false,-1);
        tracep->declBus(c+223,"riscv_soc u_soc accel_wdata_w", false,-1, 31,0);
        tracep->declBus(c+962,"riscv_soc u_soc accel_wstrb_w", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_soc accel_wlast_w", false,-1);
        tracep->declBit(c+224,"riscv_soc u_soc accel_bready_w", false,-1);
        tracep->declBit(c+225,"riscv_soc u_soc accel_arvalid_w", false,-1);
        tracep->declBus(c+226,"riscv_soc u_soc accel_araddr_w", false,-1, 31,0);
        tracep->declBus(c+961,"riscv_soc u_soc accel_arid_w", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc accel_arlen_w", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc accel_arburst_w", false,-1, 1,0);
        tracep->declBit(c+227,"riscv_soc u_soc accel_rready_w", false,-1);
        tracep->declBit(c+140,"riscv_soc u_soc accel_awready_w", false,-1);
        tracep->declBit(c+81,"riscv_soc u_soc accel_wready_w", false,-1);
        tracep->declBit(c+228,"riscv_soc u_soc accel_bvalid_w", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc accel_bresp_w", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc accel_bid_w", false,-1, 3,0);
        tracep->declBit(c+82,"riscv_soc u_soc accel_arready_w", false,-1);
        tracep->declBit(c+229,"riscv_soc u_soc accel_rvalid_w", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc accel_rdata_w", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc accel_rresp_w", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc accel_rid_w", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc accel_rlast_w", false,-1);
        tracep->declBus(c+46,"riscv_soc u_soc axi_tap_output0_wstrb_w", false,-1, 3,0);
        tracep->declBit(c+230,"riscv_soc u_soc axi_tap_output2_bvalid_w", false,-1);
        tracep->declBit(c+54,"riscv_soc u_soc axi_tap_output4_bready_w", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc axi_tap_output1_wdata_w", false,-1, 31,0);
        tracep->declBit(c+231,"riscv_soc u_soc axi_tap_output4_bvalid_w", false,-1);
        tracep->declBit(c+3,"riscv_soc u_soc u_intc clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_intc rst_i", false,-1);
        tracep->declBit(c+69,"riscv_soc u_soc u_intc cfg_awvalid_i", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_intc cfg_awaddr_i", false,-1, 31,0);
        tracep->declBit(c+66,"riscv_soc u_soc u_intc cfg_wvalid_i", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_intc cfg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_intc cfg_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_intc cfg_bready_i", false,-1);
        tracep->declBit(c+65,"riscv_soc u_soc u_intc cfg_arvalid_i", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_intc cfg_araddr_i", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_intc cfg_rready_i", false,-1);
        tracep->declBit(c+202,"riscv_soc u_soc u_intc interrupt0_i", false,-1);
        tracep->declBit(c+201,"riscv_soc u_soc u_intc interrupt1_i", false,-1);
        tracep->declBit(c+204,"riscv_soc u_soc u_intc interrupt2_i", false,-1);
        tracep->declBit(c+203,"riscv_soc u_soc u_intc interrupt3_i", false,-1);
        tracep->declBit(c+43,"riscv_soc u_soc u_intc cfg_awready_o", false,-1);
        tracep->declBit(c+43,"riscv_soc u_soc u_intc cfg_wready_o", false,-1);
        tracep->declBit(c+207,"riscv_soc u_soc u_intc cfg_bvalid_o", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_intc cfg_bresp_o", false,-1, 1,0);
        tracep->declBit(c+184,"riscv_soc u_soc u_intc cfg_arready_o", false,-1);
        tracep->declBit(c+198,"riscv_soc u_soc u_intc cfg_rvalid_o", false,-1);
        tracep->declBus(c+208,"riscv_soc u_soc u_intc cfg_rdata_o", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_intc cfg_rresp_o", false,-1, 1,0);
        tracep->declBit(c+179,"riscv_soc u_soc u_intc intr_o", false,-1);
        tracep->declBus(c+232,"riscv_soc u_soc u_intc wr_data_q", false,-1, 31,0);
        tracep->declBit(c+141,"riscv_soc u_soc u_intc read_en_w", false,-1);
        tracep->declBit(c+83,"riscv_soc u_soc u_intc write_en_w", false,-1);
        tracep->declBit(c+233,"riscv_soc u_soc u_intc irq_isr_wr_q", false,-1);
        tracep->declBus(c+234,"riscv_soc u_soc u_intc irq_isr_status_out_w", false,-1, 3,0);
        tracep->declBit(c+235,"riscv_soc u_soc u_intc irq_ipr_wr_q", false,-1);
        tracep->declBit(c+236,"riscv_soc u_soc u_intc irq_ier_wr_q", false,-1);
        tracep->declBus(c+234,"riscv_soc u_soc u_intc irq_ier_enable_out_w", false,-1, 3,0);
        tracep->declBit(c+237,"riscv_soc u_soc u_intc irq_iar_wr_q", false,-1);
        tracep->declBus(c+238,"riscv_soc u_soc u_intc irq_iar_ack_q", false,-1, 3,0);
        tracep->declBus(c+238,"riscv_soc u_soc u_intc irq_iar_ack_out_w", false,-1, 3,0);
        tracep->declBit(c+239,"riscv_soc u_soc u_intc irq_sie_wr_q", false,-1);
        tracep->declBus(c+234,"riscv_soc u_soc u_intc irq_sie_set_out_w", false,-1, 3,0);
        tracep->declBit(c+240,"riscv_soc u_soc u_intc irq_cie_wr_q", false,-1);
        tracep->declBus(c+234,"riscv_soc u_soc u_intc irq_cie_clr_out_w", false,-1, 3,0);
        tracep->declBit(c+241,"riscv_soc u_soc u_intc irq_ivr_wr_q", false,-1);
        tracep->declBus(c+232,"riscv_soc u_soc u_intc irq_ivr_vector_out_w", false,-1, 31,0);
        tracep->declBit(c+242,"riscv_soc u_soc u_intc irq_mer_wr_q", false,-1);
        tracep->declBit(c+243,"riscv_soc u_soc u_intc irq_mer_me_q", false,-1);
        tracep->declBit(c+243,"riscv_soc u_soc u_intc irq_mer_me_out_w", false,-1);
        tracep->declBus(c+244,"riscv_soc u_soc u_intc irq_isr_status_in_w", false,-1, 3,0);
        tracep->declBus(c+245,"riscv_soc u_soc u_intc irq_ipr_pending_in_w", false,-1, 3,0);
        tracep->declBus(c+246,"riscv_soc u_soc u_intc irq_ier_enable_in_w", false,-1, 3,0);
        tracep->declBus(c+247,"riscv_soc u_soc u_intc irq_ivr_vector_in_w", false,-1, 31,0);
        tracep->declBus(c+84,"riscv_soc u_soc u_intc data_r", false,-1, 31,0);
        tracep->declBit(c+198,"riscv_soc u_soc u_intc rvalid_q", false,-1);
        tracep->declBus(c+208,"riscv_soc u_soc u_intc rd_data_q", false,-1, 31,0);
        tracep->declBit(c+207,"riscv_soc u_soc u_intc bvalid_q", false,-1);
        tracep->declBit(c+233,"riscv_soc u_soc u_intc irq_isr_wr_req_w", false,-1);
        tracep->declBit(c+236,"riscv_soc u_soc u_intc irq_ier_wr_req_w", false,-1);
        tracep->declBit(c+239,"riscv_soc u_soc u_intc irq_sie_wr_req_w", false,-1);
        tracep->declBit(c+240,"riscv_soc u_soc u_intc irq_cie_wr_req_w", false,-1);
        tracep->declBit(c+241,"riscv_soc u_soc u_intc irq_ivr_wr_req_w", false,-1);
        tracep->declBus(c+248,"riscv_soc u_soc u_intc irq_input_w", false,-1, 3,0);
        tracep->declBus(c+246,"riscv_soc u_soc u_intc irq_enable_q", false,-1, 3,0);
        tracep->declBus(c+244,"riscv_soc u_soc u_intc irq_pending_q", false,-1, 3,0);
        tracep->declBus(c+247,"riscv_soc u_soc u_intc ivr_vector_r", false,-1, 31,0);
        tracep->declBit(c+179,"riscv_soc u_soc u_intc intr_q", false,-1);
        tracep->declBit(c+3,"riscv_soc u_soc u_uart clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_uart rst_i", false,-1);
        tracep->declBit(c+76,"riscv_soc u_soc u_uart cfg_awvalid_i", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_uart cfg_awaddr_i", false,-1, 31,0);
        tracep->declBit(c+40,"riscv_soc u_soc u_uart cfg_wvalid_i", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_uart cfg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_uart cfg_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_uart cfg_bready_i", false,-1);
        tracep->declBit(c+45,"riscv_soc u_soc u_uart cfg_arvalid_i", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_uart cfg_araddr_i", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_uart cfg_rready_i", false,-1);
        tracep->declBit(c+17,"riscv_soc u_soc u_uart rx_i", false,-1);
        tracep->declBit(c+64,"riscv_soc u_soc u_uart cfg_awready_o", false,-1);
        tracep->declBit(c+64,"riscv_soc u_soc u_uart cfg_wready_o", false,-1);
        tracep->declBit(c+230,"riscv_soc u_soc u_uart cfg_bvalid_o", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_uart cfg_bresp_o", false,-1, 1,0);
        tracep->declBit(c+188,"riscv_soc u_soc u_uart cfg_arready_o", false,-1);
        tracep->declBit(c+182,"riscv_soc u_soc u_uart cfg_rvalid_o", false,-1);
        tracep->declBus(c+212,"riscv_soc u_soc u_uart cfg_rdata_o", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_uart cfg_rresp_o", false,-1, 1,0);
        tracep->declBit(c+156,"riscv_soc u_soc u_uart tx_o", false,-1);
        tracep->declBit(c+201,"riscv_soc u_soc u_uart intr_o", false,-1);
        tracep->declBus(c+249,"riscv_soc u_soc u_uart wr_data_q", false,-1, 31,0);
        tracep->declBit(c+85,"riscv_soc u_soc u_uart read_en_w", false,-1);
        tracep->declBit(c+86,"riscv_soc u_soc u_uart write_en_w", false,-1);
        tracep->declBit(c+250,"riscv_soc u_soc u_uart ulite_rx_wr_q", false,-1);
        tracep->declBit(c+251,"riscv_soc u_soc u_uart ulite_tx_wr_q", false,-1);
        tracep->declBus(c+252,"riscv_soc u_soc u_uart ulite_tx_data_out_w", false,-1, 7,0);
        tracep->declBit(c+253,"riscv_soc u_soc u_uart ulite_status_wr_q", false,-1);
        tracep->declBit(c+254,"riscv_soc u_soc u_uart ulite_control_wr_q", false,-1);
        tracep->declBit(c+255,"riscv_soc u_soc u_uart ulite_control_ie_q", false,-1);
        tracep->declBit(c+255,"riscv_soc u_soc u_uart ulite_control_ie_out_w", false,-1);
        tracep->declBit(c+256,"riscv_soc u_soc u_uart ulite_control_rst_rx_q", false,-1);
        tracep->declBit(c+256,"riscv_soc u_soc u_uart ulite_control_rst_rx_out_w", false,-1);
        tracep->declBit(c+257,"riscv_soc u_soc u_uart ulite_control_rst_tx_q", false,-1);
        tracep->declBit(c+257,"riscv_soc u_soc u_uart ulite_control_rst_tx_out_w", false,-1);
        tracep->declBus(c+258,"riscv_soc u_soc u_uart ulite_rx_data_in_w", false,-1, 7,0);
        tracep->declBit(c+255,"riscv_soc u_soc u_uart ulite_status_ie_in_w", false,-1);
        tracep->declBit(c+259,"riscv_soc u_soc u_uart ulite_status_txfull_in_w", false,-1);
        tracep->declBit(c+260,"riscv_soc u_soc u_uart ulite_status_txempty_in_w", false,-1);
        tracep->declBit(c+261,"riscv_soc u_soc u_uart ulite_status_rxfull_in_w", false,-1);
        tracep->declBit(c+261,"riscv_soc u_soc u_uart ulite_status_rxvalid_in_w", false,-1);
        tracep->declBus(c+87,"riscv_soc u_soc u_uart data_r", false,-1, 31,0);
        tracep->declBit(c+182,"riscv_soc u_soc u_uart rvalid_q", false,-1);
        tracep->declBus(c+212,"riscv_soc u_soc u_uart rd_data_q", false,-1, 31,0);
        tracep->declBit(c+230,"riscv_soc u_soc u_uart bvalid_q", false,-1);
        tracep->declBit(c+88,"riscv_soc u_soc u_uart ulite_rx_rd_req_w", false,-1);
        tracep->declBit(c+250,"riscv_soc u_soc u_uart ulite_rx_wr_req_w", false,-1);
        tracep->declBit(c+251,"riscv_soc u_soc u_uart ulite_tx_wr_req_w", false,-1);
        tracep->declBus(c+963,"riscv_soc u_soc u_uart STOP_BITS", false,-1, 0,0);
        tracep->declBus(c+964,"riscv_soc u_soc u_uart BIT_DIV", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_soc u_uart START_BIT", false,-1, 3,0);
        tracep->declBus(c+965,"riscv_soc u_soc u_uart STOP_BIT0", false,-1, 3,0);
        tracep->declBus(c+966,"riscv_soc u_soc u_uart STOP_BIT1", false,-1, 3,0);
        tracep->declBit(c+259,"riscv_soc u_soc u_uart tx_busy_q", false,-1);
        tracep->declBus(c+262,"riscv_soc u_soc u_uart tx_bits_q", false,-1, 3,0);
        tracep->declBus(c+263,"riscv_soc u_soc u_uart tx_count_q", false,-1, 31,0);
        tracep->declBus(c+264,"riscv_soc u_soc u_uart tx_shift_reg_q", false,-1, 7,0);
        tracep->declBit(c+156,"riscv_soc u_soc u_uart txd_q", false,-1);
        tracep->declBit(c+265,"riscv_soc u_soc u_uart rxd_q", false,-1);
        tracep->declBus(c+258,"riscv_soc u_soc u_uart rx_data_q", false,-1, 7,0);
        tracep->declBus(c+266,"riscv_soc u_soc u_uart rx_bits_q", false,-1, 3,0);
        tracep->declBus(c+267,"riscv_soc u_soc u_uart rx_count_q", false,-1, 31,0);
        tracep->declBus(c+268,"riscv_soc u_soc u_uart rx_shift_reg_q", false,-1, 7,0);
        tracep->declBit(c+261,"riscv_soc u_soc u_uart rx_ready_q", false,-1);
        tracep->declBit(c+269,"riscv_soc u_soc u_uart rx_busy_q", false,-1);
        tracep->declBit(c+270,"riscv_soc u_soc u_uart rx_err_q", false,-1);
        tracep->declBit(c+271,"riscv_soc u_soc u_uart rxd_ms_q", false,-1);
        tracep->declBit(c+272,"riscv_soc u_soc u_uart rx_sample_w", false,-1);
        tracep->declBit(c+273,"riscv_soc u_soc u_uart tx_sample_w", false,-1);
        tracep->declBit(c+274,"riscv_soc u_soc u_uart tx_complete_q", false,-1);
        tracep->declBit(c+275,"riscv_soc u_soc u_uart txd_r", false,-1);
        tracep->declBit(c+201,"riscv_soc u_soc u_uart intr_q", false,-1);
        tracep->declBit(c+3,"riscv_soc u_soc u_timer clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_timer rst_i", false,-1);
        tracep->declBit(c+63,"riscv_soc u_soc u_timer cfg_awvalid_i", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_timer cfg_awaddr_i", false,-1, 31,0);
        tracep->declBit(c+68,"riscv_soc u_soc u_timer cfg_wvalid_i", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_timer cfg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_timer cfg_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_timer cfg_bready_i", false,-1);
        tracep->declBit(c+62,"riscv_soc u_soc u_timer cfg_arvalid_i", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_timer cfg_araddr_i", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_timer cfg_rready_i", false,-1);
        tracep->declBit(c+58,"riscv_soc u_soc u_timer cfg_awready_o", false,-1);
        tracep->declBit(c+58,"riscv_soc u_soc u_timer cfg_wready_o", false,-1);
        tracep->declBit(c+210,"riscv_soc u_soc u_timer cfg_bvalid_o", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_timer cfg_bresp_o", false,-1, 1,0);
        tracep->declBit(c+216,"riscv_soc u_soc u_timer cfg_arready_o", false,-1);
        tracep->declBit(c+205,"riscv_soc u_soc u_timer cfg_rvalid_o", false,-1);
        tracep->declBus(c+215,"riscv_soc u_soc u_timer cfg_rdata_o", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_timer cfg_rresp_o", false,-1, 1,0);
        tracep->declBit(c+202,"riscv_soc u_soc u_timer intr_o", false,-1);
        tracep->declBus(c+276,"riscv_soc u_soc u_timer wr_data_q", false,-1, 31,0);
        tracep->declBit(c+142,"riscv_soc u_soc u_timer read_en_w", false,-1);
        tracep->declBit(c+89,"riscv_soc u_soc u_timer write_en_w", false,-1);
        tracep->declBit(c+277,"riscv_soc u_soc u_timer timer_ctrl0_wr_q", false,-1);
        tracep->declBit(c+278,"riscv_soc u_soc u_timer timer_ctrl0_interrupt_q", false,-1);
        tracep->declBit(c+278,"riscv_soc u_soc u_timer timer_ctrl0_interrupt_out_w", false,-1);
        tracep->declBit(c+279,"riscv_soc u_soc u_timer timer_ctrl0_enable_q", false,-1);
        tracep->declBit(c+279,"riscv_soc u_soc u_timer timer_ctrl0_enable_out_w", false,-1);
        tracep->declBit(c+280,"riscv_soc u_soc u_timer timer_cmp0_wr_q", false,-1);
        tracep->declBus(c+281,"riscv_soc u_soc u_timer timer_cmp0_value_q", false,-1, 31,0);
        tracep->declBus(c+281,"riscv_soc u_soc u_timer timer_cmp0_value_out_w", false,-1, 31,0);
        tracep->declBit(c+282,"riscv_soc u_soc u_timer timer_val0_wr_q", false,-1);
        tracep->declBus(c+276,"riscv_soc u_soc u_timer timer_val0_current_out_w", false,-1, 31,0);
        tracep->declBit(c+283,"riscv_soc u_soc u_timer timer_ctrl1_wr_q", false,-1);
        tracep->declBit(c+284,"riscv_soc u_soc u_timer timer_ctrl1_interrupt_q", false,-1);
        tracep->declBit(c+284,"riscv_soc u_soc u_timer timer_ctrl1_interrupt_out_w", false,-1);
        tracep->declBit(c+285,"riscv_soc u_soc u_timer timer_ctrl1_enable_q", false,-1);
        tracep->declBit(c+285,"riscv_soc u_soc u_timer timer_ctrl1_enable_out_w", false,-1);
        tracep->declBit(c+286,"riscv_soc u_soc u_timer timer_cmp1_wr_q", false,-1);
        tracep->declBus(c+287,"riscv_soc u_soc u_timer timer_cmp1_value_q", false,-1, 31,0);
        tracep->declBus(c+287,"riscv_soc u_soc u_timer timer_cmp1_value_out_w", false,-1, 31,0);
        tracep->declBit(c+288,"riscv_soc u_soc u_timer timer_val1_wr_q", false,-1);
        tracep->declBus(c+276,"riscv_soc u_soc u_timer timer_val1_current_out_w", false,-1, 31,0);
        tracep->declBus(c+289,"riscv_soc u_soc u_timer timer_val0_current_in_w", false,-1, 31,0);
        tracep->declBus(c+290,"riscv_soc u_soc u_timer timer_val1_current_in_w", false,-1, 31,0);
        tracep->declBus(c+90,"riscv_soc u_soc u_timer data_r", false,-1, 31,0);
        tracep->declBit(c+205,"riscv_soc u_soc u_timer rvalid_q", false,-1);
        tracep->declBus(c+215,"riscv_soc u_soc u_timer rd_data_q", false,-1, 31,0);
        tracep->declBit(c+210,"riscv_soc u_soc u_timer bvalid_q", false,-1);
        tracep->declBit(c+282,"riscv_soc u_soc u_timer timer_val0_wr_req_w", false,-1);
        tracep->declBit(c+288,"riscv_soc u_soc u_timer timer_val1_wr_req_w", false,-1);
        tracep->declBus(c+289,"riscv_soc u_soc u_timer timer0_value_q", false,-1, 31,0);
        tracep->declBit(c+291,"riscv_soc u_soc u_timer timer0_irq_w", false,-1);
        tracep->declBus(c+290,"riscv_soc u_soc u_timer timer1_value_q", false,-1, 31,0);
        tracep->declBit(c+292,"riscv_soc u_soc u_timer timer1_irq_w", false,-1);
        tracep->declBit(c+202,"riscv_soc u_soc u_timer intr_q", false,-1);
        tracep->declBit(c+3,"riscv_soc u_soc u_axi_tap clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_axi_tap rst_i", false,-1);
        tracep->declBit(c+72,"riscv_soc u_soc u_axi_tap inport_awvalid_i", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_axi_tap inport_awaddr_i", false,-1, 31,0);
        tracep->declBus(c+73,"riscv_soc u_soc u_axi_tap inport_awid_i", false,-1, 3,0);
        tracep->declBus(c+1,"riscv_soc u_soc u_axi_tap inport_awlen_i", false,-1, 7,0);
        tracep->declBus(c+61,"riscv_soc u_soc u_axi_tap inport_awburst_i", false,-1, 1,0);
        tracep->declBit(c+42,"riscv_soc u_soc u_axi_tap inport_wvalid_i", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_axi_tap inport_wdata_i", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_axi_tap inport_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+55,"riscv_soc u_soc u_axi_tap inport_wlast_i", false,-1);
        tracep->declBit(c+54,"riscv_soc u_soc u_axi_tap inport_bready_i", false,-1);
        tracep->declBit(c+38,"riscv_soc u_soc u_axi_tap inport_arvalid_i", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_axi_tap inport_araddr_i", false,-1, 31,0);
        tracep->declBus(c+37,"riscv_soc u_soc u_axi_tap inport_arid_i", false,-1, 3,0);
        tracep->declBus(c+75,"riscv_soc u_soc u_axi_tap inport_arlen_i", false,-1, 7,0);
        tracep->declBus(c+2,"riscv_soc u_soc u_axi_tap inport_arburst_i", false,-1, 1,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_axi_tap inport_rready_i", false,-1);
        tracep->declBit(c+192,"riscv_soc u_soc u_axi_tap outport_awready_i", false,-1);
        tracep->declBit(c+183,"riscv_soc u_soc u_axi_tap outport_wready_i", false,-1);
        tracep->declBit(c+191,"riscv_soc u_soc u_axi_tap outport_bvalid_i", false,-1);
        tracep->declBus(c+214,"riscv_soc u_soc u_axi_tap outport_bresp_i", false,-1, 1,0);
        tracep->declBus(c+197,"riscv_soc u_soc u_axi_tap outport_bid_i", false,-1, 3,0);
        tracep->declBit(c+195,"riscv_soc u_soc u_axi_tap outport_arready_i", false,-1);
        tracep->declBit(c+211,"riscv_soc u_soc u_axi_tap outport_rvalid_i", false,-1);
        tracep->declBus(c+187,"riscv_soc u_soc u_axi_tap outport_rdata_i", false,-1, 31,0);
        tracep->declBus(c+196,"riscv_soc u_soc u_axi_tap outport_rresp_i", false,-1, 1,0);
        tracep->declBus(c+194,"riscv_soc u_soc u_axi_tap outport_rid_i", false,-1, 3,0);
        tracep->declBit(c+193,"riscv_soc u_soc u_axi_tap outport_rlast_i", false,-1);
        tracep->declBit(c+43,"riscv_soc u_soc u_axi_tap outport_peripheral0_awready_i", false,-1);
        tracep->declBit(c+43,"riscv_soc u_soc u_axi_tap outport_peripheral0_wready_i", false,-1);
        tracep->declBit(c+207,"riscv_soc u_soc u_axi_tap outport_peripheral0_bvalid_i", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral0_bresp_i", false,-1, 1,0);
        tracep->declBit(c+184,"riscv_soc u_soc u_axi_tap outport_peripheral0_arready_i", false,-1);
        tracep->declBit(c+198,"riscv_soc u_soc u_axi_tap outport_peripheral0_rvalid_i", false,-1);
        tracep->declBus(c+208,"riscv_soc u_soc u_axi_tap outport_peripheral0_rdata_i", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral0_rresp_i", false,-1, 1,0);
        tracep->declBit(c+58,"riscv_soc u_soc u_axi_tap outport_peripheral1_awready_i", false,-1);
        tracep->declBit(c+58,"riscv_soc u_soc u_axi_tap outport_peripheral1_wready_i", false,-1);
        tracep->declBit(c+210,"riscv_soc u_soc u_axi_tap outport_peripheral1_bvalid_i", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral1_bresp_i", false,-1, 1,0);
        tracep->declBit(c+216,"riscv_soc u_soc u_axi_tap outport_peripheral1_arready_i", false,-1);
        tracep->declBit(c+205,"riscv_soc u_soc u_axi_tap outport_peripheral1_rvalid_i", false,-1);
        tracep->declBus(c+215,"riscv_soc u_soc u_axi_tap outport_peripheral1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral1_rresp_i", false,-1, 1,0);
        tracep->declBit(c+64,"riscv_soc u_soc u_axi_tap outport_peripheral2_awready_i", false,-1);
        tracep->declBit(c+64,"riscv_soc u_soc u_axi_tap outport_peripheral2_wready_i", false,-1);
        tracep->declBit(c+230,"riscv_soc u_soc u_axi_tap outport_peripheral2_bvalid_i", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral2_bresp_i", false,-1, 1,0);
        tracep->declBit(c+188,"riscv_soc u_soc u_axi_tap outport_peripheral2_arready_i", false,-1);
        tracep->declBit(c+182,"riscv_soc u_soc u_axi_tap outport_peripheral2_rvalid_i", false,-1);
        tracep->declBus(c+212,"riscv_soc u_soc u_axi_tap outport_peripheral2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral2_rresp_i", false,-1, 1,0);
        tracep->declBit(c+47,"riscv_soc u_soc u_axi_tap outport_peripheral3_awready_i", false,-1);
        tracep->declBit(c+47,"riscv_soc u_soc u_axi_tap outport_peripheral3_wready_i", false,-1);
        tracep->declBit(c+186,"riscv_soc u_soc u_axi_tap outport_peripheral3_bvalid_i", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral3_bresp_i", false,-1, 1,0);
        tracep->declBit(c+185,"riscv_soc u_soc u_axi_tap outport_peripheral3_arready_i", false,-1);
        tracep->declBit(c+199,"riscv_soc u_soc u_axi_tap outport_peripheral3_rvalid_i", false,-1);
        tracep->declBus(c+206,"riscv_soc u_soc u_axi_tap outport_peripheral3_rdata_i", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral3_rresp_i", false,-1, 1,0);
        tracep->declBit(c+49,"riscv_soc u_soc u_axi_tap outport_peripheral4_awready_i", false,-1);
        tracep->declBit(c+49,"riscv_soc u_soc u_axi_tap outport_peripheral4_wready_i", false,-1);
        tracep->declBit(c+231,"riscv_soc u_soc u_axi_tap outport_peripheral4_bvalid_i", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral4_bresp_i", false,-1, 1,0);
        tracep->declBit(c+190,"riscv_soc u_soc u_axi_tap outport_peripheral4_arready_i", false,-1);
        tracep->declBit(c+209,"riscv_soc u_soc u_axi_tap outport_peripheral4_rvalid_i", false,-1);
        tracep->declBus(c+189,"riscv_soc u_soc u_axi_tap outport_peripheral4_rdata_i", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral4_rresp_i", false,-1, 1,0);
        tracep->declBit(c+80,"riscv_soc u_soc u_axi_tap outport_peripheral5_awready_i", false,-1);
        tracep->declBit(c+80,"riscv_soc u_soc u_axi_tap outport_peripheral5_wready_i", false,-1);
        tracep->declBit(c+217,"riscv_soc u_soc u_axi_tap outport_peripheral5_bvalid_i", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral5_bresp_i", false,-1, 1,0);
        tracep->declBit(c+218,"riscv_soc u_soc u_axi_tap outport_peripheral5_arready_i", false,-1);
        tracep->declBit(c+219,"riscv_soc u_soc u_axi_tap outport_peripheral5_rvalid_i", false,-1);
        tracep->declBus(c+220,"riscv_soc u_soc u_axi_tap outport_peripheral5_rdata_i", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_axi_tap outport_peripheral5_rresp_i", false,-1, 1,0);
        tracep->declBit(c+52,"riscv_soc u_soc u_axi_tap inport_awready_o", false,-1);
        tracep->declBit(c+53,"riscv_soc u_soc u_axi_tap inport_wready_o", false,-1);
        tracep->declBit(c+213,"riscv_soc u_soc u_axi_tap inport_bvalid_o", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc u_axi_tap inport_bresp_o", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc u_axi_tap inport_bid_o", false,-1, 3,0);
        tracep->declBit(c+71,"riscv_soc u_soc u_axi_tap inport_arready_o", false,-1);
        tracep->declBit(c+200,"riscv_soc u_soc u_axi_tap inport_rvalid_o", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc u_axi_tap inport_rdata_o", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc u_axi_tap inport_rresp_o", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc u_axi_tap inport_rid_o", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc u_axi_tap inport_rlast_o", false,-1);
        tracep->declBit(c+59,"riscv_soc u_soc u_axi_tap outport_awvalid_o", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_axi_tap outport_awaddr_o", false,-1, 31,0);
        tracep->declBus(c+73,"riscv_soc u_soc u_axi_tap outport_awid_o", false,-1, 3,0);
        tracep->declBus(c+1,"riscv_soc u_soc u_axi_tap outport_awlen_o", false,-1, 7,0);
        tracep->declBus(c+61,"riscv_soc u_soc u_axi_tap outport_awburst_o", false,-1, 1,0);
        tracep->declBit(c+74,"riscv_soc u_soc u_axi_tap outport_wvalid_o", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_axi_tap outport_wdata_o", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_axi_tap outport_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+55,"riscv_soc u_soc u_axi_tap outport_wlast_o", false,-1);
        tracep->declBit(c+54,"riscv_soc u_soc u_axi_tap outport_bready_o", false,-1);
        tracep->declBit(c+39,"riscv_soc u_soc u_axi_tap outport_arvalid_o", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_axi_tap outport_araddr_o", false,-1, 31,0);
        tracep->declBus(c+37,"riscv_soc u_soc u_axi_tap outport_arid_o", false,-1, 3,0);
        tracep->declBus(c+75,"riscv_soc u_soc u_axi_tap outport_arlen_o", false,-1, 7,0);
        tracep->declBus(c+2,"riscv_soc u_soc u_axi_tap outport_arburst_o", false,-1, 1,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_axi_tap outport_rready_o", false,-1);
        tracep->declBit(c+69,"riscv_soc u_soc u_axi_tap outport_peripheral0_awvalid_o", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_axi_tap outport_peripheral0_awaddr_o", false,-1, 31,0);
        tracep->declBit(c+66,"riscv_soc u_soc u_axi_tap outport_peripheral0_wvalid_o", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_axi_tap outport_peripheral0_wdata_o", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_axi_tap outport_peripheral0_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_axi_tap outport_peripheral0_bready_o", false,-1);
        tracep->declBit(c+65,"riscv_soc u_soc u_axi_tap outport_peripheral0_arvalid_o", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_axi_tap outport_peripheral0_araddr_o", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_axi_tap outport_peripheral0_rready_o", false,-1);
        tracep->declBit(c+63,"riscv_soc u_soc u_axi_tap outport_peripheral1_awvalid_o", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_axi_tap outport_peripheral1_awaddr_o", false,-1, 31,0);
        tracep->declBit(c+68,"riscv_soc u_soc u_axi_tap outport_peripheral1_wvalid_o", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_axi_tap outport_peripheral1_wdata_o", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_axi_tap outport_peripheral1_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_axi_tap outport_peripheral1_bready_o", false,-1);
        tracep->declBit(c+62,"riscv_soc u_soc u_axi_tap outport_peripheral1_arvalid_o", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_axi_tap outport_peripheral1_araddr_o", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_axi_tap outport_peripheral1_rready_o", false,-1);
        tracep->declBit(c+76,"riscv_soc u_soc u_axi_tap outport_peripheral2_awvalid_o", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_axi_tap outport_peripheral2_awaddr_o", false,-1, 31,0);
        tracep->declBit(c+40,"riscv_soc u_soc u_axi_tap outport_peripheral2_wvalid_o", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_axi_tap outport_peripheral2_wdata_o", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_axi_tap outport_peripheral2_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_axi_tap outport_peripheral2_bready_o", false,-1);
        tracep->declBit(c+45,"riscv_soc u_soc u_axi_tap outport_peripheral2_arvalid_o", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_axi_tap outport_peripheral2_araddr_o", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_axi_tap outport_peripheral2_rready_o", false,-1);
        tracep->declBit(c+67,"riscv_soc u_soc u_axi_tap outport_peripheral3_awvalid_o", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_axi_tap outport_peripheral3_awaddr_o", false,-1, 31,0);
        tracep->declBit(c+51,"riscv_soc u_soc u_axi_tap outport_peripheral3_wvalid_o", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_axi_tap outport_peripheral3_wdata_o", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_axi_tap outport_peripheral3_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_axi_tap outport_peripheral3_bready_o", false,-1);
        tracep->declBit(c+70,"riscv_soc u_soc u_axi_tap outport_peripheral3_arvalid_o", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_axi_tap outport_peripheral3_araddr_o", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_axi_tap outport_peripheral3_rready_o", false,-1);
        tracep->declBit(c+60,"riscv_soc u_soc u_axi_tap outport_peripheral4_awvalid_o", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_axi_tap outport_peripheral4_awaddr_o", false,-1, 31,0);
        tracep->declBit(c+50,"riscv_soc u_soc u_axi_tap outport_peripheral4_wvalid_o", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_axi_tap outport_peripheral4_wdata_o", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_axi_tap outport_peripheral4_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_axi_tap outport_peripheral4_bready_o", false,-1);
        tracep->declBit(c+57,"riscv_soc u_soc u_axi_tap outport_peripheral4_arvalid_o", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_axi_tap outport_peripheral4_araddr_o", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_axi_tap outport_peripheral4_rready_o", false,-1);
        tracep->declBit(c+77,"riscv_soc u_soc u_axi_tap outport_peripheral5_awvalid_o", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_axi_tap outport_peripheral5_awaddr_o", false,-1, 31,0);
        tracep->declBit(c+78,"riscv_soc u_soc u_axi_tap outport_peripheral5_wvalid_o", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_axi_tap outport_peripheral5_wdata_o", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_axi_tap outport_peripheral5_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_axi_tap outport_peripheral5_bready_o", false,-1);
        tracep->declBit(c+79,"riscv_soc u_soc u_axi_tap outport_peripheral5_arvalid_o", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_axi_tap outport_peripheral5_araddr_o", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_axi_tap outport_peripheral5_rready_o", false,-1);
        tracep->declBus(c+293,"riscv_soc u_soc u_axi_tap read_pending_q", false,-1, 3,0);
        tracep->declBus(c+91,"riscv_soc u_soc u_axi_tap read_pending_r", false,-1, 3,0);
        tracep->declBus(c+294,"riscv_soc u_soc u_axi_tap arid_q", false,-1, 3,0);
        tracep->declBus(c+295,"riscv_soc u_soc u_axi_tap read_port_q", false,-1, 2,0);
        tracep->declBus(c+92,"riscv_soc u_soc u_axi_tap read_port_r", false,-1, 2,0);
        tracep->declBit(c+93,"riscv_soc u_soc u_axi_tap read_incr_w", false,-1);
        tracep->declBit(c+94,"riscv_soc u_soc u_axi_tap read_decr_w", false,-1);
        tracep->declBit(c+95,"riscv_soc u_soc u_axi_tap read_accept_w", false,-1);
        tracep->declBit(c+200,"riscv_soc u_soc u_axi_tap outport_rvalid_r", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc u_axi_tap outport_rdata_r", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc u_axi_tap outport_rresp_r", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc u_axi_tap outport_rid_r", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc u_axi_tap outport_rlast_r", false,-1);
        tracep->declBit(c+143,"riscv_soc u_soc u_axi_tap inport_arready_r", false,-1);
        tracep->declBus(c+296,"riscv_soc u_soc u_axi_tap write_pending_q", false,-1, 3,0);
        tracep->declBus(c+96,"riscv_soc u_soc u_axi_tap write_pending_r", false,-1, 3,0);
        tracep->declBus(c+297,"riscv_soc u_soc u_axi_tap awid_q", false,-1, 3,0);
        tracep->declBus(c+298,"riscv_soc u_soc u_axi_tap write_port_q", false,-1, 2,0);
        tracep->declBus(c+97,"riscv_soc u_soc u_axi_tap write_port_r", false,-1, 2,0);
        tracep->declBit(c+98,"riscv_soc u_soc u_axi_tap write_incr_w", false,-1);
        tracep->declBit(c+99,"riscv_soc u_soc u_axi_tap write_decr_w", false,-1);
        tracep->declBit(c+100,"riscv_soc u_soc u_axi_tap write_accept_w", false,-1);
        tracep->declBit(c+213,"riscv_soc u_soc u_axi_tap outport_bvalid_r", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc u_axi_tap outport_bresp_r", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc u_axi_tap outport_bid_r", false,-1, 3,0);
        tracep->declBit(c+144,"riscv_soc u_soc u_axi_tap inport_awready_r", false,-1);
        tracep->declBit(c+145,"riscv_soc u_soc u_axi_tap inport_wready_r", false,-1);
        tracep->declBit(c+3,"riscv_soc u_soc u_accel clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_accel rst_i", false,-1);
        tracep->declBit(c+77,"riscv_soc u_soc u_accel cfg_awvalid_i", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_accel cfg_awaddr_i", false,-1, 31,0);
        tracep->declBit(c+78,"riscv_soc u_soc u_accel cfg_wvalid_i", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_accel cfg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_accel cfg_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_accel cfg_bready_i", false,-1);
        tracep->declBit(c+79,"riscv_soc u_soc u_accel cfg_arvalid_i", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_accel cfg_araddr_i", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_accel cfg_rready_i", false,-1);
        tracep->declBit(c+140,"riscv_soc u_soc u_accel m_awready_i", false,-1);
        tracep->declBit(c+81,"riscv_soc u_soc u_accel m_wready_i", false,-1);
        tracep->declBit(c+228,"riscv_soc u_soc u_accel m_bvalid_i", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc u_accel m_bresp_i", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc u_accel m_bid_i", false,-1, 3,0);
        tracep->declBit(c+82,"riscv_soc u_soc u_accel m_arready_i", false,-1);
        tracep->declBit(c+229,"riscv_soc u_soc u_accel m_rvalid_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc u_accel m_rdata_i", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc u_accel m_rresp_i", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc u_accel m_rid_i", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc u_accel m_rlast_i", false,-1);
        tracep->declBit(c+80,"riscv_soc u_soc u_accel cfg_awready_o", false,-1);
        tracep->declBit(c+80,"riscv_soc u_soc u_accel cfg_wready_o", false,-1);
        tracep->declBit(c+217,"riscv_soc u_soc u_accel cfg_bvalid_o", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_accel cfg_bresp_o", false,-1, 1,0);
        tracep->declBit(c+218,"riscv_soc u_soc u_accel cfg_arready_o", false,-1);
        tracep->declBit(c+219,"riscv_soc u_soc u_accel cfg_rvalid_o", false,-1);
        tracep->declBus(c+220,"riscv_soc u_soc u_accel cfg_rdata_o", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_accel cfg_rresp_o", false,-1, 1,0);
        tracep->declBit(c+221,"riscv_soc u_soc u_accel m_awvalid_o", false,-1);
        tracep->declBus(c+222,"riscv_soc u_soc u_accel m_awaddr_o", false,-1, 31,0);
        tracep->declBus(c+961,"riscv_soc u_soc u_accel m_awid_o", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc u_accel m_awlen_o", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc u_accel m_awburst_o", false,-1, 1,0);
        tracep->declBit(c+221,"riscv_soc u_soc u_accel m_wvalid_o", false,-1);
        tracep->declBus(c+223,"riscv_soc u_soc u_accel m_wdata_o", false,-1, 31,0);
        tracep->declBus(c+962,"riscv_soc u_soc u_accel m_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_soc u_accel m_wlast_o", false,-1);
        tracep->declBit(c+224,"riscv_soc u_soc u_accel m_bready_o", false,-1);
        tracep->declBit(c+225,"riscv_soc u_soc u_accel m_arvalid_o", false,-1);
        tracep->declBus(c+226,"riscv_soc u_soc u_accel m_araddr_o", false,-1, 31,0);
        tracep->declBus(c+961,"riscv_soc u_soc u_accel m_arid_o", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc u_accel m_arlen_o", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc u_accel m_arburst_o", false,-1, 1,0);
        tracep->declBit(c+227,"riscv_soc u_soc u_accel m_rready_o", false,-1);
        tracep->declBit(c+957,"riscv_soc u_soc u_accel intr_o", false,-1);
        tracep->declBus(c+175,"riscv_soc u_soc u_accel status_o", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_soc u_accel IDLE", false,-1, 3,0);
        tracep->declBus(c+967,"riscv_soc u_soc u_accel READ_A", false,-1, 3,0);
        tracep->declBus(c+968,"riscv_soc u_soc u_accel WAIT_A", false,-1, 3,0);
        tracep->declBus(c+969,"riscv_soc u_soc u_accel READ_B", false,-1, 3,0);
        tracep->declBus(c+951,"riscv_soc u_soc u_accel WAIT_B", false,-1, 3,0);
        tracep->declBus(c+970,"riscv_soc u_soc u_accel COMPUTE", false,-1, 3,0);
        tracep->declBus(c+971,"riscv_soc u_soc u_accel STORE", false,-1, 3,0);
        tracep->declBus(c+972,"riscv_soc u_soc u_accel WAIT_C", false,-1, 3,0);
        tracep->declBus(c+958,"riscv_soc u_soc u_accel DONE", false,-1, 3,0);
        tracep->declBus(c+299,"riscv_soc u_soc u_accel state_q", false,-1, 3,0);
        tracep->declBus(c+300,"riscv_soc u_soc u_accel a_addr_q", false,-1, 31,0);
        tracep->declBus(c+301,"riscv_soc u_soc u_accel b_addr_q", false,-1, 31,0);
        tracep->declBus(c+302,"riscv_soc u_soc u_accel c_addr_q", false,-1, 31,0);
        tracep->declBus(c+303,"riscv_soc u_soc u_accel cycle_q", false,-1, 31,0);
        tracep->declBus(c+304,"riscv_soc u_soc u_accel mac_cycle_q", false,-1, 31,0);
        tracep->declBus(c+305,"riscv_soc u_soc u_accel error_q", false,-1, 31,0);
        tracep->declBus(c+306,"riscv_soc u_soc u_accel m_q", false,-1, 2,0);
        tracep->declBus(c+307,"riscv_soc u_soc u_accel n_q", false,-1, 2,0);
        tracep->declBus(c+308,"riscv_soc u_soc u_accel k_q", false,-1, 2,0);
        tracep->declBus(c+309,"riscv_soc u_soc u_accel index_q", false,-1, 3,0);
        tracep->declBus(c+310,"riscv_soc u_soc u_accel compute_q", false,-1, 3,0);
        tracep->declBit(c+217,"riscv_soc u_soc u_accel bvalid_q", false,-1);
        tracep->declBit(c+219,"riscv_soc u_soc u_accel rvalid_q", false,-1);
        tracep->declBus(c+220,"riscv_soc u_soc u_accel rd_data_q", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+311+i*1,"riscv_soc u_soc u_accel a_mem", true,(i+0), 31,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+327+i*1,"riscv_soc u_soc u_accel b_mem", true,(i+0), 31,0);}}
        tracep->declBus(c+343,"riscv_soc u_soc u_accel accum(0)(0)", false,-1, 31,0);
        tracep->declBus(c+344,"riscv_soc u_soc u_accel accum(0)(1)", false,-1, 31,0);
        tracep->declBus(c+345,"riscv_soc u_soc u_accel accum(0)(2)", false,-1, 31,0);
        tracep->declBus(c+346,"riscv_soc u_soc u_accel accum(0)(3)", false,-1, 31,0);
        tracep->declBus(c+347,"riscv_soc u_soc u_accel accum(1)(0)", false,-1, 31,0);
        tracep->declBus(c+348,"riscv_soc u_soc u_accel accum(1)(1)", false,-1, 31,0);
        tracep->declBus(c+349,"riscv_soc u_soc u_accel accum(1)(2)", false,-1, 31,0);
        tracep->declBus(c+350,"riscv_soc u_soc u_accel accum(1)(3)", false,-1, 31,0);
        tracep->declBus(c+351,"riscv_soc u_soc u_accel accum(2)(0)", false,-1, 31,0);
        tracep->declBus(c+352,"riscv_soc u_soc u_accel accum(2)(1)", false,-1, 31,0);
        tracep->declBus(c+353,"riscv_soc u_soc u_accel accum(2)(2)", false,-1, 31,0);
        tracep->declBus(c+354,"riscv_soc u_soc u_accel accum(2)(3)", false,-1, 31,0);
        tracep->declBus(c+355,"riscv_soc u_soc u_accel accum(3)(0)", false,-1, 31,0);
        tracep->declBus(c+356,"riscv_soc u_soc u_accel accum(3)(1)", false,-1, 31,0);
        tracep->declBus(c+357,"riscv_soc u_soc u_accel accum(3)(2)", false,-1, 31,0);
        tracep->declBus(c+358,"riscv_soc u_soc u_accel accum(3)(3)", false,-1, 31,0);
        tracep->declBus(c+359,"riscv_soc u_soc u_accel a_pipe(0)(0)", false,-1, 31,0);
        tracep->declBus(c+360,"riscv_soc u_soc u_accel a_pipe(0)(1)", false,-1, 31,0);
        tracep->declBus(c+361,"riscv_soc u_soc u_accel a_pipe(0)(2)", false,-1, 31,0);
        tracep->declBus(c+362,"riscv_soc u_soc u_accel a_pipe(0)(3)", false,-1, 31,0);
        tracep->declBus(c+363,"riscv_soc u_soc u_accel a_pipe(1)(0)", false,-1, 31,0);
        tracep->declBus(c+364,"riscv_soc u_soc u_accel a_pipe(1)(1)", false,-1, 31,0);
        tracep->declBus(c+365,"riscv_soc u_soc u_accel a_pipe(1)(2)", false,-1, 31,0);
        tracep->declBus(c+366,"riscv_soc u_soc u_accel a_pipe(1)(3)", false,-1, 31,0);
        tracep->declBus(c+367,"riscv_soc u_soc u_accel a_pipe(2)(0)", false,-1, 31,0);
        tracep->declBus(c+368,"riscv_soc u_soc u_accel a_pipe(2)(1)", false,-1, 31,0);
        tracep->declBus(c+369,"riscv_soc u_soc u_accel a_pipe(2)(2)", false,-1, 31,0);
        tracep->declBus(c+370,"riscv_soc u_soc u_accel a_pipe(2)(3)", false,-1, 31,0);
        tracep->declBus(c+371,"riscv_soc u_soc u_accel a_pipe(3)(0)", false,-1, 31,0);
        tracep->declBus(c+372,"riscv_soc u_soc u_accel a_pipe(3)(1)", false,-1, 31,0);
        tracep->declBus(c+373,"riscv_soc u_soc u_accel a_pipe(3)(2)", false,-1, 31,0);
        tracep->declBus(c+374,"riscv_soc u_soc u_accel a_pipe(3)(3)", false,-1, 31,0);
        tracep->declBus(c+375,"riscv_soc u_soc u_accel b_pipe(0)(0)", false,-1, 31,0);
        tracep->declBus(c+376,"riscv_soc u_soc u_accel b_pipe(0)(1)", false,-1, 31,0);
        tracep->declBus(c+377,"riscv_soc u_soc u_accel b_pipe(0)(2)", false,-1, 31,0);
        tracep->declBus(c+378,"riscv_soc u_soc u_accel b_pipe(0)(3)", false,-1, 31,0);
        tracep->declBus(c+379,"riscv_soc u_soc u_accel b_pipe(1)(0)", false,-1, 31,0);
        tracep->declBus(c+380,"riscv_soc u_soc u_accel b_pipe(1)(1)", false,-1, 31,0);
        tracep->declBus(c+381,"riscv_soc u_soc u_accel b_pipe(1)(2)", false,-1, 31,0);
        tracep->declBus(c+382,"riscv_soc u_soc u_accel b_pipe(1)(3)", false,-1, 31,0);
        tracep->declBus(c+383,"riscv_soc u_soc u_accel b_pipe(2)(0)", false,-1, 31,0);
        tracep->declBus(c+384,"riscv_soc u_soc u_accel b_pipe(2)(1)", false,-1, 31,0);
        tracep->declBus(c+385,"riscv_soc u_soc u_accel b_pipe(2)(2)", false,-1, 31,0);
        tracep->declBus(c+386,"riscv_soc u_soc u_accel b_pipe(2)(3)", false,-1, 31,0);
        tracep->declBus(c+387,"riscv_soc u_soc u_accel b_pipe(3)(0)", false,-1, 31,0);
        tracep->declBus(c+388,"riscv_soc u_soc u_accel b_pipe(3)(1)", false,-1, 31,0);
        tracep->declBus(c+389,"riscv_soc u_soc u_accel b_pipe(3)(2)", false,-1, 31,0);
        tracep->declBus(c+390,"riscv_soc u_soc u_accel b_pipe(3)(3)", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+391+i*1,"riscv_soc u_soc u_accel a_feed", true,(i+0), 31,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+395+i*1,"riscv_soc u_soc u_accel b_feed", true,(i+0), 31,0);}}
        tracep->declBus(c+101,"riscv_soc u_soc u_accel data_r", false,-1, 31,0);
        tracep->declBus(c+399,"riscv_soc u_soc u_accel i", false,-1, 31,0);
        tracep->declBus(c+400,"riscv_soc u_soc u_accel row", false,-1, 31,0);
        tracep->declBus(c+401,"riscv_soc u_soc u_accel col", false,-1, 31,0);
        tracep->declBus(c+402,"riscv_soc u_soc u_accel q_idx", false,-1, 31,0);
        tracep->declBit(c+102,"riscv_soc u_soc u_accel read_en_w", false,-1);
        tracep->declBit(c+103,"riscv_soc u_soc u_accel write_en_w", false,-1);
        tracep->declBit(c+104,"riscv_soc u_soc u_accel start_w", false,-1);
        tracep->declBit(c+403,"riscv_soc u_soc u_accel dims_ok_w", false,-1);
        tracep->declBit(c+404,"riscv_soc u_soc u_accel addresses_ok_w", false,-1);
        tracep->declBit(c+405,"riscv_soc u_soc u_accel start_ok_w", false,-1);
        tracep->declBit(c+3,"riscv_soc u_soc u_arb clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_arb rst_i", false,-1);
        tracep->declBit(c+6,"riscv_soc u_soc u_arb inport0_awvalid_i", false,-1);
        tracep->declBus(c+7,"riscv_soc u_soc u_arb inport0_awaddr_i", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_soc u_arb inport0_awid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc u_arb inport0_awlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc u_arb inport0_awburst_i", false,-1, 1,0);
        tracep->declBit(c+8,"riscv_soc u_soc u_arb inport0_wvalid_i", false,-1);
        tracep->declBus(c+9,"riscv_soc u_soc u_arb inport0_wdata_i", false,-1, 31,0);
        tracep->declBus(c+10,"riscv_soc u_soc u_arb inport0_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_soc u_arb inport0_wlast_i", false,-1);
        tracep->declBit(c+11,"riscv_soc u_soc u_arb inport0_bready_i", false,-1);
        tracep->declBit(c+12,"riscv_soc u_soc u_arb inport0_arvalid_i", false,-1);
        tracep->declBus(c+13,"riscv_soc u_soc u_arb inport0_araddr_i", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_soc u_arb inport0_arid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc u_arb inport0_arlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc u_arb inport0_arburst_i", false,-1, 1,0);
        tracep->declBit(c+14,"riscv_soc u_soc u_arb inport0_rready_i", false,-1);
        tracep->declBit(c+828,"riscv_soc u_soc u_arb inport1_awvalid_i", false,-1);
        tracep->declBus(c+554,"riscv_soc u_soc u_arb inport1_awaddr_i", false,-1, 31,0);
        tracep->declBus(c+951,"riscv_soc u_soc u_arb inport1_awid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc u_arb inport1_awlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc u_arb inport1_awburst_i", false,-1, 1,0);
        tracep->declBit(c+831,"riscv_soc u_soc u_arb inport1_wvalid_i", false,-1);
        tracep->declBus(c+555,"riscv_soc u_soc u_arb inport1_wdata_i", false,-1, 31,0);
        tracep->declBus(c+556,"riscv_soc u_soc u_arb inport1_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_soc u_arb inport1_wlast_i", false,-1);
        tracep->declBit(c+954,"riscv_soc u_soc u_arb inport1_bready_i", false,-1);
        tracep->declBit(c+830,"riscv_soc u_soc u_arb inport1_arvalid_i", false,-1);
        tracep->declBus(c+554,"riscv_soc u_soc u_arb inport1_araddr_i", false,-1, 31,0);
        tracep->declBus(c+951,"riscv_soc u_soc u_arb inport1_arid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc u_arb inport1_arlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc u_arb inport1_arburst_i", false,-1, 1,0);
        tracep->declBit(c+954,"riscv_soc u_soc u_arb inport1_rready_i", false,-1);
        tracep->declBit(c+957,"riscv_soc u_soc u_arb inport2_awvalid_i", false,-1);
        tracep->declBus(c+953,"riscv_soc u_soc u_arb inport2_awaddr_i", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_soc u_arb inport2_awid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc u_arb inport2_awlen_i", false,-1, 7,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_arb inport2_awburst_i", false,-1, 1,0);
        tracep->declBit(c+957,"riscv_soc u_soc u_arb inport2_wvalid_i", false,-1);
        tracep->declBus(c+953,"riscv_soc u_soc u_arb inport2_wdata_i", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_soc u_arb inport2_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+957,"riscv_soc u_soc u_arb inport2_wlast_i", false,-1);
        tracep->declBit(c+957,"riscv_soc u_soc u_arb inport2_bready_i", false,-1);
        tracep->declBit(c+829,"riscv_soc u_soc u_arb inport2_arvalid_i", false,-1);
        tracep->declBus(c+557,"riscv_soc u_soc u_arb inport2_araddr_i", false,-1, 31,0);
        tracep->declBus(c+958,"riscv_soc u_soc u_arb inport2_arid_i", false,-1, 3,0);
        tracep->declBus(c+959,"riscv_soc u_soc u_arb inport2_arlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc u_arb inport2_arburst_i", false,-1, 1,0);
        tracep->declBit(c+954,"riscv_soc u_soc u_arb inport2_rready_i", false,-1);
        tracep->declBit(c+221,"riscv_soc u_soc u_arb inport3_awvalid_i", false,-1);
        tracep->declBus(c+222,"riscv_soc u_soc u_arb inport3_awaddr_i", false,-1, 31,0);
        tracep->declBus(c+961,"riscv_soc u_soc u_arb inport3_awid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc u_arb inport3_awlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc u_arb inport3_awburst_i", false,-1, 1,0);
        tracep->declBit(c+221,"riscv_soc u_soc u_arb inport3_wvalid_i", false,-1);
        tracep->declBus(c+223,"riscv_soc u_soc u_arb inport3_wdata_i", false,-1, 31,0);
        tracep->declBus(c+962,"riscv_soc u_soc u_arb inport3_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_soc u_arb inport3_wlast_i", false,-1);
        tracep->declBit(c+224,"riscv_soc u_soc u_arb inport3_bready_i", false,-1);
        tracep->declBit(c+225,"riscv_soc u_soc u_arb inport3_arvalid_i", false,-1);
        tracep->declBus(c+226,"riscv_soc u_soc u_arb inport3_araddr_i", false,-1, 31,0);
        tracep->declBus(c+961,"riscv_soc u_soc u_arb inport3_arid_i", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_soc u_arb inport3_arlen_i", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_soc u_arb inport3_arburst_i", false,-1, 1,0);
        tracep->declBit(c+227,"riscv_soc u_soc u_arb inport3_rready_i", false,-1);
        tracep->declBit(c+52,"riscv_soc u_soc u_arb outport_awready_i", false,-1);
        tracep->declBit(c+53,"riscv_soc u_soc u_arb outport_wready_i", false,-1);
        tracep->declBit(c+213,"riscv_soc u_soc u_arb outport_bvalid_i", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc u_arb outport_bresp_i", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc u_arb outport_bid_i", false,-1, 3,0);
        tracep->declBit(c+71,"riscv_soc u_soc u_arb outport_arready_i", false,-1);
        tracep->declBit(c+200,"riscv_soc u_soc u_arb outport_rvalid_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc u_arb outport_rdata_i", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc u_arb outport_rresp_i", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc u_arb outport_rid_i", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc u_arb outport_rlast_i", false,-1);
        tracep->declBit(c+138,"riscv_soc u_soc u_arb inport0_awready_o", false,-1);
        tracep->declBit(c+30,"riscv_soc u_soc u_arb inport0_wready_o", false,-1);
        tracep->declBit(c+150,"riscv_soc u_soc u_arb inport0_bvalid_o", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc u_arb inport0_bresp_o", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc u_arb inport0_bid_o", false,-1, 3,0);
        tracep->declBit(c+31,"riscv_soc u_soc u_arb inport0_arready_o", false,-1);
        tracep->declBit(c+152,"riscv_soc u_soc u_arb inport0_rvalid_o", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc u_arb inport0_rdata_o", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc u_arb inport0_rresp_o", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc u_arb inport0_rid_o", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc u_arb inport0_rlast_o", false,-1);
        tracep->declBit(c+32,"riscv_soc u_soc u_arb inport1_awready_o", false,-1);
        tracep->declBit(c+36,"riscv_soc u_soc u_arb inport1_wready_o", false,-1);
        tracep->declBit(c+177,"riscv_soc u_soc u_arb inport1_bvalid_o", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc u_arb inport1_bresp_o", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc u_arb inport1_bid_o", false,-1, 3,0);
        tracep->declBit(c+35,"riscv_soc u_soc u_arb inport1_arready_o", false,-1);
        tracep->declBit(c+181,"riscv_soc u_soc u_arb inport1_rvalid_o", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc u_arb inport1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc u_arb inport1_rresp_o", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc u_arb inport1_rid_o", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc u_arb inport1_rlast_o", false,-1);
        tracep->declBit(c+139,"riscv_soc u_soc u_arb inport2_awready_o", false,-1);
        tracep->declBit(c+33,"riscv_soc u_soc u_arb inport2_wready_o", false,-1);
        tracep->declBit(c+178,"riscv_soc u_soc u_arb inport2_bvalid_o", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc u_arb inport2_bresp_o", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc u_arb inport2_bid_o", false,-1, 3,0);
        tracep->declBit(c+34,"riscv_soc u_soc u_arb inport2_arready_o", false,-1);
        tracep->declBit(c+822,"riscv_soc u_soc u_arb inport2_rvalid_o", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc u_arb inport2_rdata_o", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc u_arb inport2_rresp_o", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc u_arb inport2_rid_o", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc u_arb inport2_rlast_o", false,-1);
        tracep->declBit(c+140,"riscv_soc u_soc u_arb inport3_awready_o", false,-1);
        tracep->declBit(c+81,"riscv_soc u_soc u_arb inport3_wready_o", false,-1);
        tracep->declBit(c+228,"riscv_soc u_soc u_arb inport3_bvalid_o", false,-1);
        tracep->declBus(c+151,"riscv_soc u_soc u_arb inport3_bresp_o", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_soc u_arb inport3_bid_o", false,-1, 3,0);
        tracep->declBit(c+82,"riscv_soc u_soc u_arb inport3_arready_o", false,-1);
        tracep->declBit(c+229,"riscv_soc u_soc u_arb inport3_rvalid_o", false,-1);
        tracep->declBus(c+820,"riscv_soc u_soc u_arb inport3_rdata_o", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_soc u_arb inport3_rresp_o", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_soc u_arb inport3_rid_o", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_soc u_arb inport3_rlast_o", false,-1);
        tracep->declBit(c+72,"riscv_soc u_soc u_arb outport_awvalid_o", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_arb outport_awaddr_o", false,-1, 31,0);
        tracep->declBus(c+73,"riscv_soc u_soc u_arb outport_awid_o", false,-1, 3,0);
        tracep->declBus(c+1,"riscv_soc u_soc u_arb outport_awlen_o", false,-1, 7,0);
        tracep->declBus(c+61,"riscv_soc u_soc u_arb outport_awburst_o", false,-1, 1,0);
        tracep->declBit(c+42,"riscv_soc u_soc u_arb outport_wvalid_o", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_arb outport_wdata_o", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_arb outport_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+55,"riscv_soc u_soc u_arb outport_wlast_o", false,-1);
        tracep->declBit(c+54,"riscv_soc u_soc u_arb outport_bready_o", false,-1);
        tracep->declBit(c+38,"riscv_soc u_soc u_arb outport_arvalid_o", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_arb outport_araddr_o", false,-1, 31,0);
        tracep->declBus(c+37,"riscv_soc u_soc u_arb outport_arid_o", false,-1, 3,0);
        tracep->declBus(c+75,"riscv_soc u_soc u_arb outport_arlen_o", false,-1, 7,0);
        tracep->declBus(c+2,"riscv_soc u_soc u_arb outport_arburst_o", false,-1, 1,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_arb outport_rready_o", false,-1);
        tracep->declBus(c+947,"riscv_soc u_soc u_arb read_req_w", false,-1, 3,0);
        tracep->declBit(c+406,"riscv_soc u_soc u_arb read_hold_q", false,-1);
        tracep->declBus(c+105,"riscv_soc u_soc u_arb read_grant_w", false,-1, 3,0);
        tracep->declBit(c+38,"riscv_soc u_soc u_arb outport_arvalid_r", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_arb outport_araddr_r", false,-1, 31,0);
        tracep->declBus(c+37,"riscv_soc u_soc u_arb outport_arid_r", false,-1, 3,0);
        tracep->declBus(c+75,"riscv_soc u_soc u_arb outport_arlen_r", false,-1, 7,0);
        tracep->declBus(c+2,"riscv_soc u_soc u_arb outport_arburst_r", false,-1, 1,0);
        tracep->declBus(c+407,"riscv_soc u_soc u_arb rd_resp_target_r", false,-1, 3,0);
        tracep->declBus(c+146,"riscv_soc u_soc u_arb inport_rready_w", false,-1, 3,0);
        tracep->declBus(c+948,"riscv_soc u_soc u_arb write_req_w", false,-1, 3,0);
        tracep->declBit(c+408,"riscv_soc u_soc u_arb write_hold_q", false,-1);
        tracep->declBit(c+409,"riscv_soc u_soc u_arb write_dataphase_q", false,-1);
        tracep->declBus(c+106,"riscv_soc u_soc u_arb write_grant_w", false,-1, 3,0);
        tracep->declBit(c+107,"riscv_soc u_soc u_arb write_hold_r", false,-1);
        tracep->declBit(c+108,"riscv_soc u_soc u_arb write_dataphase_r", false,-1);
        tracep->declBit(c+109,"riscv_soc u_soc u_arb outport_awvalid_r", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_arb outport_awaddr_r", false,-1, 31,0);
        tracep->declBus(c+73,"riscv_soc u_soc u_arb outport_awid_r", false,-1, 3,0);
        tracep->declBus(c+1,"riscv_soc u_soc u_arb outport_awlen_r", false,-1, 7,0);
        tracep->declBus(c+61,"riscv_soc u_soc u_arb outport_awburst_r", false,-1, 1,0);
        tracep->declBit(c+42,"riscv_soc u_soc u_arb outport_wvalid_r", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_arb outport_wdata_r", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_arb outport_wstrb_r", false,-1, 3,0);
        tracep->declBit(c+55,"riscv_soc u_soc u_arb outport_wlast_r", false,-1);
        tracep->declBus(c+410,"riscv_soc u_soc u_arb wr_resp_target_r", false,-1, 3,0);
        tracep->declBus(c+147,"riscv_soc u_soc u_arb inport_bready_w", false,-1, 3,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_arb u_rd_arb clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_arb u_rd_arb rst_i", false,-1);
        tracep->declBit(c+406,"riscv_soc u_soc u_arb u_rd_arb hold_i", false,-1);
        tracep->declBus(c+947,"riscv_soc u_soc u_arb u_rd_arb request_i", false,-1, 3,0);
        tracep->declBus(c+105,"riscv_soc u_soc u_arb u_rd_arb grant_o", false,-1, 3,0);
        tracep->declBus(c+110,"riscv_soc u_soc u_arb u_rd_arb req_ffs_masked_w", false,-1, 3,0);
        tracep->declBus(c+111,"riscv_soc u_soc u_arb u_rd_arb req_ffs_unmasked_w", false,-1, 3,0);
        tracep->declBus(c+112,"riscv_soc u_soc u_arb u_rd_arb req_ffs_w", false,-1, 3,0);
        tracep->declBus(c+411,"riscv_soc u_soc u_arb u_rd_arb mask_next_q", false,-1, 3,0);
        tracep->declBus(c+412,"riscv_soc u_soc u_arb u_rd_arb grant_last_q", false,-1, 3,0);
        tracep->declBus(c+113,"riscv_soc u_soc u_arb u_rd_arb grant_new_w", false,-1, 3,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_arb u_wr_arb clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_arb u_wr_arb rst_i", false,-1);
        tracep->declBit(c+408,"riscv_soc u_soc u_arb u_wr_arb hold_i", false,-1);
        tracep->declBus(c+948,"riscv_soc u_soc u_arb u_wr_arb request_i", false,-1, 3,0);
        tracep->declBus(c+106,"riscv_soc u_soc u_arb u_wr_arb grant_o", false,-1, 3,0);
        tracep->declBus(c+114,"riscv_soc u_soc u_arb u_wr_arb req_ffs_masked_w", false,-1, 3,0);
        tracep->declBus(c+115,"riscv_soc u_soc u_arb u_wr_arb req_ffs_unmasked_w", false,-1, 3,0);
        tracep->declBus(c+116,"riscv_soc u_soc u_arb u_wr_arb req_ffs_w", false,-1, 3,0);
        tracep->declBus(c+413,"riscv_soc u_soc u_arb u_wr_arb mask_next_q", false,-1, 3,0);
        tracep->declBus(c+414,"riscv_soc u_soc u_arb u_wr_arb grant_last_q", false,-1, 3,0);
        tracep->declBus(c+117,"riscv_soc u_soc u_arb u_wr_arb grant_new_w", false,-1, 3,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_spi clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_spi rst_i", false,-1);
        tracep->declBit(c+67,"riscv_soc u_soc u_spi cfg_awvalid_i", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_spi cfg_awaddr_i", false,-1, 31,0);
        tracep->declBit(c+51,"riscv_soc u_soc u_spi cfg_wvalid_i", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_spi cfg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_spi cfg_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_spi cfg_bready_i", false,-1);
        tracep->declBit(c+70,"riscv_soc u_soc u_spi cfg_arvalid_i", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_spi cfg_araddr_i", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_spi cfg_rready_i", false,-1);
        tracep->declBit(c+16,"riscv_soc u_soc u_spi spi_miso_i", false,-1);
        tracep->declBit(c+47,"riscv_soc u_soc u_spi cfg_awready_o", false,-1);
        tracep->declBit(c+47,"riscv_soc u_soc u_spi cfg_wready_o", false,-1);
        tracep->declBit(c+186,"riscv_soc u_soc u_spi cfg_bvalid_o", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_spi cfg_bresp_o", false,-1, 1,0);
        tracep->declBit(c+185,"riscv_soc u_soc u_spi cfg_arready_o", false,-1);
        tracep->declBit(c+199,"riscv_soc u_soc u_spi cfg_rvalid_o", false,-1);
        tracep->declBus(c+206,"riscv_soc u_soc u_spi cfg_rdata_o", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_spi cfg_rresp_o", false,-1, 1,0);
        tracep->declBit(c+153,"riscv_soc u_soc u_spi spi_clk_o", false,-1);
        tracep->declBit(c+154,"riscv_soc u_soc u_spi spi_mosi_o", false,-1);
        tracep->declBit(c+155,"riscv_soc u_soc u_spi spi_cs_o", false,-1);
        tracep->declBit(c+204,"riscv_soc u_soc u_spi intr_o", false,-1);
        tracep->declBus(c+249,"riscv_soc u_soc u_spi wr_data_q", false,-1, 31,0);
        tracep->declBit(c+118,"riscv_soc u_soc u_spi read_en_w", false,-1);
        tracep->declBit(c+119,"riscv_soc u_soc u_spi write_en_w", false,-1);
        tracep->declBit(c+415,"riscv_soc u_soc u_spi spi_dgier_wr_q", false,-1);
        tracep->declBit(c+416,"riscv_soc u_soc u_spi spi_dgier_gie_q", false,-1);
        tracep->declBit(c+416,"riscv_soc u_soc u_spi spi_dgier_gie_out_w", false,-1);
        tracep->declBit(c+417,"riscv_soc u_soc u_spi spi_ipisr_wr_q", false,-1);
        tracep->declBit(c+418,"riscv_soc u_soc u_spi spi_ipisr_tx_empty_out_w", false,-1);
        tracep->declBit(c+419,"riscv_soc u_soc u_spi spi_ipier_wr_q", false,-1);
        tracep->declBit(c+420,"riscv_soc u_soc u_spi spi_ipier_tx_empty_q", false,-1);
        tracep->declBit(c+420,"riscv_soc u_soc u_spi spi_ipier_tx_empty_out_w", false,-1);
        tracep->declBit(c+421,"riscv_soc u_soc u_spi spi_srr_wr_q", false,-1);
        tracep->declBus(c+422,"riscv_soc u_soc u_spi spi_srr_reset_q", false,-1, 31,0);
        tracep->declBus(c+422,"riscv_soc u_soc u_spi spi_srr_reset_out_w", false,-1, 31,0);
        tracep->declBit(c+423,"riscv_soc u_soc u_spi spi_cr_wr_q", false,-1);
        tracep->declBit(c+424,"riscv_soc u_soc u_spi spi_cr_loop_q", false,-1);
        tracep->declBit(c+424,"riscv_soc u_soc u_spi spi_cr_loop_out_w", false,-1);
        tracep->declBit(c+425,"riscv_soc u_soc u_spi spi_cr_spe_q", false,-1);
        tracep->declBit(c+425,"riscv_soc u_soc u_spi spi_cr_spe_out_w", false,-1);
        tracep->declBit(c+426,"riscv_soc u_soc u_spi spi_cr_master_q", false,-1);
        tracep->declBit(c+426,"riscv_soc u_soc u_spi spi_cr_master_out_w", false,-1);
        tracep->declBit(c+427,"riscv_soc u_soc u_spi spi_cr_cpol_q", false,-1);
        tracep->declBit(c+427,"riscv_soc u_soc u_spi spi_cr_cpol_out_w", false,-1);
        tracep->declBit(c+428,"riscv_soc u_soc u_spi spi_cr_cpha_q", false,-1);
        tracep->declBit(c+428,"riscv_soc u_soc u_spi spi_cr_cpha_out_w", false,-1);
        tracep->declBit(c+429,"riscv_soc u_soc u_spi spi_cr_txfifo_rst_q", false,-1);
        tracep->declBit(c+429,"riscv_soc u_soc u_spi spi_cr_txfifo_rst_out_w", false,-1);
        tracep->declBit(c+430,"riscv_soc u_soc u_spi spi_cr_rxfifo_rst_q", false,-1);
        tracep->declBit(c+430,"riscv_soc u_soc u_spi spi_cr_rxfifo_rst_out_w", false,-1);
        tracep->declBit(c+431,"riscv_soc u_soc u_spi spi_cr_manual_ss_q", false,-1);
        tracep->declBit(c+431,"riscv_soc u_soc u_spi spi_cr_manual_ss_out_w", false,-1);
        tracep->declBit(c+432,"riscv_soc u_soc u_spi spi_cr_trans_inhibit_q", false,-1);
        tracep->declBit(c+432,"riscv_soc u_soc u_spi spi_cr_trans_inhibit_out_w", false,-1);
        tracep->declBit(c+433,"riscv_soc u_soc u_spi spi_cr_lsb_first_q", false,-1);
        tracep->declBit(c+433,"riscv_soc u_soc u_spi spi_cr_lsb_first_out_w", false,-1);
        tracep->declBit(c+434,"riscv_soc u_soc u_spi spi_sr_wr_q", false,-1);
        tracep->declBit(c+435,"riscv_soc u_soc u_spi spi_dtr_wr_q", false,-1);
        tracep->declBus(c+252,"riscv_soc u_soc u_spi spi_dtr_data_out_w", false,-1, 7,0);
        tracep->declBit(c+436,"riscv_soc u_soc u_spi spi_drr_wr_q", false,-1);
        tracep->declBit(c+437,"riscv_soc u_soc u_spi spi_ssr_wr_q", false,-1);
        tracep->declBit(c+155,"riscv_soc u_soc u_spi spi_ssr_value_q", false,-1);
        tracep->declBit(c+155,"riscv_soc u_soc u_spi spi_ssr_value_out_w", false,-1);
        tracep->declBit(c+438,"riscv_soc u_soc u_spi spi_ipisr_tx_empty_in_w", false,-1);
        tracep->declBit(c+439,"riscv_soc u_soc u_spi spi_sr_rx_empty_in_w", false,-1);
        tracep->declBit(c+440,"riscv_soc u_soc u_spi spi_sr_rx_full_in_w", false,-1);
        tracep->declBit(c+438,"riscv_soc u_soc u_spi spi_sr_tx_empty_in_w", false,-1);
        tracep->declBit(c+441,"riscv_soc u_soc u_spi spi_sr_tx_full_in_w", false,-1);
        tracep->declBus(c+442,"riscv_soc u_soc u_spi spi_drr_data_in_w", false,-1, 7,0);
        tracep->declBus(c+120,"riscv_soc u_soc u_spi data_r", false,-1, 31,0);
        tracep->declBit(c+199,"riscv_soc u_soc u_spi rvalid_q", false,-1);
        tracep->declBus(c+206,"riscv_soc u_soc u_spi rd_data_q", false,-1, 31,0);
        tracep->declBit(c+186,"riscv_soc u_soc u_spi bvalid_q", false,-1);
        tracep->declBit(c+121,"riscv_soc u_soc u_spi spi_cr_rd_req_w", false,-1);
        tracep->declBit(c+122,"riscv_soc u_soc u_spi spi_drr_rd_req_w", false,-1);
        tracep->declBit(c+417,"riscv_soc u_soc u_spi spi_ipisr_wr_req_w", false,-1);
        tracep->declBit(c+423,"riscv_soc u_soc u_spi spi_cr_wr_req_w", false,-1);
        tracep->declBit(c+435,"riscv_soc u_soc u_spi spi_dtr_wr_req_w", false,-1);
        tracep->declBit(c+436,"riscv_soc u_soc u_spi spi_drr_wr_req_w", false,-1);
        tracep->declBus(c+973,"riscv_soc u_soc u_spi C_SCK_RATIO", false,-1, 31,0);
        tracep->declBit(c+443,"riscv_soc u_soc u_spi sw_reset_w", false,-1);
        tracep->declBit(c+444,"riscv_soc u_soc u_spi tx_fifo_flush_w", false,-1);
        tracep->declBit(c+445,"riscv_soc u_soc u_spi rx_fifo_flush_w", false,-1);
        tracep->declBit(c+446,"riscv_soc u_soc u_spi tx_accept_w", false,-1);
        tracep->declBit(c+447,"riscv_soc u_soc u_spi tx_ready_w", false,-1);
        tracep->declBus(c+448,"riscv_soc u_soc u_spi tx_data_raw_w", false,-1, 7,0);
        tracep->declBit(c+449,"riscv_soc u_soc u_spi tx_pop_w", false,-1);
        tracep->declBus(c+450,"riscv_soc u_soc u_spi tx_data_w", false,-1, 7,0);
        tracep->declBit(c+451,"riscv_soc u_soc u_spi rx_accept_w", false,-1);
        tracep->declBit(c+452,"riscv_soc u_soc u_spi rx_ready_w", false,-1);
        tracep->declBus(c+453,"riscv_soc u_soc u_spi rx_data_w", false,-1, 7,0);
        tracep->declBit(c+449,"riscv_soc u_soc u_spi rx_push_w", false,-1);
        tracep->declBus(c+973,"riscv_soc u_soc u_spi clk_div_w", false,-1, 31,0);
        tracep->declBit(c+454,"riscv_soc u_soc u_spi active_q", false,-1);
        tracep->declBus(c+455,"riscv_soc u_soc u_spi bit_count_q", false,-1, 5,0);
        tracep->declBus(c+456,"riscv_soc u_soc u_spi shift_reg_q", false,-1, 7,0);
        tracep->declBus(c+457,"riscv_soc u_soc u_spi clk_div_q", false,-1, 31,0);
        tracep->declBit(c+449,"riscv_soc u_soc u_spi done_q", false,-1);
        tracep->declBit(c+153,"riscv_soc u_soc u_spi spi_clk_q", false,-1);
        tracep->declBit(c+154,"riscv_soc u_soc u_spi spi_mosi_q", false,-1);
        tracep->declBit(c+458,"riscv_soc u_soc u_spi enable_w", false,-1);
        tracep->declBit(c+459,"riscv_soc u_soc u_spi start_w", false,-1);
        tracep->declBit(c+148,"riscv_soc u_soc u_spi miso_w", false,-1);
        tracep->declBit(c+460,"riscv_soc u_soc u_spi clk_en_w", false,-1);
        tracep->declBit(c+461,"riscv_soc u_soc u_spi sample_r", false,-1);
        tracep->declBit(c+462,"riscv_soc u_soc u_spi drive_r", false,-1);
        tracep->declBit(c+463,"riscv_soc u_soc u_spi check_tx_level_q", false,-1);
        tracep->declBit(c+464,"riscv_soc u_soc u_spi intr_q", false,-1);
        tracep->declBus(c+974,"riscv_soc u_soc u_spi u_tx_fifo WIDTH", false,-1, 31,0);
        tracep->declBus(c+975,"riscv_soc u_soc u_spi u_tx_fifo DEPTH", false,-1, 31,0);
        tracep->declBus(c+976,"riscv_soc u_soc u_spi u_tx_fifo ADDR_W", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_spi u_tx_fifo clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_spi u_tx_fifo rst_i", false,-1);
        tracep->declBus(c+252,"riscv_soc u_soc u_spi u_tx_fifo data_in_i", false,-1, 7,0);
        tracep->declBit(c+435,"riscv_soc u_soc u_spi u_tx_fifo push_i", false,-1);
        tracep->declBit(c+449,"riscv_soc u_soc u_spi u_tx_fifo pop_i", false,-1);
        tracep->declBit(c+444,"riscv_soc u_soc u_spi u_tx_fifo flush_i", false,-1);
        tracep->declBus(c+448,"riscv_soc u_soc u_spi u_tx_fifo data_out_o", false,-1, 7,0);
        tracep->declBit(c+446,"riscv_soc u_soc u_spi u_tx_fifo accept_o", false,-1);
        tracep->declBit(c+447,"riscv_soc u_soc u_spi u_tx_fifo valid_o", false,-1);
        tracep->declBus(c+977,"riscv_soc u_soc u_spi u_tx_fifo COUNT_W", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+465+i*1,"riscv_soc u_soc u_spi u_tx_fifo ram_q", true,(i+0), 7,0);}}
        tracep->declBus(c+469,"riscv_soc u_soc u_spi u_tx_fifo rd_ptr_q", false,-1, 1,0);
        tracep->declBus(c+470,"riscv_soc u_soc u_spi u_tx_fifo wr_ptr_q", false,-1, 1,0);
        tracep->declBus(c+471,"riscv_soc u_soc u_spi u_tx_fifo count_q", false,-1, 2,0);
        tracep->declBus(c+974,"riscv_soc u_soc u_spi u_rx_fifo WIDTH", false,-1, 31,0);
        tracep->declBus(c+975,"riscv_soc u_soc u_spi u_rx_fifo DEPTH", false,-1, 31,0);
        tracep->declBus(c+976,"riscv_soc u_soc u_spi u_rx_fifo ADDR_W", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_spi u_rx_fifo clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_spi u_rx_fifo rst_i", false,-1);
        tracep->declBus(c+453,"riscv_soc u_soc u_spi u_rx_fifo data_in_i", false,-1, 7,0);
        tracep->declBit(c+449,"riscv_soc u_soc u_spi u_rx_fifo push_i", false,-1);
        tracep->declBit(c+122,"riscv_soc u_soc u_spi u_rx_fifo pop_i", false,-1);
        tracep->declBit(c+445,"riscv_soc u_soc u_spi u_rx_fifo flush_i", false,-1);
        tracep->declBus(c+442,"riscv_soc u_soc u_spi u_rx_fifo data_out_o", false,-1, 7,0);
        tracep->declBit(c+451,"riscv_soc u_soc u_spi u_rx_fifo accept_o", false,-1);
        tracep->declBit(c+452,"riscv_soc u_soc u_spi u_rx_fifo valid_o", false,-1);
        tracep->declBus(c+977,"riscv_soc u_soc u_spi u_rx_fifo COUNT_W", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+472+i*1,"riscv_soc u_soc u_spi u_rx_fifo ram_q", true,(i+0), 7,0);}}
        tracep->declBus(c+476,"riscv_soc u_soc u_spi u_rx_fifo rd_ptr_q", false,-1, 1,0);
        tracep->declBus(c+477,"riscv_soc u_soc u_spi u_rx_fifo wr_ptr_q", false,-1, 1,0);
        tracep->declBus(c+478,"riscv_soc u_soc u_spi u_rx_fifo count_q", false,-1, 2,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_retime clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_retime rst_i", false,-1);
        tracep->declBit(c+59,"riscv_soc u_soc u_retime inport_awvalid_i", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_retime inport_awaddr_i", false,-1, 31,0);
        tracep->declBus(c+73,"riscv_soc u_soc u_retime inport_awid_i", false,-1, 3,0);
        tracep->declBus(c+1,"riscv_soc u_soc u_retime inport_awlen_i", false,-1, 7,0);
        tracep->declBus(c+61,"riscv_soc u_soc u_retime inport_awburst_i", false,-1, 1,0);
        tracep->declBit(c+74,"riscv_soc u_soc u_retime inport_wvalid_i", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_retime inport_wdata_i", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_retime inport_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+55,"riscv_soc u_soc u_retime inport_wlast_i", false,-1);
        tracep->declBit(c+54,"riscv_soc u_soc u_retime inport_bready_i", false,-1);
        tracep->declBit(c+39,"riscv_soc u_soc u_retime inport_arvalid_i", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_retime inport_araddr_i", false,-1, 31,0);
        tracep->declBus(c+37,"riscv_soc u_soc u_retime inport_arid_i", false,-1, 3,0);
        tracep->declBus(c+75,"riscv_soc u_soc u_retime inport_arlen_i", false,-1, 7,0);
        tracep->declBus(c+2,"riscv_soc u_soc u_retime inport_arburst_i", false,-1, 1,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_retime inport_rready_i", false,-1);
        tracep->declBit(c+19,"riscv_soc u_soc u_retime outport_awready_i", false,-1);
        tracep->declBit(c+20,"riscv_soc u_soc u_retime outport_wready_i", false,-1);
        tracep->declBit(c+21,"riscv_soc u_soc u_retime outport_bvalid_i", false,-1);
        tracep->declBus(c+22,"riscv_soc u_soc u_retime outport_bresp_i", false,-1, 1,0);
        tracep->declBus(c+23,"riscv_soc u_soc u_retime outport_bid_i", false,-1, 3,0);
        tracep->declBit(c+24,"riscv_soc u_soc u_retime outport_arready_i", false,-1);
        tracep->declBit(c+25,"riscv_soc u_soc u_retime outport_rvalid_i", false,-1);
        tracep->declBus(c+26,"riscv_soc u_soc u_retime outport_rdata_i", false,-1, 31,0);
        tracep->declBus(c+27,"riscv_soc u_soc u_retime outport_rresp_i", false,-1, 1,0);
        tracep->declBus(c+28,"riscv_soc u_soc u_retime outport_rid_i", false,-1, 3,0);
        tracep->declBit(c+29,"riscv_soc u_soc u_retime outport_rlast_i", false,-1);
        tracep->declBit(c+192,"riscv_soc u_soc u_retime inport_awready_o", false,-1);
        tracep->declBit(c+183,"riscv_soc u_soc u_retime inport_wready_o", false,-1);
        tracep->declBit(c+191,"riscv_soc u_soc u_retime inport_bvalid_o", false,-1);
        tracep->declBus(c+214,"riscv_soc u_soc u_retime inport_bresp_o", false,-1, 1,0);
        tracep->declBus(c+197,"riscv_soc u_soc u_retime inport_bid_o", false,-1, 3,0);
        tracep->declBit(c+195,"riscv_soc u_soc u_retime inport_arready_o", false,-1);
        tracep->declBit(c+211,"riscv_soc u_soc u_retime inport_rvalid_o", false,-1);
        tracep->declBus(c+187,"riscv_soc u_soc u_retime inport_rdata_o", false,-1, 31,0);
        tracep->declBus(c+196,"riscv_soc u_soc u_retime inport_rresp_o", false,-1, 1,0);
        tracep->declBus(c+194,"riscv_soc u_soc u_retime inport_rid_o", false,-1, 3,0);
        tracep->declBit(c+193,"riscv_soc u_soc u_retime inport_rlast_o", false,-1);
        tracep->declBit(c+159,"riscv_soc u_soc u_retime outport_awvalid_o", false,-1);
        tracep->declBus(c+160,"riscv_soc u_soc u_retime outport_awaddr_o", false,-1, 31,0);
        tracep->declBus(c+161,"riscv_soc u_soc u_retime outport_awid_o", false,-1, 3,0);
        tracep->declBus(c+162,"riscv_soc u_soc u_retime outport_awlen_o", false,-1, 7,0);
        tracep->declBus(c+163,"riscv_soc u_soc u_retime outport_awburst_o", false,-1, 1,0);
        tracep->declBit(c+164,"riscv_soc u_soc u_retime outport_wvalid_o", false,-1);
        tracep->declBus(c+165,"riscv_soc u_soc u_retime outport_wdata_o", false,-1, 31,0);
        tracep->declBus(c+166,"riscv_soc u_soc u_retime outport_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+167,"riscv_soc u_soc u_retime outport_wlast_o", false,-1);
        tracep->declBit(c+168,"riscv_soc u_soc u_retime outport_bready_o", false,-1);
        tracep->declBit(c+169,"riscv_soc u_soc u_retime outport_arvalid_o", false,-1);
        tracep->declBus(c+170,"riscv_soc u_soc u_retime outport_araddr_o", false,-1, 31,0);
        tracep->declBus(c+171,"riscv_soc u_soc u_retime outport_arid_o", false,-1, 3,0);
        tracep->declBus(c+172,"riscv_soc u_soc u_retime outport_arlen_o", false,-1, 7,0);
        tracep->declBus(c+173,"riscv_soc u_soc u_retime outport_arburst_o", false,-1, 1,0);
        tracep->declBit(c+174,"riscv_soc u_soc u_retime outport_rready_o", false,-1);
        tracep->declQuad(c+479,"riscv_soc u_soc u_retime write_cmd_req_out_w", false,-1, 45,0);
        tracep->declQuad(c+481,"riscv_soc u_soc u_retime write_data_req_out_w", false,-1, 36,0);
        tracep->declBus(c+483,"riscv_soc u_soc u_retime write_resp_out_w", false,-1, 5,0);
        tracep->declQuad(c+484,"riscv_soc u_soc u_retime read_req_out_w", false,-1, 45,0);
        tracep->declQuad(c+486,"riscv_soc u_soc u_retime read_resp_out_w", false,-1, 38,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_retime u_write_cmd_req clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_retime u_write_cmd_req rst_i", false,-1);
        tracep->declQuad(c+123,"riscv_soc u_soc u_retime u_write_cmd_req data_in_i", false,-1, 45,0);
        tracep->declBit(c+59,"riscv_soc u_soc u_retime u_write_cmd_req push_i", false,-1);
        tracep->declBit(c+19,"riscv_soc u_soc u_retime u_write_cmd_req pop_i", false,-1);
        tracep->declQuad(c+479,"riscv_soc u_soc u_retime u_write_cmd_req data_out_o", false,-1, 45,0);
        tracep->declBit(c+192,"riscv_soc u_soc u_retime u_write_cmd_req accept_o", false,-1);
        tracep->declBit(c+159,"riscv_soc u_soc u_retime u_write_cmd_req valid_o", false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+488+i*2,"riscv_soc u_soc u_retime u_write_cmd_req ram_q", true,(i+0), 45,0);}}
        tracep->declBus(c+492,"riscv_soc u_soc u_retime u_write_cmd_req rd_ptr_q", false,-1, 0,0);
        tracep->declBus(c+493,"riscv_soc u_soc u_retime u_write_cmd_req wr_ptr_q", false,-1, 0,0);
        tracep->declBus(c+494,"riscv_soc u_soc u_retime u_write_cmd_req count_q", false,-1, 1,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_retime u_write_data_req clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_retime u_write_data_req rst_i", false,-1);
        tracep->declQuad(c+125,"riscv_soc u_soc u_retime u_write_data_req data_in_i", false,-1, 36,0);
        tracep->declBit(c+74,"riscv_soc u_soc u_retime u_write_data_req push_i", false,-1);
        tracep->declBit(c+20,"riscv_soc u_soc u_retime u_write_data_req pop_i", false,-1);
        tracep->declQuad(c+481,"riscv_soc u_soc u_retime u_write_data_req data_out_o", false,-1, 36,0);
        tracep->declBit(c+183,"riscv_soc u_soc u_retime u_write_data_req accept_o", false,-1);
        tracep->declBit(c+164,"riscv_soc u_soc u_retime u_write_data_req valid_o", false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+495+i*2,"riscv_soc u_soc u_retime u_write_data_req ram_q", true,(i+0), 36,0);}}
        tracep->declBus(c+499,"riscv_soc u_soc u_retime u_write_data_req rd_ptr_q", false,-1, 0,0);
        tracep->declBus(c+500,"riscv_soc u_soc u_retime u_write_data_req wr_ptr_q", false,-1, 0,0);
        tracep->declBus(c+501,"riscv_soc u_soc u_retime u_write_data_req count_q", false,-1, 1,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_retime u_write_resp clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_retime u_write_resp rst_i", false,-1);
        tracep->declBus(c+127,"riscv_soc u_soc u_retime u_write_resp data_in_i", false,-1, 5,0);
        tracep->declBit(c+21,"riscv_soc u_soc u_retime u_write_resp push_i", false,-1);
        tracep->declBit(c+54,"riscv_soc u_soc u_retime u_write_resp pop_i", false,-1);
        tracep->declBus(c+483,"riscv_soc u_soc u_retime u_write_resp data_out_o", false,-1, 5,0);
        tracep->declBit(c+168,"riscv_soc u_soc u_retime u_write_resp accept_o", false,-1);
        tracep->declBit(c+191,"riscv_soc u_soc u_retime u_write_resp valid_o", false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+502+i*1,"riscv_soc u_soc u_retime u_write_resp ram_q", true,(i+0), 5,0);}}
        tracep->declBus(c+504,"riscv_soc u_soc u_retime u_write_resp rd_ptr_q", false,-1, 0,0);
        tracep->declBus(c+505,"riscv_soc u_soc u_retime u_write_resp wr_ptr_q", false,-1, 0,0);
        tracep->declBus(c+506,"riscv_soc u_soc u_retime u_write_resp count_q", false,-1, 1,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_retime u_read_req clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_retime u_read_req rst_i", false,-1);
        tracep->declQuad(c+128,"riscv_soc u_soc u_retime u_read_req data_in_i", false,-1, 45,0);
        tracep->declBit(c+39,"riscv_soc u_soc u_retime u_read_req push_i", false,-1);
        tracep->declBit(c+24,"riscv_soc u_soc u_retime u_read_req pop_i", false,-1);
        tracep->declQuad(c+484,"riscv_soc u_soc u_retime u_read_req data_out_o", false,-1, 45,0);
        tracep->declBit(c+195,"riscv_soc u_soc u_retime u_read_req accept_o", false,-1);
        tracep->declBit(c+169,"riscv_soc u_soc u_retime u_read_req valid_o", false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+507+i*2,"riscv_soc u_soc u_retime u_read_req ram_q", true,(i+0), 45,0);}}
        tracep->declBus(c+511,"riscv_soc u_soc u_retime u_read_req rd_ptr_q", false,-1, 0,0);
        tracep->declBus(c+512,"riscv_soc u_soc u_retime u_read_req wr_ptr_q", false,-1, 0,0);
        tracep->declBus(c+513,"riscv_soc u_soc u_retime u_read_req count_q", false,-1, 1,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_retime u_read_resp clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_retime u_read_resp rst_i", false,-1);
        tracep->declQuad(c+130,"riscv_soc u_soc u_retime u_read_resp data_in_i", false,-1, 38,0);
        tracep->declBit(c+25,"riscv_soc u_soc u_retime u_read_resp push_i", false,-1);
        tracep->declBit(c+41,"riscv_soc u_soc u_retime u_read_resp pop_i", false,-1);
        tracep->declQuad(c+486,"riscv_soc u_soc u_retime u_read_resp data_out_o", false,-1, 38,0);
        tracep->declBit(c+174,"riscv_soc u_soc u_retime u_read_resp accept_o", false,-1);
        tracep->declBit(c+211,"riscv_soc u_soc u_retime u_read_resp valid_o", false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+514+i*2,"riscv_soc u_soc u_retime u_read_resp ram_q", true,(i+0), 38,0);}}
        tracep->declBus(c+518,"riscv_soc u_soc u_retime u_read_resp rd_ptr_q", false,-1, 0,0);
        tracep->declBus(c+519,"riscv_soc u_soc u_retime u_read_resp wr_ptr_q", false,-1, 0,0);
        tracep->declBus(c+520,"riscv_soc u_soc u_retime u_read_resp count_q", false,-1, 1,0);
        tracep->declBit(c+3,"riscv_soc u_soc u_gpio clk_i", false,-1);
        tracep->declBit(c+4,"riscv_soc u_soc u_gpio rst_i", false,-1);
        tracep->declBit(c+60,"riscv_soc u_soc u_gpio cfg_awvalid_i", false,-1);
        tracep->declBus(c+56,"riscv_soc u_soc u_gpio cfg_awaddr_i", false,-1, 31,0);
        tracep->declBit(c+50,"riscv_soc u_soc u_gpio cfg_wvalid_i", false,-1);
        tracep->declBus(c+44,"riscv_soc u_soc u_gpio cfg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+46,"riscv_soc u_soc u_gpio cfg_wstrb_i", false,-1, 3,0);
        tracep->declBit(c+54,"riscv_soc u_soc u_gpio cfg_bready_i", false,-1);
        tracep->declBit(c+57,"riscv_soc u_soc u_gpio cfg_arvalid_i", false,-1);
        tracep->declBus(c+48,"riscv_soc u_soc u_gpio cfg_araddr_i", false,-1, 31,0);
        tracep->declBit(c+41,"riscv_soc u_soc u_gpio cfg_rready_i", false,-1);
        tracep->declBus(c+18,"riscv_soc u_soc u_gpio gpio_input_i", false,-1, 31,0);
        tracep->declBit(c+49,"riscv_soc u_soc u_gpio cfg_awready_o", false,-1);
        tracep->declBit(c+49,"riscv_soc u_soc u_gpio cfg_wready_o", false,-1);
        tracep->declBit(c+231,"riscv_soc u_soc u_gpio cfg_bvalid_o", false,-1);
        tracep->declBus(c+960,"riscv_soc u_soc u_gpio cfg_bresp_o", false,-1, 1,0);
        tracep->declBit(c+190,"riscv_soc u_soc u_gpio cfg_arready_o", false,-1);
        tracep->declBit(c+209,"riscv_soc u_soc u_gpio cfg_rvalid_o", false,-1);
        tracep->declBus(c+189,"riscv_soc u_soc u_gpio cfg_rdata_o", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_soc u_gpio cfg_rresp_o", false,-1, 1,0);
        tracep->declBus(c+157,"riscv_soc u_soc u_gpio gpio_output_o", false,-1, 31,0);
        tracep->declBus(c+158,"riscv_soc u_soc u_gpio gpio_output_enable_o", false,-1, 31,0);
        tracep->declBit(c+203,"riscv_soc u_soc u_gpio intr_o", false,-1);
        tracep->declBus(c+249,"riscv_soc u_soc u_gpio wr_data_q", false,-1, 31,0);
        tracep->declBit(c+132,"riscv_soc u_soc u_gpio read_en_w", false,-1);
        tracep->declBit(c+133,"riscv_soc u_soc u_gpio write_en_w", false,-1);
        tracep->declBit(c+521,"riscv_soc u_soc u_gpio gpio_direction_wr_q", false,-1);
        tracep->declBus(c+158,"riscv_soc u_soc u_gpio gpio_direction_output_q", false,-1, 31,0);
        tracep->declBus(c+158,"riscv_soc u_soc u_gpio gpio_direction_output_out_w", false,-1, 31,0);
        tracep->declBit(c+522,"riscv_soc u_soc u_gpio gpio_input_wr_q", false,-1);
        tracep->declBit(c+523,"riscv_soc u_soc u_gpio gpio_output_wr_q", false,-1);
        tracep->declBus(c+249,"riscv_soc u_soc u_gpio gpio_output_data_out_w", false,-1, 31,0);
        tracep->declBit(c+524,"riscv_soc u_soc u_gpio gpio_output_set_wr_q", false,-1);
        tracep->declBus(c+249,"riscv_soc u_soc u_gpio gpio_output_set_data_out_w", false,-1, 31,0);
        tracep->declBit(c+525,"riscv_soc u_soc u_gpio gpio_output_clr_wr_q", false,-1);
        tracep->declBus(c+249,"riscv_soc u_soc u_gpio gpio_output_clr_data_out_w", false,-1, 31,0);
        tracep->declBit(c+526,"riscv_soc u_soc u_gpio gpio_int_mask_wr_q", false,-1);
        tracep->declBus(c+527,"riscv_soc u_soc u_gpio gpio_int_mask_enable_q", false,-1, 31,0);
        tracep->declBus(c+527,"riscv_soc u_soc u_gpio gpio_int_mask_enable_out_w", false,-1, 31,0);
        tracep->declBit(c+528,"riscv_soc u_soc u_gpio gpio_int_set_wr_q", false,-1);
        tracep->declBus(c+249,"riscv_soc u_soc u_gpio gpio_int_set_sw_irq_out_w", false,-1, 31,0);
        tracep->declBit(c+529,"riscv_soc u_soc u_gpio gpio_int_clr_wr_q", false,-1);
        tracep->declBus(c+249,"riscv_soc u_soc u_gpio gpio_int_clr_ack_out_w", false,-1, 31,0);
        tracep->declBit(c+530,"riscv_soc u_soc u_gpio gpio_int_status_wr_q", false,-1);
        tracep->declBit(c+531,"riscv_soc u_soc u_gpio gpio_int_level_wr_q", false,-1);
        tracep->declBus(c+532,"riscv_soc u_soc u_gpio gpio_int_level_active_high_q", false,-1, 31,0);
        tracep->declBus(c+532,"riscv_soc u_soc u_gpio gpio_int_level_active_high_out_w", false,-1, 31,0);
        tracep->declBit(c+533,"riscv_soc u_soc u_gpio gpio_int_mode_wr_q", false,-1);
        tracep->declBus(c+534,"riscv_soc u_soc u_gpio gpio_int_mode_edge_q", false,-1, 31,0);
        tracep->declBus(c+534,"riscv_soc u_soc u_gpio gpio_int_mode_edge_out_w", false,-1, 31,0);
        tracep->declBus(c+535,"riscv_soc u_soc u_gpio gpio_input_value_in_w", false,-1, 31,0);
        tracep->declBus(c+978,"riscv_soc u_soc u_gpio gpio_output_data_in_w", false,-1, 31,0);
        tracep->declBus(c+536,"riscv_soc u_soc u_gpio gpio_int_status_raw_in_w", false,-1, 31,0);
        tracep->declBus(c+149,"riscv_soc u_soc u_gpio data_r", false,-1, 31,0);
        tracep->declBit(c+209,"riscv_soc u_soc u_gpio rvalid_q", false,-1);
        tracep->declBus(c+189,"riscv_soc u_soc u_gpio rd_data_q", false,-1, 31,0);
        tracep->declBit(c+231,"riscv_soc u_soc u_gpio bvalid_q", false,-1);
        tracep->declBit(c+134,"riscv_soc u_soc u_gpio gpio_output_rd_req_w", false,-1);
        tracep->declBit(c+523,"riscv_soc u_soc u_gpio gpio_output_wr_req_w", false,-1);
        tracep->declBit(c+524,"riscv_soc u_soc u_gpio gpio_output_set_wr_req_w", false,-1);
        tracep->declBit(c+525,"riscv_soc u_soc u_gpio gpio_output_clr_wr_req_w", false,-1);
        tracep->declBit(c+528,"riscv_soc u_soc u_gpio gpio_int_set_wr_req_w", false,-1);
        tracep->declBit(c+529,"riscv_soc u_soc u_gpio gpio_int_clr_wr_req_w", false,-1);
        tracep->declBus(c+537,"riscv_soc u_soc u_gpio input_ms", false,-1, 31,0);
        tracep->declBus(c+535,"riscv_soc u_soc u_gpio input_q", false,-1, 31,0);
        tracep->declBus(c+157,"riscv_soc u_soc u_gpio output_q", false,-1, 31,0);
        tracep->declBus(c+538,"riscv_soc u_soc u_gpio output_next_r", false,-1, 31,0);
        tracep->declBit(c+203,"riscv_soc u_soc u_gpio intr_q", false,-1);
        tracep->declBus(c+536,"riscv_soc u_soc u_gpio interrupt_raw_q", false,-1, 31,0);
        tracep->declBus(c+539,"riscv_soc u_soc u_gpio interrupt_raw_r", false,-1, 31,0);
        tracep->declBus(c+540,"riscv_soc u_soc u_gpio input_last_q", false,-1, 31,0);
        tracep->declBus(c+541,"riscv_soc u_soc u_gpio active_low_w", false,-1, 31,0);
        tracep->declBus(c+541,"riscv_soc u_soc u_gpio falling_edge_w", false,-1, 31,0);
        tracep->declBus(c+542,"riscv_soc u_soc u_gpio level_mask_w", false,-1, 31,0);
        tracep->declBus(c+534,"riscv_soc u_soc u_gpio edge_mask_w", false,-1, 31,0);
        tracep->declBus(c+543,"riscv_soc u_soc u_gpio level_active_w", false,-1, 31,0);
        tracep->declBus(c+544,"riscv_soc u_soc u_gpio edge_detect_w", false,-1, 31,0);
        tracep->declBus(c+545,"riscv_soc u_soc u_gpio edge_active_w", false,-1, 31,0);
        tracep->declBus(c+979,"riscv_soc u_soc u_gpio interrupt_level_r", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_core clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core rst_i", false,-1);
        tracep->declBit(c+139,"riscv_soc u_core axi_i_awready_i", false,-1);
        tracep->declBit(c+33,"riscv_soc u_core axi_i_wready_i", false,-1);
        tracep->declBit(c+178,"riscv_soc u_core axi_i_bvalid_i", false,-1);
        tracep->declBus(c+151,"riscv_soc u_core axi_i_bresp_i", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_core axi_i_bid_i", false,-1, 3,0);
        tracep->declBit(c+34,"riscv_soc u_core axi_i_arready_i", false,-1);
        tracep->declBit(c+822,"riscv_soc u_core axi_i_rvalid_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_core axi_i_rdata_i", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_core axi_i_rresp_i", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_core axi_i_rid_i", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_core axi_i_rlast_i", false,-1);
        tracep->declBit(c+32,"riscv_soc u_core axi_d_awready_i", false,-1);
        tracep->declBit(c+36,"riscv_soc u_core axi_d_wready_i", false,-1);
        tracep->declBit(c+177,"riscv_soc u_core axi_d_bvalid_i", false,-1);
        tracep->declBus(c+151,"riscv_soc u_core axi_d_bresp_i", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_core axi_d_bid_i", false,-1, 3,0);
        tracep->declBit(c+35,"riscv_soc u_core axi_d_arready_i", false,-1);
        tracep->declBit(c+181,"riscv_soc u_core axi_d_rvalid_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_core axi_d_rdata_i", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_core axi_d_rresp_i", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_core axi_d_rid_i", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_core axi_d_rlast_i", false,-1);
        tracep->declBit(c+179,"riscv_soc u_core intr_i", false,-1);
        tracep->declBus(c+5,"riscv_soc u_core reset_vector_i", false,-1, 31,0);
        tracep->declBit(c+957,"riscv_soc u_core axi_i_awvalid_o", false,-1);
        tracep->declBus(c+953,"riscv_soc u_core axi_i_awaddr_o", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_core axi_i_awid_o", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_core axi_i_awlen_o", false,-1, 7,0);
        tracep->declBus(c+960,"riscv_soc u_core axi_i_awburst_o", false,-1, 1,0);
        tracep->declBit(c+957,"riscv_soc u_core axi_i_wvalid_o", false,-1);
        tracep->declBus(c+953,"riscv_soc u_core axi_i_wdata_o", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_core axi_i_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+957,"riscv_soc u_core axi_i_wlast_o", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core axi_i_bready_o", false,-1);
        tracep->declBit(c+829,"riscv_soc u_core axi_i_arvalid_o", false,-1);
        tracep->declBus(c+557,"riscv_soc u_core axi_i_araddr_o", false,-1, 31,0);
        tracep->declBus(c+958,"riscv_soc u_core axi_i_arid_o", false,-1, 3,0);
        tracep->declBus(c+959,"riscv_soc u_core axi_i_arlen_o", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_core axi_i_arburst_o", false,-1, 1,0);
        tracep->declBit(c+954,"riscv_soc u_core axi_i_rready_o", false,-1);
        tracep->declBit(c+828,"riscv_soc u_core axi_d_awvalid_o", false,-1);
        tracep->declBus(c+554,"riscv_soc u_core axi_d_awaddr_o", false,-1, 31,0);
        tracep->declBus(c+951,"riscv_soc u_core axi_d_awid_o", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_core axi_d_awlen_o", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_core axi_d_awburst_o", false,-1, 1,0);
        tracep->declBit(c+831,"riscv_soc u_core axi_d_wvalid_o", false,-1);
        tracep->declBus(c+555,"riscv_soc u_core axi_d_wdata_o", false,-1, 31,0);
        tracep->declBus(c+556,"riscv_soc u_core axi_d_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_core axi_d_wlast_o", false,-1);
        tracep->declBit(c+954,"riscv_soc u_core axi_d_bready_o", false,-1);
        tracep->declBit(c+830,"riscv_soc u_core axi_d_arvalid_o", false,-1);
        tracep->declBus(c+554,"riscv_soc u_core axi_d_araddr_o", false,-1, 31,0);
        tracep->declBus(c+951,"riscv_soc u_core axi_d_arid_o", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_core axi_d_arlen_o", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_core axi_d_arburst_o", false,-1, 1,0);
        tracep->declBit(c+954,"riscv_soc u_core axi_d_rready_o", false,-1);
        tracep->declBit(c+558,"riscv_soc u_core dport_bridge_accept_w", false,-1);
        tracep->declBit(c+559,"riscv_soc u_core dport_bridge_cacheable_w", false,-1);
        tracep->declBus(c+560,"riscv_soc u_core icache_inst_w", false,-1, 31,0);
        tracep->declBus(c+561,"riscv_soc u_core dport_bridge_resp_tag_w", false,-1, 10,0);
        tracep->declBit(c+562,"riscv_soc u_core dport_bridge_invalidate_w", false,-1);
        tracep->declBus(c+563,"riscv_soc u_core dport_bridge_addr_w", false,-1, 31,0);
        tracep->declBus(c+832,"riscv_soc u_core icache_pc_w", false,-1, 31,0);
        tracep->declBit(c+833,"riscv_soc u_core icache_rd_w", false,-1);
        tracep->declBit(c+824,"riscv_soc u_core dport_bridge_error_w", false,-1);
        tracep->declBit(c+564,"riscv_soc u_core icache_flush_w", false,-1);
        tracep->declBus(c+565,"riscv_soc u_core dport_bridge_req_tag_w", false,-1, 10,0);
        tracep->declBus(c+566,"riscv_soc u_core dport_bridge_data_wr_w", false,-1, 31,0);
        tracep->declBit(c+567,"riscv_soc u_core dport_bridge_rd_w", false,-1);
        tracep->declBit(c+834,"riscv_soc u_core icache_accept_w", false,-1);
        tracep->declBit(c+568,"riscv_soc u_core icache_valid_w", false,-1);
        tracep->declBit(c+569,"riscv_soc u_core icache_error_w", false,-1);
        tracep->declBit(c+825,"riscv_soc u_core dport_bridge_ack_w", false,-1);
        tracep->declBus(c+570,"riscv_soc u_core dport_bridge_wr_w", false,-1, 3,0);
        tracep->declBus(c+820,"riscv_soc u_core dport_bridge_data_rd_w", false,-1, 31,0);
        tracep->declBit(c+571,"riscv_soc u_core dport_bridge_flush_w", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core icache_invalidate_w", false,-1);
        tracep->declBit(c+3,"riscv_soc u_core u_dport_bridge clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_dport_bridge rst_i", false,-1);
        tracep->declBus(c+563,"riscv_soc u_core u_dport_bridge mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+566,"riscv_soc u_core u_dport_bridge mem_data_wr_i", false,-1, 31,0);
        tracep->declBit(c+567,"riscv_soc u_core u_dport_bridge mem_rd_i", false,-1);
        tracep->declBus(c+570,"riscv_soc u_core u_dport_bridge mem_wr_i", false,-1, 3,0);
        tracep->declBit(c+559,"riscv_soc u_core u_dport_bridge mem_cacheable_i", false,-1);
        tracep->declBus(c+565,"riscv_soc u_core u_dport_bridge mem_req_tag_i", false,-1, 10,0);
        tracep->declBit(c+562,"riscv_soc u_core u_dport_bridge mem_invalidate_i", false,-1);
        tracep->declBit(c+571,"riscv_soc u_core u_dport_bridge mem_flush_i", false,-1);
        tracep->declBit(c+32,"riscv_soc u_core u_dport_bridge axi_awready_i", false,-1);
        tracep->declBit(c+36,"riscv_soc u_core u_dport_bridge axi_wready_i", false,-1);
        tracep->declBit(c+177,"riscv_soc u_core u_dport_bridge axi_bvalid_i", false,-1);
        tracep->declBus(c+151,"riscv_soc u_core u_dport_bridge axi_bresp_i", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_core u_dport_bridge axi_bid_i", false,-1, 3,0);
        tracep->declBit(c+35,"riscv_soc u_core u_dport_bridge axi_arready_i", false,-1);
        tracep->declBit(c+181,"riscv_soc u_core u_dport_bridge axi_rvalid_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_core u_dport_bridge axi_rdata_i", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_core u_dport_bridge axi_rresp_i", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_core u_dport_bridge axi_rid_i", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_core u_dport_bridge axi_rlast_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_core u_dport_bridge mem_data_rd_o", false,-1, 31,0);
        tracep->declBit(c+558,"riscv_soc u_core u_dport_bridge mem_accept_o", false,-1);
        tracep->declBit(c+825,"riscv_soc u_core u_dport_bridge mem_ack_o", false,-1);
        tracep->declBit(c+824,"riscv_soc u_core u_dport_bridge mem_error_o", false,-1);
        tracep->declBus(c+561,"riscv_soc u_core u_dport_bridge mem_resp_tag_o", false,-1, 10,0);
        tracep->declBit(c+828,"riscv_soc u_core u_dport_bridge axi_awvalid_o", false,-1);
        tracep->declBus(c+554,"riscv_soc u_core u_dport_bridge axi_awaddr_o", false,-1, 31,0);
        tracep->declBus(c+951,"riscv_soc u_core u_dport_bridge axi_awid_o", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_core u_dport_bridge axi_awlen_o", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_core u_dport_bridge axi_awburst_o", false,-1, 1,0);
        tracep->declBit(c+831,"riscv_soc u_core u_dport_bridge axi_wvalid_o", false,-1);
        tracep->declBus(c+555,"riscv_soc u_core u_dport_bridge axi_wdata_o", false,-1, 31,0);
        tracep->declBus(c+556,"riscv_soc u_core u_dport_bridge axi_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_core u_dport_bridge axi_wlast_o", false,-1);
        tracep->declBit(c+954,"riscv_soc u_core u_dport_bridge axi_bready_o", false,-1);
        tracep->declBit(c+830,"riscv_soc u_core u_dport_bridge axi_arvalid_o", false,-1);
        tracep->declBus(c+554,"riscv_soc u_core u_dport_bridge axi_araddr_o", false,-1, 31,0);
        tracep->declBus(c+951,"riscv_soc u_core u_dport_bridge axi_arid_o", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_core u_dport_bridge axi_arlen_o", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_core u_dport_bridge axi_arburst_o", false,-1, 1,0);
        tracep->declBit(c+954,"riscv_soc u_core u_dport_bridge axi_rready_o", false,-1);
        tracep->declBit(c+572,"riscv_soc u_core u_dport_bridge res_accept_w", false,-1);
        tracep->declBit(c+573,"riscv_soc u_core u_dport_bridge req_accept_w", false,-1);
        tracep->declBit(c+135,"riscv_soc u_core u_dport_bridge write_complete_w", false,-1);
        tracep->declBit(c+136,"riscv_soc u_core u_dport_bridge read_complete_w", false,-1);
        tracep->declBit(c+574,"riscv_soc u_core u_dport_bridge request_pending_q", false,-1);
        tracep->declBit(c+137,"riscv_soc u_core u_dport_bridge req_pop_w", false,-1);
        tracep->declBit(c+575,"riscv_soc u_core u_dport_bridge req_valid_w", false,-1);
        tracep->declArray(c+576,"riscv_soc u_core u_dport_bridge req_w", false,-1, 68,0);
        tracep->declBit(c+579,"riscv_soc u_core u_dport_bridge req_push_w", false,-1);
        tracep->declBit(c+580,"riscv_soc u_core u_dport_bridge res_push_w", false,-1);
        tracep->declBit(c+835,"riscv_soc u_core u_dport_bridge request_in_progress_w", false,-1);
        tracep->declBit(c+830,"riscv_soc u_core u_dport_bridge req_is_read_w", false,-1);
        tracep->declBit(c+836,"riscv_soc u_core u_dport_bridge req_is_write_w", false,-1);
        tracep->declBit(c+581,"riscv_soc u_core u_dport_bridge awvalid_inhibit_q", false,-1);
        tracep->declBit(c+582,"riscv_soc u_core u_dport_bridge wvalid_inhibit_q", false,-1);
        tracep->declBus(c+980,"riscv_soc u_core u_dport_bridge u_req WIDTH", false,-1, 31,0);
        tracep->declBus(c+975,"riscv_soc u_core u_dport_bridge u_req DEPTH", false,-1, 31,0);
        tracep->declBus(c+976,"riscv_soc u_core u_dport_bridge u_req ADDR_W", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_core u_dport_bridge u_req clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_dport_bridge u_req rst_i", false,-1);
        tracep->declArray(c+583,"riscv_soc u_core u_dport_bridge u_req data_in_i", false,-1, 68,0);
        tracep->declBit(c+579,"riscv_soc u_core u_dport_bridge u_req push_i", false,-1);
        tracep->declBit(c+137,"riscv_soc u_core u_dport_bridge u_req pop_i", false,-1);
        tracep->declArray(c+576,"riscv_soc u_core u_dport_bridge u_req data_out_o", false,-1, 68,0);
        tracep->declBit(c+573,"riscv_soc u_core u_dport_bridge u_req accept_o", false,-1);
        tracep->declBit(c+575,"riscv_soc u_core u_dport_bridge u_req valid_o", false,-1);
        tracep->declBus(c+977,"riscv_soc u_core u_dport_bridge u_req COUNT_W", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+586+i*3,"riscv_soc u_core u_dport_bridge u_req ram_q", true,(i+0), 68,0);}}
        tracep->declBus(c+598,"riscv_soc u_core u_dport_bridge u_req rd_ptr_q", false,-1, 1,0);
        tracep->declBus(c+599,"riscv_soc u_core u_dport_bridge u_req wr_ptr_q", false,-1, 1,0);
        tracep->declBus(c+600,"riscv_soc u_core u_dport_bridge u_req count_q", false,-1, 2,0);
        tracep->declBus(c+981,"riscv_soc u_core u_dport_bridge u_resp WIDTH", false,-1, 31,0);
        tracep->declBus(c+975,"riscv_soc u_core u_dport_bridge u_resp DEPTH", false,-1, 31,0);
        tracep->declBus(c+976,"riscv_soc u_core u_dport_bridge u_resp ADDR_W", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_core u_dport_bridge u_resp clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_dport_bridge u_resp rst_i", false,-1);
        tracep->declBus(c+565,"riscv_soc u_core u_dport_bridge u_resp data_in_i", false,-1, 10,0);
        tracep->declBit(c+580,"riscv_soc u_core u_dport_bridge u_resp push_i", false,-1);
        tracep->declBit(c+825,"riscv_soc u_core u_dport_bridge u_resp pop_i", false,-1);
        tracep->declBus(c+561,"riscv_soc u_core u_dport_bridge u_resp data_out_o", false,-1, 10,0);
        tracep->declBit(c+572,"riscv_soc u_core u_dport_bridge u_resp accept_o", false,-1);
        tracep->declBit(c+601,"riscv_soc u_core u_dport_bridge u_resp valid_o", false,-1);
        tracep->declBus(c+977,"riscv_soc u_core u_dport_bridge u_resp COUNT_W", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+602+i*1,"riscv_soc u_core u_dport_bridge u_resp ram_q", true,(i+0), 10,0);}}
        tracep->declBus(c+606,"riscv_soc u_core u_dport_bridge u_resp rd_ptr_q", false,-1, 1,0);
        tracep->declBus(c+607,"riscv_soc u_core u_dport_bridge u_resp wr_ptr_q", false,-1, 1,0);
        tracep->declBus(c+608,"riscv_soc u_core u_dport_bridge u_resp count_q", false,-1, 2,0);
        tracep->declBit(c+3,"riscv_soc u_core u_icache clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_icache rst_i", false,-1);
        tracep->declBit(c+833,"riscv_soc u_core u_icache req_rd_i", false,-1);
        tracep->declBit(c+564,"riscv_soc u_core u_icache req_flush_i", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core u_icache req_invalidate_i", false,-1);
        tracep->declBus(c+832,"riscv_soc u_core u_icache req_pc_i", false,-1, 31,0);
        tracep->declBit(c+139,"riscv_soc u_core u_icache axi_awready_i", false,-1);
        tracep->declBit(c+33,"riscv_soc u_core u_icache axi_wready_i", false,-1);
        tracep->declBit(c+178,"riscv_soc u_core u_icache axi_bvalid_i", false,-1);
        tracep->declBus(c+151,"riscv_soc u_core u_icache axi_bresp_i", false,-1, 1,0);
        tracep->declBus(c+176,"riscv_soc u_core u_icache axi_bid_i", false,-1, 3,0);
        tracep->declBit(c+34,"riscv_soc u_core u_icache axi_arready_i", false,-1);
        tracep->declBit(c+822,"riscv_soc u_core u_icache axi_rvalid_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_core u_icache axi_rdata_i", false,-1, 31,0);
        tracep->declBus(c+821,"riscv_soc u_core u_icache axi_rresp_i", false,-1, 1,0);
        tracep->declBus(c+180,"riscv_soc u_core u_icache axi_rid_i", false,-1, 3,0);
        tracep->declBit(c+823,"riscv_soc u_core u_icache axi_rlast_i", false,-1);
        tracep->declBit(c+834,"riscv_soc u_core u_icache req_accept_o", false,-1);
        tracep->declBit(c+568,"riscv_soc u_core u_icache req_valid_o", false,-1);
        tracep->declBit(c+569,"riscv_soc u_core u_icache req_error_o", false,-1);
        tracep->declBus(c+560,"riscv_soc u_core u_icache req_inst_o", false,-1, 31,0);
        tracep->declBit(c+957,"riscv_soc u_core u_icache axi_awvalid_o", false,-1);
        tracep->declBus(c+953,"riscv_soc u_core u_icache axi_awaddr_o", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_core u_icache axi_awid_o", false,-1, 3,0);
        tracep->declBus(c+955,"riscv_soc u_core u_icache axi_awlen_o", false,-1, 7,0);
        tracep->declBus(c+960,"riscv_soc u_core u_icache axi_awburst_o", false,-1, 1,0);
        tracep->declBit(c+957,"riscv_soc u_core u_icache axi_wvalid_o", false,-1);
        tracep->declBus(c+953,"riscv_soc u_core u_icache axi_wdata_o", false,-1, 31,0);
        tracep->declBus(c+956,"riscv_soc u_core u_icache axi_wstrb_o", false,-1, 3,0);
        tracep->declBit(c+957,"riscv_soc u_core u_icache axi_wlast_o", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core u_icache axi_bready_o", false,-1);
        tracep->declBit(c+829,"riscv_soc u_core u_icache axi_arvalid_o", false,-1);
        tracep->declBus(c+557,"riscv_soc u_core u_icache axi_araddr_o", false,-1, 31,0);
        tracep->declBus(c+958,"riscv_soc u_core u_icache axi_arid_o", false,-1, 3,0);
        tracep->declBus(c+959,"riscv_soc u_core u_icache axi_arlen_o", false,-1, 7,0);
        tracep->declBus(c+952,"riscv_soc u_core u_icache axi_arburst_o", false,-1, 1,0);
        tracep->declBit(c+954,"riscv_soc u_core u_icache axi_rready_o", false,-1);
        tracep->declBus(c+976,"riscv_soc u_core u_icache ICACHE_NUM_WAYS", false,-1, 31,0);
        tracep->declBus(c+982,"riscv_soc u_core u_icache ICACHE_NUM_LINES", false,-1, 31,0);
        tracep->declBus(c+974,"riscv_soc u_core u_icache ICACHE_LINE_ADDR_W", false,-1, 31,0);
        tracep->declBus(c+983,"riscv_soc u_core u_icache ICACHE_LINE_SIZE_W", false,-1, 31,0);
        tracep->declBus(c+984,"riscv_soc u_core u_icache ICACHE_LINE_SIZE", false,-1, 31,0);
        tracep->declBus(c+974,"riscv_soc u_core u_icache ICACHE_LINE_WORDS", false,-1, 31,0);
        tracep->declBus(c+983,"riscv_soc u_core u_icache ICACHE_TAG_REQ_LINE_L", false,-1, 31,0);
        tracep->declBus(c+985,"riscv_soc u_core u_icache ICACHE_TAG_REQ_LINE_H", false,-1, 31,0);
        tracep->declBus(c+974,"riscv_soc u_core u_icache ICACHE_TAG_REQ_LINE_W", false,-1, 31,0);
        tracep->declBus(c+986,"riscv_soc u_core u_icache CACHE_TAG_ADDR_BITS", false,-1, 31,0);
        tracep->declBus(c+986,"riscv_soc u_core u_icache CACHE_TAG_VALID_BIT", false,-1, 31,0);
        tracep->declBus(c+987,"riscv_soc u_core u_icache CACHE_TAG_DATA_W", false,-1, 31,0);
        tracep->declBus(c+988,"riscv_soc u_core u_icache ICACHE_TAG_CMP_ADDR_L", false,-1, 31,0);
        tracep->declBus(c+989,"riscv_soc u_core u_icache ICACHE_TAG_CMP_ADDR_H", false,-1, 31,0);
        tracep->declBus(c+986,"riscv_soc u_core u_icache ICACHE_TAG_CMP_ADDR_W", false,-1, 31,0);
        tracep->declBus(c+837,"riscv_soc u_core u_icache req_line_addr_w", false,-1, 7,0);
        tracep->declBus(c+981,"riscv_soc u_core u_icache CACHE_DATA_ADDR_W", false,-1, 31,0);
        tracep->declBus(c+838,"riscv_soc u_core u_icache req_data_addr_w", false,-1, 10,0);
        tracep->declBus(c+976,"riscv_soc u_core u_icache STATE_W", false,-1, 31,0);
        tracep->declBus(c+960,"riscv_soc u_core u_icache STATE_FLUSH", false,-1, 1,0);
        tracep->declBus(c+952,"riscv_soc u_core u_icache STATE_LOOKUP", false,-1, 1,0);
        tracep->declBus(c+990,"riscv_soc u_core u_icache STATE_REFILL", false,-1, 1,0);
        tracep->declBus(c+991,"riscv_soc u_core u_icache STATE_RELOOKUP", false,-1, 1,0);
        tracep->declBus(c+839,"riscv_soc u_core u_icache next_state_r", false,-1, 1,0);
        tracep->declBus(c+609,"riscv_soc u_core u_icache state_q", false,-1, 1,0);
        tracep->declBit(c+610,"riscv_soc u_core u_icache invalidate_q", false,-1);
        tracep->declBus(c+611,"riscv_soc u_core u_icache replace_way_q", false,-1, 0,0);
        tracep->declBit(c+612,"riscv_soc u_core u_icache lookup_valid_q", false,-1);
        tracep->declBus(c+613,"riscv_soc u_core u_icache lookup_addr_q", false,-1, 31,0);
        tracep->declBus(c+614,"riscv_soc u_core u_icache req_pc_tag_cmp_w", false,-1, 18,0);
        tracep->declBus(c+840,"riscv_soc u_core u_icache tag_addr_r", false,-1, 7,0);
        tracep->declBus(c+615,"riscv_soc u_core u_icache tag_data_in_r", false,-1, 19,0);
        tracep->declBit(c+841,"riscv_soc u_core u_icache tag0_write_r", false,-1);
        tracep->declBus(c+546,"riscv_soc u_core u_icache tag0_data_out_w", false,-1, 19,0);
        tracep->declBit(c+547,"riscv_soc u_core u_icache tag0_valid_w", false,-1);
        tracep->declBus(c+548,"riscv_soc u_core u_icache tag0_addr_bits_w", false,-1, 18,0);
        tracep->declBit(c+616,"riscv_soc u_core u_icache tag0_hit_w", false,-1);
        tracep->declBit(c+842,"riscv_soc u_core u_icache tag1_write_r", false,-1);
        tracep->declBus(c+549,"riscv_soc u_core u_icache tag1_data_out_w", false,-1, 19,0);
        tracep->declBit(c+550,"riscv_soc u_core u_icache tag1_valid_w", false,-1);
        tracep->declBus(c+551,"riscv_soc u_core u_icache tag1_addr_bits_w", false,-1, 18,0);
        tracep->declBit(c+617,"riscv_soc u_core u_icache tag1_hit_w", false,-1);
        tracep->declBit(c+618,"riscv_soc u_core u_icache tag_hit_any_w", false,-1);
        tracep->declBus(c+843,"riscv_soc u_core u_icache data_addr_r", false,-1, 10,0);
        tracep->declBus(c+619,"riscv_soc u_core u_icache data_write_addr_q", false,-1, 10,0);
        tracep->declBit(c+949,"riscv_soc u_core u_icache data0_write_r", false,-1);
        tracep->declBus(c+552,"riscv_soc u_core u_icache data0_data_out_w", false,-1, 31,0);
        tracep->declBit(c+950,"riscv_soc u_core u_icache data1_write_r", false,-1);
        tracep->declBus(c+553,"riscv_soc u_core u_icache data1_data_out_w", false,-1, 31,0);
        tracep->declBus(c+620,"riscv_soc u_core u_icache flush_addr_q", false,-1, 7,0);
        tracep->declBus(c+560,"riscv_soc u_core u_icache inst_r", false,-1, 31,0);
        tracep->declBit(c+621,"riscv_soc u_core u_icache axi_arvalid_q", false,-1);
        tracep->declBit(c+569,"riscv_soc u_core u_icache axi_error_q", false,-1);
        tracep->declBit(c+3,"riscv_soc u_core u_core clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_core rst_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_core u_core mem_d_data_rd_i", false,-1, 31,0);
        tracep->declBit(c+558,"riscv_soc u_core u_core mem_d_accept_i", false,-1);
        tracep->declBit(c+825,"riscv_soc u_core u_core mem_d_ack_i", false,-1);
        tracep->declBit(c+824,"riscv_soc u_core u_core mem_d_error_i", false,-1);
        tracep->declBus(c+561,"riscv_soc u_core u_core mem_d_resp_tag_i", false,-1, 10,0);
        tracep->declBit(c+834,"riscv_soc u_core u_core mem_i_accept_i", false,-1);
        tracep->declBit(c+568,"riscv_soc u_core u_core mem_i_valid_i", false,-1);
        tracep->declBit(c+569,"riscv_soc u_core u_core mem_i_error_i", false,-1);
        tracep->declBus(c+560,"riscv_soc u_core u_core mem_i_inst_i", false,-1, 31,0);
        tracep->declBit(c+179,"riscv_soc u_core u_core intr_i", false,-1);
        tracep->declBus(c+5,"riscv_soc u_core u_core reset_vector_i", false,-1, 31,0);
        tracep->declBus(c+953,"riscv_soc u_core u_core cpu_id_i", false,-1, 31,0);
        tracep->declBus(c+563,"riscv_soc u_core u_core mem_d_addr_o", false,-1, 31,0);
        tracep->declBus(c+566,"riscv_soc u_core u_core mem_d_data_wr_o", false,-1, 31,0);
        tracep->declBit(c+567,"riscv_soc u_core u_core mem_d_rd_o", false,-1);
        tracep->declBus(c+570,"riscv_soc u_core u_core mem_d_wr_o", false,-1, 3,0);
        tracep->declBit(c+559,"riscv_soc u_core u_core mem_d_cacheable_o", false,-1);
        tracep->declBus(c+565,"riscv_soc u_core u_core mem_d_req_tag_o", false,-1, 10,0);
        tracep->declBit(c+562,"riscv_soc u_core u_core mem_d_invalidate_o", false,-1);
        tracep->declBit(c+571,"riscv_soc u_core u_core mem_d_flush_o", false,-1);
        tracep->declBit(c+833,"riscv_soc u_core u_core mem_i_rd_o", false,-1);
        tracep->declBit(c+564,"riscv_soc u_core u_core mem_i_flush_o", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core u_core mem_i_invalidate_o", false,-1);
        tracep->declBus(c+832,"riscv_soc u_core u_core mem_i_pc_o", false,-1, 31,0);
        tracep->declBit(c+844,"riscv_soc u_core u_core mmu_flush_w", false,-1);
        tracep->declBit(c+622,"riscv_soc u_core u_core csr_stall_w", false,-1);
        tracep->declBit(c+845,"riscv_soc u_core u_core fetch_accept_w", false,-1);
        tracep->declQuad(c+623,"riscv_soc u_core u_core opcode_instr_w", false,-1, 57,0);
        tracep->declBit(c+846,"riscv_soc u_core u_core arb_mmu_error_w", false,-1);
        tracep->declBit(c+847,"riscv_soc u_core u_core csr_opcode_valid_w", false,-1);
        tracep->declBit(c+625,"riscv_soc u_core u_core arb_mmu_accept_w", false,-1);
        tracep->declBit(c+626,"riscv_soc u_core u_core branch_csr_request_w", false,-1);
        tracep->declBus(c+560,"riscv_soc u_core u_core mmu_ifetch_inst_w", false,-1, 31,0);
        tracep->declBus(c+627,"riscv_soc u_core u_core opcode_pc_w", false,-1, 31,0);
        tracep->declBit(c+848,"riscv_soc u_core u_core mmu_lsu_error_w", false,-1);
        tracep->declBit(c+628,"riscv_soc u_core u_core writeback_csr_squash_w", false,-1);
        tracep->declBit(c+629,"riscv_soc u_core u_core arb_cpu_cacheable_w", false,-1);
        tracep->declBus(c+630,"riscv_soc u_core u_core mmu_fault_addr_w", false,-1, 31,0);
        tracep->declBit(c+848,"riscv_soc u_core u_core arb_cpu_error_w", false,-1);
        tracep->declBit(c+815,"riscv_soc u_core u_core fault_store_w", false,-1);
        tracep->declBit(c+849,"riscv_soc u_core u_core mmu_fetch_fault_w", false,-1);
        tracep->declBit(c+568,"riscv_soc u_core u_core mmu_ifetch_valid_w", false,-1);
        tracep->declBit(c+631,"riscv_soc u_core u_core arb_cpu_rd_w", false,-1);
        tracep->declBus(c+953,"riscv_soc u_core u_core arb_mmu_data_wr_w", false,-1, 31,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core writeback_exec_squash_w", false,-1);
        tracep->declBus(c+992,"riscv_soc u_core u_core arb_mmu_req_tag_w", false,-1, 10,0);
        tracep->declBit(c+632,"riscv_soc u_core u_core fault_misaligned_load_w", false,-1);
        tracep->declBus(c+633,"riscv_soc u_core u_core writeback_muldiv_value_w", false,-1, 31,0);
        tracep->declBus(c+634,"riscv_soc u_core u_core mmu_lsu_wr_w", false,-1, 3,0);
        tracep->declBit(c+850,"riscv_soc u_core u_core branch_request_w", false,-1);
        tracep->declBit(c+564,"riscv_soc u_core u_core mmu_ifetch_flush_w", false,-1);
        tracep->declBit(c+635,"riscv_soc u_core u_core fetch_invalidate_w", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core u_core exec_stall_w", false,-1);
        tracep->declBus(c+636,"riscv_soc u_core u_core mmu_lsu_data_wr_w", false,-1, 31,0);
        tracep->declBus(c+561,"riscv_soc u_core u_core mmu_lsu_resp_tag_w", false,-1, 10,0);
        tracep->declBus(c+637,"riscv_soc u_core u_core mmu_lsu_req_tag_w", false,-1, 10,0);
        tracep->declBus(c+851,"riscv_soc u_core u_core opcode_ra_operand_w", false,-1, 31,0);
        tracep->declBit(c+852,"riscv_soc u_core u_core muldiv_opcode_valid_w", false,-1);
        tracep->declBus(c+638,"riscv_soc u_core u_core writeback_exec_idx_w", false,-1, 4,0);
        tracep->declBit(c+954,"riscv_soc u_core u_core arb_mmu_cacheable_w", false,-1);
        tracep->declBit(c+639,"riscv_soc u_core u_core fault_page_store_w", false,-1);
        tracep->declBus(c+853,"riscv_soc u_core u_core branch_pc_w", false,-1, 31,0);
        tracep->declBit(c+640,"riscv_soc u_core u_core muldiv_stall_w", false,-1);
        tracep->declBit(c+641,"riscv_soc u_core u_core lsu_stall_w", false,-1);
        tracep->declBus(c+642,"riscv_soc u_core u_core writeback_csr_idx_w", false,-1, 4,0);
        tracep->declBus(c+820,"riscv_soc u_core u_core arb_cpu_data_rd_w", false,-1, 31,0);
        tracep->declBus(c+643,"riscv_soc u_core u_core opcode_opcode_w", false,-1, 31,0);
        tracep->declBus(c+644,"riscv_soc u_core u_core opcode_rb_idx_w", false,-1, 4,0);
        tracep->declBit(c+854,"riscv_soc u_core u_core fetch_branch_w", false,-1);
        tracep->declBus(c+855,"riscv_soc u_core u_core mmu_ifetch_pc_w", false,-1, 31,0);
        tracep->declBit(c+645,"riscv_soc u_core u_core arb_cpu_flush_w", false,-1);
        tracep->declBus(c+856,"riscv_soc u_core u_core writeback_mem_idx_w", false,-1, 4,0);
        tracep->declBit(c+646,"riscv_soc u_core u_core arb_mmu_rd_w", false,-1);
        tracep->declBus(c+637,"riscv_soc u_core u_core arb_cpu_req_tag_w", false,-1, 10,0);
        tracep->declBus(c+820,"riscv_soc u_core u_core arb_mmu_data_rd_w", false,-1, 31,0);
        tracep->declBit(c+857,"riscv_soc u_core u_core arb_mmu_ack_w", false,-1);
        tracep->declBit(c+647,"riscv_soc u_core u_core mmu_lsu_accept_w", false,-1);
        tracep->declBus(c+648,"riscv_soc u_core u_core mmu_lsu_addr_w", false,-1, 31,0);
        tracep->declBus(c+649,"riscv_soc u_core u_core fault_addr_w", false,-1, 31,0);
        tracep->declBit(c+858,"riscv_soc u_core u_core mmu_ifetch_accept_w", false,-1);
        tracep->declBit(c+859,"riscv_soc u_core u_core mmu_lsu_ack_w", false,-1);
        tracep->declBus(c+650,"riscv_soc u_core u_core fetch_pc_w", false,-1, 31,0);
        tracep->declBit(c+816,"riscv_soc u_core u_core fault_load_w", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core u_core mmu_ifetch_invalidate_w", false,-1);
        tracep->declBus(c+651,"riscv_soc u_core u_core writeback_muldiv_idx_w", false,-1, 4,0);
        tracep->declBit(c+652,"riscv_soc u_core u_core fault_misaligned_store_w", false,-1);
        tracep->declBus(c+653,"riscv_soc u_core u_core arb_cpu_addr_w", false,-1, 31,0);
        tracep->declBit(c+654,"riscv_soc u_core u_core mmu_lsu_rd_w", false,-1);
        tracep->declBit(c+569,"riscv_soc u_core u_core mmu_ifetch_error_w", false,-1);
        tracep->declBit(c+655,"riscv_soc u_core u_core mmu_supervisor_w", false,-1);
        tracep->declBit(c+859,"riscv_soc u_core u_core arb_cpu_ack_w", false,-1);
        tracep->declBit(c+656,"riscv_soc u_core u_core arb_cpu_invalidate_w", false,-1);
        tracep->declBus(c+657,"riscv_soc u_core u_core arb_mmu_addr_w", false,-1, 31,0);
        tracep->declBus(c+658,"riscv_soc u_core u_core opcode_ra_idx_w", false,-1, 4,0);
        tracep->declBus(c+860,"riscv_soc u_core u_core writeback_mem_value_w", false,-1, 31,0);
        tracep->declBus(c+659,"riscv_soc u_core u_core arb_cpu_wr_w", false,-1, 3,0);
        tracep->declBit(c+861,"riscv_soc u_core u_core mmu_ifetch_rd_w", false,-1);
        tracep->declBus(c+660,"riscv_soc u_core u_core branch_csr_pc_w", false,-1, 31,0);
        tracep->declBus(c+561,"riscv_soc u_core u_core arb_cpu_resp_tag_w", false,-1, 10,0);
        tracep->declBit(c+661,"riscv_soc u_core u_core arb_cpu_accept_w", false,-1);
        tracep->declBit(c+662,"riscv_soc u_core u_core mmu_load_fault_w", false,-1);
        tracep->declBus(c+663,"riscv_soc u_core u_core mmu_satp_w", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc u_core u_core opcode_rb_operand_w", false,-1, 31,0);
        tracep->declBit(c+656,"riscv_soc u_core u_core mmu_lsu_invalidate_w", false,-1);
        tracep->declBit(c+662,"riscv_soc u_core u_core fault_page_load_w", false,-1);
        tracep->declBus(c+636,"riscv_soc u_core u_core arb_cpu_data_wr_w", false,-1, 31,0);
        tracep->declBus(c+664,"riscv_soc u_core u_core opcode_rd_idx_w", false,-1, 4,0);
        tracep->declBit(c+863,"riscv_soc u_core u_core fetch_valid_w", false,-1);
        tracep->declBit(c+629,"riscv_soc u_core u_core mmu_lsu_cacheable_w", false,-1);
        tracep->declBus(c+956,"riscv_soc u_core u_core arb_mmu_wr_w", false,-1, 3,0);
        tracep->declBit(c+864,"riscv_soc u_core u_core lsu_opcode_valid_w", false,-1);
        tracep->declBus(c+665,"riscv_soc u_core u_core fetch_instr_w", false,-1, 31,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core arb_mmu_invalidate_w", false,-1);
        tracep->declBus(c+820,"riscv_soc u_core u_core mmu_lsu_data_rd_w", false,-1, 31,0);
        tracep->declBit(c+865,"riscv_soc u_core u_core exec_opcode_valid_w", false,-1);
        tracep->declBit(c+645,"riscv_soc u_core u_core mmu_lsu_flush_w", false,-1);
        tracep->declBus(c+817,"riscv_soc u_core u_core fetch_branch_pc_w", false,-1, 31,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core writeback_muldiv_squash_w", false,-1);
        tracep->declBit(c+666,"riscv_soc u_core u_core mmu_sum_w", false,-1);
        tracep->declBus(c+667,"riscv_soc u_core u_core writeback_exec_value_w", false,-1, 31,0);
        tracep->declBus(c+561,"riscv_soc u_core u_core arb_mmu_resp_tag_w", false,-1, 10,0);
        tracep->declBus(c+668,"riscv_soc u_core u_core writeback_csr_value_w", false,-1, 31,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core writeback_mem_squash_w", false,-1);
        tracep->declBit(c+639,"riscv_soc u_core u_core mmu_store_fault_w", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core u_core arb_mmu_flush_w", false,-1);
        tracep->declBit(c+3,"riscv_soc u_core u_core u_mmu clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_core u_mmu rst_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_core u_core u_mmu outport_data_rd_i", false,-1, 31,0);
        tracep->declBit(c+625,"riscv_soc u_core u_core u_mmu outport_accept_i", false,-1);
        tracep->declBit(c+857,"riscv_soc u_core u_core u_mmu outport_ack_i", false,-1);
        tracep->declBit(c+846,"riscv_soc u_core u_core u_mmu outport_error_i", false,-1);
        tracep->declBus(c+561,"riscv_soc u_core u_core u_mmu outport_resp_tag_i", false,-1, 10,0);
        tracep->declBit(c+655,"riscv_soc u_core u_core u_mmu supervisor_i", false,-1);
        tracep->declBit(c+666,"riscv_soc u_core u_core u_mmu sum_i", false,-1);
        tracep->declBit(c+844,"riscv_soc u_core u_core u_mmu flush_i", false,-1);
        tracep->declBus(c+663,"riscv_soc u_core u_core u_mmu satp_i", false,-1, 31,0);
        tracep->declBit(c+861,"riscv_soc u_core u_core u_mmu fetch_in_rd_i", false,-1);
        tracep->declBit(c+564,"riscv_soc u_core u_core u_mmu fetch_in_flush_i", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_mmu fetch_in_invalidate_i", false,-1);
        tracep->declBus(c+855,"riscv_soc u_core u_core u_mmu fetch_in_pc_i", false,-1, 31,0);
        tracep->declBit(c+834,"riscv_soc u_core u_core u_mmu fetch_out_accept_i", false,-1);
        tracep->declBit(c+568,"riscv_soc u_core u_core u_mmu fetch_out_valid_i", false,-1);
        tracep->declBit(c+569,"riscv_soc u_core u_core u_mmu fetch_out_error_i", false,-1);
        tracep->declBus(c+560,"riscv_soc u_core u_core u_mmu fetch_out_inst_i", false,-1, 31,0);
        tracep->declBus(c+648,"riscv_soc u_core u_core u_mmu lsu_in_addr_i", false,-1, 31,0);
        tracep->declBus(c+636,"riscv_soc u_core u_core u_mmu lsu_in_data_wr_i", false,-1, 31,0);
        tracep->declBit(c+654,"riscv_soc u_core u_core u_mmu lsu_in_rd_i", false,-1);
        tracep->declBus(c+634,"riscv_soc u_core u_core u_mmu lsu_in_wr_i", false,-1, 3,0);
        tracep->declBit(c+629,"riscv_soc u_core u_core u_mmu lsu_in_cacheable_i", false,-1);
        tracep->declBus(c+637,"riscv_soc u_core u_core u_mmu lsu_in_req_tag_i", false,-1, 10,0);
        tracep->declBit(c+656,"riscv_soc u_core u_core u_mmu lsu_in_invalidate_i", false,-1);
        tracep->declBit(c+645,"riscv_soc u_core u_core u_mmu lsu_in_flush_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_core u_core u_mmu lsu_out_data_rd_i", false,-1, 31,0);
        tracep->declBit(c+661,"riscv_soc u_core u_core u_mmu lsu_out_accept_i", false,-1);
        tracep->declBit(c+859,"riscv_soc u_core u_core u_mmu lsu_out_ack_i", false,-1);
        tracep->declBit(c+848,"riscv_soc u_core u_core u_mmu lsu_out_error_i", false,-1);
        tracep->declBus(c+561,"riscv_soc u_core u_core u_mmu lsu_out_resp_tag_i", false,-1, 10,0);
        tracep->declBus(c+657,"riscv_soc u_core u_core u_mmu outport_addr_o", false,-1, 31,0);
        tracep->declBus(c+953,"riscv_soc u_core u_core u_mmu outport_data_wr_o", false,-1, 31,0);
        tracep->declBit(c+646,"riscv_soc u_core u_core u_mmu outport_rd_o", false,-1);
        tracep->declBus(c+956,"riscv_soc u_core u_core u_mmu outport_wr_o", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_core u_core u_mmu outport_cacheable_o", false,-1);
        tracep->declBus(c+992,"riscv_soc u_core u_core u_mmu outport_req_tag_o", false,-1, 10,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_mmu outport_invalidate_o", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_mmu outport_flush_o", false,-1);
        tracep->declBit(c+858,"riscv_soc u_core u_core u_mmu fetch_in_accept_o", false,-1);
        tracep->declBit(c+568,"riscv_soc u_core u_core u_mmu fetch_in_valid_o", false,-1);
        tracep->declBit(c+569,"riscv_soc u_core u_core u_mmu fetch_in_error_o", false,-1);
        tracep->declBus(c+560,"riscv_soc u_core u_core u_mmu fetch_in_inst_o", false,-1, 31,0);
        tracep->declBit(c+833,"riscv_soc u_core u_core u_mmu fetch_out_rd_o", false,-1);
        tracep->declBit(c+564,"riscv_soc u_core u_core u_mmu fetch_out_flush_o", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_mmu fetch_out_invalidate_o", false,-1);
        tracep->declBus(c+832,"riscv_soc u_core u_core u_mmu fetch_out_pc_o", false,-1, 31,0);
        tracep->declBit(c+849,"riscv_soc u_core u_core u_mmu fetch_fault_o", false,-1);
        tracep->declBus(c+855,"riscv_soc u_core u_core u_mmu fetch_fault_addr_o", false,-1, 31,0);
        tracep->declBus(c+820,"riscv_soc u_core u_core u_mmu lsu_in_data_rd_o", false,-1, 31,0);
        tracep->declBit(c+647,"riscv_soc u_core u_core u_mmu lsu_in_accept_o", false,-1);
        tracep->declBit(c+859,"riscv_soc u_core u_core u_mmu lsu_in_ack_o", false,-1);
        tracep->declBit(c+848,"riscv_soc u_core u_core u_mmu lsu_in_error_o", false,-1);
        tracep->declBus(c+561,"riscv_soc u_core u_core u_mmu lsu_in_resp_tag_o", false,-1, 10,0);
        tracep->declBus(c+653,"riscv_soc u_core u_core u_mmu lsu_out_addr_o", false,-1, 31,0);
        tracep->declBus(c+636,"riscv_soc u_core u_core u_mmu lsu_out_data_wr_o", false,-1, 31,0);
        tracep->declBit(c+631,"riscv_soc u_core u_core u_mmu lsu_out_rd_o", false,-1);
        tracep->declBus(c+659,"riscv_soc u_core u_core u_mmu lsu_out_wr_o", false,-1, 3,0);
        tracep->declBit(c+629,"riscv_soc u_core u_core u_mmu lsu_out_cacheable_o", false,-1);
        tracep->declBus(c+637,"riscv_soc u_core u_core u_mmu lsu_out_req_tag_o", false,-1, 10,0);
        tracep->declBit(c+656,"riscv_soc u_core u_core u_mmu lsu_out_invalidate_o", false,-1);
        tracep->declBit(c+645,"riscv_soc u_core u_core u_mmu lsu_out_flush_o", false,-1);
        tracep->declBit(c+662,"riscv_soc u_core u_core u_mmu load_fault_o", false,-1);
        tracep->declBit(c+639,"riscv_soc u_core u_core u_mmu store_fault_o", false,-1);
        tracep->declBus(c+630,"riscv_soc u_core u_core u_mmu fault_addr_o", false,-1, 31,0);
        tracep->declBus(c+993,"riscv_soc u_core u_core u_mmu STATE_IDLE", false,-1, 31,0);
        tracep->declBus(c+994,"riscv_soc u_core u_core u_mmu STATE_LEVEL_FIRST", false,-1, 31,0);
        tracep->declBus(c+976,"riscv_soc u_core u_core u_mmu STATE_LEVEL_SECOND", false,-1, 31,0);
        tracep->declBus(c+977,"riscv_soc u_core u_core u_mmu STATE_UPDATE", false,-1, 31,0);
        tracep->declBus(c+669,"riscv_soc u_core u_core u_mmu state_q", false,-1, 1,0);
        tracep->declBit(c+670,"riscv_soc u_core u_core u_mmu idle_w", false,-1);
        tracep->declBit(c+857,"riscv_soc u_core u_core u_mmu resp_valid_w", false,-1);
        tracep->declBit(c+846,"riscv_soc u_core u_core u_mmu resp_error_w", false,-1);
        tracep->declBit(c+671,"riscv_soc u_core u_core u_mmu load_q", false,-1);
        tracep->declBus(c+672,"riscv_soc u_core u_core u_mmu store_q", false,-1, 3,0);
        tracep->declBit(c+673,"riscv_soc u_core u_core u_mmu load_w", false,-1);
        tracep->declBus(c+674,"riscv_soc u_core u_core u_mmu store_w", false,-1, 3,0);
        tracep->declBus(c+630,"riscv_soc u_core u_core u_mmu lsu_in_addr_q", false,-1, 31,0);
        tracep->declBus(c+675,"riscv_soc u_core u_core u_mmu lsu_addr_w", false,-1, 31,0);
        tracep->declBit(c+866,"riscv_soc u_core u_core u_mmu itlb_hit_w", false,-1);
        tracep->declBit(c+676,"riscv_soc u_core u_core u_mmu dtlb_hit_w", false,-1);
        tracep->declBit(c+677,"riscv_soc u_core u_core u_mmu dtlb_req_q", false,-1);
        tracep->declBit(c+678,"riscv_soc u_core u_core u_mmu vm_enable_w", false,-1);
        tracep->declBus(c+679,"riscv_soc u_core u_core u_mmu ptbr_w", false,-1, 31,0);
        tracep->declBit(c+867,"riscv_soc u_core u_core u_mmu itlb_miss_w", false,-1);
        tracep->declBit(c+680,"riscv_soc u_core u_core u_mmu dtlb_miss_w", false,-1);
        tracep->declBus(c+868,"riscv_soc u_core u_core u_mmu request_addr_w", false,-1, 31,0);
        tracep->declBus(c+657,"riscv_soc u_core u_core u_mmu pte_addr_q", false,-1, 31,0);
        tracep->declBus(c+681,"riscv_soc u_core u_core u_mmu pte_entry_q", false,-1, 31,0);
        tracep->declBus(c+682,"riscv_soc u_core u_core u_mmu virt_addr_q", false,-1, 31,0);
        tracep->declBus(c+826,"riscv_soc u_core u_core u_mmu pte_ppn_w", false,-1, 31,0);
        tracep->declBus(c+827,"riscv_soc u_core u_core u_mmu pte_flags_w", false,-1, 9,0);
        tracep->declBit(c+683,"riscv_soc u_core u_core u_mmu itlb_valid_q", false,-1);
        tracep->declBus(c+684,"riscv_soc u_core u_core u_mmu itlb_va_addr_q", false,-1, 31,12);
        tracep->declBus(c+685,"riscv_soc u_core u_core u_mmu itlb_entry_q", false,-1, 31,0);
        tracep->declBit(c+849,"riscv_soc u_core u_core u_mmu pc_fault_r", false,-1);
        tracep->declBit(c+686,"riscv_soc u_core u_core u_mmu dtlb_valid_q", false,-1);
        tracep->declBus(c+687,"riscv_soc u_core u_core u_mmu dtlb_va_addr_q", false,-1, 31,12);
        tracep->declBus(c+688,"riscv_soc u_core u_core u_mmu dtlb_entry_q", false,-1, 31,0);
        tracep->declBit(c+662,"riscv_soc u_core u_core u_mmu load_fault_r", false,-1);
        tracep->declBit(c+639,"riscv_soc u_core u_core u_mmu store_fault_r", false,-1);
        tracep->declBit(c+646,"riscv_soc u_core u_core u_mmu mem_req_q", false,-1);
        tracep->declBit(c+3,"riscv_soc u_core u_core u_arb clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_core u_arb rst_i", false,-1);
        tracep->declBus(c+653,"riscv_soc u_core u_core u_arb inport_cpu_addr_i", false,-1, 31,0);
        tracep->declBus(c+636,"riscv_soc u_core u_core u_arb inport_cpu_data_wr_i", false,-1, 31,0);
        tracep->declBit(c+631,"riscv_soc u_core u_core u_arb inport_cpu_rd_i", false,-1);
        tracep->declBus(c+659,"riscv_soc u_core u_core u_arb inport_cpu_wr_i", false,-1, 3,0);
        tracep->declBit(c+629,"riscv_soc u_core u_core u_arb inport_cpu_cacheable_i", false,-1);
        tracep->declBus(c+637,"riscv_soc u_core u_core u_arb inport_cpu_req_tag_i", false,-1, 10,0);
        tracep->declBit(c+656,"riscv_soc u_core u_core u_arb inport_cpu_invalidate_i", false,-1);
        tracep->declBit(c+645,"riscv_soc u_core u_core u_arb inport_cpu_flush_i", false,-1);
        tracep->declBus(c+657,"riscv_soc u_core u_core u_arb inport_mmu_addr_i", false,-1, 31,0);
        tracep->declBus(c+953,"riscv_soc u_core u_core u_arb inport_mmu_data_wr_i", false,-1, 31,0);
        tracep->declBit(c+646,"riscv_soc u_core u_core u_arb inport_mmu_rd_i", false,-1);
        tracep->declBus(c+956,"riscv_soc u_core u_core u_arb inport_mmu_wr_i", false,-1, 3,0);
        tracep->declBit(c+954,"riscv_soc u_core u_core u_arb inport_mmu_cacheable_i", false,-1);
        tracep->declBus(c+992,"riscv_soc u_core u_core u_arb inport_mmu_req_tag_i", false,-1, 10,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_arb inport_mmu_invalidate_i", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_arb inport_mmu_flush_i", false,-1);
        tracep->declBus(c+820,"riscv_soc u_core u_core u_arb outport_data_rd_i", false,-1, 31,0);
        tracep->declBit(c+558,"riscv_soc u_core u_core u_arb outport_accept_i", false,-1);
        tracep->declBit(c+825,"riscv_soc u_core u_core u_arb outport_ack_i", false,-1);
        tracep->declBit(c+824,"riscv_soc u_core u_core u_arb outport_error_i", false,-1);
        tracep->declBus(c+561,"riscv_soc u_core u_core u_arb outport_resp_tag_i", false,-1, 10,0);
        tracep->declBus(c+820,"riscv_soc u_core u_core u_arb inport_cpu_data_rd_o", false,-1, 31,0);
        tracep->declBit(c+661,"riscv_soc u_core u_core u_arb inport_cpu_accept_o", false,-1);
        tracep->declBit(c+859,"riscv_soc u_core u_core u_arb inport_cpu_ack_o", false,-1);
        tracep->declBit(c+848,"riscv_soc u_core u_core u_arb inport_cpu_error_o", false,-1);
        tracep->declBus(c+561,"riscv_soc u_core u_core u_arb inport_cpu_resp_tag_o", false,-1, 10,0);
        tracep->declBus(c+820,"riscv_soc u_core u_core u_arb inport_mmu_data_rd_o", false,-1, 31,0);
        tracep->declBit(c+625,"riscv_soc u_core u_core u_arb inport_mmu_accept_o", false,-1);
        tracep->declBit(c+857,"riscv_soc u_core u_core u_arb inport_mmu_ack_o", false,-1);
        tracep->declBit(c+846,"riscv_soc u_core u_core u_arb inport_mmu_error_o", false,-1);
        tracep->declBus(c+561,"riscv_soc u_core u_core u_arb inport_mmu_resp_tag_o", false,-1, 10,0);
        tracep->declBus(c+563,"riscv_soc u_core u_core u_arb outport_addr_o", false,-1, 31,0);
        tracep->declBus(c+566,"riscv_soc u_core u_core u_arb outport_data_wr_o", false,-1, 31,0);
        tracep->declBit(c+567,"riscv_soc u_core u_core u_arb outport_rd_o", false,-1);
        tracep->declBus(c+570,"riscv_soc u_core u_core u_arb outport_wr_o", false,-1, 3,0);
        tracep->declBit(c+559,"riscv_soc u_core u_core u_arb outport_cacheable_o", false,-1);
        tracep->declBus(c+565,"riscv_soc u_core u_core u_arb outport_req_tag_o", false,-1, 10,0);
        tracep->declBit(c+562,"riscv_soc u_core u_core u_arb outport_invalidate_o", false,-1);
        tracep->declBit(c+571,"riscv_soc u_core u_core u_arb outport_flush_o", false,-1);
        tracep->declBit(c+689,"riscv_soc u_core u_core u_arb read_hold_q", false,-1);
        tracep->declBit(c+690,"riscv_soc u_core u_core u_arb src_mmu_q", false,-1);
        tracep->declBit(c+691,"riscv_soc u_core u_core u_arb src_mmu_w", false,-1);
        tracep->declBit(c+559,"riscv_soc u_core u_core u_arb cacheable_w", false,-1);
        tracep->declBit(c+692,"riscv_soc u_core u_core u_arb resp_mmu_w", false,-1);
        tracep->declBit(c+3,"riscv_soc u_core u_core u_lsu clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_core u_lsu rst_i", false,-1);
        tracep->declBit(c+864,"riscv_soc u_core u_core u_lsu opcode_valid_i", false,-1);
        tracep->declQuad(c+623,"riscv_soc u_core u_core u_lsu opcode_instr_i", false,-1, 57,0);
        tracep->declBus(c+643,"riscv_soc u_core u_core u_lsu opcode_opcode_i", false,-1, 31,0);
        tracep->declBus(c+627,"riscv_soc u_core u_core u_lsu opcode_pc_i", false,-1, 31,0);
        tracep->declBus(c+664,"riscv_soc u_core u_core u_lsu opcode_rd_idx_i", false,-1, 4,0);
        tracep->declBus(c+658,"riscv_soc u_core u_core u_lsu opcode_ra_idx_i", false,-1, 4,0);
        tracep->declBus(c+644,"riscv_soc u_core u_core u_lsu opcode_rb_idx_i", false,-1, 4,0);
        tracep->declBus(c+851,"riscv_soc u_core u_core u_lsu opcode_ra_operand_i", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc u_core u_core u_lsu opcode_rb_operand_i", false,-1, 31,0);
        tracep->declBus(c+820,"riscv_soc u_core u_core u_lsu mem_data_rd_i", false,-1, 31,0);
        tracep->declBit(c+647,"riscv_soc u_core u_core u_lsu mem_accept_i", false,-1);
        tracep->declBit(c+859,"riscv_soc u_core u_core u_lsu mem_ack_i", false,-1);
        tracep->declBit(c+848,"riscv_soc u_core u_core u_lsu mem_error_i", false,-1);
        tracep->declBus(c+561,"riscv_soc u_core u_core u_lsu mem_resp_tag_i", false,-1, 10,0);
        tracep->declBit(c+662,"riscv_soc u_core u_core u_lsu mmu_load_fault_i", false,-1);
        tracep->declBit(c+639,"riscv_soc u_core u_core u_lsu mmu_store_fault_i", false,-1);
        tracep->declBus(c+630,"riscv_soc u_core u_core u_lsu mmu_fault_addr_i", false,-1, 31,0);
        tracep->declBus(c+648,"riscv_soc u_core u_core u_lsu mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+636,"riscv_soc u_core u_core u_lsu mem_data_wr_o", false,-1, 31,0);
        tracep->declBit(c+654,"riscv_soc u_core u_core u_lsu mem_rd_o", false,-1);
        tracep->declBus(c+634,"riscv_soc u_core u_core u_lsu mem_wr_o", false,-1, 3,0);
        tracep->declBit(c+629,"riscv_soc u_core u_core u_lsu mem_cacheable_o", false,-1);
        tracep->declBus(c+637,"riscv_soc u_core u_core u_lsu mem_req_tag_o", false,-1, 10,0);
        tracep->declBit(c+656,"riscv_soc u_core u_core u_lsu mem_invalidate_o", false,-1);
        tracep->declBit(c+645,"riscv_soc u_core u_core u_lsu mem_flush_o", false,-1);
        tracep->declBus(c+856,"riscv_soc u_core u_core u_lsu writeback_idx_o", false,-1, 4,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_lsu writeback_squash_o", false,-1);
        tracep->declBus(c+860,"riscv_soc u_core u_core u_lsu writeback_value_o", false,-1, 31,0);
        tracep->declBit(c+815,"riscv_soc u_core u_core u_lsu fault_store_o", false,-1);
        tracep->declBit(c+816,"riscv_soc u_core u_core u_lsu fault_load_o", false,-1);
        tracep->declBit(c+652,"riscv_soc u_core u_core u_lsu fault_misaligned_store_o", false,-1);
        tracep->declBit(c+632,"riscv_soc u_core u_core u_lsu fault_misaligned_load_o", false,-1);
        tracep->declBit(c+639,"riscv_soc u_core u_core u_lsu fault_page_store_o", false,-1);
        tracep->declBit(c+662,"riscv_soc u_core u_core u_lsu fault_page_load_o", false,-1);
        tracep->declBus(c+649,"riscv_soc u_core u_core u_lsu fault_addr_o", false,-1, 31,0);
        tracep->declBit(c+641,"riscv_soc u_core u_core u_lsu stall_o", false,-1);
        tracep->declBus(c+648,"riscv_soc u_core u_core u_lsu mem_addr_q", false,-1, 31,0);
        tracep->declBus(c+636,"riscv_soc u_core u_core u_lsu mem_data_wr_q", false,-1, 31,0);
        tracep->declBit(c+654,"riscv_soc u_core u_core u_lsu mem_rd_q", false,-1);
        tracep->declBus(c+634,"riscv_soc u_core u_core u_lsu mem_wr_q", false,-1, 3,0);
        tracep->declBit(c+629,"riscv_soc u_core u_core u_lsu mem_cacheable_q", false,-1);
        tracep->declBus(c+637,"riscv_soc u_core u_core u_lsu mem_req_tag_q", false,-1, 10,0);
        tracep->declBit(c+656,"riscv_soc u_core u_core u_lsu mem_invalidate_q", false,-1);
        tracep->declBit(c+645,"riscv_soc u_core u_core u_lsu mem_flush_q", false,-1);
        tracep->declBit(c+632,"riscv_soc u_core u_core u_lsu mem_unaligned_ld_q", false,-1);
        tracep->declBit(c+652,"riscv_soc u_core u_core u_lsu mem_unaligned_st_q", false,-1);
        tracep->declBit(c+693,"riscv_soc u_core u_core u_lsu load_inst_w", false,-1);
        tracep->declBit(c+694,"riscv_soc u_core u_core u_lsu load_signed_inst_w", false,-1);
        tracep->declBit(c+695,"riscv_soc u_core u_core u_lsu store_inst_w", false,-1);
        tracep->declBus(c+869,"riscv_soc u_core u_core u_lsu mem_addr_r", false,-1, 31,0);
        tracep->declBit(c+870,"riscv_soc u_core u_core u_lsu mem_unaligned_r", false,-1);
        tracep->declBit(c+696,"riscv_soc u_core u_core u_lsu dcache_flush_w", false,-1);
        tracep->declBit(c+697,"riscv_soc u_core u_core u_lsu dcache_writeback_w", false,-1);
        tracep->declBit(c+698,"riscv_soc u_core u_core u_lsu dcache_invalidate_w", false,-1);
        tracep->declBus(c+649,"riscv_soc u_core u_core u_lsu fault_addr_r", false,-1, 31,0);
        tracep->declBus(c+871,"riscv_soc u_core u_core u_lsu addr_lsb_r", false,-1, 1,0);
        tracep->declBit(c+872,"riscv_soc u_core u_core u_lsu load_byte_r", false,-1);
        tracep->declBit(c+873,"riscv_soc u_core u_core u_lsu load_half_r", false,-1);
        tracep->declBit(c+874,"riscv_soc u_core u_core u_lsu load_word_r", false,-1);
        tracep->declBit(c+875,"riscv_soc u_core u_core u_lsu load_signed_r", false,-1);
        tracep->declBus(c+856,"riscv_soc u_core u_core u_lsu wb_idx_r", false,-1, 4,0);
        tracep->declBus(c+860,"riscv_soc u_core u_core u_lsu wb_result_r", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_core u_core u_csr clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_core u_csr rst_i", false,-1);
        tracep->declBit(c+179,"riscv_soc u_core u_core u_csr intr_i", false,-1);
        tracep->declBit(c+847,"riscv_soc u_core u_core u_csr opcode_valid_i", false,-1);
        tracep->declQuad(c+623,"riscv_soc u_core u_core u_csr opcode_instr_i", false,-1, 57,0);
        tracep->declBus(c+643,"riscv_soc u_core u_core u_csr opcode_opcode_i", false,-1, 31,0);
        tracep->declBus(c+627,"riscv_soc u_core u_core u_csr opcode_pc_i", false,-1, 31,0);
        tracep->declBus(c+664,"riscv_soc u_core u_core u_csr opcode_rd_idx_i", false,-1, 4,0);
        tracep->declBus(c+658,"riscv_soc u_core u_core u_csr opcode_ra_idx_i", false,-1, 4,0);
        tracep->declBus(c+644,"riscv_soc u_core u_core u_csr opcode_rb_idx_i", false,-1, 4,0);
        tracep->declBus(c+851,"riscv_soc u_core u_core u_csr opcode_ra_operand_i", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc u_core u_core u_csr opcode_rb_operand_i", false,-1, 31,0);
        tracep->declBit(c+850,"riscv_soc u_core u_core u_csr branch_exec_request_i", false,-1);
        tracep->declBus(c+853,"riscv_soc u_core u_core u_csr branch_exec_pc_i", false,-1, 31,0);
        tracep->declBus(c+953,"riscv_soc u_core u_core u_csr cpu_id_i", false,-1, 31,0);
        tracep->declBus(c+5,"riscv_soc u_core u_core u_csr reset_vector_i", false,-1, 31,0);
        tracep->declBit(c+815,"riscv_soc u_core u_core u_csr fault_store_i", false,-1);
        tracep->declBit(c+816,"riscv_soc u_core u_core u_csr fault_load_i", false,-1);
        tracep->declBit(c+652,"riscv_soc u_core u_core u_csr fault_misaligned_store_i", false,-1);
        tracep->declBit(c+632,"riscv_soc u_core u_core u_csr fault_misaligned_load_i", false,-1);
        tracep->declBit(c+639,"riscv_soc u_core u_core u_csr fault_page_store_i", false,-1);
        tracep->declBit(c+662,"riscv_soc u_core u_core u_csr fault_page_load_i", false,-1);
        tracep->declBus(c+649,"riscv_soc u_core u_core u_csr fault_addr_i", false,-1, 31,0);
        tracep->declBus(c+642,"riscv_soc u_core u_core u_csr writeback_idx_o", false,-1, 4,0);
        tracep->declBit(c+628,"riscv_soc u_core u_core u_csr writeback_squash_o", false,-1);
        tracep->declBus(c+668,"riscv_soc u_core u_core u_csr writeback_value_o", false,-1, 31,0);
        tracep->declBit(c+622,"riscv_soc u_core u_core u_csr stall_o", false,-1);
        tracep->declBit(c+626,"riscv_soc u_core u_core u_csr branch_csr_request_o", false,-1);
        tracep->declBus(c+660,"riscv_soc u_core u_core u_csr branch_csr_pc_o", false,-1, 31,0);
        tracep->declBit(c+655,"riscv_soc u_core u_core u_csr mmu_supervisor_o", false,-1);
        tracep->declBit(c+666,"riscv_soc u_core u_core u_csr mmu_sum_o", false,-1);
        tracep->declBit(c+844,"riscv_soc u_core u_core u_csr mmu_flush_o", false,-1);
        tracep->declBus(c+663,"riscv_soc u_core u_core u_csr mmu_satp_o", false,-1, 31,0);
        tracep->declBus(c+699,"riscv_soc u_core u_core u_csr csr_mepc_q", false,-1, 31,0);
        tracep->declBus(c+700,"riscv_soc u_core u_core u_csr csr_mcause_q", false,-1, 31,0);
        tracep->declBus(c+701,"riscv_soc u_core u_core u_csr csr_sr_q", false,-1, 31,0);
        tracep->declBus(c+702,"riscv_soc u_core u_core u_csr csr_mtvec_q", false,-1, 31,0);
        tracep->declBus(c+703,"riscv_soc u_core u_core u_csr csr_mip_q", false,-1, 31,0);
        tracep->declBus(c+704,"riscv_soc u_core u_core u_csr csr_mie_q", false,-1, 31,0);
        tracep->declBus(c+705,"riscv_soc u_core u_core u_csr csr_mpriv_q", false,-1, 1,0);
        tracep->declBus(c+706,"riscv_soc u_core u_core u_csr csr_mcycle_q", false,-1, 31,0);
        tracep->declBus(c+707,"riscv_soc u_core u_core u_csr csr_mscratch_q", false,-1, 31,0);
        tracep->declBus(c+708,"riscv_soc u_core u_core u_csr csr_sepc_q", false,-1, 31,0);
        tracep->declBus(c+709,"riscv_soc u_core u_core u_csr csr_stvec_q", false,-1, 31,0);
        tracep->declBus(c+710,"riscv_soc u_core u_core u_csr csr_scause_q", false,-1, 31,0);
        tracep->declBus(c+711,"riscv_soc u_core u_core u_csr csr_stval_q", false,-1, 31,0);
        tracep->declBus(c+712,"riscv_soc u_core u_core u_csr csr_satp_q", false,-1, 31,0);
        tracep->declBus(c+713,"riscv_soc u_core u_core u_csr csr_sscratch_q", false,-1, 31,0);
        tracep->declBus(c+714,"riscv_soc u_core u_core u_csr pc_m_q", false,-1, 31,0);
        tracep->declBus(c+818,"riscv_soc u_core u_core u_csr exc_src_w", false,-1, 31,0);
        tracep->declBit(c+876,"riscv_soc u_core u_core u_csr csr_access_fault_w", false,-1);
        tracep->declBit(c+819,"riscv_soc u_core u_core u_csr exception_m_w", false,-1);
        tracep->declBus(c+715,"riscv_soc u_core u_core u_csr imm12_r", false,-1, 31,0);
        tracep->declBus(c+716,"riscv_soc u_core u_core u_csr priv_r", false,-1, 1,0);
        tracep->declBit(c+717,"riscv_soc u_core u_core u_csr readonly_r", false,-1);
        tracep->declBit(c+718,"riscv_soc u_core u_core u_csr write_r", false,-1);
        tracep->declBit(c+719,"riscv_soc u_core u_core u_csr set_r", false,-1);
        tracep->declBit(c+720,"riscv_soc u_core u_core u_csr clr_r", false,-1);
        tracep->declBus(c+877,"riscv_soc u_core u_core u_csr csr_mepc_r", false,-1, 31,0);
        tracep->declBus(c+878,"riscv_soc u_core u_core u_csr csr_mcause_r", false,-1, 31,0);
        tracep->declBus(c+879,"riscv_soc u_core u_core u_csr csr_sr_r", false,-1, 31,0);
        tracep->declBus(c+880,"riscv_soc u_core u_core u_csr csr_mtvec_r", false,-1, 31,0);
        tracep->declBus(c+881,"riscv_soc u_core u_core u_csr csr_mip_r", false,-1, 31,0);
        tracep->declBus(c+882,"riscv_soc u_core u_core u_csr csr_mie_r", false,-1, 31,0);
        tracep->declBus(c+995,"riscv_soc u_core u_core u_csr csr_mtime_r", false,-1, 31,0);
        tracep->declBus(c+996,"riscv_soc u_core u_core u_csr csr_mtimecmp_r", false,-1, 31,0);
        tracep->declBus(c+883,"riscv_soc u_core u_core u_csr csr_mpriv_r", false,-1, 1,0);
        tracep->declBus(c+721,"riscv_soc u_core u_core u_csr csr_mcycle_r", false,-1, 31,0);
        tracep->declBus(c+884,"riscv_soc u_core u_core u_csr csr_mscratch_r", false,-1, 31,0);
        tracep->declBus(c+885,"riscv_soc u_core u_core u_csr csr_sepc_r", false,-1, 31,0);
        tracep->declBus(c+886,"riscv_soc u_core u_core u_csr csr_stvec_r", false,-1, 31,0);
        tracep->declBus(c+887,"riscv_soc u_core u_core u_csr csr_scause_r", false,-1, 31,0);
        tracep->declBus(c+888,"riscv_soc u_core u_core u_csr csr_stval_r", false,-1, 31,0);
        tracep->declBus(c+889,"riscv_soc u_core u_core u_csr csr_satp_r", false,-1, 31,0);
        tracep->declBus(c+890,"riscv_soc u_core u_core u_csr csr_sscratch_r", false,-1, 31,0);
        tracep->declBus(c+722,"riscv_soc u_core u_core u_csr csr_medeleg_q", false,-1, 31,0);
        tracep->declBus(c+891,"riscv_soc u_core u_core u_csr csr_medeleg_r", false,-1, 31,0);
        tracep->declBus(c+723,"riscv_soc u_core u_core u_csr csr_mideleg_q", false,-1, 31,0);
        tracep->declBus(c+892,"riscv_soc u_core u_core u_csr csr_mideleg_r", false,-1, 31,0);
        tracep->declBit(c+893,"riscv_soc u_core u_core u_csr take_intr_r", false,-1);
        tracep->declBit(c+894,"riscv_soc u_core u_core u_csr take_exception_r", false,-1);
        tracep->declBit(c+895,"riscv_soc u_core u_core u_csr exception_s_r", false,-1);
        tracep->declBit(c+896,"riscv_soc u_core u_core u_csr interrupt_s_r", false,-1);
        tracep->declBus(c+897,"riscv_soc u_core u_core u_csr data_r", false,-1, 31,0);
        tracep->declBus(c+898,"riscv_soc u_core u_core u_csr result_r", false,-1, 31,0);
        tracep->declBit(c+899,"riscv_soc u_core u_core u_csr valid_unit_inst_w", false,-1);
        tracep->declBit(c+724,"riscv_soc u_core u_core u_csr load_inst_w", false,-1);
        tracep->declBit(c+695,"riscv_soc u_core u_core u_csr store_inst_w", false,-1);
        tracep->declBus(c+725,"riscv_soc u_core u_core u_csr irq_pending_r", false,-1, 31,0);
        tracep->declBit(c+726,"riscv_soc u_core u_core u_csr m_enabled_r", false,-1);
        tracep->declBus(c+727,"riscv_soc u_core u_core u_csr m_interrupts_r", false,-1, 31,0);
        tracep->declBit(c+728,"riscv_soc u_core u_core u_csr s_enabled_r", false,-1);
        tracep->declBus(c+729,"riscv_soc u_core u_core u_csr s_interrupts_r", false,-1, 31,0);
        tracep->declBus(c+730,"riscv_soc u_core u_core u_csr irq_masked_r", false,-1, 31,0);
        tracep->declBit(c+731,"riscv_soc u_core u_core u_csr writeback_en_q", false,-1);
        tracep->declBus(c+732,"riscv_soc u_core u_core u_csr writeback_idx_q", false,-1, 4,0);
        tracep->declBus(c+668,"riscv_soc u_core u_core u_csr writeback_value_q", false,-1, 31,0);
        tracep->declBit(c+628,"riscv_soc u_core u_core u_csr writeback_squash_q", false,-1);
        tracep->declBit(c+900,"riscv_soc u_core u_core u_csr branch_r", false,-1);
        tracep->declBus(c+901,"riscv_soc u_core u_core u_csr branch_target_r", false,-1, 31,0);
        tracep->declBit(c+626,"riscv_soc u_core u_core u_csr branch_q", false,-1);
        tracep->declBus(c+660,"riscv_soc u_core u_core u_csr branch_target_q", false,-1, 31,0);
        tracep->declBit(c+733,"riscv_soc u_core u_core u_csr reset_q", false,-1);
        tracep->declBit(c+734,"riscv_soc u_core u_core u_csr mmu_enable_w", false,-1);
        tracep->declBit(c+3,"riscv_soc u_core u_core u_muldiv clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_core u_muldiv rst_i", false,-1);
        tracep->declBit(c+852,"riscv_soc u_core u_core u_muldiv opcode_valid_i", false,-1);
        tracep->declQuad(c+623,"riscv_soc u_core u_core u_muldiv opcode_instr_i", false,-1, 57,0);
        tracep->declBus(c+643,"riscv_soc u_core u_core u_muldiv opcode_opcode_i", false,-1, 31,0);
        tracep->declBus(c+627,"riscv_soc u_core u_core u_muldiv opcode_pc_i", false,-1, 31,0);
        tracep->declBus(c+664,"riscv_soc u_core u_core u_muldiv opcode_rd_idx_i", false,-1, 4,0);
        tracep->declBus(c+658,"riscv_soc u_core u_core u_muldiv opcode_ra_idx_i", false,-1, 4,0);
        tracep->declBus(c+644,"riscv_soc u_core u_core u_muldiv opcode_rb_idx_i", false,-1, 4,0);
        tracep->declBus(c+851,"riscv_soc u_core u_core u_muldiv opcode_ra_operand_i", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc u_core u_core u_muldiv opcode_rb_operand_i", false,-1, 31,0);
        tracep->declBus(c+651,"riscv_soc u_core u_core u_muldiv writeback_idx_o", false,-1, 4,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_muldiv writeback_squash_o", false,-1);
        tracep->declBus(c+633,"riscv_soc u_core u_core u_muldiv writeback_value_o", false,-1, 31,0);
        tracep->declBit(c+640,"riscv_soc u_core u_core u_muldiv stall_o", false,-1);
        tracep->declBus(c+735,"riscv_soc u_core u_core u_muldiv rd_q", false,-1, 4,0);
        tracep->declBus(c+633,"riscv_soc u_core u_core u_muldiv wb_result_q", false,-1, 31,0);
        tracep->declBus(c+651,"riscv_soc u_core u_core u_muldiv wb_rd_q", false,-1, 4,0);
        tracep->declArray(c+902,"riscv_soc u_core u_core u_muldiv mult_result_w", false,-1, 64,0);
        tracep->declQuad(c+905,"riscv_soc u_core u_core u_muldiv operand_b_r", false,-1, 32,0);
        tracep->declQuad(c+907,"riscv_soc u_core u_core u_muldiv operand_a_r", false,-1, 32,0);
        tracep->declBus(c+909,"riscv_soc u_core u_core u_muldiv result_r", false,-1, 31,0);
        tracep->declBus(c+736,"riscv_soc u_core u_core u_muldiv mult_result_q", false,-1, 31,0);
        tracep->declBit(c+737,"riscv_soc u_core u_core u_muldiv mult_busy_q", false,-1);
        tracep->declBit(c+738,"riscv_soc u_core u_core u_muldiv mult_inst_w", false,-1);
        tracep->declBit(c+739,"riscv_soc u_core u_core u_muldiv div_rem_inst_w", false,-1);
        tracep->declBit(c+740,"riscv_soc u_core u_core u_muldiv signed_operation_w", false,-1);
        tracep->declBit(c+741,"riscv_soc u_core u_core u_muldiv div_operation_w", false,-1);
        tracep->declBus(c+742,"riscv_soc u_core u_core u_muldiv dividend_q", false,-1, 31,0);
        tracep->declQuad(c+743,"riscv_soc u_core u_core u_muldiv divisor_q", false,-1, 62,0);
        tracep->declBus(c+745,"riscv_soc u_core u_core u_muldiv quotient_q", false,-1, 31,0);
        tracep->declBus(c+746,"riscv_soc u_core u_core u_muldiv q_mask_q", false,-1, 31,0);
        tracep->declBit(c+747,"riscv_soc u_core u_core u_muldiv div_inst_q", false,-1);
        tracep->declBit(c+748,"riscv_soc u_core u_core u_muldiv div_busy_q", false,-1);
        tracep->declBit(c+749,"riscv_soc u_core u_core u_muldiv invert_res_q", false,-1);
        tracep->declBit(c+910,"riscv_soc u_core u_core u_muldiv div_start_w", false,-1);
        tracep->declBit(c+750,"riscv_soc u_core u_core u_muldiv div_complete_w", false,-1);
        tracep->declBus(c+751,"riscv_soc u_core u_core u_muldiv div_result_r", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_core u_core u_fetch clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_core u_fetch rst_i", false,-1);
        tracep->declBit(c+854,"riscv_soc u_core u_core u_fetch fetch_branch_i", false,-1);
        tracep->declBus(c+817,"riscv_soc u_core u_core u_fetch fetch_branch_pc_i", false,-1, 31,0);
        tracep->declBit(c+845,"riscv_soc u_core u_core u_fetch fetch_accept_i", false,-1);
        tracep->declBit(c+858,"riscv_soc u_core u_core u_fetch icache_accept_i", false,-1);
        tracep->declBit(c+568,"riscv_soc u_core u_core u_fetch icache_valid_i", false,-1);
        tracep->declBit(c+569,"riscv_soc u_core u_core u_fetch icache_error_i", false,-1);
        tracep->declBus(c+560,"riscv_soc u_core u_core u_fetch icache_inst_i", false,-1, 31,0);
        tracep->declBit(c+849,"riscv_soc u_core u_core u_fetch mmu_fetch_fault_i", false,-1);
        tracep->declBit(c+635,"riscv_soc u_core u_core u_fetch fetch_invalidate_i", false,-1);
        tracep->declBit(c+863,"riscv_soc u_core u_core u_fetch fetch_valid_o", false,-1);
        tracep->declBus(c+665,"riscv_soc u_core u_core u_fetch fetch_instr_o", false,-1, 31,0);
        tracep->declBus(c+650,"riscv_soc u_core u_core u_fetch fetch_pc_o", false,-1, 31,0);
        tracep->declBit(c+861,"riscv_soc u_core u_core u_fetch icache_rd_o", false,-1);
        tracep->declBit(c+564,"riscv_soc u_core u_core u_fetch icache_flush_o", false,-1);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_fetch icache_invalidate_o", false,-1);
        tracep->declBus(c+855,"riscv_soc u_core u_core u_fetch icache_pc_o", false,-1, 31,0);
        tracep->declBit(c+752,"riscv_soc u_core u_core u_fetch active_q", false,-1);
        tracep->declBus(c+753,"riscv_soc u_core u_core u_fetch fetch_pc_q", false,-1, 31,0);
        tracep->declBus(c+754,"riscv_soc u_core u_core u_fetch branch_pc_q", false,-1, 31,0);
        tracep->declBit(c+755,"riscv_soc u_core u_core u_fetch branch_valid_q", false,-1);
        tracep->declBit(c+756,"riscv_soc u_core u_core u_fetch icache_fetch_q", false,-1);
        tracep->declBit(c+757,"riscv_soc u_core u_core u_fetch icache_invalidate_q", false,-1);
        tracep->declQuad(c+758,"riscv_soc u_core u_core u_fetch skid_buffer_q", false,-1, 63,0);
        tracep->declBit(c+760,"riscv_soc u_core u_core u_fetch skid_valid_q", false,-1);
        tracep->declBit(c+761,"riscv_soc u_core u_core u_fetch icache_busy_w", false,-1);
        tracep->declBit(c+911,"riscv_soc u_core u_core u_fetch stall_w", false,-1);
        tracep->declBit(c+912,"riscv_soc u_core u_core u_fetch branch_w", false,-1);
        tracep->declBus(c+913,"riscv_soc u_core u_core u_fetch branch_pc_w", false,-1, 31,0);
        tracep->declBus(c+762,"riscv_soc u_core u_core u_fetch pc_d_q", false,-1, 31,0);
        tracep->declBit(c+763,"riscv_soc u_core u_core u_fetch fetch_page_fault_q", false,-1);
        tracep->declBus(c+764,"riscv_soc u_core u_core u_fetch instruction_r", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_core u_icache u_data0 clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_icache u_data0 rst_i", false,-1);
        tracep->declBus(c+843,"riscv_soc u_core u_icache u_data0 addr_i", false,-1, 10,0);
        tracep->declBus(c+820,"riscv_soc u_core u_icache u_data0 data_i", false,-1, 31,0);
        tracep->declBit(c+949,"riscv_soc u_core u_icache u_data0 wr_i", false,-1);
        tracep->declBus(c+552,"riscv_soc u_core u_icache u_data0 data_o", false,-1, 31,0);
        tracep->declBus(c+552,"riscv_soc u_core u_icache u_data0 ram_read_q", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_core u_icache u_data1 clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_icache u_data1 rst_i", false,-1);
        tracep->declBus(c+843,"riscv_soc u_core u_icache u_data1 addr_i", false,-1, 10,0);
        tracep->declBus(c+820,"riscv_soc u_core u_icache u_data1 data_i", false,-1, 31,0);
        tracep->declBit(c+950,"riscv_soc u_core u_icache u_data1 wr_i", false,-1);
        tracep->declBus(c+553,"riscv_soc u_core u_icache u_data1 data_o", false,-1, 31,0);
        tracep->declBus(c+553,"riscv_soc u_core u_icache u_data1 ram_read_q", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_core u_icache u_tag0 clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_icache u_tag0 rst_i", false,-1);
        tracep->declBus(c+840,"riscv_soc u_core u_icache u_tag0 addr_i", false,-1, 7,0);
        tracep->declBus(c+615,"riscv_soc u_core u_icache u_tag0 data_i", false,-1, 19,0);
        tracep->declBit(c+841,"riscv_soc u_core u_icache u_tag0 wr_i", false,-1);
        tracep->declBus(c+546,"riscv_soc u_core u_icache u_tag0 data_o", false,-1, 19,0);
        tracep->declBus(c+546,"riscv_soc u_core u_icache u_tag0 ram_read_q", false,-1, 19,0);
        tracep->declBit(c+3,"riscv_soc u_core u_icache u_tag1 clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_icache u_tag1 rst_i", false,-1);
        tracep->declBus(c+840,"riscv_soc u_core u_icache u_tag1 addr_i", false,-1, 7,0);
        tracep->declBus(c+615,"riscv_soc u_core u_icache u_tag1 data_i", false,-1, 19,0);
        tracep->declBit(c+842,"riscv_soc u_core u_icache u_tag1 wr_i", false,-1);
        tracep->declBus(c+549,"riscv_soc u_core u_icache u_tag1 data_o", false,-1, 19,0);
        tracep->declBus(c+549,"riscv_soc u_core u_icache u_tag1 ram_read_q", false,-1, 19,0);
        tracep->declBit(c+3,"riscv_soc u_core u_core u_decode clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_core u_decode rst_i", false,-1);
        tracep->declBit(c+863,"riscv_soc u_core u_core u_decode fetch_valid_i", false,-1);
        tracep->declBus(c+665,"riscv_soc u_core u_core u_decode fetch_instr_i", false,-1, 31,0);
        tracep->declBus(c+650,"riscv_soc u_core u_core u_decode fetch_pc_i", false,-1, 31,0);
        tracep->declBit(c+850,"riscv_soc u_core u_core u_decode branch_request_i", false,-1);
        tracep->declBus(c+853,"riscv_soc u_core u_core u_decode branch_pc_i", false,-1, 31,0);
        tracep->declBit(c+626,"riscv_soc u_core u_core u_decode branch_csr_request_i", false,-1);
        tracep->declBus(c+660,"riscv_soc u_core u_core u_decode branch_csr_pc_i", false,-1, 31,0);
        tracep->declBus(c+638,"riscv_soc u_core u_core u_decode writeback_exec_idx_i", false,-1, 4,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_decode writeback_exec_squash_i", false,-1);
        tracep->declBus(c+667,"riscv_soc u_core u_core u_decode writeback_exec_value_i", false,-1, 31,0);
        tracep->declBus(c+856,"riscv_soc u_core u_core u_decode writeback_mem_idx_i", false,-1, 4,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_decode writeback_mem_squash_i", false,-1);
        tracep->declBus(c+860,"riscv_soc u_core u_core u_decode writeback_mem_value_i", false,-1, 31,0);
        tracep->declBus(c+642,"riscv_soc u_core u_core u_decode writeback_csr_idx_i", false,-1, 4,0);
        tracep->declBit(c+628,"riscv_soc u_core u_core u_decode writeback_csr_squash_i", false,-1);
        tracep->declBus(c+668,"riscv_soc u_core u_core u_decode writeback_csr_value_i", false,-1, 31,0);
        tracep->declBus(c+651,"riscv_soc u_core u_core u_decode writeback_muldiv_idx_i", false,-1, 4,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_decode writeback_muldiv_squash_i", false,-1);
        tracep->declBus(c+633,"riscv_soc u_core u_core u_decode writeback_muldiv_value_i", false,-1, 31,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_decode exec_stall_i", false,-1);
        tracep->declBit(c+641,"riscv_soc u_core u_core u_decode lsu_stall_i", false,-1);
        tracep->declBit(c+622,"riscv_soc u_core u_core u_decode csr_stall_i", false,-1);
        tracep->declBit(c+640,"riscv_soc u_core u_core u_decode muldiv_stall_i", false,-1);
        tracep->declBit(c+854,"riscv_soc u_core u_core u_decode fetch_branch_o", false,-1);
        tracep->declBus(c+817,"riscv_soc u_core u_core u_decode fetch_branch_pc_o", false,-1, 31,0);
        tracep->declBit(c+845,"riscv_soc u_core u_core u_decode fetch_accept_o", false,-1);
        tracep->declBit(c+865,"riscv_soc u_core u_core u_decode exec_opcode_valid_o", false,-1);
        tracep->declBit(c+864,"riscv_soc u_core u_core u_decode lsu_opcode_valid_o", false,-1);
        tracep->declBit(c+847,"riscv_soc u_core u_core u_decode csr_opcode_valid_o", false,-1);
        tracep->declBit(c+852,"riscv_soc u_core u_core u_decode muldiv_opcode_valid_o", false,-1);
        tracep->declQuad(c+623,"riscv_soc u_core u_core u_decode opcode_instr_o", false,-1, 57,0);
        tracep->declBus(c+643,"riscv_soc u_core u_core u_decode opcode_opcode_o", false,-1, 31,0);
        tracep->declBus(c+627,"riscv_soc u_core u_core u_decode opcode_pc_o", false,-1, 31,0);
        tracep->declBus(c+664,"riscv_soc u_core u_core u_decode opcode_rd_idx_o", false,-1, 4,0);
        tracep->declBus(c+658,"riscv_soc u_core u_core u_decode opcode_ra_idx_o", false,-1, 4,0);
        tracep->declBus(c+644,"riscv_soc u_core u_core u_decode opcode_rb_idx_o", false,-1, 4,0);
        tracep->declBus(c+851,"riscv_soc u_core u_core u_decode opcode_ra_operand_o", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc u_core u_core u_decode opcode_rb_operand_o", false,-1, 31,0);
        tracep->declBit(c+635,"riscv_soc u_core u_core u_decode fetch_invalidate_o", false,-1);
        tracep->declBit(c+765,"riscv_soc u_core u_core u_decode valid_q", false,-1);
        tracep->declBus(c+627,"riscv_soc u_core u_core u_decode pc_q", false,-1, 31,0);
        tracep->declBus(c+643,"riscv_soc u_core u_core u_decode inst_q", false,-1, 31,0);
        tracep->declBit(c+997,"riscv_soc u_core u_core u_decode fault_fetch_q", false,-1);
        tracep->declBus(c+766,"riscv_soc u_core u_core u_decode scoreboard_q", false,-1, 31,0);
        tracep->declBit(c+914,"riscv_soc u_core u_core u_decode stall_scoreboard_r", false,-1);
        tracep->declBus(c+767,"riscv_soc u_core u_core u_decode ra_value_w", false,-1, 31,0);
        tracep->declBus(c+768,"riscv_soc u_core u_core u_decode rb_value_w", false,-1, 31,0);
        tracep->declBit(c+915,"riscv_soc u_core u_core u_decode stall_input_w", false,-1);
        tracep->declBus(c+638,"riscv_soc u_core u_core u_decode wb_exec_rd_w", false,-1, 4,0);
        tracep->declBus(c+856,"riscv_soc u_core u_core u_decode wb_mem_rd_w", false,-1, 4,0);
        tracep->declBus(c+769,"riscv_soc u_core u_core u_decode wb_csr_rd_w", false,-1, 4,0);
        tracep->declBus(c+651,"riscv_soc u_core u_core u_decode wb_muldiv_rd_w", false,-1, 4,0);
        tracep->declBus(c+638,"riscv_soc u_core u_core u_decode wb_rd_r", false,-1, 4,0);
        tracep->declBus(c+667,"riscv_soc u_core u_core u_decode wb_res_r", false,-1, 31,0);
        tracep->declBit(c+635,"riscv_soc u_core u_core u_decode ifence_q", false,-1);
        tracep->declBus(c+916,"riscv_soc u_core u_core u_decode scoreboard_r", false,-1, 31,0);
        tracep->declBit(c+770,"riscv_soc u_core u_core u_decode sb_alloc_w", false,-1);
        tracep->declQuad(c+771,"riscv_soc u_core u_core u_decode opcode_instr_w", false,-1, 57,0);
        tracep->declBit(c+773,"riscv_soc u_core u_core u_decode nop_instr_w", false,-1);
        tracep->declBit(c+774,"riscv_soc u_core u_core u_decode invalid_inst_w", false,-1);
        tracep->declQuad(c+623,"riscv_soc u_core u_core u_decode opcode_instr_q", false,-1, 57,0);
        tracep->declBus(c+851,"riscv_soc u_core u_core u_decode opcode_ra_operand_r", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc u_core u_core u_decode opcode_rb_operand_r", false,-1, 31,0);
        tracep->declBit(c+917,"riscv_soc u_core u_core u_decode opcode_valid_r", false,-1);
        tracep->declBus(c+918,"riscv_soc u_core u_core u_decode current_scoreboard_r", false,-1, 31,0);
        tracep->declArray(c+919,"riscv_soc u_core u_core u_decode dbg_inst_str", false,-1, 79,0);
        tracep->declArray(c+922,"riscv_soc u_core u_core u_decode dbg_inst_ra", false,-1, 79,0);
        tracep->declArray(c+925,"riscv_soc u_core u_core u_decode dbg_inst_rb", false,-1, 79,0);
        tracep->declArray(c+928,"riscv_soc u_core u_core u_decode dbg_inst_rd", false,-1, 79,0);
        tracep->declBus(c+931,"riscv_soc u_core u_core u_decode dbg_inst_imm", false,-1, 31,0);
        tracep->declBus(c+932,"riscv_soc u_core u_core u_decode dbg_inst_pc", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_core u_core u_exec clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_core u_exec rst_i", false,-1);
        tracep->declBit(c+865,"riscv_soc u_core u_core u_exec opcode_valid_i", false,-1);
        tracep->declQuad(c+623,"riscv_soc u_core u_core u_exec opcode_instr_i", false,-1, 57,0);
        tracep->declBus(c+643,"riscv_soc u_core u_core u_exec opcode_opcode_i", false,-1, 31,0);
        tracep->declBus(c+627,"riscv_soc u_core u_core u_exec opcode_pc_i", false,-1, 31,0);
        tracep->declBus(c+664,"riscv_soc u_core u_core u_exec opcode_rd_idx_i", false,-1, 4,0);
        tracep->declBus(c+658,"riscv_soc u_core u_core u_exec opcode_ra_idx_i", false,-1, 4,0);
        tracep->declBus(c+644,"riscv_soc u_core u_core u_exec opcode_rb_idx_i", false,-1, 4,0);
        tracep->declBus(c+851,"riscv_soc u_core u_core u_exec opcode_ra_operand_i", false,-1, 31,0);
        tracep->declBus(c+862,"riscv_soc u_core u_core u_exec opcode_rb_operand_i", false,-1, 31,0);
        tracep->declBit(c+850,"riscv_soc u_core u_core u_exec branch_request_o", false,-1);
        tracep->declBus(c+853,"riscv_soc u_core u_core u_exec branch_pc_o", false,-1, 31,0);
        tracep->declBus(c+638,"riscv_soc u_core u_core u_exec writeback_idx_o", false,-1, 4,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_exec writeback_squash_o", false,-1);
        tracep->declBus(c+667,"riscv_soc u_core u_core u_exec writeback_value_o", false,-1, 31,0);
        tracep->declBit(c+957,"riscv_soc u_core u_core u_exec stall_o", false,-1);
        tracep->declBus(c+638,"riscv_soc u_core u_core u_exec rd_x_q", false,-1, 4,0);
        tracep->declBus(c+775,"riscv_soc u_core u_core u_exec imm20_r", false,-1, 31,0);
        tracep->declBus(c+776,"riscv_soc u_core u_core u_exec imm12_r", false,-1, 31,0);
        tracep->declBus(c+777,"riscv_soc u_core u_core u_exec bimm_r", false,-1, 31,0);
        tracep->declBus(c+778,"riscv_soc u_core u_core u_exec jimm20_r", false,-1, 31,0);
        tracep->declBus(c+644,"riscv_soc u_core u_core u_exec shamt_r", false,-1, 4,0);
        tracep->declBus(c+779,"riscv_soc u_core u_core u_exec storeimm_r", false,-1, 31,0);
        tracep->declBus(c+780,"riscv_soc u_core u_core u_exec alu_func_r", false,-1, 3,0);
        tracep->declBus(c+933,"riscv_soc u_core u_core u_exec alu_input_a_r", false,-1, 31,0);
        tracep->declBus(c+934,"riscv_soc u_core u_core u_exec alu_input_b_r", false,-1, 31,0);
        tracep->declBit(c+781,"riscv_soc u_core u_core u_exec write_rd_r", false,-1);
        tracep->declBit(c+935,"riscv_soc u_core u_core u_exec branch_r", false,-1);
        tracep->declBus(c+853,"riscv_soc u_core u_core u_exec branch_target_r", false,-1, 31,0);
        tracep->declBus(c+936,"riscv_soc u_core u_core u_exec alu_p_w", false,-1, 31,0);
        tracep->declBus(c+667,"riscv_soc u_core u_core u_exec result_q", false,-1, 31,0);
        tracep->declBit(c+782,"riscv_soc u_core u_core u_exec v_dbg_valid_q", false,-1);
        tracep->declBus(c+783,"riscv_soc u_core u_core u_exec v_dbg_pc_q", false,-1, 31,0);
        tracep->declBus(c+780,"riscv_soc u_core u_core u_exec u_alu alu_op_i", false,-1, 3,0);
        tracep->declBus(c+933,"riscv_soc u_core u_core u_exec u_alu alu_a_i", false,-1, 31,0);
        tracep->declBus(c+934,"riscv_soc u_core u_core u_exec u_alu alu_b_i", false,-1, 31,0);
        tracep->declBus(c+936,"riscv_soc u_core u_core u_exec u_alu alu_p_o", false,-1, 31,0);
        tracep->declBus(c+936,"riscv_soc u_core u_core u_exec u_alu result_r", false,-1, 31,0);
        tracep->declBus(c+937,"riscv_soc u_core u_core u_exec u_alu shift_right_fill_r", false,-1, 31,16);
        tracep->declBus(c+938,"riscv_soc u_core u_core u_exec u_alu shift_right_1_r", false,-1, 31,0);
        tracep->declBus(c+939,"riscv_soc u_core u_core u_exec u_alu shift_right_2_r", false,-1, 31,0);
        tracep->declBus(c+940,"riscv_soc u_core u_core u_exec u_alu shift_right_4_r", false,-1, 31,0);
        tracep->declBus(c+941,"riscv_soc u_core u_core u_exec u_alu shift_right_8_r", false,-1, 31,0);
        tracep->declBus(c+942,"riscv_soc u_core u_core u_exec u_alu shift_left_1_r", false,-1, 31,0);
        tracep->declBus(c+943,"riscv_soc u_core u_core u_exec u_alu shift_left_2_r", false,-1, 31,0);
        tracep->declBus(c+944,"riscv_soc u_core u_core u_exec u_alu shift_left_4_r", false,-1, 31,0);
        tracep->declBus(c+945,"riscv_soc u_core u_core u_exec u_alu shift_left_8_r", false,-1, 31,0);
        tracep->declBus(c+946,"riscv_soc u_core u_core u_exec u_alu sub_res_w", false,-1, 31,0);
        tracep->declBit(c+3,"riscv_soc u_core u_core u_decode u_regfile clk_i", false,-1);
        tracep->declBit(c+15,"riscv_soc u_core u_core u_decode u_regfile rst_i", false,-1);
        tracep->declBus(c+638,"riscv_soc u_core u_core u_decode u_regfile rd0_i", false,-1, 4,0);
        tracep->declBus(c+856,"riscv_soc u_core u_core u_decode u_regfile rd1_i", false,-1, 4,0);
        tracep->declBus(c+769,"riscv_soc u_core u_core u_decode u_regfile rd2_i", false,-1, 4,0);
        tracep->declBus(c+651,"riscv_soc u_core u_core u_decode u_regfile rd3_i", false,-1, 4,0);
        tracep->declBus(c+667,"riscv_soc u_core u_core u_decode u_regfile rd0_value_i", false,-1, 31,0);
        tracep->declBus(c+860,"riscv_soc u_core u_core u_decode u_regfile rd1_value_i", false,-1, 31,0);
        tracep->declBus(c+668,"riscv_soc u_core u_core u_decode u_regfile rd2_value_i", false,-1, 31,0);
        tracep->declBus(c+633,"riscv_soc u_core u_core u_decode u_regfile rd3_value_i", false,-1, 31,0);
        tracep->declBus(c+658,"riscv_soc u_core u_core u_decode u_regfile ra_i", false,-1, 4,0);
        tracep->declBus(c+644,"riscv_soc u_core u_core u_decode u_regfile rb_i", false,-1, 4,0);
        tracep->declBus(c+767,"riscv_soc u_core u_core u_decode u_regfile ra_value_o", false,-1, 31,0);
        tracep->declBus(c+768,"riscv_soc u_core u_core u_decode u_regfile rb_value_o", false,-1, 31,0);
        tracep->declBus(c+784,"riscv_soc u_core u_core u_decode u_regfile reg_r1_q", false,-1, 31,0);
        tracep->declBus(c+785,"riscv_soc u_core u_core u_decode u_regfile reg_r2_q", false,-1, 31,0);
        tracep->declBus(c+786,"riscv_soc u_core u_core u_decode u_regfile reg_r3_q", false,-1, 31,0);
        tracep->declBus(c+787,"riscv_soc u_core u_core u_decode u_regfile reg_r4_q", false,-1, 31,0);
        tracep->declBus(c+788,"riscv_soc u_core u_core u_decode u_regfile reg_r5_q", false,-1, 31,0);
        tracep->declBus(c+789,"riscv_soc u_core u_core u_decode u_regfile reg_r6_q", false,-1, 31,0);
        tracep->declBus(c+790,"riscv_soc u_core u_core u_decode u_regfile reg_r7_q", false,-1, 31,0);
        tracep->declBus(c+791,"riscv_soc u_core u_core u_decode u_regfile reg_r8_q", false,-1, 31,0);
        tracep->declBus(c+792,"riscv_soc u_core u_core u_decode u_regfile reg_r9_q", false,-1, 31,0);
        tracep->declBus(c+793,"riscv_soc u_core u_core u_decode u_regfile reg_r10_q", false,-1, 31,0);
        tracep->declBus(c+794,"riscv_soc u_core u_core u_decode u_regfile reg_r11_q", false,-1, 31,0);
        tracep->declBus(c+795,"riscv_soc u_core u_core u_decode u_regfile reg_r12_q", false,-1, 31,0);
        tracep->declBus(c+796,"riscv_soc u_core u_core u_decode u_regfile reg_r13_q", false,-1, 31,0);
        tracep->declBus(c+797,"riscv_soc u_core u_core u_decode u_regfile reg_r14_q", false,-1, 31,0);
        tracep->declBus(c+798,"riscv_soc u_core u_core u_decode u_regfile reg_r15_q", false,-1, 31,0);
        tracep->declBus(c+799,"riscv_soc u_core u_core u_decode u_regfile reg_r16_q", false,-1, 31,0);
        tracep->declBus(c+800,"riscv_soc u_core u_core u_decode u_regfile reg_r17_q", false,-1, 31,0);
        tracep->declBus(c+801,"riscv_soc u_core u_core u_decode u_regfile reg_r18_q", false,-1, 31,0);
        tracep->declBus(c+802,"riscv_soc u_core u_core u_decode u_regfile reg_r19_q", false,-1, 31,0);
        tracep->declBus(c+803,"riscv_soc u_core u_core u_decode u_regfile reg_r20_q", false,-1, 31,0);
        tracep->declBus(c+804,"riscv_soc u_core u_core u_decode u_regfile reg_r21_q", false,-1, 31,0);
        tracep->declBus(c+805,"riscv_soc u_core u_core u_decode u_regfile reg_r22_q", false,-1, 31,0);
        tracep->declBus(c+806,"riscv_soc u_core u_core u_decode u_regfile reg_r23_q", false,-1, 31,0);
        tracep->declBus(c+807,"riscv_soc u_core u_core u_decode u_regfile reg_r24_q", false,-1, 31,0);
        tracep->declBus(c+808,"riscv_soc u_core u_core u_decode u_regfile reg_r25_q", false,-1, 31,0);
        tracep->declBus(c+809,"riscv_soc u_core u_core u_decode u_regfile reg_r26_q", false,-1, 31,0);
        tracep->declBus(c+810,"riscv_soc u_core u_core u_decode u_regfile reg_r27_q", false,-1, 31,0);
        tracep->declBus(c+811,"riscv_soc u_core u_core u_decode u_regfile reg_r28_q", false,-1, 31,0);
        tracep->declBus(c+812,"riscv_soc u_core u_core u_decode u_regfile reg_r29_q", false,-1, 31,0);
        tracep->declBus(c+813,"riscv_soc u_core u_core u_decode u_regfile reg_r30_q", false,-1, 31,0);
        tracep->declBus(c+814,"riscv_soc u_core u_core u_decode u_regfile reg_r31_q", false,-1, 31,0);
        tracep->declBus(c+767,"riscv_soc u_core u_core u_decode u_regfile ra_value_r", false,-1, 31,0);
        tracep->declBus(c+768,"riscv_soc u_core u_core u_decode u_regfile rb_value_r", false,-1, 31,0);
    }
}

void Vriscv_soc::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vriscv_soc::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vriscv_soc__Syms* __restrict vlSymsp = static_cast<Vriscv_soc__Syms*>(userp);
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vriscv_soc::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_soc__Syms* __restrict vlSymsp = static_cast<Vriscv_soc__Syms*>(userp);
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp2[3];
    // Body
    {
        tracep->fullCData(oldp+1,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awlen_r),8);
        tracep->fullCData(oldp+2,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r),2);
        tracep->fullBit(oldp+3,(vlTOPp->__Vcellinp__riscv_soc__clk_i));
        tracep->fullBit(oldp+4,(vlTOPp->__Vcellinp__riscv_soc__rst_i));
        tracep->fullIData(oldp+5,(vlTOPp->__Vcellinp__riscv_soc__reset_vector_i),32);
        tracep->fullBit(oldp+6,(vlTOPp->__Vcellinp__riscv_soc__inport_awvalid_i));
        tracep->fullIData(oldp+7,(vlTOPp->__Vcellinp__riscv_soc__inport_awaddr_i),32);
        tracep->fullBit(oldp+8,(vlTOPp->__Vcellinp__riscv_soc__inport_wvalid_i));
        tracep->fullIData(oldp+9,(vlTOPp->__Vcellinp__riscv_soc__inport_wdata_i),32);
        tracep->fullCData(oldp+10,(vlTOPp->__Vcellinp__riscv_soc__inport_wstrb_i),4);
        tracep->fullBit(oldp+11,(vlTOPp->__Vcellinp__riscv_soc__inport_bready_i));
        tracep->fullBit(oldp+12,(vlTOPp->__Vcellinp__riscv_soc__inport_arvalid_i));
        tracep->fullIData(oldp+13,(vlTOPp->__Vcellinp__riscv_soc__inport_araddr_i),32);
        tracep->fullBit(oldp+14,(vlTOPp->__Vcellinp__riscv_soc__inport_rready_i));
        tracep->fullBit(oldp+15,(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i));
        tracep->fullBit(oldp+16,(vlTOPp->__Vcellinp__riscv_soc__spi_miso_i));
        tracep->fullBit(oldp+17,(vlTOPp->__Vcellinp__riscv_soc__uart_txd_i));
        tracep->fullIData(oldp+18,(vlTOPp->__Vcellinp__riscv_soc__gpio_input_i),32);
        tracep->fullBit(oldp+19,(vlTOPp->__Vcellinp__riscv_soc__mem_awready_i));
        tracep->fullBit(oldp+20,(vlTOPp->__Vcellinp__riscv_soc__mem_wready_i));
        tracep->fullBit(oldp+21,(vlTOPp->__Vcellinp__riscv_soc__mem_bvalid_i));
        tracep->fullCData(oldp+22,(vlTOPp->__Vcellinp__riscv_soc__mem_bresp_i),2);
        tracep->fullCData(oldp+23,(vlTOPp->__Vcellinp__riscv_soc__mem_bid_i),4);
        tracep->fullBit(oldp+24,(vlTOPp->__Vcellinp__riscv_soc__mem_arready_i));
        tracep->fullBit(oldp+25,(vlTOPp->__Vcellinp__riscv_soc__mem_rvalid_i));
        tracep->fullIData(oldp+26,(vlTOPp->__Vcellinp__riscv_soc__mem_rdata_i),32);
        tracep->fullCData(oldp+27,(vlTOPp->__Vcellinp__riscv_soc__mem_rresp_i),2);
        tracep->fullCData(oldp+28,(vlTOPp->__Vcellinp__riscv_soc__mem_rid_i),4);
        tracep->fullBit(oldp+29,(vlTOPp->__Vcellinp__riscv_soc__mem_rlast_i));
        tracep->fullBit(oldp+30,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w))));
        tracep->fullBit(oldp+31,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))));
        tracep->fullBit(oldp+32,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awready_w));
        tracep->fullBit(oldp+33,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                   >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w))));
        tracep->fullBit(oldp+34,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                   >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))));
        tracep->fullBit(oldp+35,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                   >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))));
        tracep->fullBit(oldp+36,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_wready_w));
        tracep->fullCData(oldp+37,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r),4);
        tracep->fullBit(oldp+38,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r));
        tracep->fullBit(oldp+39,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arvalid_w));
        tracep->fullBit(oldp+40,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullBit(oldp+41,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w));
        tracep->fullBit(oldp+42,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r));
        tracep->fullBit(oldp+43,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w));
        tracep->fullIData(oldp+44,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r),32);
        tracep->fullBit(oldp+45,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w));
        tracep->fullCData(oldp+46,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r),4);
        tracep->fullBit(oldp+47,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w));
        tracep->fullIData(oldp+48,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r),32);
        tracep->fullBit(oldp+49,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w));
        tracep->fullBit(oldp+50,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullBit(oldp+51,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullBit(oldp+52,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w));
        tracep->fullBit(oldp+53,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w));
        tracep->fullBit(oldp+54,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w));
        tracep->fullBit(oldp+55,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r));
        tracep->fullIData(oldp+56,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r),32);
        tracep->fullBit(oldp+57,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w));
        tracep->fullBit(oldp+58,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w));
        tracep->fullBit(oldp+59,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awvalid_w));
        tracep->fullBit(oldp+60,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullCData(oldp+61,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r),2);
        tracep->fullBit(oldp+62,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w));
        tracep->fullBit(oldp+63,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullBit(oldp+64,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w));
        tracep->fullBit(oldp+65,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w));
        tracep->fullBit(oldp+66,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullBit(oldp+67,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullBit(oldp+68,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullBit(oldp+69,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullBit(oldp+70,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w));
        tracep->fullBit(oldp+71,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w));
        tracep->fullBit(oldp+72,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w));
        tracep->fullCData(oldp+73,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r),4);
        tracep->fullBit(oldp+74,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wvalid_w));
        tracep->fullCData(oldp+75,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r),8);
        tracep->fullBit(oldp+76,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullBit(oldp+77,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullBit(oldp+78,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                  & (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
        tracep->fullBit(oldp+79,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_arvalid_w));
        tracep->fullBit(oldp+80,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w));
        tracep->fullBit(oldp+81,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                   >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w))));
        tracep->fullBit(oldp+82,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arready_w));
        tracep->fullBit(oldp+83,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w));
        tracep->fullIData(oldp+84,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r),32);
        tracep->fullBit(oldp+85,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__read_en_w));
        tracep->fullBit(oldp+86,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w));
        tracep->fullIData(oldp+87,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r),32);
        tracep->fullBit(oldp+88,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w));
        tracep->fullBit(oldp+89,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w));
        tracep->fullIData(oldp+90,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r),32);
        tracep->fullCData(oldp+91,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r),4);
        tracep->fullCData(oldp+92,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r),3);
        tracep->fullBit(oldp+93,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w));
        tracep->fullBit(oldp+94,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w));
        tracep->fullBit(oldp+95,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w));
        tracep->fullCData(oldp+96,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r),4);
        tracep->fullCData(oldp+97,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r),3);
        tracep->fullBit(oldp+98,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w));
        tracep->fullBit(oldp+99,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w));
        tracep->fullBit(oldp+100,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w));
        tracep->fullIData(oldp+101,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r),32);
        tracep->fullBit(oldp+102,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__read_en_w));
        tracep->fullBit(oldp+103,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w));
        tracep->fullBit(oldp+104,(((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w) 
                                     & (0U == (0xffU 
                                               & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) 
                                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r)) 
                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r)));
        tracep->fullCData(oldp+105,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w),4);
        tracep->fullCData(oldp+106,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w),4);
        tracep->fullBit(oldp+107,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r));
        tracep->fullBit(oldp+108,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r));
        tracep->fullBit(oldp+109,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r));
        tracep->fullCData(oldp+110,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w),4);
        tracep->fullCData(oldp+111,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_unmasked_w),4);
        tracep->fullCData(oldp+112,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w),4);
        tracep->fullCData(oldp+113,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                     ^ (0xeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                                << 1U)))),4);
        tracep->fullCData(oldp+114,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w),4);
        tracep->fullCData(oldp+115,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_unmasked_w),4);
        tracep->fullCData(oldp+116,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w),4);
        tracep->fullCData(oldp+117,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                     ^ (0xeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                                << 1U)))),4);
        tracep->fullBit(oldp+118,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w));
        tracep->fullBit(oldp+119,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w));
        tracep->fullIData(oldp+120,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r),32);
        tracep->fullBit(oldp+121,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w) 
                                   & (0x60U == (0xffU 
                                                & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)))));
        tracep->fullBit(oldp+122,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w));
        tracep->fullQData(oldp+123,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)) 
                                      << 0xeU) | (QData)((IData)(
                                                                 (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r) 
                                                                   << 0xaU) 
                                                                  | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awlen_r) 
                                                                      << 2U) 
                                                                     | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r))))))),46);
        tracep->fullQData(oldp+125,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r)) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r))))),37);
        tracep->fullCData(oldp+127,((((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_bresp_i) 
                                      << 4U) | (IData)(vlTOPp->__Vcellinp__riscv_soc__mem_bid_i))),6);
        tracep->fullQData(oldp+128,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) 
                                      << 0xeU) | (QData)((IData)(
                                                                 (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r) 
                                                                   << 0xaU) 
                                                                  | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r) 
                                                                      << 2U) 
                                                                     | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r))))))),46);
        tracep->fullQData(oldp+130,((((QData)((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rdata_i)) 
                                      << 7U) | (QData)((IData)(
                                                               (((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rresp_i) 
                                                                 << 5U) 
                                                                | (((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rid_i) 
                                                                    << 1U) 
                                                                   | (IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rlast_i))))))),39);
        tracep->fullBit(oldp+132,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__read_en_w));
        tracep->fullBit(oldp+133,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w));
        tracep->fullBit(oldp+134,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__read_en_w) 
                                   & (8U == (0xffU 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)))));
        tracep->fullBit(oldp+135,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__write_complete_w));
        tracep->fullBit(oldp+136,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__read_complete_w));
        tracep->fullBit(oldp+137,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_pop_w));
        tracep->fullBit(oldp+138,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                   & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) 
                                      & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q))))));
        tracep->fullBit(oldp+139,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                    >> 2U) & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) 
                                              & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q))))));
        tracep->fullBit(oldp+140,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                    >> 3U) & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) 
                                              & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q))))));
        tracep->fullBit(oldp+141,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w) 
                                   & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)))));
        tracep->fullBit(oldp+142,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w) 
                                   & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))));
        tracep->fullBit(oldp+143,((1U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                          ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                                  ? 
                                                 (2U 
                                                  != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))
                                                  : 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                                  ? 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q))
                                                  : 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q))))
                                          : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                                  ? 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q))
                                                  : 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                                  ? 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q))
                                                  : 
                                                 (2U 
                                                  != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))))))));
        tracep->fullBit(oldp+144,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                        ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                            ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))
                                            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w))
                                        : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w)
                                            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w)))
                                    : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                        ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w)
                                            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w))
                                        : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w)
                                            : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))))));
        tracep->fullBit(oldp+145,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                        ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                            ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))
                                            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w))
                                        : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w)
                                            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w)))
                                    : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                        ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w)
                                            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w))
                                        : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w)
                                            : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))))));
        tracep->fullCData(oldp+146,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w),4);
        tracep->fullCData(oldp+147,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w),4);
        tracep->fullBit(oldp+148,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
                                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
                                    : (IData)(vlTOPp->__Vcellinp__riscv_soc__spi_miso_i))));
        tracep->fullIData(oldp+149,(((0U == (0xffU 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                      ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q
                                      : ((4U == (0xffU 
                                                 & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                          ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q
                                          : ((8U == 
                                              (0xffU 
                                               & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                              ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w
                                              : ((0x14U 
                                                  == 
                                                  (0xffU 
                                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                  ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (0xffU 
                                                    & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                   ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q
                                                   : 
                                                  ((0x24U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                    ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q
                                                    : 
                                                   ((0x28U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                     ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q
                                                     : 0U)))))))),32);
        tracep->fullBit(oldp+150,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r))));
        tracep->fullCData(oldp+151,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r),2);
        tracep->fullBit(oldp+152,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r))));
        tracep->fullBit(oldp+153,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q));
        tracep->fullBit(oldp+154,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q));
        tracep->fullBit(oldp+155,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q));
        tracep->fullBit(oldp+156,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q));
        tracep->fullIData(oldp+157,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q),32);
        tracep->fullIData(oldp+158,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q),32);
        tracep->fullBit(oldp+159,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
        tracep->fullIData(oldp+160,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                             >> 0xeU))),32);
        tracep->fullCData(oldp+161,((0xfU & (IData)(
                                                    (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                                     >> 0xaU)))),4);
        tracep->fullCData(oldp+162,((0xffU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                                      >> 2U)))),8);
        tracep->fullCData(oldp+163,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w))),2);
        tracep->fullBit(oldp+164,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
        tracep->fullIData(oldp+165,((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w)),32);
        tracep->fullCData(oldp+166,((0xfU & (IData)(
                                                    (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w 
                                                     >> 0x20U)))),4);
        tracep->fullBit(oldp+167,((1U & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w 
                                                 >> 0x24U)))));
        tracep->fullBit(oldp+168,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
        tracep->fullBit(oldp+169,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
        tracep->fullIData(oldp+170,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                             >> 0xeU))),32);
        tracep->fullCData(oldp+171,((0xfU & (IData)(
                                                    (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                                     >> 0xaU)))),4);
        tracep->fullCData(oldp+172,((0xffU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                                      >> 2U)))),8);
        tracep->fullCData(oldp+173,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w))),2);
        tracep->fullBit(oldp+174,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
        tracep->fullIData(oldp+175,((((0U != vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q) 
                                      << 2U) | (((8U 
                                                  == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                                 << 1U) 
                                                | ((0U 
                                                    != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                                   & (8U 
                                                      != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)))))),32);
        tracep->fullCData(oldp+176,((0xfU & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                              ? ((2U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                   ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)
                                                   : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                                                  : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                                              : ((2U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                  ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                   ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                                                   : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)))))),4);
        tracep->fullBit(oldp+177,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_bvalid_w));
        tracep->fullBit(oldp+178,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
                                   & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                      >> 2U))));
        tracep->fullBit(oldp+179,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__intr_q));
        tracep->fullCData(oldp+180,((0xfU & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                                              ? ((2U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                                                   ? (IData)(
                                                             (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                                              >> 1U))
                                                   : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                                                  : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                                              : ((2U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                                                  ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                                                   ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                                                   : (IData)(
                                                             (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                                              >> 1U))))))),4);
        tracep->fullBit(oldp+181,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
                                   & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                                      >> 1U))));
        tracep->fullBit(oldp+182,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q));
        tracep->fullBit(oldp+183,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
        tracep->fullBit(oldp+184,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)))));
        tracep->fullBit(oldp+185,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)))));
        tracep->fullBit(oldp+186,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q));
        tracep->fullIData(oldp+187,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                             >> 7U))),32);
        tracep->fullBit(oldp+188,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)))));
        tracep->fullIData(oldp+189,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q),32);
        tracep->fullBit(oldp+190,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))));
        tracep->fullBit(oldp+191,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
        tracep->fullBit(oldp+192,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
        tracep->fullBit(oldp+193,((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w))));
        tracep->fullCData(oldp+194,((0xfU & (IData)(
                                                    (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                                     >> 1U)))),4);
        tracep->fullBit(oldp+195,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
        tracep->fullCData(oldp+196,((3U & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                                   >> 5U)))),2);
        tracep->fullCData(oldp+197,((0xfU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w))),4);
        tracep->fullBit(oldp+198,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q));
        tracep->fullBit(oldp+199,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q));
        tracep->fullBit(oldp+200,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r));
        tracep->fullBit(oldp+201,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q));
        tracep->fullBit(oldp+202,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q));
        tracep->fullBit(oldp+203,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q));
        tracep->fullBit(oldp+204,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q))));
        tracep->fullBit(oldp+205,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q));
        tracep->fullIData(oldp+206,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q),32);
        tracep->fullBit(oldp+207,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q));
        tracep->fullIData(oldp+208,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q),32);
        tracep->fullBit(oldp+209,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q));
        tracep->fullBit(oldp+210,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q));
        tracep->fullBit(oldp+211,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
        tracep->fullIData(oldp+212,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q),32);
        tracep->fullBit(oldp+213,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r));
        tracep->fullCData(oldp+214,((3U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w) 
                                           >> 4U))),2);
        tracep->fullIData(oldp+215,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q),32);
        tracep->fullBit(oldp+216,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))));
        tracep->fullBit(oldp+217,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__bvalid_q));
        tracep->fullBit(oldp+218,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)))));
        tracep->fullBit(oldp+219,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q));
        tracep->fullIData(oldp+220,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rd_data_q),32);
        tracep->fullBit(oldp+221,((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
        tracep->fullIData(oldp+222,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q 
                                     + ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                                        << 2U))),32);
        tracep->fullIData(oldp+223,(((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))
                                      ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                     [(3U & VL_DIV_III(4, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q), (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))]
                                     [(3U & VL_MODDIV_III(4, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q), (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))]
                                      : 0U)),32);
        tracep->fullBit(oldp+224,((7U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
        tracep->fullBit(oldp+225,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arvalid_w));
        tracep->fullIData(oldp+226,(((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))
                                      ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q 
                                         + ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                                            << 2U))
                                      : (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q 
                                         + ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                                            << 2U)))),32);
        tracep->fullBit(oldp+227,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                   | (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)))));
        tracep->fullBit(oldp+228,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
                                   & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                      >> 3U))));
        tracep->fullBit(oldp+229,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_rvalid_w));
        tracep->fullBit(oldp+230,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q));
        tracep->fullBit(oldp+231,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q));
        tracep->fullIData(oldp+232,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q),32);
        tracep->fullBit(oldp+233,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_isr_wr_q));
        tracep->fullCData(oldp+234,((0xfU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q)),4);
        tracep->fullBit(oldp+235,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_wr_q));
        tracep->fullBit(oldp+236,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q));
        tracep->fullBit(oldp+237,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_wr_q));
        tracep->fullCData(oldp+238,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q),4);
        tracep->fullBit(oldp+239,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q));
        tracep->fullBit(oldp+240,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q));
        tracep->fullBit(oldp+241,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ivr_wr_q));
        tracep->fullBit(oldp+242,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_wr_q));
        tracep->fullBit(oldp+243,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q));
        tracep->fullCData(oldp+244,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q),4);
        tracep->fullCData(oldp+245,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w),4);
        tracep->fullCData(oldp+246,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q),4);
        tracep->fullIData(oldp+247,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r),32);
        tracep->fullCData(oldp+248,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w),4);
        tracep->fullIData(oldp+249,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q),32);
        tracep->fullBit(oldp+250,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_wr_q));
        tracep->fullBit(oldp+251,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q));
        tracep->fullCData(oldp+252,((0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q)),8);
        tracep->fullBit(oldp+253,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_status_wr_q));
        tracep->fullBit(oldp+254,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_wr_q));
        tracep->fullBit(oldp+255,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q));
        tracep->fullBit(oldp+256,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q));
        tracep->fullBit(oldp+257,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_tx_q));
        tracep->fullCData(oldp+258,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q),8);
        tracep->fullBit(oldp+259,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q));
        tracep->fullBit(oldp+260,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)))));
        tracep->fullBit(oldp+261,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q));
        tracep->fullCData(oldp+262,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q),4);
        tracep->fullIData(oldp+263,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q),32);
        tracep->fullCData(oldp+264,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q),8);
        tracep->fullBit(oldp+265,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q));
        tracep->fullCData(oldp+266,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q),4);
        tracep->fullIData(oldp+267,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q),32);
        tracep->fullCData(oldp+268,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q),8);
        tracep->fullBit(oldp+269,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q));
        tracep->fullBit(oldp+270,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q));
        tracep->fullBit(oldp+271,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q));
        tracep->fullBit(oldp+272,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q)));
        tracep->fullBit(oldp+273,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q)));
        tracep->fullBit(oldp+274,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q));
        tracep->fullBit(oldp+275,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_r));
        tracep->fullIData(oldp+276,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q),32);
        tracep->fullBit(oldp+277,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_wr_q));
        tracep->fullBit(oldp+278,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q));
        tracep->fullBit(oldp+279,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q));
        tracep->fullBit(oldp+280,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_wr_q));
        tracep->fullIData(oldp+281,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q),32);
        tracep->fullBit(oldp+282,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q));
        tracep->fullBit(oldp+283,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_wr_q));
        tracep->fullBit(oldp+284,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q));
        tracep->fullBit(oldp+285,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q));
        tracep->fullBit(oldp+286,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_wr_q));
        tracep->fullIData(oldp+287,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q),32);
        tracep->fullBit(oldp+288,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q));
        tracep->fullIData(oldp+289,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q),32);
        tracep->fullIData(oldp+290,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q),32);
        tracep->fullBit(oldp+291,((((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q 
                                     == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q) 
                                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q))));
        tracep->fullBit(oldp+292,((((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q 
                                     == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q) 
                                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q))));
        tracep->fullCData(oldp+293,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q),4);
        tracep->fullCData(oldp+294,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q),4);
        tracep->fullCData(oldp+295,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q),3);
        tracep->fullCData(oldp+296,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q),4);
        tracep->fullCData(oldp+297,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q),4);
        tracep->fullCData(oldp+298,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q),3);
        tracep->fullCData(oldp+299,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q),4);
        tracep->fullIData(oldp+300,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q),32);
        tracep->fullIData(oldp+301,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q),32);
        tracep->fullIData(oldp+302,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q),32);
        tracep->fullIData(oldp+303,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cycle_q),32);
        tracep->fullIData(oldp+304,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__mac_cycle_q),32);
        tracep->fullIData(oldp+305,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q),32);
        tracep->fullCData(oldp+306,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q),3);
        tracep->fullCData(oldp+307,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q),3);
        tracep->fullCData(oldp+308,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q),3);
        tracep->fullCData(oldp+309,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q),4);
        tracep->fullCData(oldp+310,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_q),4);
        tracep->fullIData(oldp+311,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[0]),32);
        tracep->fullIData(oldp+312,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[1]),32);
        tracep->fullIData(oldp+313,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[2]),32);
        tracep->fullIData(oldp+314,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[3]),32);
        tracep->fullIData(oldp+315,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[4]),32);
        tracep->fullIData(oldp+316,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[5]),32);
        tracep->fullIData(oldp+317,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[6]),32);
        tracep->fullIData(oldp+318,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[7]),32);
        tracep->fullIData(oldp+319,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[8]),32);
        tracep->fullIData(oldp+320,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[9]),32);
        tracep->fullIData(oldp+321,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[10]),32);
        tracep->fullIData(oldp+322,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[11]),32);
        tracep->fullIData(oldp+323,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[12]),32);
        tracep->fullIData(oldp+324,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[13]),32);
        tracep->fullIData(oldp+325,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[14]),32);
        tracep->fullIData(oldp+326,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[15]),32);
        tracep->fullIData(oldp+327,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[0]),32);
        tracep->fullIData(oldp+328,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[1]),32);
        tracep->fullIData(oldp+329,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[2]),32);
        tracep->fullIData(oldp+330,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[3]),32);
        tracep->fullIData(oldp+331,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[4]),32);
        tracep->fullIData(oldp+332,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[5]),32);
        tracep->fullIData(oldp+333,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[6]),32);
        tracep->fullIData(oldp+334,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[7]),32);
        tracep->fullIData(oldp+335,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[8]),32);
        tracep->fullIData(oldp+336,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[9]),32);
        tracep->fullIData(oldp+337,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[10]),32);
        tracep->fullIData(oldp+338,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[11]),32);
        tracep->fullIData(oldp+339,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[12]),32);
        tracep->fullIData(oldp+340,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[13]),32);
        tracep->fullIData(oldp+341,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[14]),32);
        tracep->fullIData(oldp+342,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[15]),32);
        tracep->fullIData(oldp+343,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [0U][0U]),32);
        tracep->fullIData(oldp+344,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [0U][1U]),32);
        tracep->fullIData(oldp+345,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [0U][2U]),32);
        tracep->fullIData(oldp+346,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [0U][3U]),32);
        tracep->fullIData(oldp+347,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [1U][0U]),32);
        tracep->fullIData(oldp+348,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [1U][1U]),32);
        tracep->fullIData(oldp+349,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [1U][2U]),32);
        tracep->fullIData(oldp+350,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [1U][3U]),32);
        tracep->fullIData(oldp+351,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [2U][0U]),32);
        tracep->fullIData(oldp+352,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [2U][1U]),32);
        tracep->fullIData(oldp+353,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [2U][2U]),32);
        tracep->fullIData(oldp+354,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [2U][3U]),32);
        tracep->fullIData(oldp+355,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [3U][0U]),32);
        tracep->fullIData(oldp+356,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [3U][1U]),32);
        tracep->fullIData(oldp+357,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [3U][2U]),32);
        tracep->fullIData(oldp+358,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                    [3U][3U]),32);
        tracep->fullIData(oldp+359,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [0U][0U]),32);
        tracep->fullIData(oldp+360,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [0U][1U]),32);
        tracep->fullIData(oldp+361,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [0U][2U]),32);
        tracep->fullIData(oldp+362,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [0U][3U]),32);
        tracep->fullIData(oldp+363,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [1U][0U]),32);
        tracep->fullIData(oldp+364,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [1U][1U]),32);
        tracep->fullIData(oldp+365,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [1U][2U]),32);
        tracep->fullIData(oldp+366,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [1U][3U]),32);
        tracep->fullIData(oldp+367,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [2U][0U]),32);
        tracep->fullIData(oldp+368,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [2U][1U]),32);
        tracep->fullIData(oldp+369,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [2U][2U]),32);
        tracep->fullIData(oldp+370,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [2U][3U]),32);
        tracep->fullIData(oldp+371,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [3U][0U]),32);
        tracep->fullIData(oldp+372,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [3U][1U]),32);
        tracep->fullIData(oldp+373,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [3U][2U]),32);
        tracep->fullIData(oldp+374,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe
                                    [3U][3U]),32);
        tracep->fullIData(oldp+375,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [0U][0U]),32);
        tracep->fullIData(oldp+376,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [0U][1U]),32);
        tracep->fullIData(oldp+377,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [0U][2U]),32);
        tracep->fullIData(oldp+378,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [0U][3U]),32);
        tracep->fullIData(oldp+379,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [1U][0U]),32);
        tracep->fullIData(oldp+380,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [1U][1U]),32);
        tracep->fullIData(oldp+381,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [1U][2U]),32);
        tracep->fullIData(oldp+382,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [1U][3U]),32);
        tracep->fullIData(oldp+383,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [2U][0U]),32);
        tracep->fullIData(oldp+384,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [2U][1U]),32);
        tracep->fullIData(oldp+385,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [2U][2U]),32);
        tracep->fullIData(oldp+386,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [2U][3U]),32);
        tracep->fullIData(oldp+387,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [3U][0U]),32);
        tracep->fullIData(oldp+388,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [3U][1U]),32);
        tracep->fullIData(oldp+389,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [3U][2U]),32);
        tracep->fullIData(oldp+390,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe
                                    [3U][3U]),32);
        tracep->fullIData(oldp+391,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[0]),32);
        tracep->fullIData(oldp+392,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[1]),32);
        tracep->fullIData(oldp+393,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[2]),32);
        tracep->fullIData(oldp+394,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[3]),32);
        tracep->fullIData(oldp+395,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[0]),32);
        tracep->fullIData(oldp+396,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[1]),32);
        tracep->fullIData(oldp+397,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[2]),32);
        tracep->fullIData(oldp+398,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[3]),32);
        tracep->fullIData(oldp+399,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__i),32);
        tracep->fullIData(oldp+400,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row),32);
        tracep->fullIData(oldp+401,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col),32);
        tracep->fullIData(oldp+402,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx),32);
        tracep->fullBit(oldp+403,(((((((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                       & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q))) 
                                      & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))) 
                                     & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))) 
                                    & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))) 
                                   & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))));
        tracep->fullBit(oldp+404,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w));
        tracep->fullBit(oldp+405,(((((((((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                         & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q))) 
                                        & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))) 
                                       & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))) 
                                      & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))) 
                                     & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))) 
                                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w)) 
                                   & ((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                      | (8U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))))));
        tracep->fullBit(oldp+406,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q));
        tracep->fullCData(oldp+407,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r),4);
        tracep->fullBit(oldp+408,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q));
        tracep->fullBit(oldp+409,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q));
        tracep->fullCData(oldp+410,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r),4);
        tracep->fullCData(oldp+411,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q),4);
        tracep->fullCData(oldp+412,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q),4);
        tracep->fullCData(oldp+413,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q),4);
        tracep->fullCData(oldp+414,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q),4);
        tracep->fullBit(oldp+415,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_wr_q));
        tracep->fullBit(oldp+416,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q));
        tracep->fullBit(oldp+417,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q));
        tracep->fullBit(oldp+418,((1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                         >> 2U))));
        tracep->fullBit(oldp+419,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_wr_q));
        tracep->fullBit(oldp+420,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q));
        tracep->fullBit(oldp+421,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_wr_q));
        tracep->fullIData(oldp+422,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q),32);
        tracep->fullBit(oldp+423,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q));
        tracep->fullBit(oldp+424,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q));
        tracep->fullBit(oldp+425,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q));
        tracep->fullBit(oldp+426,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q));
        tracep->fullBit(oldp+427,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q));
        tracep->fullBit(oldp+428,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q));
        tracep->fullBit(oldp+429,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q));
        tracep->fullBit(oldp+430,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q));
        tracep->fullBit(oldp+431,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q));
        tracep->fullBit(oldp+432,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q));
        tracep->fullBit(oldp+433,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q));
        tracep->fullBit(oldp+434,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_sr_wr_q));
        tracep->fullBit(oldp+435,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q));
        tracep->fullBit(oldp+436,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_wr_q));
        tracep->fullBit(oldp+437,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_wr_q));
        tracep->fullBit(oldp+438,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        tracep->fullBit(oldp+439,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        tracep->fullBit(oldp+440,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        tracep->fullBit(oldp+441,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        tracep->fullCData(oldp+442,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                                    [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q]),8);
        tracep->fullBit(oldp+443,((0xaU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q)));
        tracep->fullBit(oldp+444,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w));
        tracep->fullBit(oldp+445,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w));
        tracep->fullBit(oldp+446,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        tracep->fullBit(oldp+447,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        tracep->fullCData(oldp+448,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w),8);
        tracep->fullBit(oldp+449,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q));
        tracep->fullCData(oldp+450,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_w),8);
        tracep->fullBit(oldp+451,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        tracep->fullBit(oldp+452,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        tracep->fullCData(oldp+453,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q)
                                      ? ((0x80U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                << 5U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                   << 3U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                      << 1U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                         >> 1U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                            >> 3U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                               >> 5U)) 
                                                           | (1U 
                                                              & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                                 >> 7U)))))))))
                                      : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q))),8);
        tracep->fullBit(oldp+454,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q));
        tracep->fullCData(oldp+455,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q),6);
        tracep->fullCData(oldp+456,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q),8);
        tracep->fullIData(oldp+457,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q),32);
        tracep->fullBit(oldp+458,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
                                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q)) 
                                   & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q)))));
        tracep->fullBit(oldp+459,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w));
        tracep->fullBit(oldp+460,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q)));
        tracep->fullBit(oldp+461,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__sample_r));
        tracep->fullBit(oldp+462,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r));
        tracep->fullBit(oldp+463,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q));
        tracep->fullBit(oldp+464,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q));
        tracep->fullCData(oldp+465,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[0]),8);
        tracep->fullCData(oldp+466,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[1]),8);
        tracep->fullCData(oldp+467,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[2]),8);
        tracep->fullCData(oldp+468,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[3]),8);
        tracep->fullCData(oldp+469,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q),2);
        tracep->fullCData(oldp+470,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q),2);
        tracep->fullCData(oldp+471,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q),3);
        tracep->fullCData(oldp+472,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[0]),8);
        tracep->fullCData(oldp+473,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[1]),8);
        tracep->fullCData(oldp+474,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[2]),8);
        tracep->fullCData(oldp+475,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[3]),8);
        tracep->fullCData(oldp+476,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q),2);
        tracep->fullCData(oldp+477,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q),2);
        tracep->fullCData(oldp+478,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q),3);
        tracep->fullQData(oldp+479,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w),46);
        tracep->fullQData(oldp+481,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w),37);
        tracep->fullCData(oldp+483,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w),6);
        tracep->fullQData(oldp+484,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w),46);
        tracep->fullQData(oldp+486,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w),39);
        tracep->fullQData(oldp+488,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q[0]),46);
        tracep->fullQData(oldp+490,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q[1]),46);
        tracep->fullBit(oldp+492,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q));
        tracep->fullBit(oldp+493,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q));
        tracep->fullCData(oldp+494,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q),2);
        tracep->fullQData(oldp+495,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q[0]),37);
        tracep->fullQData(oldp+497,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q[1]),37);
        tracep->fullBit(oldp+499,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q));
        tracep->fullBit(oldp+500,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q));
        tracep->fullCData(oldp+501,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q),2);
        tracep->fullCData(oldp+502,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q[0]),6);
        tracep->fullCData(oldp+503,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q[1]),6);
        tracep->fullBit(oldp+504,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q));
        tracep->fullBit(oldp+505,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q));
        tracep->fullCData(oldp+506,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q),2);
        tracep->fullQData(oldp+507,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q[0]),46);
        tracep->fullQData(oldp+509,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q[1]),46);
        tracep->fullBit(oldp+511,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q));
        tracep->fullBit(oldp+512,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q));
        tracep->fullCData(oldp+513,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q),2);
        tracep->fullQData(oldp+514,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q[0]),39);
        tracep->fullQData(oldp+516,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q[1]),39);
        tracep->fullBit(oldp+518,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q));
        tracep->fullBit(oldp+519,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q));
        tracep->fullCData(oldp+520,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q),2);
        tracep->fullBit(oldp+521,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_wr_q));
        tracep->fullBit(oldp+522,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_input_wr_q));
        tracep->fullBit(oldp+523,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q));
        tracep->fullBit(oldp+524,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q));
        tracep->fullBit(oldp+525,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q));
        tracep->fullBit(oldp+526,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_wr_q));
        tracep->fullIData(oldp+527,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q),32);
        tracep->fullBit(oldp+528,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q));
        tracep->fullBit(oldp+529,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q));
        tracep->fullBit(oldp+530,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_status_wr_q));
        tracep->fullBit(oldp+531,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_wr_q));
        tracep->fullIData(oldp+532,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q),32);
        tracep->fullBit(oldp+533,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_wr_q));
        tracep->fullIData(oldp+534,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q),32);
        tracep->fullIData(oldp+535,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q),32);
        tracep->fullIData(oldp+536,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q),32);
        tracep->fullIData(oldp+537,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_ms),32);
        tracep->fullIData(oldp+538,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r),32);
        tracep->fullIData(oldp+539,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r),32);
        tracep->fullIData(oldp+540,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q),32);
        tracep->fullIData(oldp+541,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q)),32);
        tracep->fullIData(oldp+542,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q)),32);
        tracep->fullIData(oldp+543,(((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                      ^ (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q)) 
                                     & (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q))),32);
        tracep->fullIData(oldp+544,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q 
                                     ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q)),32);
        tracep->fullIData(oldp+545,((((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q 
                                       ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q) 
                                      & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                         ^ (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q))) 
                                     & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q)),32);
        tracep->fullIData(oldp+546,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q),20);
        tracep->fullBit(oldp+547,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q 
                                         >> 0x13U))));
        tracep->fullIData(oldp+548,((0x7ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q)),19);
        tracep->fullIData(oldp+549,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q),20);
        tracep->fullBit(oldp+550,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q 
                                         >> 0x13U))));
        tracep->fullIData(oldp+551,((0x7ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q)),19);
        tracep->fullIData(oldp+552,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q),32);
        tracep->fullIData(oldp+553,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q),32);
        tracep->fullIData(oldp+554,((0xfffffffcU & 
                                     vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[0U])),32);
        tracep->fullIData(oldp+555,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[1U]),32);
        tracep->fullCData(oldp+556,((0xfU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[2U])),4);
        tracep->fullIData(oldp+557,((0xffffffe0U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q)),32);
        tracep->fullBit(oldp+558,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w));
        tracep->fullBit(oldp+559,(((0x80000000U <= vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o) 
                                   & (0x8fffffffU >= vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o))));
        tracep->fullIData(oldp+560,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__inst_r),32);
        tracep->fullSData(oldp+561,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w),11);
        tracep->fullBit(oldp+562,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
        tracep->fullIData(oldp+563,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o),32);
        tracep->fullBit(oldp+564,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q) 
                                   | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q))));
        tracep->fullSData(oldp+565,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                      ? 0x380U : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q))),11);
        tracep->fullIData(oldp+566,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                      ? 0U : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)),32);
        tracep->fullBit(oldp+567,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_rd_o));
        tracep->fullBit(oldp+568,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o));
        tracep->fullBit(oldp+569,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q));
        tracep->fullCData(oldp+570,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_wr_o),4);
        tracep->fullBit(oldp+571,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
        tracep->fullBit(oldp+572,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
        tracep->fullBit(oldp+573,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
        tracep->fullBit(oldp+574,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_pending_q));
        tracep->fullBit(oldp+575,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
        tracep->fullWData(oldp+576,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w),69);
        tracep->fullBit(oldp+579,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_push_w));
        tracep->fullBit(oldp+580,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__res_push_w));
        tracep->fullBit(oldp+581,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q));
        tracep->fullBit(oldp+582,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q));
        __Vtemp2[0U] = (IData)((((QData)((IData)(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                   ? 0U
                                                   : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o))));
        __Vtemp2[1U] = (IData)(((((QData)((IData)(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                    ? 0U
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o))) 
                                >> 0x20U));
        __Vtemp2[2U] = ((0xfffffff0U & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_rd_o) 
                                        << 4U)) | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_wr_o));
        tracep->fullWData(oldp+583,(__Vtemp2),69);
        tracep->fullWData(oldp+586,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[0]),69);
        tracep->fullWData(oldp+589,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[1]),69);
        tracep->fullWData(oldp+592,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[2]),69);
        tracep->fullWData(oldp+595,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[3]),69);
        tracep->fullCData(oldp+598,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q),2);
        tracep->fullCData(oldp+599,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q),2);
        tracep->fullCData(oldp+600,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q),3);
        tracep->fullBit(oldp+601,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
        tracep->fullSData(oldp+602,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[0]),11);
        tracep->fullSData(oldp+603,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[1]),11);
        tracep->fullSData(oldp+604,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[2]),11);
        tracep->fullSData(oldp+605,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[3]),11);
        tracep->fullCData(oldp+606,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q),2);
        tracep->fullCData(oldp+607,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q),2);
        tracep->fullCData(oldp+608,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q),3);
        tracep->fullCData(oldp+609,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q),2);
        tracep->fullBit(oldp+610,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__invalidate_q));
        tracep->fullBit(oldp+611,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q));
        tracep->fullBit(oldp+612,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_valid_q));
        tracep->fullIData(oldp+613,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q),32);
        tracep->fullIData(oldp+614,((0x7ffffU & (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                                                 >> 0xdU))),19);
        tracep->fullIData(oldp+615,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r),20);
        tracep->fullBit(oldp+616,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w));
        tracep->fullBit(oldp+617,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w));
        tracep->fullBit(oldp+618,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_hit_any_w));
        tracep->fullSData(oldp+619,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_write_addr_q),11);
        tracep->fullCData(oldp+620,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__flush_addr_q),8);
        tracep->fullBit(oldp+621,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_q));
        tracep->fullBit(oldp+622,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w));
        tracep->fullQData(oldp+623,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q),58);
        tracep->fullBit(oldp+625,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w))));
        tracep->fullBit(oldp+626,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q));
        tracep->fullIData(oldp+627,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q),32);
        tracep->fullBit(oldp+628,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q));
        tracep->fullBit(oldp+629,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
        tracep->fullIData(oldp+630,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q),32);
        tracep->fullBit(oldp+631,(((0x80000000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w)
                                    ? (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
                                        & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)) 
                                       & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r)))
                                    : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q))));
        tracep->fullBit(oldp+632,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q));
        tracep->fullIData(oldp+633,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q),32);
        tracep->fullCData(oldp+634,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
        tracep->fullBit(oldp+635,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q));
        tracep->fullIData(oldp+636,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
        tracep->fullSData(oldp+637,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q),11);
        tracep->fullCData(oldp+638,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q),5);
        tracep->fullBit(oldp+639,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r));
        tracep->fullBit(oldp+640,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w));
        tracep->fullBit(oldp+641,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w));
        tracep->fullCData(oldp+642,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w),5);
        tracep->fullIData(oldp+643,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q),32);
        tracep->fullCData(oldp+644,((0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+645,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q));
        tracep->fullBit(oldp+646,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q));
        tracep->fullBit(oldp+647,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w));
        tracep->fullIData(oldp+648,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
        tracep->fullIData(oldp+649,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__fault_addr_r),32);
        tracep->fullIData(oldp+650,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_pc_w),32);
        tracep->fullCData(oldp+651,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q),5);
        tracep->fullBit(oldp+652,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q));
        tracep->fullIData(oldp+653,(((0x80000000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w)
                                      ? ((0xfffff000U 
                                          & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q) 
                                         | (0xfffU 
                                            & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w))
                                      : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)),32);
        tracep->fullBit(oldp+654,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q));
        tracep->fullBit(oldp+655,((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))));
        tracep->fullBit(oldp+656,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
        tracep->fullIData(oldp+657,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q),32);
        tracep->fullCData(oldp+658,((0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+659,(((0x80000000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w)
                                      ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w) 
                                         & (- (IData)(
                                                      ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w) 
                                                       & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r))))))
                                      : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))),4);
        tracep->fullIData(oldp+660,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q),32);
        tracep->fullBit(oldp+661,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w))));
        tracep->fullBit(oldp+662,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r));
        tracep->fullIData(oldp+663,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w),32);
        tracep->fullCData(oldp+664,((0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 7U))),5);
        tracep->fullIData(oldp+665,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w),32);
        tracep->fullBit(oldp+666,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                         >> 0x12U))));
        tracep->fullIData(oldp+667,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q),32);
        tracep->fullIData(oldp+668,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q),32);
        tracep->fullCData(oldp+669,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q),2);
        tracep->fullBit(oldp+670,((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q))));
        tracep->fullBit(oldp+671,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_q));
        tracep->fullCData(oldp+672,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_q),4);
        tracep->fullBit(oldp+673,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w));
        tracep->fullCData(oldp+674,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w),4);
        tracep->fullIData(oldp+675,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w),32);
        tracep->fullBit(oldp+676,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w));
        tracep->fullBit(oldp+677,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q));
        tracep->fullBit(oldp+678,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                                         >> 0x1fU))));
        tracep->fullIData(oldp+679,((0xfffff000U & 
                                     (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                                      << 0xcU))),32);
        tracep->fullBit(oldp+680,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_miss_w));
        tracep->fullIData(oldp+681,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q),32);
        tracep->fullIData(oldp+682,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__virt_addr_q),32);
        tracep->fullBit(oldp+683,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_valid_q));
        tracep->fullIData(oldp+684,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_va_addr_q),20);
        tracep->fullIData(oldp+685,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q),32);
        tracep->fullBit(oldp+686,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_valid_q));
        tracep->fullIData(oldp+687,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_va_addr_q),20);
        tracep->fullIData(oldp+688,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q),32);
        tracep->fullBit(oldp+689,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__read_hold_q));
        tracep->fullBit(oldp+690,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_q));
        tracep->fullBit(oldp+691,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w));
        tracep->fullBit(oldp+692,((7U == (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                                >> 7U)))));
        tracep->fullBit(oldp+693,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_inst_w));
        tracep->fullBit(oldp+694,((1U & (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0x1dU)) 
                                          | (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x1eU))) 
                                         | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x1fU))))));
        tracep->fullBit(oldp+695,((1U & (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0x23U)) 
                                          | (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x24U))) 
                                         | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x25U))))));
        tracep->fullBit(oldp+696,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x29U)) 
                                   & (0x3a0U == (0xfffU 
                                                 & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                    >> 0x14U))))));
        tracep->fullBit(oldp+697,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x29U)) 
                                   & (0x3a1U == (0xfffU 
                                                 & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                    >> 0x14U))))));
        tracep->fullBit(oldp+698,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x29U)) 
                                   & (0x3a2U == (0xfffU 
                                                 & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                    >> 0x14U))))));
        tracep->fullIData(oldp+699,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q),32);
        tracep->fullIData(oldp+700,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_q),32);
        tracep->fullIData(oldp+701,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q),32);
        tracep->fullIData(oldp+702,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q),32);
        tracep->fullIData(oldp+703,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_q),32);
        tracep->fullIData(oldp+704,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q),32);
        tracep->fullCData(oldp+705,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q),2);
        tracep->fullIData(oldp+706,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q),32);
        tracep->fullIData(oldp+707,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_q),32);
        tracep->fullIData(oldp+708,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q),32);
        tracep->fullIData(oldp+709,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q),32);
        tracep->fullIData(oldp+710,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_q),32);
        tracep->fullIData(oldp+711,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_q),32);
        tracep->fullIData(oldp+712,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q),32);
        tracep->fullIData(oldp+713,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_q),32);
        tracep->fullIData(oldp+714,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__pc_m_q),32);
        tracep->fullIData(oldp+715,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r),32);
        tracep->fullCData(oldp+716,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__priv_r),2);
        tracep->fullBit(oldp+717,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__readonly_r));
        tracep->fullBit(oldp+718,((1U & (((0U != (0x1fU 
                                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                     >> 0xfU))) 
                                          | (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x29U))) 
                                         | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x2cU))))));
        tracep->fullBit(oldp+719,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r));
        tracep->fullBit(oldp+720,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r));
        tracep->fullIData(oldp+721,(((IData)(1U) + vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q)),32);
        tracep->fullIData(oldp+722,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q),32);
        tracep->fullIData(oldp+723,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q),32);
        tracep->fullBit(oldp+724,((1U & ((((((IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x1dU)) 
                                             | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x1eU))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x1fU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x20U))) 
                                          | (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x21U))) 
                                         | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x22U))))));
        tracep->fullIData(oldp+725,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r),32);
        tracep->fullBit(oldp+726,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r));
        tracep->fullIData(oldp+727,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_interrupts_r),32);
        tracep->fullBit(oldp+728,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__s_enabled_r));
        tracep->fullIData(oldp+729,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__s_interrupts_r),32);
        tracep->fullIData(oldp+730,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r),32);
        tracep->fullBit(oldp+731,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_en_q));
        tracep->fullCData(oldp+732,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_idx_q),5);
        tracep->fullBit(oldp+733,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__reset_q));
        tracep->fullBit(oldp+734,(((3U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q 
                                      >> 0x1fU))));
        tracep->fullCData(oldp+735,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__rd_q),5);
        tracep->fullIData(oldp+736,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_q),32);
        tracep->fullBit(oldp+737,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_busy_q));
        tracep->fullBit(oldp+738,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_inst_w));
        tracep->fullBit(oldp+739,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_rem_inst_w));
        tracep->fullBit(oldp+740,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__signed_operation_w));
        tracep->fullBit(oldp+741,((1U & ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x33U)) 
                                         | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x34U))))));
        tracep->fullIData(oldp+742,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q),32);
        tracep->fullQData(oldp+743,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__divisor_q),63);
        tracep->fullIData(oldp+745,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q),32);
        tracep->fullIData(oldp+746,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q),32);
        tracep->fullBit(oldp+747,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q));
        tracep->fullBit(oldp+748,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q));
        tracep->fullBit(oldp+749,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q));
        tracep->fullBit(oldp+750,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w));
        tracep->fullIData(oldp+751,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q)
                                      ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                          ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                          : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                      : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                          ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q)
                                          : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q))),32);
        tracep->fullBit(oldp+752,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__active_q));
        tracep->fullIData(oldp+753,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_pc_q),32);
        tracep->fullIData(oldp+754,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_q),32);
        tracep->fullBit(oldp+755,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_valid_q));
        tracep->fullBit(oldp+756,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_fetch_q));
        tracep->fullBit(oldp+757,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q));
        tracep->fullQData(oldp+758,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_buffer_q),64);
        tracep->fullBit(oldp+760,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q));
        tracep->fullBit(oldp+761,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_busy_w));
        tracep->fullIData(oldp+762,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__pc_d_q),32);
        tracep->fullBit(oldp+763,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q));
        tracep->fullIData(oldp+764,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q)
                                      ? 0x8000053U : 
                                     ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q)
                                       ? 0x53U : vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__inst_r))),32);
        tracep->fullBit(oldp+765,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__valid_q));
        tracep->fullIData(oldp+766,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_q),32);
        tracep->fullIData(oldp+767,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__ra_value_r),32);
        tracep->fullIData(oldp+768,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__rb_value_r),32);
        tracep->fullCData(oldp+769,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w),5);
        tracep->fullBit(oldp+770,((1U & (((((((((((
                                                   (((((((((IData)(
                                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                    >> 0x1dU)) 
                                                           | (IData)(
                                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                      >> 0x1eU))) 
                                                          | (IData)(
                                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                     >> 0x1fU))) 
                                                         | (IData)(
                                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                    >> 0x20U))) 
                                                        | (IData)(
                                                                  (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                   >> 0x21U))) 
                                                       | (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                  >> 0x22U))) 
                                                      | (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x29U))) 
                                                     | (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x2aU))) 
                                                    | (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x2bU))) 
                                                   | (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x2cU))) 
                                                  | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x2dU))) 
                                                 | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x2eU))) 
                                                | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x2fU))) 
                                               | (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x30U))) 
                                              | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x31U))) 
                                             | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x32U))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x33U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x34U))) 
                                          | (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x35U))) 
                                         | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x36U))))));
        tracep->fullQData(oldp+771,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w),58);
        tracep->fullBit(oldp+773,(((((0x10500073U == 
                                      (0xffff8fffU 
                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                     | (0xfU == (0x707fU 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
                                    | (0x12000073U 
                                       == (0xfe007fffU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
                                   | (0x100fU == (0x707fU 
                                                  & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))));
        tracep->fullBit(oldp+774,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x1ffffffffffffffULL 
                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w)))) 
                                         & (~ ((((0x10500073U 
                                                  == 
                                                  (0xffff8fffU 
                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                 | (0xfU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
                                                | (0x12000073U 
                                                   == 
                                                   (0xfe007fffU 
                                                    & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
                                               | (0x100fU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))))))));
        tracep->fullIData(oldp+775,((0xfffff000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)),32);
        tracep->fullIData(oldp+776,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r),32);
        tracep->fullIData(oldp+777,(((0xffffe000U & 
                                      ((- (IData)((1U 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                      >> 0x1fU)))) 
                                       << 0xdU)) | 
                                     ((0x1000U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 0x13U)) 
                                      | ((0x800U & 
                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 7U))))))),32);
        tracep->fullIData(oldp+778,(((0xfff00000U & 
                                      ((- (IData)((1U 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                      >> 0x1fU)))) 
                                       << 0x14U)) | 
                                     ((0xff000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q) 
                                      | ((0x800U & 
                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 9U)) 
                                         | ((0x7e0U 
                                             & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 0x14U))))))),32);
        tracep->fullIData(oldp+779,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     ((0xfe0U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 7U))))),32);
        tracep->fullCData(oldp+780,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r),4);
        tracep->fullBit(oldp+781,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r));
        tracep->fullBit(oldp+782,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_valid_q));
        tracep->fullIData(oldp+783,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_pc_q),32);
        tracep->fullIData(oldp+784,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r1_q),32);
        tracep->fullIData(oldp+785,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r2_q),32);
        tracep->fullIData(oldp+786,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r3_q),32);
        tracep->fullIData(oldp+787,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r4_q),32);
        tracep->fullIData(oldp+788,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r5_q),32);
        tracep->fullIData(oldp+789,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r6_q),32);
        tracep->fullIData(oldp+790,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r7_q),32);
        tracep->fullIData(oldp+791,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r8_q),32);
        tracep->fullIData(oldp+792,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r9_q),32);
        tracep->fullIData(oldp+793,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r10_q),32);
        tracep->fullIData(oldp+794,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r11_q),32);
        tracep->fullIData(oldp+795,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r12_q),32);
        tracep->fullIData(oldp+796,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r13_q),32);
        tracep->fullIData(oldp+797,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r14_q),32);
        tracep->fullIData(oldp+798,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r15_q),32);
        tracep->fullIData(oldp+799,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r16_q),32);
        tracep->fullIData(oldp+800,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r17_q),32);
        tracep->fullIData(oldp+801,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r18_q),32);
        tracep->fullIData(oldp+802,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r19_q),32);
        tracep->fullIData(oldp+803,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r20_q),32);
        tracep->fullIData(oldp+804,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r21_q),32);
        tracep->fullIData(oldp+805,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r22_q),32);
        tracep->fullIData(oldp+806,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r23_q),32);
        tracep->fullIData(oldp+807,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r24_q),32);
        tracep->fullIData(oldp+808,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r25_q),32);
        tracep->fullIData(oldp+809,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r26_q),32);
        tracep->fullIData(oldp+810,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r27_q),32);
        tracep->fullIData(oldp+811,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r28_q),32);
        tracep->fullIData(oldp+812,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r29_q),32);
        tracep->fullIData(oldp+813,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r30_q),32);
        tracep->fullIData(oldp+814,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r31_q),32);
        tracep->fullBit(oldp+815,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_ack_w) 
                                   & ((0U == (7U & 
                                              ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                               >> 7U))) 
                                      & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_error_w)))));
        tracep->fullBit(oldp+816,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_ack_w) 
                                   & ((0U != (7U & 
                                              ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                               >> 7U))) 
                                      & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_error_w)))));
        tracep->fullIData(oldp+817,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                                      ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                                      : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r)),32);
        tracep->fullIData(oldp+818,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w),32);
        tracep->fullBit(oldp+819,((0U != (0xa050U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w))));
        tracep->fullIData(oldp+820,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r),32);
        tracep->fullCData(oldp+821,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r),2);
        tracep->fullBit(oldp+822,(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w));
        tracep->fullBit(oldp+823,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r));
        tracep->fullBit(oldp+824,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_error_w));
        tracep->fullBit(oldp+825,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w));
        tracep->fullIData(oldp+826,((0x3fffffU & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                                  >> 0xaU))),32);
        tracep->fullSData(oldp+827,((0x3ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r)),10);
        tracep->fullBit(oldp+828,(vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_awvalid_o));
        tracep->fullBit(oldp+829,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_o));
        tracep->fullBit(oldp+830,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_read_w));
        tracep->fullBit(oldp+831,(vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_wvalid_o));
        tracep->fullIData(oldp+832,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_pc_o),32);
        tracep->fullBit(oldp+833,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_rd_o));
        tracep->fullBit(oldp+834,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o));
        tracep->fullBit(oldp+835,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_in_progress_w));
        tracep->fullBit(oldp+836,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_write_w));
        tracep->fullCData(oldp+837,((0xffU & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_pc_o 
                                              >> 5U))),8);
        tracep->fullSData(oldp+838,((0x7ffU & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_pc_o 
                                               >> 2U))),11);
        tracep->fullCData(oldp+839,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r),2);
        tracep->fullCData(oldp+840,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r),8);
        tracep->fullBit(oldp+841,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_write_r));
        tracep->fullBit(oldp+842,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_write_r));
        tracep->fullSData(oldp+843,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r),11);
        tracep->fullBit(oldp+844,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_flush_w));
        tracep->fullBit(oldp+845,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_accept_o));
        tracep->fullBit(oldp+846,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_error_w));
        tracep->fullBit(oldp+847,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o));
        tracep->fullBit(oldp+848,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_error_w));
        tracep->fullBit(oldp+849,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pc_fault_r));
        tracep->fullBit(oldp+850,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_request_o));
        tracep->fullIData(oldp+851,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r),32);
        tracep->fullBit(oldp+852,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__muldiv_opcode_valid_o));
        tracep->fullIData(oldp+853,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r),32);
        tracep->fullBit(oldp+854,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_branch_o));
        tracep->fullIData(oldp+855,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w),32);
        tracep->fullCData(oldp+856,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r),5);
        tracep->fullBit(oldp+857,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_ack_w));
        tracep->fullBit(oldp+858,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_accept_w));
        tracep->fullBit(oldp+859,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_ack_w));
        tracep->fullIData(oldp+860,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
        tracep->fullBit(oldp+861,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w));
        tracep->fullIData(oldp+862,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r),32);
        tracep->fullBit(oldp+863,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_valid_w));
        tracep->fullBit(oldp+864,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o));
        tracep->fullBit(oldp+865,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__exec_opcode_valid_o));
        tracep->fullBit(oldp+866,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w));
        tracep->fullBit(oldp+867,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_miss_w));
        tracep->fullIData(oldp+868,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__request_addr_w),32);
        tracep->fullIData(oldp+869,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
        tracep->fullBit(oldp+870,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
        tracep->fullCData(oldp+871,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
        tracep->fullBit(oldp+872,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_byte_r));
        tracep->fullBit(oldp+873,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_half_r));
        tracep->fullBit(oldp+874,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_word_r));
        tracep->fullBit(oldp+875,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_signed_r));
        tracep->fullBit(oldp+876,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_access_fault_w));
        tracep->fullIData(oldp+877,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r),32);
        tracep->fullIData(oldp+878,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r),32);
        tracep->fullIData(oldp+879,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r),32);
        tracep->fullIData(oldp+880,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r),32);
        tracep->fullIData(oldp+881,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r),32);
        tracep->fullIData(oldp+882,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r),32);
        tracep->fullCData(oldp+883,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r),2);
        tracep->fullIData(oldp+884,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r),32);
        tracep->fullIData(oldp+885,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r),32);
        tracep->fullIData(oldp+886,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r),32);
        tracep->fullIData(oldp+887,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r),32);
        tracep->fullIData(oldp+888,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r),32);
        tracep->fullIData(oldp+889,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r),32);
        tracep->fullIData(oldp+890,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r),32);
        tracep->fullIData(oldp+891,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r),32);
        tracep->fullIData(oldp+892,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r),32);
        tracep->fullBit(oldp+893,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r));
        tracep->fullBit(oldp+894,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r));
        tracep->fullBit(oldp+895,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exception_s_r));
        tracep->fullBit(oldp+896,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__interrupt_s_r));
        tracep->fullIData(oldp+897,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r),32);
        tracep->fullIData(oldp+898,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r),32);
        tracep->fullBit(oldp+899,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w));
        tracep->fullBit(oldp+900,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_r));
        tracep->fullIData(oldp+901,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_r),32);
        tracep->fullWData(oldp+902,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w),65);
        tracep->fullQData(oldp+905,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_b_r),33);
        tracep->fullQData(oldp+907,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_a_r),33);
        tracep->fullIData(oldp+909,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__result_r),32);
        tracep->fullBit(oldp+910,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_start_w));
        tracep->fullBit(oldp+911,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__stall_w));
        tracep->fullBit(oldp+912,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_w));
        tracep->fullIData(oldp+913,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_w),32);
        tracep->fullBit(oldp+914,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_scoreboard_r));
        tracep->fullBit(oldp+915,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_input_w));
        tracep->fullIData(oldp+916,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r),32);
        tracep->fullBit(oldp+917,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r));
        tracep->fullIData(oldp+918,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r),32);
        tracep->fullWData(oldp+919,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str),80);
        tracep->fullWData(oldp+922,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra),80);
        tracep->fullWData(oldp+925,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb),80);
        tracep->fullWData(oldp+928,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rd),80);
        tracep->fullIData(oldp+931,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_imm),32);
        tracep->fullIData(oldp+932,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_pc),32);
        tracep->fullIData(oldp+933,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r),32);
        tracep->fullIData(oldp+934,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r),32);
        tracep->fullBit(oldp+935,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r));
        tracep->fullIData(oldp+936,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r),32);
        tracep->fullSData(oldp+937,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r),16);
        tracep->fullIData(oldp+938,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_1_r),32);
        tracep->fullIData(oldp+939,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_2_r),32);
        tracep->fullIData(oldp+940,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_4_r),32);
        tracep->fullIData(oldp+941,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_8_r),32);
        tracep->fullIData(oldp+942,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_1_r),32);
        tracep->fullIData(oldp+943,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_2_r),32);
        tracep->fullIData(oldp+944,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_4_r),32);
        tracep->fullIData(oldp+945,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_8_r),32);
        tracep->fullIData(oldp+946,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__sub_res_w),32);
        tracep->fullCData(oldp+947,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w),4);
        tracep->fullCData(oldp+948,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w),4);
        tracep->fullBit(oldp+949,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
                                   & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)))));
        tracep->fullBit(oldp+950,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q))));
        tracep->fullCData(oldp+951,(4U),4);
        tracep->fullCData(oldp+952,(1U),2);
        tracep->fullIData(oldp+953,(0U),32);
        tracep->fullBit(oldp+954,(1U));
        tracep->fullCData(oldp+955,(0U),8);
        tracep->fullCData(oldp+956,(0U),4);
        tracep->fullBit(oldp+957,(0U));
        tracep->fullCData(oldp+958,(8U),4);
        tracep->fullCData(oldp+959,(7U),8);
        tracep->fullCData(oldp+960,(0U),2);
        tracep->fullCData(oldp+961,(0xcU),4);
        tracep->fullCData(oldp+962,(0xfU),4);
        tracep->fullBit(oldp+963,(0U));
        tracep->fullIData(oldp+964,(0x18U),32);
        tracep->fullCData(oldp+965,(9U),4);
        tracep->fullCData(oldp+966,(0xaU),4);
        tracep->fullCData(oldp+967,(1U),4);
        tracep->fullCData(oldp+968,(2U),4);
        tracep->fullCData(oldp+969,(3U),4);
        tracep->fullCData(oldp+970,(5U),4);
        tracep->fullCData(oldp+971,(6U),4);
        tracep->fullCData(oldp+972,(7U),4);
        tracep->fullIData(oldp+973,(2U),32);
        tracep->fullIData(oldp+974,(8U),32);
        tracep->fullIData(oldp+975,(4U),32);
        tracep->fullIData(oldp+976,(2U),32);
        tracep->fullIData(oldp+977,(3U),32);
        tracep->fullIData(oldp+978,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w),32);
        tracep->fullIData(oldp+979,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_level_r),32);
        tracep->fullIData(oldp+980,(0x45U),32);
        tracep->fullIData(oldp+981,(0xbU),32);
        tracep->fullIData(oldp+982,(0x100U),32);
        tracep->fullIData(oldp+983,(5U),32);
        tracep->fullIData(oldp+984,(0x20U),32);
        tracep->fullIData(oldp+985,(0xcU),32);
        tracep->fullIData(oldp+986,(0x13U),32);
        tracep->fullIData(oldp+987,(0x14U),32);
        tracep->fullIData(oldp+988,(0xdU),32);
        tracep->fullIData(oldp+989,(0x1fU),32);
        tracep->fullCData(oldp+990,(2U),2);
        tracep->fullCData(oldp+991,(3U),2);
        tracep->fullSData(oldp+992,(0U),11);
        tracep->fullIData(oldp+993,(0U),32);
        tracep->fullIData(oldp+994,(1U),32);
        tracep->fullIData(oldp+995,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtime_r),32);
        tracep->fullIData(oldp+996,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtimecmp_r),32);
        tracep->fullBit(oldp+997,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fault_fetch_q));
    }
}
