// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

void Vriscv_soc___024root___ctor_var_reset(Vriscv_soc___024root* vlSelf);

Vriscv_soc___024root::Vriscv_soc___024root(Vriscv_soc__Syms* symsp, const char* namep)
    : clk_i("clk_i")
    , rst_i("rst_i")
    , rst_cpu_i("rst_cpu_i")
    , inport_awvalid_i("inport_awvalid_i")
    , inport_wvalid_i("inport_wvalid_i")
    , inport_wstrb_i("inport_wstrb_i")
    , inport_bready_i("inport_bready_i")
    , inport_arvalid_i("inport_arvalid_i")
    , inport_rready_i("inport_rready_i")
    , spi_miso_i("spi_miso_i")
    , uart_txd_i("uart_txd_i")
    , mem_awready_i("mem_awready_i")
    , mem_wready_i("mem_wready_i")
    , mem_bvalid_i("mem_bvalid_i")
    , mem_bresp_i("mem_bresp_i")
    , mem_bid_i("mem_bid_i")
    , mem_arready_i("mem_arready_i")
    , mem_rvalid_i("mem_rvalid_i")
    , mem_rresp_i("mem_rresp_i")
    , mem_rid_i("mem_rid_i")
    , mem_rlast_i("mem_rlast_i")
    , inport_awready_o("inport_awready_o")
    , inport_wready_o("inport_wready_o")
    , inport_bvalid_o("inport_bvalid_o")
    , inport_bresp_o("inport_bresp_o")
    , inport_arready_o("inport_arready_o")
    , inport_rvalid_o("inport_rvalid_o")
    , inport_rresp_o("inport_rresp_o")
    , spi_clk_o("spi_clk_o")
    , spi_mosi_o("spi_mosi_o")
    , spi_cs_o("spi_cs_o")
    , uart_rxd_o("uart_rxd_o")
    , mem_awvalid_o("mem_awvalid_o")
    , mem_awid_o("mem_awid_o")
    , mem_awlen_o("mem_awlen_o")
    , mem_awburst_o("mem_awburst_o")
    , mem_wvalid_o("mem_wvalid_o")
    , mem_wstrb_o("mem_wstrb_o")
    , mem_wlast_o("mem_wlast_o")
    , mem_bready_o("mem_bready_o")
    , mem_arvalid_o("mem_arvalid_o")
    , mem_arid_o("mem_arid_o")
    , mem_arlen_o("mem_arlen_o")
    , mem_arburst_o("mem_arburst_o")
    , mem_rready_o("mem_rready_o")
    , reset_vector_i("reset_vector_i")
    , inport_awaddr_i("inport_awaddr_i")
    , inport_wdata_i("inport_wdata_i")
    , inport_araddr_i("inport_araddr_i")
    , gpio_input_i("gpio_input_i")
    , mem_rdata_i("mem_rdata_i")
    , inport_rdata_o("inport_rdata_o")
    , gpio_output_o("gpio_output_o")
    , gpio_output_enable_o("gpio_output_enable_o")
    , mem_awaddr_o("mem_awaddr_o")
    , mem_wdata_o("mem_wdata_o")
    , mem_araddr_o("mem_araddr_o")
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vriscv_soc___024root___ctor_var_reset(this);
}

void Vriscv_soc___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vriscv_soc___024root::~Vriscv_soc___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
