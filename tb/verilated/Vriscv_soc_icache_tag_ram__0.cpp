// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

void Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag0__0(Vriscv_soc_icache_tag_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag0__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*19:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if (((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
         | ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
            & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)) 
               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_24))))) {
        __VdlyVal__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r;
        __VdlyDim0__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r;
        __VdlySet__ram__v0 = 1U;
    }
    vlSelfRef.__PVT__ram_read_q = vlSelfRef.ram[vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

void Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag1__0(Vriscv_soc_icache_tag_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag1__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*19:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if (((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
         | ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
            & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q) 
               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_24))))) {
        __VdlyVal__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r;
        __VdlyDim0__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r;
        __VdlySet__ram__v0 = 1U;
    }
    vlSelfRef.__PVT__ram_read_q = vlSelfRef.ram[vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}
