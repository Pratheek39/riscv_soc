// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

uint32_t Vriscv_soc_riscv_regfile::get_register(uint32_t r) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_soc_riscv_regfile::get_register\n"); );
    IData/*31:0*/ get_register__Vfuncrtn;
    // Body
    get_register__Vfuncrtn = ((0x00000010U & (IData)(r))
                               ? ((8U & (IData)(r))
                                   ? ((4U & (IData)(r))
                                       ? ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__reg_r31_q
                                               : this->__PVT__reg_r30_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__reg_r29_q
                                               : this->__PVT__reg_r28_q))
                                       : ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__reg_r27_q
                                               : this->__PVT__reg_r26_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__reg_r25_q
                                               : this->__PVT__reg_r24_q)))
                                   : ((4U & (IData)(r))
                                       ? ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__reg_r23_q
                                               : this->__PVT__reg_r22_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__reg_r21_q
                                               : this->__PVT__reg_r20_q))
                                       : ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__reg_r19_q
                                               : this->__PVT__reg_r18_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__reg_r17_q
                                               : this->__PVT__reg_r16_q))))
                               : ((8U & (IData)(r))
                                   ? ((4U & (IData)(r))
                                       ? ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__reg_r15_q
                                               : this->__PVT__reg_r14_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__reg_r13_q
                                               : this->__PVT__reg_r12_q))
                                       : ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__reg_r11_q
                                               : this->__PVT__reg_r10_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__reg_r9_q
                                               : this->__PVT__reg_r8_q)))
                                   : ((4U & (IData)(r))
                                       ? ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__reg_r7_q
                                               : this->__PVT__reg_r6_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__reg_r5_q
                                               : this->__PVT__reg_r4_q))
                                       : ((2U & (IData)(r))
                                           ? ((1U & (IData)(r))
                                               ? this->__PVT__reg_r3_q
                                               : this->__PVT__reg_r2_q)
                                           : ((1U & (IData)(r))
                                               ? this->__PVT__reg_r1_q
                                               : 0U)))));
    return (get_register__Vfuncrtn);
}

bool Vriscv_soc_riscv_regfile::set_register(uint32_t r, uint32_t value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_soc_riscv_regfile::set_register\n"); );
    CData/*0:0*/ set_register__Vfuncrtn;
    // Body
    return (set_register__Vfuncrtn);
}

void Vriscv_soc_riscv_regfile___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0(Vriscv_soc_riscv_regfile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_soc_riscv_regfile___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelfRef.__PVT__reg_r2_q = 0U;
        vlSelfRef.__PVT__reg_r1_q = 0U;
        vlSelfRef.__PVT__reg_r4_q = 0U;
        vlSelfRef.__PVT__reg_r3_q = 0U;
        vlSelfRef.__PVT__reg_r6_q = 0U;
        vlSelfRef.__PVT__reg_r5_q = 0U;
        vlSelfRef.__PVT__reg_r8_q = 0U;
        vlSelfRef.__PVT__reg_r7_q = 0U;
        vlSelfRef.__PVT__reg_r10_q = 0U;
        vlSelfRef.__PVT__reg_r9_q = 0U;
        vlSelfRef.__PVT__reg_r12_q = 0U;
        vlSelfRef.__PVT__reg_r11_q = 0U;
        vlSelfRef.__PVT__reg_r13_q = 0U;
        vlSelfRef.__PVT__reg_r14_q = 0U;
        vlSelfRef.__PVT__reg_r15_q = 0U;
        vlSelfRef.__PVT__reg_r16_q = 0U;
        vlSelfRef.__PVT__reg_r17_q = 0U;
        vlSelfRef.__PVT__reg_r18_q = 0U;
        vlSelfRef.__PVT__reg_r19_q = 0U;
        vlSelfRef.__PVT__reg_r20_q = 0U;
        vlSelfRef.__PVT__reg_r21_q = 0U;
        vlSelfRef.__PVT__reg_r22_q = 0U;
        vlSelfRef.__PVT__reg_r23_q = 0U;
        vlSelfRef.__PVT__reg_r24_q = 0U;
        vlSelfRef.__PVT__reg_r25_q = 0U;
        vlSelfRef.__PVT__reg_r26_q = 0U;
        vlSelfRef.__PVT__reg_r27_q = 0U;
        vlSelfRef.__PVT__reg_r28_q = 0U;
        vlSelfRef.__PVT__reg_r29_q = 0U;
        vlSelfRef.__PVT__reg_r30_q = 0U;
        vlSelfRef.__PVT__reg_r31_q = 0U;
    } else {
        if ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r2_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r2_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r2_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r2_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r1_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r1_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r1_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r1_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((4U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r4_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((4U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r4_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((4U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r4_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((4U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r4_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r3_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r3_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r3_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r3_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((6U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r6_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((6U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r6_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((6U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r6_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((6U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r6_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((5U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r5_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((5U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r5_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((5U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r5_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((5U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r5_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((8U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r8_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((8U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r8_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((8U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r8_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((8U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r8_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((7U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r7_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((7U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r7_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((7U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r7_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((7U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r7_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x0aU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r10_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x0aU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r10_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x0aU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r10_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x0aU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r10_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((9U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r9_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((9U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r9_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((9U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r9_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((9U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r9_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x0cU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r12_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x0cU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r12_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x0cU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r12_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x0cU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r12_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x0bU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r11_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x0bU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r11_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x0bU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r11_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x0bU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r11_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x0dU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r13_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x0dU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r13_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x0dU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r13_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x0dU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r13_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x0eU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r14_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x0eU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r14_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x0eU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r14_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x0eU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r14_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x0fU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r15_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x0fU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r15_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x0fU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r15_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x0fU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r15_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x10U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r16_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x10U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r16_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x10U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r16_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x10U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r16_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x11U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r17_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x11U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r17_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x11U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r17_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x11U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r17_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x12U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r18_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x12U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r18_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x12U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r18_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x12U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r18_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x13U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r19_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x13U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r19_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x13U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r19_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x13U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r19_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x14U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r20_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x14U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r20_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x14U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r20_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x14U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r20_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x15U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r21_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x15U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r21_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x15U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r21_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x15U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r21_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x16U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r22_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x16U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r22_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x16U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r22_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x16U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r22_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x17U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r23_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x17U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r23_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x17U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r23_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x17U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r23_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x18U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r24_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x18U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r24_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x18U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r24_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x18U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r24_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x19U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r25_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x19U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r25_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x19U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r25_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x19U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r25_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x1aU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r26_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x1aU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r26_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x1aU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r26_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x1aU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r26_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x1bU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r27_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x1bU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r27_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x1bU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r27_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x1bU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r27_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x1cU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r28_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x1cU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r28_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x1cU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r28_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x1cU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r28_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x1dU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r29_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x1dU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r29_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x1dU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r29_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x1dU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r29_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x1eU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r30_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x1eU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r30_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x1eU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r30_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x1eU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r30_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
        if ((0x1fU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q))) {
            vlSelfRef.__PVT__reg_r31_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q;
        } else if ((0x1fU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r))) {
            vlSelfRef.__PVT__reg_r31_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r;
        } else if ((0x1fU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w))) {
            vlSelfRef.__PVT__reg_r31_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q;
        } else if ((0x1fU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q))) {
            vlSelfRef.__PVT__reg_r31_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q;
        }
    }
}
