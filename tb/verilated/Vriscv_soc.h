// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRISCV_SOC_H_
#define _VRISCV_SOC_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated_heavy.h"
#include "Vriscv_soc__Dpi.h"

//==========

class Vriscv_soc__Syms;
class Vriscv_soc_VerilatedVcd;
class Vriscv_soc_riscv_soc;


//----------

SC_MODULE(Vriscv_soc) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vriscv_soc_riscv_soc* riscv_soc;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_in<bool> clk_i;
    sc_in<bool> rst_i;
    sc_in<bool> inport_awvalid_i;
    sc_in<bool> inport_wvalid_i;
    sc_in<sc_uint<4> > inport_wstrb_i;
    sc_in<bool> inport_bready_i;
    sc_in<bool> inport_arvalid_i;
    sc_in<bool> inport_rready_i;
    sc_in<bool> rst_cpu_i;
    sc_in<bool> spi_miso_i;
    sc_in<bool> uart_txd_i;
    sc_in<bool> mem_awready_i;
    sc_in<bool> mem_wready_i;
    sc_in<bool> mem_bvalid_i;
    sc_in<sc_uint<2> > mem_bresp_i;
    sc_in<sc_uint<4> > mem_bid_i;
    sc_in<bool> mem_arready_i;
    sc_in<bool> mem_rvalid_i;
    sc_in<sc_uint<2> > mem_rresp_i;
    sc_in<sc_uint<4> > mem_rid_i;
    sc_in<bool> mem_rlast_i;
    sc_out<bool> inport_awready_o;
    sc_out<bool> inport_wready_o;
    sc_out<bool> inport_bvalid_o;
    sc_out<sc_uint<2> > inport_bresp_o;
    sc_out<bool> inport_arready_o;
    sc_out<bool> inport_rvalid_o;
    sc_out<sc_uint<2> > inport_rresp_o;
    sc_out<bool> spi_clk_o;
    sc_out<bool> spi_mosi_o;
    sc_out<bool> spi_cs_o;
    sc_out<bool> uart_rxd_o;
    sc_out<bool> mem_awvalid_o;
    sc_out<sc_uint<4> > mem_awid_o;
    sc_out<sc_uint<8> > mem_awlen_o;
    sc_out<sc_uint<2> > mem_awburst_o;
    sc_out<bool> mem_wvalid_o;
    sc_out<sc_uint<4> > mem_wstrb_o;
    sc_out<bool> mem_wlast_o;
    sc_out<bool> mem_bready_o;
    sc_out<bool> mem_arvalid_o;
    sc_out<sc_uint<4> > mem_arid_o;
    sc_out<sc_uint<8> > mem_arlen_o;
    sc_out<sc_uint<2> > mem_arburst_o;
    sc_out<bool> mem_rready_o;
    sc_in<sc_uint<32> > reset_vector_i;
    sc_in<sc_uint<32> > inport_awaddr_i;
    sc_in<sc_uint<32> > inport_wdata_i;
    sc_in<sc_uint<32> > inport_araddr_i;
    sc_in<sc_uint<32> > gpio_input_i;
    sc_in<sc_uint<32> > mem_rdata_i;
    sc_out<sc_uint<32> > inport_rdata_o;
    sc_out<sc_uint<32> > gpio_output_o;
    sc_out<sc_uint<32> > gpio_output_enable_o;
    sc_out<sc_uint<32> > mem_awaddr_o;
    sc_out<sc_uint<32> > mem_wdata_o;
    sc_out<sc_uint<32> > mem_araddr_o;
    sc_out<sc_uint<32> > accel_status_o;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vcellinp__riscv_soc__rst_cpu_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__rst_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__clk_i;
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
    CData/*0:0*/ __Vcellinp__riscv_soc__inport_rready_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__inport_arvalid_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__inport_bready_i;
    CData/*3:0*/ __Vcellinp__riscv_soc__inport_wstrb_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__inport_wvalid_i;
    CData/*0:0*/ __Vcellinp__riscv_soc__inport_awvalid_i;
    CData/*0:0*/ __VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i;
    CData/*0:0*/ __VinpClk__TOP____Vcellinp__riscv_soc__rst_i;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__riscv_soc__clk_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP____Vcellinp__riscv_soc__rst_i;
    CData/*0:0*/ __Vchglast__TOP____Vcellinp__riscv_soc__rst_cpu_i;
    CData/*0:0*/ __Vchglast__TOP____Vcellinp__riscv_soc__rst_i;
    IData/*31:0*/ __Vcellinp__riscv_soc__mem_rdata_i;
    IData/*31:0*/ __Vcellinp__riscv_soc__gpio_input_i;
    IData/*31:0*/ __Vcellinp__riscv_soc__inport_araddr_i;
    IData/*31:0*/ __Vcellinp__riscv_soc__inport_wdata_i;
    IData/*31:0*/ __Vcellinp__riscv_soc__inport_awaddr_i;
    IData/*31:0*/ __Vcellinp__riscv_soc__reset_vector_i;
    CData/*0:0*/ __Vm_traceActivity[6];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vriscv_soc__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_soc);  ///< Copying not allowed
  public:
    SC_CTOR(Vriscv_soc);
    virtual ~Vriscv_soc();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// SC tracing; avoid overloaded virtual function lint warning
    virtual void trace(sc_trace_file* tfp) const { ::sc_core::sc_module::trace(tfp); }
    
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vriscv_soc__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vriscv_soc__Syms* symsp, bool first);
  private:
    static QData _change_request(Vriscv_soc__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vriscv_soc__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vriscv_soc__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vriscv_soc__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vriscv_soc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vriscv_soc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vriscv_soc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(Vriscv_soc__Syms* __restrict vlSymsp);
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
