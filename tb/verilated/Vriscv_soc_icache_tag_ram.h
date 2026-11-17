// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef _VRISCV_SOC_ICACHE_TAG_RAM_H_
#define _VRISCV_SOC_ICACHE_TAG_RAM_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated_heavy.h"
#include "Vriscv_soc__Dpi.h"

//==========

class Vriscv_soc__Syms;
class Vriscv_soc_VerilatedVcd;


//----------

VL_MODULE(Vriscv_soc_icache_tag_ram) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__addr_i,7,0);
    VL_IN8(__PVT__wr_i,0,0);
    VL_IN(__PVT__data_i,19,0);
    VL_OUT(__PVT__data_o,19,0);
    
    // LOCAL SIGNALS
    IData/*19:0*/ __PVT__ram_read_q;
    IData/*19:0*/ ram[256];
    
    // LOCAL VARIABLES
    CData/*7:0*/ __Vdlyvdim0__ram__v0;
    CData/*0:0*/ __Vdlyvset__ram__v0;
    IData/*19:0*/ __Vdlyvval__ram__v0;
    
    // INTERNAL VARIABLES
  private:
    Vriscv_soc__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_soc_icache_tag_ram);  ///< Copying not allowed
  public:
    VL_CTOR(Vriscv_soc_icache_tag_ram);
    ~Vriscv_soc_icache_tag_ram();
    
    // INTERNAL METHODS
    void __Vconfigure(Vriscv_soc__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__riscv_soc__u_core__u_icache__u_tag0__1(Vriscv_soc__Syms* __restrict vlSymsp);
    void _sequent__TOP__riscv_soc__u_core__u_icache__u_tag1__2(Vriscv_soc__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
