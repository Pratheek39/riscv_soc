// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC_ICACHE_DATA_RAM_H_
#define VERILATED_VRISCV_SOC_ICACHE_DATA_RAM_H_  // guard

#include "verilated.h"


class Vriscv_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc_icache_data_ram final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk_i;
    CData/*0:0*/ __PVT__rst_i;
    CData/*0:0*/ __PVT__wr_i;
    SData/*10:0*/ __PVT__addr_i;
    IData/*31:0*/ __PVT__data_i;
    IData/*31:0*/ __PVT__data_o;
    IData/*31:0*/ __PVT__ram_read_q;
    VlUnpacked<IData/*31:0*/, 2048> ram;

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vriscv_soc_icache_data_ram();
    ~Vriscv_soc_icache_data_ram();
    void ctor(Vriscv_soc__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vriscv_soc_icache_data_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
