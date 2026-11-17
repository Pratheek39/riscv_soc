// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_icache_data_ram.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vriscv_soc_icache_data_ram::_sequent__TOP__riscv_soc__u_core__u_icache__u_data0__1(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_data_ram::_sequent__TOP__riscv_soc__u_core__u_icache__u_data0__1\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    this->__PVT__ram_read_q = this->ram[vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r];
    if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
         & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)))) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r;
    }
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vriscv_soc_icache_data_ram::_sequent__TOP__riscv_soc__u_core__u_icache__u_data1__2(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_data_ram::_sequent__TOP__riscv_soc__u_core__u_icache__u_data1__2\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    this->__PVT__ram_read_q = this->ram[vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r];
    if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
         & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q))) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r;
    }
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}
