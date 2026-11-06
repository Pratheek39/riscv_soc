// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

bool Vriscv_soc_riscv_exec::get_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::get_valid\n"); );
    CData/*0:0*/ get_valid__Vfuncrtn;
    // Body
    get_valid__Vfuncrtn = this->__PVT__v_dbg_valid_q;
    return (get_valid__Vfuncrtn);
}

uint32_t Vriscv_soc_riscv_exec::get_pc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::get_pc\n"); );
    IData/*31:0*/ get_pc__Vfuncrtn;
    // Body
    get_pc__Vfuncrtn = this->__PVT__v_dbg_pc_q;
    return (get_pc__Vfuncrtn);
}

void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__v_dbg_valid_q = ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i))) 
                                      && (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__exec_opcode_valid_w));
    vlSelfRef.__PVT__v_dbg_pc_q = ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i)
                                    ? 0U : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q);
}

void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__1(Vriscv_soc_riscv_exec* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelfRef.__PVT__result_q = 0U;
        vlSelfRef.__PVT__rd_x_q = 0U;
    } else {
        vlSelfRef.__PVT__result_q = vlSelfRef.__PVT__u_alu__DOT__result_r;
        vlSelfRef.__PVT__rd_x_q = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__exec_opcode_valid_w) 
                                    & (IData)(((0ULL 
                                                != 
                                                (0x0000000000649fffULL 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                               | (0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x0000000dU)) 
                                                      | ((IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                  >> 0x00000010U)) 
                                                         | (IData)(
                                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                    >> 0x00000013U)))))))))
                                    ? (0x0000001fU 
                                       & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                          >> 7U)) : 0U);
    }
}

void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__2(Vriscv_soc_riscv_exec* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_alu__DOT__alu_op_i = ((1U & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x0000000bU)))
                                              ? 4U : 
                                             ((1U & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x00000011U)))
                                               ? 7U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x00000010U)))
                                                   ? 8U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x00000012U)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x00000014U)))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x00000013U)))
                                                      ? 2U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                  >> 0x0000000cU)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                   >> 0x0000000fU)))
                                                        ? 9U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                    >> 0x0000000dU)))
                                                         ? 0x0bU
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                     >> 0x0000000eU)))
                                                          ? 0x0aU
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                      >> 1U)))
                                                           ? 4U
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))
                                                            ? 7U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                        >> 2U)))
                                                             ? 0x0bU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                         >> 3U)))
                                                              ? 0x0aU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                          >> 4U)))
                                                               ? 8U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                           >> 5U)))
                                                                ? 9U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                            >> 6U)))
                                                                 ? 1U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                             >> 7U)))
                                                                  ? 2U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                              >> 8U)))
                                                                   ? 3U
                                                                   : 
                                                                  (((1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x0000000aU)))
                                                                     ? 4U
                                                                     : 
                                                                    (4U 
                                                                     & (- (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x00000015U)))))))) 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (~ (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 9U))))))))))))))))))))))))));
}

void Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0x0000000bU)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x00000011U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x00000010U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x00000012U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x00000014U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x00000013U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x0000000cU)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x0000000fU)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x0000000dU)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x0000000eU)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 1U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 2U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 3U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 4U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 5U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r;
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 6U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = (0x0000001fU 
                                                & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                   >> 0x00000014U));
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 7U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = (0x0000001fU 
                                                & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                   >> 0x00000014U));
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 8U)))) {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = (0x0000001fU 
                                                & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                   >> 0x00000014U));
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
    } else {
        vlSelfRef.__PVT__u_alu__DOT__alu_b_i = (((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x0000000aU)))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)
                                                  : 
                                                 (4U 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                            >> 0x00000015U)))))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(
                                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                            >> 9U)))))));
        vlSelfRef.__PVT__u_alu__DOT__alu_a_i = ((1U 
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
                                                             >> 0x0000000aU)))
                                                  ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                                                  : 
                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
                                                  & (- (IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                            >> 0x00000015U)))))))));
    }
    vlSelfRef.__PVT__branch_r = 0U;
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0x15U)))) {
        vlSelfRef.__PVT__branch_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x16U)))) {
        vlSelfRef.__PVT__branch_r = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x17U)))) {
        vlSelfRef.__PVT__branch_r = (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w 
                                     == vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w);
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x18U)))) {
        vlSelfRef.__PVT__branch_r = (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w 
                                     != vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w);
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x19U)))) {
        vlSelfRef.__Vfunc_less_than_signed__0__y = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__Vfunc_less_than_signed__0__x = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
        vlSelfRef.__PVT__less_than_signed__Vstatic__v 
            = (vlSelfRef.__Vfunc_less_than_signed__0__x 
               - vlSelfRef.__Vfunc_less_than_signed__0__y);
        vlSelfRef.__Vfunc_less_than_signed__0__Vfuncout 
            = (1U & (((vlSelfRef.__Vfunc_less_than_signed__0__x 
                       >> 0x1fU) != (vlSelfRef.__Vfunc_less_than_signed__0__y 
                                     >> 0x1fU)) ? (vlSelfRef.__Vfunc_less_than_signed__0__x 
                                                   >> 0x1fU)
                      : (vlSelfRef.__PVT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelfRef.__PVT__branch_r = vlSelfRef.__Vfunc_less_than_signed__0__Vfuncout;
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x1aU)))) {
        vlSelfRef.__Vfunc_greater_than_signed__1__y 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w;
        vlSelfRef.__Vfunc_greater_than_signed__1__x 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w;
        vlSelfRef.__PVT__greater_than_signed__Vstatic__v 
            = (vlSelfRef.__Vfunc_greater_than_signed__1__y 
               - vlSelfRef.__Vfunc_greater_than_signed__1__x);
        vlSelfRef.__VlemCall_0__greater_than_signed 
            = (1U & (((vlSelfRef.__Vfunc_greater_than_signed__1__x 
                       >> 0x1fU) != (vlSelfRef.__Vfunc_greater_than_signed__1__y 
                                     >> 0x1fU)) ? (vlSelfRef.__Vfunc_greater_than_signed__1__y 
                                                   >> 0x1fU)
                      : (vlSelfRef.__PVT__greater_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelfRef.__PVT__branch_r = ((IData)(vlSelfRef.__VlemCall_0__greater_than_signed) 
                                     | (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w 
                                        == vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w));
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x1bU)))) {
        vlSelfRef.__PVT__branch_r = (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w 
                                     < vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w);
    } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x1cU)))) {
        vlSelfRef.__PVT__branch_r = (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w 
                                     >= vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w);
    }
    vlSelfRef.__PVT__u_alu__DOT__sub_res_w = (vlSelfRef.__PVT__u_alu__DOT__alu_a_i 
                                              - vlSelfRef.__PVT__u_alu__DOT__alu_b_i);
    if ((8U & (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i))) {
        vlSelfRef.__PVT__u_alu__DOT__result_r = ((4U 
                                                  & (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i))
                                                  ? vlSelfRef.__PVT__u_alu__DOT__alu_a_i
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i))
                                                    ? 
                                                   (((vlSelfRef.__PVT__u_alu__DOT__alu_a_i 
                                                      >> 0x1fU) 
                                                     != 
                                                     (vlSelfRef.__PVT__u_alu__DOT__alu_b_i 
                                                      >> 0x1fU))
                                                     ? 
                                                    ((vlSelfRef.__PVT__u_alu__DOT__alu_a_i 
                                                      >> 0x1fU)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((vlSelfRef.__PVT__u_alu__DOT__sub_res_w 
                                                      >> 0x1fU)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((vlSelfRef.__PVT__u_alu__DOT__alu_a_i 
                                                     < vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i))
                                                    ? 
                                                   (vlSelfRef.__PVT__u_alu__DOT__alu_a_i 
                                                    ^ vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                                                    : 
                                                   (vlSelfRef.__PVT__u_alu__DOT__alu_a_i 
                                                    | vlSelfRef.__PVT__u_alu__DOT__alu_b_i))));
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i))) {
        vlSelfRef.__PVT__u_alu__DOT__result_r = ((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i))
                                                   ? 
                                                  (vlSelfRef.__PVT__u_alu__DOT__alu_a_i 
                                                   & vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                                                   : vlSelfRef.__PVT__u_alu__DOT__sub_res_w)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i))
                                                   ? vlSelfRef.__PVT__u_alu__DOT__alu_a_i
                                                   : 
                                                  (vlSelfRef.__PVT__u_alu__DOT__alu_a_i 
                                                   + vlSelfRef.__PVT__u_alu__DOT__alu_b_i)));
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i))) {
        vlSelfRef.__PVT__u_alu__DOT__shift_right_fill_r 
            = (((vlSelfRef.__PVT__u_alu__DOT__alu_a_i 
                 >> 0x1fU) & (3U == (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i)))
                ? 0xffffU : 0U);
        vlSelfRef.__PVT__u_alu__DOT__shift_right_1_r 
            = ((1U & vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                ? ((0x80000000U & ((IData)(vlSelfRef.__PVT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x00000010U)) 
                   | (vlSelfRef.__PVT__u_alu__DOT__alu_a_i 
                      >> 1U)) : vlSelfRef.__PVT__u_alu__DOT__alu_a_i);
        vlSelfRef.__PVT__u_alu__DOT__shift_right_2_r 
            = ((2U & vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                ? ((0xc0000000U & ((IData)(vlSelfRef.__PVT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x00000010U)) 
                   | (vlSelfRef.__PVT__u_alu__DOT__shift_right_1_r 
                      >> 2U)) : vlSelfRef.__PVT__u_alu__DOT__shift_right_1_r);
        vlSelfRef.__PVT__u_alu__DOT__shift_right_4_r 
            = ((4U & vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                ? ((0xf0000000U & ((IData)(vlSelfRef.__PVT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x00000010U)) 
                   | (vlSelfRef.__PVT__u_alu__DOT__shift_right_2_r 
                      >> 4U)) : vlSelfRef.__PVT__u_alu__DOT__shift_right_2_r);
        vlSelfRef.__PVT__u_alu__DOT__shift_right_8_r 
            = ((8U & vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                ? ((0xff000000U & ((IData)(vlSelfRef.__PVT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x00000010U)) 
                   | (vlSelfRef.__PVT__u_alu__DOT__shift_right_4_r 
                      >> 8U)) : vlSelfRef.__PVT__u_alu__DOT__shift_right_4_r);
        vlSelfRef.__PVT__u_alu__DOT__result_r = ((0x00000010U 
                                                  & vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                                                  ? 
                                                 (((IData)(vlSelfRef.__PVT__u_alu__DOT__shift_right_fill_r) 
                                                   << 0x00000010U) 
                                                  | (vlSelfRef.__PVT__u_alu__DOT__shift_right_8_r 
                                                     >> 0x10U))
                                                  : vlSelfRef.__PVT__u_alu__DOT__shift_right_8_r);
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_alu__DOT__alu_op_i))) {
        vlSelfRef.__PVT__u_alu__DOT__shift_left_1_r 
            = ((1U & vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                ? (vlSelfRef.__PVT__u_alu__DOT__alu_a_i 
                   << 1U) : vlSelfRef.__PVT__u_alu__DOT__alu_a_i);
        vlSelfRef.__PVT__u_alu__DOT__shift_left_2_r 
            = ((2U & vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                ? (vlSelfRef.__PVT__u_alu__DOT__shift_left_1_r 
                   << 2U) : vlSelfRef.__PVT__u_alu__DOT__shift_left_1_r);
        vlSelfRef.__PVT__u_alu__DOT__shift_left_4_r 
            = ((4U & vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                ? (vlSelfRef.__PVT__u_alu__DOT__shift_left_2_r 
                   << 4U) : vlSelfRef.__PVT__u_alu__DOT__shift_left_2_r);
        vlSelfRef.__PVT__u_alu__DOT__shift_left_8_r 
            = ((8U & vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                ? (vlSelfRef.__PVT__u_alu__DOT__shift_left_4_r 
                   << 8U) : vlSelfRef.__PVT__u_alu__DOT__shift_left_4_r);
        vlSelfRef.__PVT__u_alu__DOT__result_r = ((0x00000010U 
                                                  & vlSelfRef.__PVT__u_alu__DOT__alu_b_i)
                                                  ? 
                                                 (vlSelfRef.__PVT__u_alu__DOT__shift_left_8_r 
                                                  << 0x00000010U)
                                                  : vlSelfRef.__PVT__u_alu__DOT__shift_left_8_r);
    } else {
        vlSelfRef.__PVT__u_alu__DOT__result_r = vlSelfRef.__PVT__u_alu__DOT__alu_a_i;
    }
}
