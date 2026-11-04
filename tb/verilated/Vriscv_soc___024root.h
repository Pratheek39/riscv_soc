// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC___024ROOT_H_
#define VERILATED_VRISCV_SOC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"
class Vriscv_soc_riscv_soc;


class Vriscv_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc___024root final {
  public:
    // CELLS
    Vriscv_soc_riscv_soc* riscv_soc;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__riscv_soc__mem_rlast_i;
    CData/*3:0*/ __Vcellinp__riscv_soc__mem_rid_i;
    CData/*1:0*/ __Vcellinp__riscv_soc__mem_rresp_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__mem_rvalid_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__mem_arready_i;
    CData/*3:0*/ __Vcellinp__riscv_soc__mem_bid_i;
    CData/*1:0*/ __Vcellinp__riscv_soc__mem_bresp_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__mem_bvalid_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__mem_wready_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__mem_awready_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__uart_txd_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__spi_miso_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__rst_cpu_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__inport_rready_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__inport_arvalid_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__inport_bready_i;
    CData/*3:0*/ __Vcellinp__riscv_soc__inport_wstrb_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__inport_wvalid_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__inport_awvalid_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__rst_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__clk_i;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__riscv_soc__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_cpu_i__0;
    IData/*31:0*/ __Vcellinp__riscv_soc__mem_rdata_i;
    IData/*31:0*/ __Vcellinp__riscv_soc__gpio_input_i;
    IData/*31:0*/ __Vcellinp__riscv_soc__inport_araddr_i;
    IData/*31:0*/ __Vcellinp__riscv_soc__inport_wdata_i;
    IData/*31:0*/ __Vcellinp__riscv_soc__inport_awaddr_i;
    IData/*31:0*/ __Vcellinp__riscv_soc__reset_vector_i;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    sc_core::sc_in<bool> clk_i;
    sc_core::sc_in<bool> rst_i;
    sc_core::sc_in<bool> rst_cpu_i;
    sc_core::sc_in<bool> inport_awvalid_i;
    sc_core::sc_in<bool> inport_wvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > inport_wstrb_i;
    sc_core::sc_in<bool> inport_bready_i;
    sc_core::sc_in<bool> inport_arvalid_i;
    sc_core::sc_in<bool> inport_rready_i;
    sc_core::sc_in<bool> spi_miso_i;
    sc_core::sc_in<bool> uart_txd_i;
    sc_core::sc_in<bool> mem_awready_i;
    sc_core::sc_in<bool> mem_wready_i;
    sc_core::sc_in<bool> mem_bvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > mem_bresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > mem_bid_i;
    sc_core::sc_in<bool> mem_arready_i;
    sc_core::sc_in<bool> mem_rvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > mem_rresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > mem_rid_i;
    sc_core::sc_in<bool> mem_rlast_i;
    sc_core::sc_out<bool> inport_awready_o;
    sc_core::sc_out<bool> inport_wready_o;
    sc_core::sc_out<bool> inport_bvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > inport_bresp_o;
    sc_core::sc_out<bool> inport_arready_o;
    sc_core::sc_out<bool> inport_rvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > inport_rresp_o;
    sc_core::sc_out<bool> spi_clk_o;
    sc_core::sc_out<bool> spi_mosi_o;
    sc_core::sc_out<bool> spi_cs_o;
    sc_core::sc_out<bool> uart_rxd_o;
    sc_core::sc_out<bool> mem_awvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > mem_awid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > mem_awlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > mem_awburst_o;
    sc_core::sc_out<bool> mem_wvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > mem_wstrb_o;
    sc_core::sc_out<bool> mem_wlast_o;
    sc_core::sc_out<bool> mem_bready_o;
    sc_core::sc_out<bool> mem_arvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > mem_arid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > mem_arlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > mem_arburst_o;
    sc_core::sc_out<bool> mem_rready_o;
    sc_core::sc_in<sc_dt::sc_uint<32> > reset_vector_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > inport_awaddr_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > inport_wdata_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > inport_araddr_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > gpio_input_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > mem_rdata_i;
    sc_core::sc_out<sc_dt::sc_uint<32> > inport_rdata_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > gpio_output_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > gpio_output_enable_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > mem_awaddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > mem_wdata_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > mem_araddr_o;

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vriscv_soc___024root(Vriscv_soc__Syms* symsp, const char* namep);
    ~Vriscv_soc___024root();
    VL_UNCOPYABLE(Vriscv_soc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
