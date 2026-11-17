// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_riscv_decode.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vriscv_soc_riscv_decode) {
    VL_CELL(u_regfile, Vriscv_soc_riscv_regfile);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_soc_riscv_decode::__Vconfigure(Vriscv_soc__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vriscv_soc_riscv_decode::~Vriscv_soc_riscv_decode() {
}

void Vriscv_soc_riscv_decode::_settle__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode::_settle__TOP__riscv_soc__u_core__u_core__u_decode__1\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = (0x1ffffffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w);
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w) 
           & (- (IData)((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q))))));
}

void Vriscv_soc_riscv_decode::_settle__TOP__riscv_soc__u_core__u_core__u_decode__2(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode::_settle__TOP__riscv_soc__u_core__u_core__u_decode__2\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp200[3];
    WData/*95:0*/ __Vtemp246[3];
    WData/*95:0*/ __Vtemp294[3];
    WData/*95:0*/ __Vtemp340[3];
    WData/*95:0*/ __Vtemp388[3];
    WData/*95:0*/ __Vtemp434[3];
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffffffffeULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | (IData)((IData)((0x7013U == (0x707fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffffffffdULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x13U == (0x707fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 1U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffffffffbULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2013U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 2U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffffffff7ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x3013U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 3U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffffffffefULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x6013U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 4U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffffffffdfULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x4013U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 5U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffffffffbfULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x1013U == (0xfc00707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 6U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffffffff7fULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x5013U == (0xfc00707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 7U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffffffeffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x40005013U == (0xfc00707fU 
                                               & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 8U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffffffdffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x37U == (0x7fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 9U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffffffbffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x17U == (0x7fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0xaU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffffff7ffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x33U == (0xfe00707fU 
                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0xbU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffffffefffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x40000033U == (0xfe00707fU 
                                               & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0xcU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffffffdfffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2033U == (0xfe00707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0xdU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffffffbfffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x3033U == (0xfe00707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0xeU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffffff7fffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x4033U == (0xfe00707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0xfU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffffeffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x6033U == (0xfe00707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x10U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffffdffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x7033U == (0xfe00707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x11U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffffbffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x1033U == (0xfe00707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x12U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffff7ffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x5033U == (0xfe00707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x13U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffffefffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x40005033U == (0xfe00707fU 
                                               & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x14U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffffdfffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x6fU == (0x7fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x15U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffffbfffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x67U == (0x707fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x16U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffff7fffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x63U == (0x707fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x17U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffeffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x1063U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x18U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffdffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x4063U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x19U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffffbffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x5063U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x1aU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffff7ffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x6063U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x1bU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffefffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x7063U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x1cU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffdfffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((3U == (0x707fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x1dU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffffbfffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x1003U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x1eU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffff7fffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2003U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x1fU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffeffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x4003U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x20U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffdffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x5003U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x21U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffffbffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x6003U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x22U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffff7ffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x23U == (0x707fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x23U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffefffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x1023U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x24U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffdfffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2023U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x25U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffffbfffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x73U == vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
              << 0x26U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffff7fffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x100073U == vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
              << 0x27U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffeffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x10200073U == (0xdfffffffU 
                                               & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x28U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffdffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x1073U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x29U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fffbffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2073U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x2aU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fff7ffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x3073U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x2bU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffefffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x5073U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x2cU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffdfffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x6073U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x2dU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ffbfffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x7073U == (0x707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x2eU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3ff7fffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2000033U == (0xfe00707fU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x2fU));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3feffffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2001033U == (0xfe00707fU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x30U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fdffffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2002033U == (0xfe00707fU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x31U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3fbffffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2003033U == (0xfe00707fU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x32U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3f7ffffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2004033U == (0xfe00707fU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x33U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3efffffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2005033U == (0xfe00707fU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x34U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3dfffffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2006033U == (0xfe00707fU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x35U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x3bfffffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x2007033U == (0xfe00707fU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x36U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x37fffffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x53U == (0xfe00007fU 
                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x37U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w 
        = ((0x2ffffffffffffffULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w) 
           | ((QData)((IData)((0x8000053U == (0xfe00007fU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
              << 0x38U));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r 
        = (((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q)) 
            & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q) 
               == (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                            >> 0x14U)))) ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q
            : (((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r)) 
                & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r) 
                   == (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                >> 0x14U)))) ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r
                : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__rb_value_r));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
        = (((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q)) 
            & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q) 
               == (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                            >> 0xfU)))) ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q
            : (((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r)) 
                & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r) 
                   == (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                >> 0xfU)))) ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r
                : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__ra_value_r));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__valid_q) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_scoreboard_r = 0U;
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r 
        = ((~ ((IData)(1U) << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) 
           & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r);
    if ((1U & (((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r 
                 >> (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                              >> 0xfU))) | (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r 
                                            >> (0x1fU 
                                                & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                   >> 0x14U)))) 
               | (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r 
                  >> (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                               >> 7U)))))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_scoreboard_r = 1U;
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r = 0U;
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_input_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_scoreboard_r) 
             | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w)) 
            | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w)) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_accept_o 
        = (1U & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q) 
                 | ((((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_scoreboard_r)) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w))) 
                     & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w))) 
                    & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w)))));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_pc = 0U;
    if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_pc 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] = 0x2dU;
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] = 0U;
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] = 0U;
    if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
        if ((1U & ((((((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q) 
                         | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                    >> 1U))) | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 2U))) 
                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 3U))) | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 4U))) 
                     | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 5U))) | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 6U))) 
                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 7U))))) {
            if ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] = 0x616e6469U;
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] = 0U;
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] 
                    = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 1U))) ? 0x61646469U
                        : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 2U))) ? 0x736c7469U
                            : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 3U)))
                                ? 0x6c746975U : ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 4U)))
                                                  ? 0x6f7269U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 5U)))
                                                   ? 0x786f7269U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 6U)))
                                                    ? 0x736c6c69U
                                                    : 0x73726c69U))))));
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] 
                    = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 1U))) ? 0U
                        : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 2U))) ? 0U
                            : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 3U)))
                                ? 0x73U : ((1U & (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 4U)))
                                            ? 0U : 
                                           ((1U & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 5U)))
                                             ? 0U : 0U)))));
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] 
                    = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 1U))) ? 0U
                        : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 2U))) ? 0U
                            : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 3U)))
                                ? 0U : ((1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 4U)))
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 5U)))
                                                  ? 0U
                                                  : 0U)))));
            }
        } else {
            if ((1U & ((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 8U)) | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 9U))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0xaU))) | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0xbU))) 
                          | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                     >> 0xcU))) | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0xdU))) 
                        | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                   >> 0xeU))) | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0xfU))))) {
                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                   >> 8U)))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] = 0x73726169U;
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] = 0U;
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] = 0U;
                } else {
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] 
                        = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 9U))) ? 0x6c7569U
                            : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0xaU)))
                                ? 0x75697063U : ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0xbU)))
                                                  ? 0x616464U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0xcU)))
                                                   ? 0x737562U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0xdU)))
                                                    ? 0x736c74U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0xeU)))
                                                     ? 0x736c7475U
                                                     : 0x786f72U))))));
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] 
                        = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 9U))) ? 0U
                            : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0xaU)))
                                ? 0x61U : ((1U & (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0xbU)))
                                            ? 0U : 
                                           ((1U & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0xcU)))
                                             ? 0U : 
                                            ((1U & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0xdU)))
                                              ? 0U : 0U)))));
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] 
                        = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 9U))) ? 0U
                            : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0xaU)))
                                ? 0U : ((1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0xbU)))
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0xcU)))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0xdU)))
                                                   ? 0U
                                                   : 0U)))));
                }
            } else {
                if ((1U & ((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x10U)) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x11U))) 
                                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0x12U))) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x13U))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x14U))) 
                             | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x15U))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x16U))) 
                           | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x17U))))) {
                    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x10U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] = 0x6f72U;
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] = 0U;
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] = 0U;
                    } else {
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] 
                            = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x11U)))
                                ? 0x616e64U : ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x12U)))
                                                ? 0x736c6cU
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x13U)))
                                                    ? 0x73726cU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x14U)))
                                                     ? 0x737261U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x15U)))
                                                      ? 0x6a616cU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                  >> 0x16U)))
                                                       ? 0x6a616c72U
                                                       : 0x626571U))))));
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] 
                            = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x11U)))
                                ? 0U : ((1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x12U)))
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x13U)))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x14U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x15U)))
                                                    ? 0U
                                                    : 0U)))));
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] 
                            = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x11U)))
                                ? 0U : ((1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x12U)))
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x13U)))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x14U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x15U)))
                                                    ? 0U
                                                    : 0U)))));
                    }
                } else {
                    if ((1U & ((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x18U)) 
                                     | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                >> 0x19U))) 
                                    | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0x1aU))) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x1bU))) 
                                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 0x1cU))) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x1dU))) 
                                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0x1eU))) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x1fU))))) {
                        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0x18U)))) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] = 0x626e65U;
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] = 0U;
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] = 0U;
                        } else {
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] 
                                = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x19U)))
                                    ? 0x626c74U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x1aU)))
                                                    ? 0x626765U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x1bU)))
                                                     ? 0x626c7475U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x1cU)))
                                                      ? 0x62676575U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                  >> 0x1dU)))
                                                       ? 0x6c62U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                   >> 0x1eU)))
                                                        ? 0x6c68U
                                                        : 0x6c77U))))));
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] 
                                = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x19U)))
                                    ? 0U : ((1U & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x1aU)))
                                             ? 0U : 
                                            ((1U & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x1bU)))
                                              ? 0U : 
                                             ((1U & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x1cU)))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x1dU)))
                                                   ? 0U
                                                   : 0U)))));
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] 
                                = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x19U)))
                                    ? 0U : ((1U & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x1aU)))
                                             ? 0U : 
                                            ((1U & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x1bU)))
                                              ? 0U : 
                                             ((1U & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x1cU)))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x1dU)))
                                                   ? 0U
                                                   : 0U)))));
                        }
                    } else {
                        if ((1U & ((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x20U)) 
                                         | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x21U))) 
                                        | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0x22U))) 
                                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x23U))) 
                                      | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                 >> 0x24U))) 
                                     | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                >> 0x25U))) 
                                    | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0x26U))) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x27U))))) {
                            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0x20U)))) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] = 0x6c6275U;
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] = 0U;
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] = 0U;
                            } else {
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] 
                                    = ((1U & (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x21U)))
                                        ? 0x6c6875U
                                        : ((1U & (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x22U)))
                                            ? 0x6c7775U
                                            : ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x23U)))
                                                ? 0x7362U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x24U)))
                                                    ? 0x7368U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x25U)))
                                                     ? 0x7377U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x26U)))
                                                      ? 0x63616c6cU
                                                      : 0x7265616bU))))));
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] 
                                    = ((1U & (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x21U)))
                                        ? 0U : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x22U)))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x23U)))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x24U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x25U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x26U)))
                                                     ? 0x65U
                                                     : 0x6562U))))));
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] 
                                    = ((1U & (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x21U)))
                                        ? 0U : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x22U)))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x23U)))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x24U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x25U)))
                                                    ? 0U
                                                    : 0U)))));
                            }
                        } else {
                            if ((1U & ((((((((IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x28U)) 
                                             | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x29U))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x2aU))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x2bU))) 
                                          | (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x2cU))) 
                                         | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x2dU))) 
                                        | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0x2eU))) 
                                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x2fU))))) {
                                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0x28U)))) {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] = 0x65726574U;
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] = 0U;
                                } else {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] 
                                        = ((1U & (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x29U)))
                                            ? 0x73727277U
                                            : ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x2aU)))
                                                ? 0x73727273U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x2bU)))
                                                    ? 0x73727263U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x2cU)))
                                                     ? 0x72727769U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x2dU)))
                                                      ? 0x72727369U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                  >> 0x2eU)))
                                                       ? 0x72726369U
                                                       : 0x6d756cU))))));
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] 
                                        = ((1U & (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x29U)))
                                            ? 0x63U
                                            : ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x2aU)))
                                                ? 0x63U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x2bU)))
                                                    ? 0x63U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x2cU)))
                                                     ? 0x6373U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x2dU)))
                                                      ? 0x6373U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                  >> 0x2eU)))
                                                       ? 0x6373U
                                                       : 0U))))));
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] 
                                        = ((1U & (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x29U)))
                                            ? 0U : 
                                           ((1U & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x2aU)))
                                             ? 0U : 
                                            ((1U & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x2bU)))
                                              ? 0U : 
                                             ((1U & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x2cU)))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x2dU)))
                                                   ? 0U
                                                   : 0U)))));
                                }
                            } else {
                                if ((1U & ((((((((IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x30U)) 
                                                 | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x31U))) 
                                                | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x32U))) 
                                               | (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x33U))) 
                                              | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x34U))) 
                                             | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x35U))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x36U))) 
                                           | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x37U))))) {
                                    if ((1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x30U)))) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] = 0x6d756c68U;
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] = 0U;
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] = 0U;
                                    } else {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] 
                                            = ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x31U)))
                                                ? 0x6c687375U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x32U)))
                                                    ? 0x756c6875U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x33U)))
                                                     ? 0x646976U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x34U)))
                                                      ? 0x64697675U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                  >> 0x35U)))
                                                       ? 0x72656dU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                   >> 0x36U)))
                                                        ? 0x72656d75U
                                                        : 0x41554c54U))))));
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] 
                                            = ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x31U)))
                                                ? 0x6d75U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x32U)))
                                                    ? 0x6dU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x33U)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x34U)))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                  >> 0x35U)))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                   >> 0x36U)))
                                                        ? 0U
                                                        : 0x46U))))));
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] 
                                            = ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x31U)))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x32U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x33U)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x34U)))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                  >> 0x35U)))
                                                       ? 0U
                                                       : 0U)))));
                                    }
                                } else {
                                    if ((1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x38U)))) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[0U] = 0x41554c54U;
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[1U] = 0x47455f46U;
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str[2U] = 0x5041U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
        if ((1U & (((((((((((((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 1U)) 
                                    | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 2U))) 
                                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 3U))) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 4U))) 
                                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 5U))) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x29U))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x2aU))) 
                             | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x2bU))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x2cU))) 
                           | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x2dU))) | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x2eU))) 
                         | (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 6U)) | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 7U))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 8U)))) | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 9U))) 
                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0xaU))) | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x15U))) 
                     | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x16U))) | ((((((IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x1dU)) 
                                                   | (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x1eU))) 
                                                  | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x1fU))) 
                                                 | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x20U))) 
                                                | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x21U))) 
                                               | (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x22U)))) 
                   | (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x23U)) | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x24U))) 
                      | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                 >> 0x25U)))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_imm 
                = ((1U & ((((((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 1U)) 
                                    | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 2U))) 
                                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 3U))) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 4U))) 
                                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 5U))) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x29U))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x2aU))) 
                             | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x2bU))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x2cU))) 
                           | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x2dU))) | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x2eU))))
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                  >> 0x14U))) : ((1U 
                                                  & (((IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 6U)) 
                                                      | (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 7U))) 
                                                     | (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 8U))))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                     >> 0x14U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 9U)))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0xaU)))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x15U)))
                                                     ? 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
                                                     + 
                                                     ((0xfff00000U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                         >> 0x1fU)))) 
                                                          << 0x14U)) 
                                                      | ((0xff000U 
                                                          & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q) 
                                                         | ((0x800U 
                                                             & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                >> 9U)) 
                                                            | ((0x7e0U 
                                                                & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                     >> 0x14U)))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x16U)))
                                                      ? 
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                                      + 
                                                      ((0xfffff000U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                          >> 0x1fU)))) 
                                                           << 0xcU)) 
                                                       | (0xfffU 
                                                          & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                             >> 0x14U))))
                                                      : 
                                                     ((1U 
                                                       & ((((((IData)(
                                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                       >> 0x1dU)) 
                                                              | (IData)(
                                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                         >> 0x1eU))) 
                                                             | (IData)(
                                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                        >> 0x1fU))) 
                                                            | (IData)(
                                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                       >> 0x20U))) 
                                                           | (IData)(
                                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                      >> 0x21U))) 
                                                          | (IData)(
                                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                     >> 0x22U))))
                                                       ? 
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                                       + 
                                                       ((0xfffff000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                           >> 0x1fU)))) 
                                                            << 0xcU)) 
                                                        | (0xfffU 
                                                           & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                              >> 0x14U))))
                                                       : 
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                                       + 
                                                       ((0xfffff000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                           >> 0x1fU)))) 
                                                            << 0xcU)) 
                                                        | ((0xfe0U 
                                                            & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                 >> 7U))))))))))));
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rd[0U] = 0x2dU;
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rd[1U] = 0U;
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rd[2U] = 0U;
    if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum 
            = (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                        >> 7U));
        __Vtemp200[0U] = ((8U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                           ? ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x7436U : 0x7435U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x7434U : 0x7433U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x733131U : 0x733130U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x7339U : 0x7338U)))
                           : ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x7337U : 0x7336U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x7335U : 0x7334U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x7333U : 0x7332U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x6137U : 0x6136U))));
        __Vtemp200[1U] = 0U;
        __Vtemp200[2U] = 0U;
        __Vtemp246[0U] = ((8U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                           ? ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x6135U : 0x6134U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x6133U : 0x6132U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x6131U : 0x6130U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x7331U : 0x7330U)))
                           : ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x7432U : 0x7431U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x7430U : 0x7470U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x6770U : 0x7370U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))
                                       ? 0x7261U : 0x7a65726fU))));
        __Vtemp246[1U] = 0U;
        __Vtemp246[2U] = 0U;
        if ((0x10U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__regnum))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__Vfuncout[0U] 
                = __Vtemp200[0U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__Vfuncout[1U] 
                = __Vtemp200[1U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__Vfuncout[2U] 
                = __Vtemp200[2U];
        } else {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__Vfuncout[0U] 
                = __Vtemp246[0U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__Vfuncout[1U] 
                = __Vtemp246[1U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__Vfuncout[2U] 
                = __Vtemp246[2U];
        }
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rd[0U] 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__Vfuncout[0U];
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rd[1U] 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__Vfuncout[1U];
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rd[2U] 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__4__Vfuncout[2U];
        if ((1U & (((((((((((((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 1U)) 
                                    | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 2U))) 
                                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 3U))) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 4U))) 
                                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 5U))) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x29U))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x2aU))) 
                             | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x2bU))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x2cU))) 
                           | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x2dU))) | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x2eU))) 
                         | (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 6U)) | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 7U))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 8U)))) | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 9U))) 
                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0xaU))) | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x15U))) 
                     | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x16U))) | ((((((IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x1dU)) 
                                                   | (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x1eU))) 
                                                  | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x1fU))) 
                                                 | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x20U))) 
                                                | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x21U))) 
                                               | (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x22U)))) 
                   | (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x23U)) | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x24U))) 
                      | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                 >> 0x25U)))))) {
            if ((1U & (~ ((((((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 1U)) 
                                    | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 2U))) 
                                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 3U))) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 4U))) 
                                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 5U))) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x29U))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x2aU))) 
                             | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x2bU))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x2cU))) 
                           | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x2dU))) | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x2eU)))))) {
                if ((1U & (~ (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 6U)) | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 7U))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 8U)))))) {
                    if ((1U & (~ (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 9U))))) {
                        if ((1U & (~ (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0xaU))))) {
                            if ((1U & (~ (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x15U))))) {
                                if ((1U & (~ (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x16U))))) {
                                    if ((1U & (~ ((
                                                   ((((IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x1dU)) 
                                                      | (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x1eU))) 
                                                     | (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x1fU))) 
                                                    | (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x20U))) 
                                                   | (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x21U))) 
                                                  | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x22U)))))) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rd[1U] = 0U;
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[0U] = 0x2dU;
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[1U] = 0U;
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[2U] = 0U;
    if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum 
            = (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                        >> 0x14U));
        __Vtemp294[0U] = ((8U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                           ? ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x7436U : 0x7435U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x7434U : 0x7433U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x733131U : 0x733130U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x7339U : 0x7338U)))
                           : ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x7337U : 0x7336U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x7335U : 0x7334U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x7333U : 0x7332U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x6137U : 0x6136U))));
        __Vtemp294[1U] = 0U;
        __Vtemp294[2U] = 0U;
        __Vtemp340[0U] = ((8U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                           ? ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x6135U : 0x6134U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x6133U : 0x6132U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x6131U : 0x6130U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x7331U : 0x7330U)))
                           : ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x7432U : 0x7431U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x7430U : 0x7470U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x6770U : 0x7370U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))
                                       ? 0x7261U : 0x7a65726fU))));
        __Vtemp340[1U] = 0U;
        __Vtemp340[2U] = 0U;
        if ((0x10U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__regnum))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__Vfuncout[0U] 
                = __Vtemp294[0U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__Vfuncout[1U] 
                = __Vtemp294[1U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__Vfuncout[2U] 
                = __Vtemp294[2U];
        } else {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__Vfuncout[0U] 
                = __Vtemp340[0U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__Vfuncout[1U] 
                = __Vtemp340[1U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__Vfuncout[2U] 
                = __Vtemp340[2U];
        }
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[0U] 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__Vfuncout[0U];
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[1U] 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__Vfuncout[1U];
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[2U] 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__3__Vfuncout[2U];
        if ((1U & (((((((((((((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 1U)) 
                                    | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 2U))) 
                                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 3U))) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 4U))) 
                                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 5U))) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x29U))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x2aU))) 
                             | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x2bU))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x2cU))) 
                           | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x2dU))) | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x2eU))) 
                         | (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 6U)) | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 7U))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 8U)))) | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 9U))) 
                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0xaU))) | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x15U))) 
                     | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x16U))) | ((((((IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x1dU)) 
                                                   | (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x1eU))) 
                                                  | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x1fU))) 
                                                 | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x20U))) 
                                                | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x21U))) 
                                               | (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x22U)))) 
                   | (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x23U)) | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x24U))) 
                      | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                 >> 0x25U)))))) {
            if ((1U & ((((((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 1U)) | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 2U))) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 3U))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 4U))) | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 5U))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x29U))) 
                           | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x2aU))) | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x2bU))) 
                         | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                    >> 0x2cU))) | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x2dU))) 
                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x2eU))))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[1U] = 0U;
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[2U] = 0U;
            } else {
                if ((1U & (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                     >> 6U)) | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 7U))) 
                           | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 8U))))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[0U] = 0x2dU;
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[1U] = 0U;
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[2U] = 0U;
                } else {
                    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 9U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[0U] = 0x2dU;
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[1U] = 0U;
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[2U] = 0U;
                    } else {
                        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0xaU)))) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[0U] = 0x2dU;
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[1U] = 0U;
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[2U] = 0U;
                        } else {
                            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0x15U)))) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[0U] = 0x2dU;
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[1U] = 0U;
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[2U] = 0U;
                            } else {
                                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0x16U)))) {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[0U] = 0x2dU;
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[1U] = 0U;
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[2U] = 0U;
                                } else {
                                    if ((1U & ((((((IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x1dU)) 
                                                   | (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x1eU))) 
                                                  | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x1fU))) 
                                                 | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x20U))) 
                                                | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x21U))) 
                                               | (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x22U))))) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[0U] = 0x2dU;
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[1U] = 0U;
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[0U] = 0x2dU;
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[1U] = 0U;
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[2U] = 0U;
    if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum 
            = (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                        >> 0xfU));
        __Vtemp388[0U] = ((8U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                           ? ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x7436U : 0x7435U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x7434U : 0x7433U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x733131U : 0x733130U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x7339U : 0x7338U)))
                           : ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x7337U : 0x7336U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x7335U : 0x7334U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x7333U : 0x7332U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x6137U : 0x6136U))));
        __Vtemp388[1U] = 0U;
        __Vtemp388[2U] = 0U;
        __Vtemp434[0U] = ((8U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                           ? ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x6135U : 0x6134U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x6133U : 0x6132U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x6131U : 0x6130U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x7331U : 0x7330U)))
                           : ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x7432U : 0x7431U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x7430U : 0x7470U))
                               : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x6770U : 0x7370U)
                                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))
                                       ? 0x7261U : 0x7a65726fU))));
        __Vtemp434[1U] = 0U;
        __Vtemp434[2U] = 0U;
        if ((0x10U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__regnum))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__Vfuncout[0U] 
                = __Vtemp388[0U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__Vfuncout[1U] 
                = __Vtemp388[1U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__Vfuncout[2U] 
                = __Vtemp388[2U];
        } else {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__Vfuncout[0U] 
                = __Vtemp434[0U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__Vfuncout[1U] 
                = __Vtemp434[1U];
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__Vfuncout[2U] 
                = __Vtemp434[2U];
        }
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[0U] 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__Vfuncout[0U];
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[1U] 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__Vfuncout[1U];
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[2U] 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__Vfunc_get_regname_str__2__Vfuncout[2U];
        if ((1U & (((((((((((((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 1U)) 
                                    | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 2U))) 
                                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 3U))) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 4U))) 
                                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 5U))) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x29U))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x2aU))) 
                             | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x2bU))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x2cU))) 
                           | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x2dU))) | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x2eU))) 
                         | (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 6U)) | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 7U))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 8U)))) | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 9U))) 
                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0xaU))) | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x15U))) 
                     | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x16U))) | ((((((IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x1dU)) 
                                                   | (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x1eU))) 
                                                  | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x1fU))) 
                                                 | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x20U))) 
                                                | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x21U))) 
                                               | (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x22U)))) 
                   | (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x23U)) | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x24U))) 
                      | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                 >> 0x25U)))))) {
            if ((1U & (~ ((((((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 1U)) 
                                    | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 2U))) 
                                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 3U))) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 4U))) 
                                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 5U))) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x29U))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x2aU))) 
                             | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x2bU))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x2cU))) 
                           | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x2dU))) | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x2eU)))))) {
                if ((1U & (~ (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 6U)) | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 7U))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 8U)))))) {
                    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 9U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[2U] = 0U;
                    } else {
                        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0xaU)))) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[0U] = 0x7063U;
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[1U] = 0U;
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[2U] = 0U;
                        } else {
                            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0x15U)))) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[0U] = 0x2dU;
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[1U] = 0U;
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra[2U] = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) 
            & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w))) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__muldiv_opcode_valid_o 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) 
            & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w))) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) 
            & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w))) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__exec_opcode_valid_o 
        = ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w))) 
            & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w))) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r 
        = ((~ ((IData)(1U) << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) 
           & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r);
    if (((((((((((((((((((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x1dU)) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x1eU))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x1fU))) 
                             | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x20U))) 
                            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x21U))) 
                           | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x22U))) | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x29U))) 
                         | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                    >> 0x2aU))) | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x2bU))) 
                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x2cU))) | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x2dU))) 
                     | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x2eU))) | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x2fU))) 
                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x30U))) | (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x31U))) 
                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                            >> 0x32U))) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0x33U))) 
               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                          >> 0x34U))) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                 >> 0x35U))) 
             | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                        >> 0x36U))) & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__exec_opcode_valid_o)) 
           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o)) 
          & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o)) 
         & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__muldiv_opcode_valid_o))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r 
            = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r 
               | ((IData)(1U) << (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 7U))));
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r 
        = ((~ ((IData)(1U) << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w))) 
           & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r);
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r 
        = ((~ ((IData)(1U) << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) 
           & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r);
}

void Vriscv_soc_riscv_decode::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__fetch_valid_i = VL_RAND_RESET_I(1);
    __PVT__fetch_instr_i = VL_RAND_RESET_I(32);
    __PVT__fetch_pc_i = VL_RAND_RESET_I(32);
    __PVT__branch_request_i = VL_RAND_RESET_I(1);
    __PVT__branch_pc_i = VL_RAND_RESET_I(32);
    __PVT__branch_csr_request_i = VL_RAND_RESET_I(1);
    __PVT__branch_csr_pc_i = VL_RAND_RESET_I(32);
    __PVT__writeback_exec_idx_i = VL_RAND_RESET_I(5);
    __PVT__writeback_exec_squash_i = VL_RAND_RESET_I(1);
    __PVT__writeback_exec_value_i = VL_RAND_RESET_I(32);
    __PVT__writeback_mem_idx_i = VL_RAND_RESET_I(5);
    __PVT__writeback_mem_squash_i = VL_RAND_RESET_I(1);
    __PVT__writeback_mem_value_i = VL_RAND_RESET_I(32);
    __PVT__writeback_csr_idx_i = VL_RAND_RESET_I(5);
    __PVT__writeback_csr_squash_i = VL_RAND_RESET_I(1);
    __PVT__writeback_csr_value_i = VL_RAND_RESET_I(32);
    __PVT__writeback_muldiv_idx_i = VL_RAND_RESET_I(5);
    __PVT__writeback_muldiv_squash_i = VL_RAND_RESET_I(1);
    __PVT__writeback_muldiv_value_i = VL_RAND_RESET_I(32);
    __PVT__exec_stall_i = VL_RAND_RESET_I(1);
    __PVT__lsu_stall_i = VL_RAND_RESET_I(1);
    __PVT__csr_stall_i = VL_RAND_RESET_I(1);
    __PVT__muldiv_stall_i = VL_RAND_RESET_I(1);
    __PVT__fetch_branch_o = VL_RAND_RESET_I(1);
    __PVT__fetch_branch_pc_o = VL_RAND_RESET_I(32);
    __PVT__fetch_accept_o = VL_RAND_RESET_I(1);
    __PVT__exec_opcode_valid_o = VL_RAND_RESET_I(1);
    __PVT__lsu_opcode_valid_o = VL_RAND_RESET_I(1);
    __PVT__csr_opcode_valid_o = VL_RAND_RESET_I(1);
    __PVT__muldiv_opcode_valid_o = VL_RAND_RESET_I(1);
    __PVT__opcode_instr_o = VL_RAND_RESET_Q(58);
    __PVT__opcode_opcode_o = VL_RAND_RESET_I(32);
    __PVT__opcode_pc_o = VL_RAND_RESET_I(32);
    __PVT__opcode_rd_idx_o = VL_RAND_RESET_I(5);
    __PVT__opcode_ra_idx_o = VL_RAND_RESET_I(5);
    __PVT__opcode_rb_idx_o = VL_RAND_RESET_I(5);
    __PVT__opcode_ra_operand_o = VL_RAND_RESET_I(32);
    __PVT__opcode_rb_operand_o = VL_RAND_RESET_I(32);
    __PVT__fetch_invalidate_o = VL_RAND_RESET_I(1);
    __PVT__valid_q = VL_RAND_RESET_I(1);
    __PVT__pc_q = VL_RAND_RESET_I(32);
    __PVT__inst_q = VL_RAND_RESET_I(32);
    __PVT__fault_fetch_q = VL_RAND_RESET_I(1);
    __PVT__scoreboard_q = VL_RAND_RESET_I(32);
    __PVT__stall_scoreboard_r = VL_RAND_RESET_I(1);
    __PVT__stall_input_w = VL_RAND_RESET_I(1);
    __PVT__wb_csr_rd_w = VL_RAND_RESET_I(5);
    __PVT__ifence_q = VL_RAND_RESET_I(1);
    __PVT__scoreboard_r = VL_RAND_RESET_I(32);
    __PVT__opcode_instr_w = VL_RAND_RESET_Q(58);
    __PVT__opcode_instr_q = VL_RAND_RESET_Q(58);
    __PVT__opcode_ra_operand_r = VL_RAND_RESET_I(32);
    __PVT__opcode_rb_operand_r = VL_RAND_RESET_I(32);
    __PVT__opcode_valid_r = VL_RAND_RESET_I(1);
    __PVT__current_scoreboard_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(80, __PVT__dbg_inst_str);
    VL_RAND_RESET_W(80, __PVT__dbg_inst_ra);
    VL_RAND_RESET_W(80, __PVT__dbg_inst_rb);
    VL_RAND_RESET_W(80, __PVT__dbg_inst_rd);
    __PVT__dbg_inst_imm = VL_RAND_RESET_I(32);
    __PVT__dbg_inst_pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(80, __Vfunc_get_regname_str__2__Vfuncout);
    __Vfunc_get_regname_str__2__regnum = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(80, __Vfunc_get_regname_str__3__Vfuncout);
    __Vfunc_get_regname_str__3__regnum = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(80, __Vfunc_get_regname_str__4__Vfuncout);
    __Vfunc_get_regname_str__4__regnum = VL_RAND_RESET_I(5);
}
