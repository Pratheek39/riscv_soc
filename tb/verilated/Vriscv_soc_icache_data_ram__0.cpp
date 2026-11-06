// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

void Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data0__0(Vriscv_soc_icache_data_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data0__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if (((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)) 
         & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o))) {
        __VdlyVal__ram__v0 = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i;
        __VdlyDim0__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r;
        __VdlySet__ram__v0 = 1U;
    }
    vlSelfRef.__PVT__ram_read_q = vlSelfRef.ram[vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

void Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data1__0(Vriscv_soc_icache_data_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data1__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q) 
         & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o))) {
        __VdlyVal__ram__v0 = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i;
        __VdlyDim0__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r;
        __VdlySet__ram__v0 = 1U;
    }
    vlSelfRef.__PVT__ram_read_q = vlSelfRef.ram[vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}
