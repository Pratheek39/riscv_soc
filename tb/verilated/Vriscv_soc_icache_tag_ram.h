// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC_ICACHE_TAG_RAM_H_
#define VERILATED_VRISCV_SOC_ICACHE_TAG_RAM_H_  // guard

#include "verilated.h"


class Vriscv_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc_icache_tag_ram final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk_i;
    CData/*0:0*/ __PVT__rst_i;
    CData/*7:0*/ __PVT__addr_i;
    CData/*0:0*/ __PVT__wr_i;
    IData/*19:0*/ __PVT__data_i;
    IData/*19:0*/ __PVT__data_o;
    IData/*19:0*/ __PVT__ram_read_q;
    VlUnpacked<IData/*19:0*/, 256> ram;

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vriscv_soc_icache_tag_ram();
    ~Vriscv_soc_icache_tag_ram();
    void ctor(Vriscv_soc__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vriscv_soc_icache_tag_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
