// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_icache_data_ram.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vriscv_soc_icache_data_ram) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_soc_icache_data_ram::__Vconfigure(Vriscv_soc__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vriscv_soc_icache_data_ram::~Vriscv_soc_icache_data_ram() {
}

void Vriscv_soc_icache_data_ram::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_data_ram::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__addr_i = VL_RAND_RESET_I(11);
    __PVT__data_i = VL_RAND_RESET_I(32);
    __PVT__wr_i = VL_RAND_RESET_I(1);
    __PVT__data_o = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__ram_read_q = VL_RAND_RESET_I(32);
    __Vdlyvdim0__ram__v0 = 0;
    __Vdlyvval__ram__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__ram__v0 = 0;
}
