// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_icache_tag_ram.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vriscv_soc_icache_tag_ram::_sequent__TOP__riscv_soc__u_core__u_icache__u_tag0__1(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_tag_ram::_sequent__TOP__riscv_soc__u_core__u_icache__u_tag0__1\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    if (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_write_r) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r;
    }
    this->__PVT__ram_read_q = this->ram[vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r];
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vriscv_soc_icache_tag_ram::_sequent__TOP__riscv_soc__u_core__u_icache__u_tag1__2(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_icache_tag_ram::_sequent__TOP__riscv_soc__u_core__u_icache__u_tag1__2\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    if (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_write_r) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r;
    }
    this->__PVT__ram_read_q = this->ram[vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r];
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}
