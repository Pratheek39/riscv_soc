// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

bool Vriscv_soc_riscv_decode::get_reg_valid(uint32_t r) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode::get_reg_valid\n"); );
    CData/*0:0*/ get_reg_valid__Vfuncrtn;
    // Body
    get_reg_valid__Vfuncrtn = (1U & (~ (this->__PVT__scoreboard_q 
                                        >> (IData)(r))));
    return (get_reg_valid__Vfuncrtn);
}

uint32_t Vriscv_soc_riscv_decode::get_register(uint32_t r) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode::get_register\n"); );
    IData/*31:0*/ get_register__Vfuncrtn;
    // Locals
    CData/*4:0*/ __Vfunc_get_register__0__r;
    __Vfunc_get_register__0__r = 0;
    // Body
    __Vfunc_get_register__0__r = r;
    get_register__Vfuncrtn = ((0x00000010U & (IData)(__Vfunc_get_register__0__r))
                               ? ((8U & (IData)(__Vfunc_get_register__0__r))
                                   ? ((4U & (IData)(__Vfunc_get_register__0__r))
                                       ? ((2U & (IData)(__Vfunc_get_register__0__r))
                                           ? ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r31_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r30_q)
                                           : ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r29_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r28_q))
                                       : ((2U & (IData)(__Vfunc_get_register__0__r))
                                           ? ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r27_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r26_q)
                                           : ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r25_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r24_q)))
                                   : ((4U & (IData)(__Vfunc_get_register__0__r))
                                       ? ((2U & (IData)(__Vfunc_get_register__0__r))
                                           ? ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r23_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r22_q)
                                           : ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r21_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r20_q))
                                       : ((2U & (IData)(__Vfunc_get_register__0__r))
                                           ? ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r19_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r18_q)
                                           : ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r17_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r16_q))))
                               : ((8U & (IData)(__Vfunc_get_register__0__r))
                                   ? ((4U & (IData)(__Vfunc_get_register__0__r))
                                       ? ((2U & (IData)(__Vfunc_get_register__0__r))
                                           ? ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r15_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r14_q)
                                           : ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r13_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r12_q))
                                       : ((2U & (IData)(__Vfunc_get_register__0__r))
                                           ? ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r11_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r10_q)
                                           : ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r9_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r8_q)))
                                   : ((4U & (IData)(__Vfunc_get_register__0__r))
                                       ? ((2U & (IData)(__Vfunc_get_register__0__r))
                                           ? ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r7_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r6_q)
                                           : ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r5_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r4_q))
                                       : ((2U & (IData)(__Vfunc_get_register__0__r))
                                           ? ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r3_q
                                               : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r2_q)
                                           : ((1U & (IData)(__Vfunc_get_register__0__r))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r1_q
                                               : 0U)))));
    if (((0U != (IData)(r)) & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q) 
                               == (IData)(r)))) {
        get_register__Vfuncrtn = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
    }
    if (((0U != (IData)(r)) & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r) 
                               == (IData)(r)))) {
        get_register__Vfuncrtn = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
    }
    return (get_register__Vfuncrtn);
}

bool Vriscv_soc_riscv_decode::set_register(uint32_t r, uint32_t value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode::set_register\n"); );
    CData/*0:0*/ set_register__Vfuncrtn;
    // Body
    return (set_register__Vfuncrtn);
}

void Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc_riscv_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__pc_q = vlSelfRef.__PVT__pc_q;
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelfRef.__Vdly__pc_q = 0U;
        vlSelfRef.__PVT__scoreboard_q = 0U;
        vlSelfRef.__PVT__valid_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_request_w) 
             | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q))) {
            vlSelfRef.__Vdly__pc_q = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                                       ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                                       : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_pc_w);
            vlSelfRef.__PVT__valid_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__stall_input_w)))) {
            if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_valid_w) {
                vlSelfRef.__Vdly__pc_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_pc_w;
                vlSelfRef.__PVT__valid_q = 1U;
            } else {
                if (vlSelfRef.__PVT__valid_q) {
                    vlSelfRef.__Vdly__pc_q = ((IData)(4U) 
                                              + vlSelfRef.__PVT__pc_q);
                }
                vlSelfRef.__PVT__valid_q = 0U;
            }
        }
        vlSelfRef.__PVT__scoreboard_q = (0xfffffffeU 
                                         & vlSelfRef.__PVT__scoreboard_r);
    }
    vlSelfRef.__PVT__ifence_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i)) 
                                 & (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_valid_w) 
                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_accept_w)) 
                                    & (0x0000100fU 
                                       == (0x0000707fU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))));
}

void Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc_riscv_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pc_q = vlSelfRef.__Vdly__pc_q;
    vlSelfRef.__PVT__wb_csr_rd_w = ((- (IData)((1U 
                                                & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q))))) 
                                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w));
}

void Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__2(Vriscv_soc_riscv_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelfRef.__PVT__opcode_instr_q = 0ULL;
        vlSelfRef.__PVT__inst_q = 0U;
    } else if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_request_w) 
                | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q))) {
        vlSelfRef.__PVT__opcode_instr_q = 0ULL;
        vlSelfRef.__PVT__inst_q = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__stall_input_w)))) {
        vlSelfRef.__PVT__opcode_instr_q = (((QData)((IData)(vlSelfRef.__PVT__invalid_inst_w)) 
                                            << 0x00000039U) 
                                           | (0x01ffffffffffffffULL 
                                              & vlSelfRef.__PVT__opcode_instr_w));
        vlSelfRef.__PVT__inst_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w;
    }
    vlSelfRef.__PVT__rb_value_w = ((0x01000000U & vlSelfRef.__PVT__inst_q)
                                    ? ((0x00800000U 
                                        & vlSelfRef.__PVT__inst_q)
                                        ? ((0x00400000U 
                                            & vlSelfRef.__PVT__inst_q)
                                            ? ((0x00200000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r31_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r30_q)
                                                : (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r29_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r28_q))
                                            : ((0x00200000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r27_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r26_q)
                                                : (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r25_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r24_q)))
                                        : ((0x00400000U 
                                            & vlSelfRef.__PVT__inst_q)
                                            ? ((0x00200000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r23_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r22_q)
                                                : (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r21_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r20_q))
                                            : ((0x00200000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r19_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r18_q)
                                                : (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r17_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r16_q))))
                                    : ((0x00800000U 
                                        & vlSelfRef.__PVT__inst_q)
                                        ? ((0x00400000U 
                                            & vlSelfRef.__PVT__inst_q)
                                            ? ((0x00200000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r15_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r14_q)
                                                : (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r13_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r12_q))
                                            : ((0x00200000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r11_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r10_q)
                                                : (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r9_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r8_q)))
                                        : ((0x00400000U 
                                            & vlSelfRef.__PVT__inst_q)
                                            ? ((0x00200000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r7_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r6_q)
                                                : (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r5_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r4_q))
                                            : ((0x00200000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00100000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r3_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r2_q)
                                                : (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r1_q 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__inst_q 
                                                                    >> 0x00000014U)))))))));
    vlSelfRef.__PVT__ra_value_w = ((0x00080000U & vlSelfRef.__PVT__inst_q)
                                    ? ((0x00040000U 
                                        & vlSelfRef.__PVT__inst_q)
                                        ? ((0x00020000U 
                                            & vlSelfRef.__PVT__inst_q)
                                            ? ((0x00010000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r31_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r30_q)
                                                : (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r29_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r28_q))
                                            : ((0x00010000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r27_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r26_q)
                                                : (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r25_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r24_q)))
                                        : ((0x00020000U 
                                            & vlSelfRef.__PVT__inst_q)
                                            ? ((0x00010000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r23_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r22_q)
                                                : (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r21_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r20_q))
                                            : ((0x00010000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r19_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r18_q)
                                                : (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r17_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r16_q))))
                                    : ((0x00040000U 
                                        & vlSelfRef.__PVT__inst_q)
                                        ? ((0x00020000U 
                                            & vlSelfRef.__PVT__inst_q)
                                            ? ((0x00010000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r15_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r14_q)
                                                : (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r13_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r12_q))
                                            : ((0x00010000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r11_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r10_q)
                                                : (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r9_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r8_q)))
                                        : ((0x00020000U 
                                            & vlSelfRef.__PVT__inst_q)
                                            ? ((0x00010000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r7_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r6_q)
                                                : (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r5_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r4_q))
                                            : ((0x00010000U 
                                                & vlSelfRef.__PVT__inst_q)
                                                ? (
                                                   (0x00008000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r3_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r2_q)
                                                : (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r1_q 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__inst_q 
                                                                    >> 0x0000000fU)))))))));
}

void Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc_riscv_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__opcode_instr_w = (((QData)((IData)(
                                                        (((((((0x08000053U 
                                                               == 
                                                               (0xfe00007fU 
                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                              << 5U) 
                                                             | (((0x00000053U 
                                                                  == 
                                                                  (0xfe00007fU 
                                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                 << 4U) 
                                                                | ((0x02007033U 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                   << 3U))) 
                                                            | (((0x02006033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                << 2U) 
                                                               | (((0x02005033U 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                   << 1U) 
                                                                  | (0x02004033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))))) 
                                                           << 0x00000013U) 
                                                          | (((((0x02003033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                << 5U) 
                                                               | (((0x02002033U 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                   << 4U) 
                                                                  | ((0x02001033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                     << 3U))) 
                                                              | (((0x02000033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                  << 2U) 
                                                                 | (((0x00007073U 
                                                                      == 
                                                                      (0x0000707fU 
                                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                     << 1U) 
                                                                    | (0x00006073U 
                                                                       == 
                                                                       (0x0000707fU 
                                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))))) 
                                                             << 0x0000000dU)) 
                                                         | (((((((0x00005073U 
                                                                  == 
                                                                  (0x0000707fU 
                                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                 << 3U) 
                                                                | ((0x00003073U 
                                                                    == 
                                                                    (0x0000707fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                   << 2U)) 
                                                               | (((0x00002073U 
                                                                    == 
                                                                    (0x0000707fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                   << 1U) 
                                                                  | (0x00001073U 
                                                                     == 
                                                                     (0x0000707fU 
                                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                              << 9U) 
                                                             | (((0x10200073U 
                                                                  == 
                                                                  (0xdfffffffU 
                                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                 << 8U) 
                                                                | (((0x00100073U 
                                                                     == vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w) 
                                                                    << 7U) 
                                                                   | ((0x00000073U 
                                                                       == vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w) 
                                                                      << 6U)))) 
                                                            | ((((0x00002023U 
                                                                  == 
                                                                  (0x0000707fU 
                                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                 << 5U) 
                                                                | (((0x00001023U 
                                                                     == 
                                                                     (0x0000707fU 
                                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                    << 4U) 
                                                                   | ((0x00000023U 
                                                                       == 
                                                                       (0x0000707fU 
                                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                      << 3U))) 
                                                               | (((0x00006003U 
                                                                    == 
                                                                    (0x0000707fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                   << 2U) 
                                                                  | (((0x00005003U 
                                                                       == 
                                                                       (0x0000707fU 
                                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                      << 1U) 
                                                                     | (0x00004003U 
                                                                        == 
                                                                        (0x0000707fU 
                                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))))))))) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         (((((((((0x00002003U 
                                                                  == 
                                                                  (0x0000707fU 
                                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                 << 3U) 
                                                                | ((0x00001003U 
                                                                    == 
                                                                    (0x0000707fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                   << 2U)) 
                                                               | (((3U 
                                                                    == 
                                                                    (0x0000707fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                   << 1U) 
                                                                  | (0x00007063U 
                                                                     == 
                                                                     (0x0000707fU 
                                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                              << 0x0000000cU) 
                                                             | (((((0x00006063U 
                                                                    == 
                                                                    (0x0000707fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                   << 3U) 
                                                                  | ((0x00005063U 
                                                                      == 
                                                                      (0x0000707fU 
                                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                     << 2U)) 
                                                                 | (((0x00004063U 
                                                                      == 
                                                                      (0x0000707fU 
                                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                     << 1U) 
                                                                    | (0x00001063U 
                                                                       == 
                                                                       (0x0000707fU 
                                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                << 8U)) 
                                                            | ((((((0x00000063U 
                                                                    == 
                                                                    (0x0000707fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                   << 3U) 
                                                                  | ((0x00000067U 
                                                                      == 
                                                                      (0x0000707fU 
                                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                     << 2U)) 
                                                                 | (((0x0000006fU 
                                                                      == 
                                                                      (0x0000007fU 
                                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                     << 1U) 
                                                                    | (0x40005033U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                << 4U) 
                                                               | ((((0x00005033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                    << 3U) 
                                                                   | ((0x00001033U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                      << 2U)) 
                                                                  | (((0x00007033U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                      << 1U) 
                                                                     | (0x00006033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))))) 
                                                           << 0x00000010U) 
                                                          | (((((((0x00004033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                  << 3U) 
                                                                 | ((0x00003033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                    << 2U)) 
                                                                | (((0x00002033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                    << 1U) 
                                                                   | (0x40000033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                               << 0x0000000cU) 
                                                              | (((((0x00000033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                    << 3U) 
                                                                   | ((0x00000017U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                      << 2U)) 
                                                                  | (((0x00000037U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                      << 1U) 
                                                                     | (0x40005013U 
                                                                        == 
                                                                        (0xfc00707fU 
                                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                 << 8U)) 
                                                             | ((((((0x00005013U 
                                                                     == 
                                                                     (0xfc00707fU 
                                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                    << 3U) 
                                                                   | ((0x00001013U 
                                                                       == 
                                                                       (0xfc00707fU 
                                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                      << 2U)) 
                                                                  | (((0x00004013U 
                                                                       == 
                                                                       (0x0000707fU 
                                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                      << 1U) 
                                                                     | (0x00006013U 
                                                                        == 
                                                                        (0x0000707fU 
                                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))) 
                                                                 << 4U) 
                                                                | ((((0x00003013U 
                                                                      == 
                                                                      (0x0000707fU 
                                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                     << 3U) 
                                                                    | ((0x00002013U 
                                                                        == 
                                                                        (0x0000707fU 
                                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                       << 2U)) 
                                                                   | (((0x00000013U 
                                                                        == 
                                                                        (0x0000707fU 
                                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                       << 1U) 
                                                                      | (0x00007013U 
                                                                         == 
                                                                         (0x0000707fU 
                                                                          & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))))))))));
    vlSelfRef.__PVT__invalid_inst_w = (1U & (~ ((0x08000053U 
                                                 == 
                                                 (0xfe00007fU 
                                                  & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                | ((0x00000053U 
                                                    == 
                                                    (0xfe00007fU 
                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                   | ((0x02007033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                      | ((0x02006033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                         | ((0x02005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                            | ((0x02004033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                               | ((0x02003033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                  | ((0x02002033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                     | ((0x02001033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                        | ((0x02000033U 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                           | ((0x00007073U 
                                                                               == 
                                                                               (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                              | ((0x00006073U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00005073U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00003073U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00002073U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00001073U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00100073U 
                                                                                == vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w) 
                                                                                | ((0x00000073U 
                                                                                == vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w) 
                                                                                | ((0x00002023U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00001023U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00000023U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00006003U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00005003U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00004003U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00002003U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00001003U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00007063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00006063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00005063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00004063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00001063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00000063U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00000067U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x0000006fU 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00001033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00000017U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00000037U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x40005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00001013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00004013U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00006013U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00003013U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00002013U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00000013U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x00007013U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x10500073U 
                                                                                == 
                                                                                (0xffff8fffU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x0000000fU 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | ((0x12000073U 
                                                                                == 
                                                                                (0xfe007fffU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                                                | (0x0000100fU 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

void Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc_riscv_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__opcode_valid_r = ((IData)(vlSelfRef.__PVT__valid_q) 
                                       & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)));
    vlSelfRef.__PVT__stall_scoreboard_r = 0U;
    vlSelfRef.__PVT__current_scoreboard_r = vlSelfRef.__PVT__scoreboard_q;
    vlSelfRef.__PVT__current_scoreboard_r = ((~ ((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) 
                                             & vlSelfRef.__PVT__current_scoreboard_r);
    if ((1U & (((vlSelfRef.__PVT__current_scoreboard_r 
                 >> (0x0000001fU & (vlSelfRef.__PVT__inst_q 
                                    >> 0x0000000fU))) 
                | (vlSelfRef.__PVT__current_scoreboard_r 
                   >> (0x0000001fU & (vlSelfRef.__PVT__inst_q 
                                      >> 0x00000014U)))) 
               | (vlSelfRef.__PVT__current_scoreboard_r 
                  >> (0x0000001fU & (vlSelfRef.__PVT__inst_q 
                                     >> 7U)))))) {
        vlSelfRef.__PVT__stall_scoreboard_r = 1U;
        vlSelfRef.__PVT__opcode_valid_r = 0U;
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_56 = (IData)(
                                                        ((0x0001000000000000ULL 
                                                          == 
                                                          (0x0003000000000000ULL 
                                                           & vlSelfRef.__PVT__opcode_instr_q)) 
                                                         & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w 
                                                            >> 0x0000001fU)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_57 = (1U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__opcode_instr_q 
                                                                >> 0x00000031U)))
                                                     ? 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w 
                                                     >> 0x0000001fU)
                                                     : 
                                                    ((IData)(
                                                             (vlSelfRef.__PVT__opcode_instr_q 
                                                              >> 0x00000030U)) 
                                                     & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w 
                                                        >> 0x0000001fU))));
    vlSelfRef.__PVT__stall_input_w = ((IData)(vlSelfRef.__PVT__stall_scoreboard_r) 
                                      | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w) 
                                         | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w) 
                                            | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w))));
    if (vlSelfRef.__PVT__opcode_valid_r) {
        if ((1U & ((0ULL != (0x0000000000600600ULL 
                             & vlSelfRef.__PVT__opcode_instr_q)) 
                   | (((((((((((((((1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                                  >> 1U))) 
                                   || (1U & (IData)(vlSelfRef.__PVT__opcode_instr_q))) 
                                  || (1U & (IData)(
                                                   (vlSelfRef.__PVT__opcode_instr_q 
                                                    >> 2U)))) 
                                 || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                                   >> 3U)))) 
                                || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                                  >> 4U)))) 
                               || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                                 >> 5U)))) 
                              || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                                >> 0x29U)))) 
                             || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                               >> 0x2aU)))) 
                            || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                              >> 0x2bU)))) 
                           || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                             >> 0x2cU)))) 
                          || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                            >> 0x2dU)))) 
                         || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                           >> 0x2eU)))) 
                        | (((1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                           >> 6U))) 
                            || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                              >> 7U)))) 
                           || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                             >> 8U))))) 
                       | ((((((1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                             >> 0x1dU))) 
                              || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                                >> 0x1eU)))) 
                             || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                               >> 0x1fU)))) 
                            || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                              >> 0x20U)))) 
                           || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                             >> 0x21U)))) 
                          || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                            >> 0x22U))))) 
                      | (((1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                         >> 0x23U))) 
                          || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                            >> 0x24U)))) 
                         || (1U & (IData)((vlSelfRef.__PVT__opcode_instr_q 
                                           >> 0x25U)))))))) {
            vlSelfRef.__PVT__dbg_inst_imm = (((((((
                                                   ((((((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__opcode_instr_q 
                                                                    >> 1U))) 
                                                        || (1U 
                                                            & (IData)(vlSelfRef.__PVT__opcode_instr_q))) 
                                                       || (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__opcode_instr_q 
                                                                      >> 2U)))) 
                                                      || (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__opcode_instr_q 
                                                                     >> 3U)))) 
                                                     || (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__opcode_instr_q 
                                                                    >> 4U)))) 
                                                    || (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__opcode_instr_q 
                                                                   >> 5U)))) 
                                                   || (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__opcode_instr_q 
                                                                  >> 0x29U)))) 
                                                  || (1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__opcode_instr_q 
                                                                 >> 0x2aU)))) 
                                                 || (1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__opcode_instr_q 
                                                                >> 0x2bU)))) 
                                                || (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__opcode_instr_q 
                                                               >> 0x2cU)))) 
                                               || (1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__opcode_instr_q 
                                                              >> 0x2dU)))) 
                                              || (1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__opcode_instr_q 
                                                             >> 0x2eU))))
                                              ? (((- (IData)(
                                                             (vlSelfRef.__PVT__inst_q 
                                                              >> 0x1fU))) 
                                                  << 0x0000000cU) 
                                                 | (vlSelfRef.__PVT__inst_q 
                                                    >> 0x14U))
                                              : (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__opcode_instr_q 
                                                               >> 6U))) 
                                                   || (1U 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__opcode_instr_q 
                                                                  >> 7U)))) 
                                                  || (1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__opcode_instr_q 
                                                                 >> 8U))))
                                                  ? 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.__PVT__inst_q 
                                                     >> 0x14U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.__PVT__opcode_instr_q 
                                                              >> 9U)))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.__PVT__inst_q)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__opcode_instr_q 
                                                               >> 0x0aU)))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelfRef.__PVT__inst_q)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__opcode_instr_q 
                                                                >> 0x15U)))
                                                     ? 
                                                    (vlSelfRef.__PVT__pc_q 
                                                     + 
                                                     (((- (IData)(
                                                                  (vlSelfRef.__PVT__inst_q 
                                                                   >> 0x1fU))) 
                                                       << 0x00000014U) 
                                                      | ((((0x000001feU 
                                                            & (vlSelfRef.__PVT__inst_q 
                                                               >> 0x0000000bU)) 
                                                           | (1U 
                                                              & (vlSelfRef.__PVT__inst_q 
                                                                 >> 0x14U))) 
                                                          << 0x0000000bU) 
                                                         | ((0x000007e0U 
                                                             & (vlSelfRef.__PVT__inst_q 
                                                                >> 0x00000014U)) 
                                                            | (0x0000001eU 
                                                               & (vlSelfRef.__PVT__inst_q 
                                                                  >> 0x00000014U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__opcode_instr_q 
                                                                 >> 0x16U)))
                                                      ? 
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w 
                                                      + 
                                                      (((- (IData)(
                                                                   (vlSelfRef.__PVT__inst_q 
                                                                    >> 0x1fU))) 
                                                        << 0x0000000cU) 
                                                       | (vlSelfRef.__PVT__inst_q 
                                                          >> 0x14U)))
                                                      : 
                                                     (((((((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__opcode_instr_q 
                                                                       >> 0x1dU))) 
                                                           || (1U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__opcode_instr_q 
                                                                          >> 0x1eU)))) 
                                                          || (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__opcode_instr_q 
                                                                         >> 0x1fU)))) 
                                                         || (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__opcode_instr_q 
                                                                        >> 0x20U)))) 
                                                        || (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__opcode_instr_q 
                                                                       >> 0x21U)))) 
                                                       || (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__opcode_instr_q 
                                                                      >> 0x22U))))
                                                       ? 
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w 
                                                       + 
                                                       (((- (IData)(
                                                                    (vlSelfRef.__PVT__inst_q 
                                                                     >> 0x1fU))) 
                                                         << 0x0000000cU) 
                                                        | (vlSelfRef.__PVT__inst_q 
                                                           >> 0x14U)))
                                                       : 
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w 
                                                       + 
                                                       (((- (IData)(
                                                                    (vlSelfRef.__PVT__inst_q 
                                                                     >> 0x1fU))) 
                                                         << 0x0000000cU) 
                                                        | ((0x00000fe0U 
                                                            & (vlSelfRef.__PVT__inst_q 
                                                               >> 0x00000014U)) 
                                                           | (0x0000001fU 
                                                              & (vlSelfRef.__PVT__inst_q 
                                                                 >> 7U))))))))))));
        }
    }
}

void Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__2(Vriscv_soc_riscv_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__scoreboard_r = vlSelfRef.__PVT__scoreboard_q;
    vlSelfRef.__PVT__scoreboard_r = ((~ ((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) 
                                     & vlSelfRef.__PVT__scoreboard_r);
    if ((((((IData)((0ULL != (0x007ffe07e0000000ULL 
                              & vlSelfRef.__PVT__opcode_instr_q))) 
            & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__exec_opcode_valid_w)) 
           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_opcode_valid_w)) 
          & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w)) 
         & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_opcode_valid_w))) {
        vlSelfRef.__PVT__scoreboard_r = (vlSelfRef.__PVT__scoreboard_r 
                                         | (0x00000000ffffffffULL 
                                            & ((IData)(1U) 
                                               << (0x0000001fU 
                                                   & (vlSelfRef.__PVT__inst_q 
                                                      >> 7U)))));
    }
    vlSelfRef.__PVT__scoreboard_r = ((~ ((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w))) 
                                     & vlSelfRef.__PVT__scoreboard_r);
    vlSelfRef.__PVT__scoreboard_r = ((~ ((IData)(1U) 
                                         << (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) 
                                     & vlSelfRef.__PVT__scoreboard_r);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_24 = ((IData)(
                                                         (vlSelfRef.__PVT__opcode_instr_q 
                                                          >> 0x00000026U)) 
                                                 & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w));
}
