// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

VL_ATTR_COLD void Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc_riscv_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT__wb_csr_rd_w = ((- (IData)((1U 
                                                & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q))))) 
                                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w));
}

VL_ATTR_COLD void Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc_riscv_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1\n"); );
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

VL_ATTR_COLD void Vriscv_soc_riscv_decode___ctor_var_reset(Vriscv_soc_riscv_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_decode___ctor_var_reset\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__fetch_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5049708935746469809ull);
    vlSelf->__PVT__fetch_instr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1485712280118880748ull);
    vlSelf->__PVT__fetch_pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9243930454662942861ull);
    vlSelf->__PVT__branch_request_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12834344949317714083ull);
    vlSelf->__PVT__branch_pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10508872424996228746ull);
    vlSelf->__PVT__branch_csr_request_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6368111171547119998ull);
    vlSelf->__PVT__branch_csr_pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6628382775151756009ull);
    vlSelf->__PVT__writeback_exec_idx_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3819753340881603037ull);
    vlSelf->__PVT__writeback_exec_squash_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10084735943434505732ull);
    vlSelf->__PVT__writeback_exec_value_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10050812812956019329ull);
    vlSelf->__PVT__writeback_mem_idx_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16984103578641748468ull);
    vlSelf->__PVT__writeback_mem_squash_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16212333303160169302ull);
    vlSelf->__PVT__writeback_mem_value_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8420019174359303088ull);
    vlSelf->__PVT__writeback_csr_idx_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11982897812498919335ull);
    vlSelf->__PVT__writeback_csr_squash_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8685491967916875558ull);
    vlSelf->__PVT__writeback_csr_value_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14978193878032680841ull);
    vlSelf->__PVT__writeback_muldiv_idx_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 903577377530336942ull);
    vlSelf->__PVT__writeback_muldiv_squash_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8416675454060043921ull);
    vlSelf->__PVT__writeback_muldiv_value_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2067225058447039113ull);
    vlSelf->__PVT__exec_stall_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13623379989270654457ull);
    vlSelf->__PVT__lsu_stall_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 653715584617613184ull);
    vlSelf->__PVT__csr_stall_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2538981896282562139ull);
    vlSelf->__PVT__muldiv_stall_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16344376674328326267ull);
    vlSelf->__PVT__fetch_branch_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14864131852528137173ull);
    vlSelf->__PVT__fetch_branch_pc_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7193578208927525627ull);
    vlSelf->__PVT__fetch_accept_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13593247937512510341ull);
    vlSelf->__PVT__exec_opcode_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12090226624120289510ull);
    vlSelf->__PVT__lsu_opcode_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7082808311068524652ull);
    vlSelf->__PVT__csr_opcode_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2955958749262499821ull);
    vlSelf->__PVT__muldiv_opcode_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6496666306590597728ull);
    vlSelf->__PVT__opcode_instr_o = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 986147995092836868ull);
    vlSelf->__PVT__opcode_opcode_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16687214645521744267ull);
    vlSelf->__PVT__opcode_pc_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2880022999100449230ull);
    vlSelf->__PVT__opcode_rd_idx_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17874956051297038609ull);
    vlSelf->__PVT__opcode_ra_idx_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2849585302838057436ull);
    vlSelf->__PVT__opcode_rb_idx_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8289685325403329027ull);
    vlSelf->__PVT__opcode_ra_operand_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4738391369909596404ull);
    vlSelf->__PVT__opcode_rb_operand_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10670358979975896345ull);
    vlSelf->__PVT__fetch_invalidate_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17786492909307167085ull);
    vlSelf->__PVT__valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 335290314954048330ull);
    vlSelf->__PVT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7900220468148566206ull);
    vlSelf->__PVT__inst_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15999199221468129092ull);
    vlSelf->__PVT__fault_fetch_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1507397838768607418ull);
    vlSelf->__PVT__scoreboard_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3988104875105171853ull);
    vlSelf->__PVT__stall_scoreboard_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18013225321498074903ull);
    vlSelf->__PVT__ra_value_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 392680533190494578ull);
    vlSelf->__PVT__rb_value_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11609702209297297292ull);
    vlSelf->__PVT__stall_input_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10531868398862903202ull);
    vlSelf->__PVT__wb_csr_rd_w = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14355952516791220278ull);
    vlSelf->__PVT__ifence_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6641464407617761867ull);
    vlSelf->__PVT__scoreboard_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11452891830949209016ull);
    vlSelf->__PVT__opcode_instr_w = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 7423902897486199185ull);
    vlSelf->__PVT__invalid_inst_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2600015455561893189ull);
    vlSelf->__PVT__opcode_instr_q = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 10063835254509024775ull);
    vlSelf->__PVT__opcode_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14362362785066316541ull);
    vlSelf->__PVT__current_scoreboard_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8492296849499238027ull);
    vlSelf->__PVT__dbg_inst_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1299786899921334960ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_23 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_56 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_57 = 0;
    vlSelf->__Vdly__pc_q = 0;
}
