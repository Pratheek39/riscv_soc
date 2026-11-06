// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

void Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*62:0*/ __Vdly__u_muldiv__DOT__divisor_q;
    __Vdly__u_muldiv__DOT__divisor_q = 0;
    IData/*31:0*/ __Vdly__u_muldiv__DOT__q_mask_q;
    __Vdly__u_muldiv__DOT__q_mask_q = 0;
    // Body
    vlSelfRef.__Vdly__u_muldiv__DOT__dividend_q = vlSelfRef.__PVT__u_muldiv__DOT__dividend_q;
    __Vdly__u_muldiv__DOT__divisor_q = vlSelfRef.__PVT__u_muldiv__DOT__divisor_q;
    vlSelfRef.__Vdly__u_muldiv__DOT__quotient_q = vlSelfRef.__PVT__u_muldiv__DOT__quotient_q;
    __Vdly__u_muldiv__DOT__q_mask_q = vlSelfRef.__PVT__u_muldiv__DOT__q_mask_q;
    vlSelfRef.__Vdly__u_mmu__DOT__state_q = vlSelfRef.__PVT__u_mmu__DOT__state_q;
    vlSelfRef.__Vdly__u_lsu__DOT__mem_rd_q = vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q;
    vlSelfRef.__Vdly__u_lsu__DOT__mem_wr_q = vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q;
    vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q 
        = vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q = vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q;
    vlSelfRef.__Vdly__u_csr__DOT__reset_q = vlSelfRef.__PVT__u_csr__DOT__reset_q;
    vlSelfRef.__Vdly__u_csr__DOT__branch_q = vlSelfRef.__PVT__u_csr__DOT__branch_q;
    vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i))) 
                                                   && ((IData)(vlSelfRef.__PVT__fetch_valid_w) 
                                                       & (~ (IData)(vlSelfRef.__PVT__fetch_accept_w))));
    vlSelfRef.__PVT__u_fetch__DOT__fetch_page_fault_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i)) 
           & (((IData)(vlSelfRef.__PVT__mmu_ifetch_rd_w) 
               & (IData)(vlSelfRef.__PVT__mmu_ifetch_accept_w)) 
              & (IData)(vlSelfRef.__PVT__mmu_fetch_fault_w)));
    vlSelfRef.__PVT__u_csr__DOT__writeback_en_q = (
                                                   (1U 
                                                    & (~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i))) 
                                                   && (((IData)(vlSelfRef.__PVT__csr_opcode_valid_w) 
                                                        & (~ (IData)(vlSelfRef.__PVT__csr_stall_w))) 
                                                       && ((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                                           | (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))));
    vlSelfRef.__PVT__u_fetch__DOT__icache_invalidate_q = 0U;
    vlSelfRef.__PVT__u_csr__DOT__writeback_squash_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i))) 
           && ((((IData)(vlSelfRef.__PVT__u_csr__DOT__valid_unit_inst_w) 
                 & (((~ (0U != (0xa050U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)))) 
                     & (IData)(vlSelfRef.__PVT__u_csr__DOT__take_exception_r)) 
                    | (IData)(vlSelfRef.__PVT__u_csr__DOT__take_intr_r))) 
                | (IData)(vlSelfRef.__PVT__mmu_load_fault_w)) 
               | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_ld_q)));
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelfRef.__Vdly__u_muldiv__DOT__dividend_q = 0U;
        __Vdly__u_muldiv__DOT__divisor_q = 0ULL;
        vlSelfRef.__Vdly__u_muldiv__DOT__quotient_q = 0U;
        __Vdly__u_muldiv__DOT__q_mask_q = 0U;
        vlSelfRef.__Vdly__u_lsu__DOT__mem_rd_q = 0U;
        vlSelfRef.__Vdly__u_lsu__DOT__mem_wr_q = 0U;
        vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q = 0U;
        vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q = 0ULL;
        vlSelfRef.__PVT__u_fetch__DOT__pc_d_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__fetch_pc_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__icache_fetch_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__branch_pc_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__branch_valid_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__pc_m_q = 0U;
        vlSelfRef.__PVT__u_arb__DOT__read_hold_q = 0U;
        vlSelfRef.__PVT__u_arb__DOT__src_mmu_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__mem_req_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__writeback_idx_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_cacheable_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__store_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__load_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_st_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__itlb_valid_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__dtlb_valid_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__lsu_in_addr_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__itlb_entry_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__itlb_va_addr_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__dtlb_va_addr_q = 0U;
        vlSelfRef.__PVT__u_fetch__DOT__active_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_ld_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q = 0U;
    } else {
        if (vlSelfRef.__PVT__u_muldiv__DOT__div_start_w) {
            vlSelfRef.__Vdly__u_muldiv__DOT__dividend_q 
                = (((IData)(vlSelfRef.__PVT__u_muldiv__DOT__signed_operation_w) 
                    & (vlSelfRef.__PVT__opcode_ra_operand_w 
                       >> 0x1fU)) ? (- vlSelfRef.__PVT__opcode_ra_operand_w)
                    : vlSelfRef.__PVT__opcode_ra_operand_w);
            __Vdly__u_muldiv__DOT__divisor_q = (((IData)(vlSelfRef.__PVT__u_muldiv__DOT__signed_operation_w) 
                                                 & (vlSelfRef.__PVT__opcode_rb_operand_w 
                                                    >> 0x1fU))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (- vlSelfRef.__PVT__opcode_rb_operand_w))) 
                                                 << 0x0000001fU)
                                                 : 
                                                ((QData)((IData)(vlSelfRef.__PVT__opcode_rb_operand_w)) 
                                                 << 0x0000001fU));
            vlSelfRef.__Vdly__u_muldiv__DOT__quotient_q = 0U;
            __Vdly__u_muldiv__DOT__q_mask_q = 0x80000000U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_muldiv__DOT__div_complete_w)))) {
            if (vlSelfRef.__PVT__u_muldiv__DOT__div_busy_q) {
                if ((vlSelfRef.__PVT__u_muldiv__DOT__divisor_q 
                     <= (QData)((IData)(vlSelfRef.__PVT__u_muldiv__DOT__dividend_q)))) {
                    vlSelfRef.__Vdly__u_muldiv__DOT__dividend_q 
                        = (vlSelfRef.__PVT__u_muldiv__DOT__dividend_q 
                           - (IData)(vlSelfRef.__PVT__u_muldiv__DOT__divisor_q));
                    vlSelfRef.__Vdly__u_muldiv__DOT__quotient_q 
                        = (vlSelfRef.__PVT__u_muldiv__DOT__quotient_q 
                           | vlSelfRef.__PVT__u_muldiv__DOT__q_mask_q);
                }
                __Vdly__u_muldiv__DOT__divisor_q = 
                    (0x3fffffffffffffffULL & (vlSelfRef.__PVT__u_muldiv__DOT__divisor_q 
                                              >> 1U));
                __Vdly__u_muldiv__DOT__q_mask_q = (vlSelfRef.__PVT__u_muldiv__DOT__q_mask_q 
                                                   >> 1U);
            }
        }
        vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q 
            = (((IData)(vlSelfRef.__PVT__fetch_valid_w) 
                & (~ (IData)(vlSelfRef.__PVT__fetch_accept_w)))
                ? (((QData)((IData)(vlSelfRef.__PVT__fetch_pc_w)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__fetch_instr_w)))
                : 0ULL);
        if (((IData)(vlSelfRef.__PVT__mmu_ifetch_rd_w) 
             & (IData)(vlSelfRef.__PVT__mmu_ifetch_accept_w))) {
            vlSelfRef.__PVT__u_fetch__DOT__pc_d_q = vlSelfRef.__PVT__mmu_ifetch_pc_w;
            vlSelfRef.__PVT__u_fetch__DOT__icache_fetch_q 
                = (1U & (~ (IData)(vlSelfRef.__PVT__mmu_fetch_fault_w)));
        } else if (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o) {
            vlSelfRef.__PVT__u_fetch__DOT__icache_fetch_q = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_fetch__DOT__stall_w)))) {
            vlSelfRef.__PVT__u_fetch__DOT__fetch_pc_q 
                = ((IData)(4U) + vlSelfRef.__PVT__mmu_ifetch_pc_w);
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__u_fetch__DOT__stall_w) 
                   | (~ (IData)(vlSelfRef.__PVT__u_fetch__DOT__active_q))))) {
            vlSelfRef.__PVT__u_fetch__DOT__branch_valid_q 
                = vlSelfRef.__PVT__u_fetch__DOT__branch_w;
            vlSelfRef.__PVT__u_fetch__DOT__branch_pc_q 
                = vlSelfRef.__PVT__u_fetch__DOT__branch_pc_w;
        } else {
            vlSelfRef.__PVT__u_fetch__DOT__branch_valid_q = 0U;
            vlSelfRef.__PVT__u_fetch__DOT__branch_pc_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__csr_opcode_valid_w) 
             & (~ (IData)(vlSelfRef.__PVT__csr_stall_w)))) {
            vlSelfRef.__PVT__u_csr__DOT__pc_m_q = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
            vlSelfRef.__PVT__u_csr__DOT__writeback_idx_q 
                = (0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                  >> 7U));
        }
        if ((((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_rd_i) 
              | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_wr_i))) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o)))) {
            vlSelfRef.__PVT__u_arb__DOT__read_hold_q = 1U;
            vlSelfRef.__PVT__u_arb__DOT__src_mmu_q 
                = vlSelfRef.__PVT__u_arb__DOT__src_mmu_w;
        } else if (vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o) {
            vlSelfRef.__PVT__u_arb__DOT__read_hold_q = 0U;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q)) 
             & ((IData)(vlSelfRef.__PVT__u_mmu__DOT__itlb_miss_w) 
                | (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_miss_w)))) {
            vlSelfRef.__PVT__u_mmu__DOT__mem_req_q = 1U;
        } else if ((((((1U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q)) 
                       & (IData)(vlSelfRef.__PVT__arb_mmu_ack_w)) 
                      & (~ (IData)(vlSelfRef.__PVT__arb_mmu_error_w))) 
                     & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i) 
                    & (~ (IData)((0U != (0x0000000eU 
                                         & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i)))))) {
            vlSelfRef.__PVT__u_mmu__DOT__mem_req_q = 1U;
        } else if (((IData)(vlSelfRef.__PVT__u_arb__DOT__src_mmu_w) 
                    & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o))) {
            vlSelfRef.__PVT__u_mmu__DOT__mem_req_q = 0U;
        }
        if ((0U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q))) {
            vlSelfRef.__PVT__u_mmu__DOT__store_q = 
                ((IData)(vlSelfRef.__PVT__mmu_lsu_accept_w)
                  ? 0U : (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q));
        }
        if (vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q) {
            vlSelfRef.__PVT__u_mmu__DOT__load_q = (1U 
                                                   & (~ (IData)(vlSelfRef.__PVT__mmu_lsu_accept_w)));
        }
        if (vlSelfRef.__PVT__mmu_flush_w) {
            vlSelfRef.__PVT__u_mmu__DOT__itlb_valid_q = 0U;
            vlSelfRef.__PVT__u_mmu__DOT__dtlb_valid_q = 0U;
        } else {
            if (((3U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_req_q)))) {
                vlSelfRef.__PVT__u_mmu__DOT__itlb_valid_q = 1U;
            }
            if (((3U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q)) 
                 & (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_req_q))) {
                vlSelfRef.__PVT__u_mmu__DOT__dtlb_valid_q = 1U;
            }
        }
        if (((IData)(vlSelfRef.__PVT__u_mmu__DOT__load_w) 
             | (0U != (IData)(vlSelfRef.__PVT__u_mmu__DOT__store_w)))) {
            vlSelfRef.__PVT__u_mmu__DOT__lsu_in_addr_q 
                = vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q;
        }
        if ((1U & (~ (((((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q) 
                         | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q)) 
                        | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q)) 
                       | (0U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q))) 
                      & (~ (IData)(vlSelfRef.__PVT__mmu_lsu_accept_w)))))) {
            vlSelfRef.__Vdly__u_lsu__DOT__mem_rd_q = 0U;
            vlSelfRef.__Vdly__u_lsu__DOT__mem_rd_q 
                = (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                    & (0U != (0x0000003fU & (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x0000001dU))))) 
                   & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)));
            vlSelfRef.__Vdly__u_lsu__DOT__mem_wr_q = 0U;
            vlSelfRef.__Vdly__u_lsu__DOT__mem_wr_q 
                = ((((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                     & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x25U))) & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)))
                    ? 0x0fU : ((((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                                 & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x24U))) 
                                & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)))
                                ? ((2U == (3U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r))
                                    ? 0x0cU : 3U) : 
                               (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                                 & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x23U)))
                                 ? ((2U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)
                                     ? ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)
                                         ? 8U : 4U)
                                     : ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)
                                         ? 2U : 1U))
                                 : 0U)));
            vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q = 0U;
            vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q 
                = ((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                   & ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x00000029U)) & (0x03a2U 
                                                   == 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                    >> 0x00000014U))));
            vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q = 0U;
            vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q 
                = ((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                   & ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x00000029U)) & (0x03a0U 
                                                   == 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                    >> 0x00000014U))));
            vlSelfRef.__PVT__u_lsu__DOT__mem_cacheable_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_cacheable_q = 1U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_st_q 
                = ((~ (0U != (0x0000003fU & (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x0000001dU))))) 
                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r));
            vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_ld_q 
                = ((0U != (0x0000003fU & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x0000001dU)))) 
                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r));
            vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q 
                = vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r;
        }
        if (((3U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q)) 
             & (~ (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_req_q)))) {
            vlSelfRef.__PVT__u_mmu__DOT__itlb_entry_q 
                = vlSelfRef.__PVT__u_mmu__DOT__pte_entry_q;
            vlSelfRef.__PVT__u_mmu__DOT__itlb_va_addr_q 
                = (vlSelfRef.__PVT__u_mmu__DOT__virt_addr_q 
                   >> 0x0cU);
        }
        if (((3U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q)) 
             & (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_req_q))) {
            vlSelfRef.__PVT__u_mmu__DOT__dtlb_va_addr_q 
                = (vlSelfRef.__PVT__u_mmu__DOT__virt_addr_q 
                   >> 0x0cU);
        }
        if (vlSelfRef.__PVT__u_fetch__DOT__branch_w) {
            vlSelfRef.__PVT__u_fetch__DOT__active_q = 1U;
        }
    }
    vlSelfRef.__PVT__u_muldiv__DOT__divisor_q = __Vdly__u_muldiv__DOT__divisor_q;
    vlSelfRef.__PVT__u_muldiv__DOT__q_mask_q = __Vdly__u_muldiv__DOT__q_mask_q;
    vlSelfRef.__PVT__writeback_csr_idx_w = ((IData)(vlSelfRef.__PVT__u_csr__DOT__writeback_idx_q) 
                                            & (- (IData)(
                                                         ((IData)(vlSelfRef.__PVT__u_csr__DOT__writeback_en_q) 
                                                          | (IData)(vlSelfRef.__PVT__u_csr__DOT__writeback_squash_q)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_55 = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_ld_q) 
                                                 | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_st_q));
}

void Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_53;
    __VdfgRegularize_hebeb780c_0_53 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_54;
    __VdfgRegularize_hebeb780c_0_54 = 0;
    // Body
    vlSelfRef.__PVT__u_arb__DOT__src_mmu_w = ((IData)(vlSelfRef.__PVT__u_arb__DOT__read_hold_q)
                                               ? (IData)(vlSelfRef.__PVT__u_arb__DOT__src_mmu_q)
                                               : (IData)(vlSelfRef.__PVT__u_mmu__DOT__mem_req_q));
    vlSelfRef.__PVT__fetch_pc_w = ((IData)(vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q)
                                    ? (IData)((vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q 
                                               >> 0x00000020U))
                                    : vlSelfRef.__PVT__u_fetch__DOT__pc_d_q);
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_req_tag_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q 
            = vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q;
        vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q = vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q;
        vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q = vlSelfRef.__Vdly__u_lsu__DOT__mem_wr_q;
        vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q = vlSelfRef.__Vdly__u_lsu__DOT__mem_rd_q;
        vlSelfRef.__PVT__u_mmu__DOT__dtlb_entry_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__branch_target_q = 0U;
        vlSelfRef.__Vdly__u_csr__DOT__branch_q = 0U;
        vlSelfRef.__Vdly__u_csr__DOT__reset_q = 1U;
        vlSelfRef.__PVT__u_csr__DOT__reset_q = vlSelfRef.__Vdly__u_csr__DOT__reset_q;
        vlSelfRef.__PVT__u_csr__DOT__writeback_value_q = 0U;
        vlSelfRef.__PVT__u_muldiv__DOT__wb_result_q = 0U;
    } else {
        if ((1U & (~ (((((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q) 
                         | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q)) 
                        | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q)) 
                       | (0U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q))) 
                      & (~ (IData)(vlSelfRef.__PVT__mmu_lsu_accept_w)))))) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_req_tag_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_req_tag_q 
                = ((0x0700U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_req_tag_q)) 
                   | (((IData)((0ULL != (0x0000000120000000ULL 
                                         & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) 
                       << 7U) | ((0x00000060U & (vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r 
                                                 << 5U)) 
                                 | (0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                   >> 7U)))));
            vlSelfRef.__PVT__u_lsu__DOT__mem_req_tag_q 
                = ((0x00ffU & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_req_tag_q)) 
                   | (((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 0x0000001dU)))) 
                       << 0x0000000aU) | (0x00000300U 
                                          & (((IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x0000001eU)) 
                                              | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x00000021U))) 
                                             << 8U))));
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_q = 0U;
            if ((((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                  & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                             >> 0x25U))) & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)))) {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_q 
                    = vlSelfRef.__PVT__opcode_rb_operand_w;
            } else if ((((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                         & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                    >> 0x24U))) & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)))) {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_q 
                    = ((2U == (3U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r))
                        ? (vlSelfRef.__PVT__opcode_rb_operand_w 
                           << 0x00000010U) : (0x0000ffffU 
                                              & vlSelfRef.__PVT__opcode_rb_operand_w));
            } else if (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                        & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                   >> 0x23U)))) {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_q 
                    = ((2U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)
                        ? ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)
                            ? (vlSelfRef.__PVT__opcode_rb_operand_w 
                               << 0x00000018U) : (0x00ff0000U 
                                                  & (vlSelfRef.__PVT__opcode_rb_operand_w 
                                                     << 0x00000010U)))
                        : ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)
                            ? (0x0000ff00U & (vlSelfRef.__PVT__opcode_rb_operand_w 
                                              << 8U))
                            : (0x000000ffU & vlSelfRef.__PVT__opcode_rb_operand_w)));
            }
        }
        vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q 
            = vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q;
        vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q = vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q;
        vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q = vlSelfRef.__Vdly__u_lsu__DOT__mem_wr_q;
        vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q = vlSelfRef.__Vdly__u_lsu__DOT__mem_rd_q;
        if (((3U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q)) 
             & (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_req_q))) {
            vlSelfRef.__PVT__u_mmu__DOT__dtlb_entry_q 
                = vlSelfRef.__PVT__u_mmu__DOT__pte_entry_q;
        }
        if (vlSelfRef.__PVT__u_csr__DOT__reset_q) {
            vlSelfRef.__PVT__u_csr__DOT__branch_target_q 
                = vlSymsp->TOP.__Vcellinp__riscv_soc__reset_vector_i;
            vlSelfRef.__Vdly__u_csr__DOT__branch_q = 1U;
            vlSelfRef.__Vdly__u_csr__DOT__reset_q = 0U;
        } else {
            vlSelfRef.__PVT__u_csr__DOT__branch_target_q 
                = ((IData)(vlSelfRef.__PVT__u_csr__DOT__take_exception_r)
                    ? (((IData)(vlSelfRef.__PVT__u_csr__DOT__exception_s_r) 
                        & (1U >= (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)))
                        ? vlSelfRef.__PVT__u_csr__DOT__csr_stvec_q
                        : vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_q)
                    : ((IData)(vlSelfRef.__PVT__u_csr__DOT__take_intr_r)
                        ? (((IData)(vlSelfRef.__PVT__u_csr__DOT__interrupt_s_r) 
                            & (1U >= (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)))
                            ? vlSelfRef.__PVT__u_csr__DOT__csr_stvec_q
                            : vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_q)
                        : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x00000026U)))
                            ? vlSelfRef.__VdfgRegularize_hebeb780c_0_36
                            : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x00000027U)))
                                ? vlSelfRef.__VdfgRegularize_hebeb780c_0_36
                                : (((0x20000000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)
                                     ? vlSelfRef.__PVT__u_csr__DOT__csr_mepc_q
                                     : vlSelfRef.__PVT__u_csr__DOT__csr_sepc_q) 
                                   & (- (IData)((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x00000028U))))))))));
            vlSelfRef.__Vdly__u_csr__DOT__branch_q 
                = ((IData)(vlSelfRef.__PVT__u_csr__DOT__take_exception_r) 
                   | ((IData)(vlSelfRef.__PVT__u_csr__DOT__take_intr_r) 
                      | ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x00000026U)))
                          ? (IData)(vlSelfRef.__PVT__csr_opcode_valid_w)
                          : ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x00000027U)))
                              ? (IData)(vlSelfRef.__PVT__csr_opcode_valid_w)
                              : ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x00000028U)) 
                                 & (IData)(vlSelfRef.__PVT__csr_opcode_valid_w))))));
        }
        vlSelfRef.__PVT__u_csr__DOT__reset_q = vlSelfRef.__Vdly__u_csr__DOT__reset_q;
        if (((IData)(vlSelfRef.__PVT__csr_opcode_valid_w) 
             & (~ (IData)(vlSelfRef.__PVT__csr_stall_w)))) {
            vlSelfRef.__PVT__u_csr__DOT__writeback_value_q 
                = vlSelfRef.__PVT__u_csr__DOT__result_r;
        }
        vlSelfRef.__PVT__u_muldiv__DOT__wb_result_q 
            = ((IData)(vlSelfRef.__PVT__u_muldiv__DOT__div_complete_w)
                ? ((IData)(vlSelfRef.__PVT__u_muldiv__DOT__div_inst_q)
                    ? ((IData)(vlSelfRef.__PVT__u_muldiv__DOT__invert_res_q)
                        ? (- vlSelfRef.__PVT__u_muldiv__DOT__quotient_q)
                        : vlSelfRef.__PVT__u_muldiv__DOT__quotient_q)
                    : ((IData)(vlSelfRef.__PVT__u_muldiv__DOT__invert_res_q)
                        ? (- vlSelfRef.__PVT__u_muldiv__DOT__dividend_q)
                        : vlSelfRef.__PVT__u_muldiv__DOT__dividend_q))
                : vlSelfRef.__PVT__u_muldiv__DOT__mult_result_q);
    }
    vlSelfRef.__PVT__u_muldiv__DOT__quotient_q = vlSelfRef.__Vdly__u_muldiv__DOT__quotient_q;
    vlSelfRef.__PVT__u_muldiv__DOT__dividend_q = vlSelfRef.__Vdly__u_muldiv__DOT__dividend_q;
    vlSelfRef.__PVT__u_mmu__DOT__store_w = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q) 
                                            | (IData)(vlSelfRef.__PVT__u_mmu__DOT__store_q));
    vlSelfRef.__PVT__u_mmu__DOT__load_w = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q) 
                                           | (IData)(vlSelfRef.__PVT__u_mmu__DOT__load_q));
    vlSelfRef.__PVT__u_muldiv__DOT__wb_rd_q = ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i)
                                                ? 0U
                                                : ((IData)(vlSelfRef.__PVT__u_muldiv__DOT__mult_busy_q)
                                                    ? (IData)(vlSelfRef.__PVT__u_muldiv__DOT__rd_q)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__u_muldiv__DOT__div_complete_w)
                                                     ? (IData)(vlSelfRef.__PVT__u_muldiv__DOT__rd_q)
                                                     : 0U)));
    vlSelfRef.__PVT__u_muldiv__DOT__mult_busy_q = (
                                                   (~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i)) 
                                                   & (((IData)(vlSelfRef.__PVT__muldiv_opcode_valid_w) 
                                                       & (~ (IData)(vlSelfRef.__PVT__muldiv_stall_w))) 
                                                      & (0U 
                                                         != 
                                                         (0x0000000fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                     >> 0x0000002fU))))));
    __VdfgRegularize_hebeb780c_0_54 = ((0U != (IData)(vlSelfRef.__PVT__u_mmu__DOT__store_w)) 
                                       | (IData)(vlSelfRef.__PVT__u_mmu__DOT__load_w));
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelfRef.__PVT__u_mmu__DOT__pte_addr_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__pte_entry_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__virt_addr_q = 0U;
        vlSelfRef.__PVT__u_mmu__DOT__dtlb_req_q = 0U;
        vlSelfRef.__Vdly__u_mmu__DOT__state_q = 0U;
    } else if (((0U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q)) 
                & ((IData)(vlSelfRef.__PVT__u_mmu__DOT__itlb_miss_w) 
                   | (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_miss_w)))) {
        vlSelfRef.__PVT__u_mmu__DOT__pte_addr_q = (
                                                   (vlSelfRef.__PVT__u_csr__DOT__csr_satp_q 
                                                    << 0x0000000cU) 
                                                   + 
                                                   (0x00000ffcU 
                                                    & (vlSelfRef.__PVT__u_mmu__DOT__request_addr_w 
                                                       >> 0x00000014U)));
        vlSelfRef.__PVT__u_mmu__DOT__virt_addr_q = vlSelfRef.__PVT__u_mmu__DOT__request_addr_w;
        vlSelfRef.__PVT__u_mmu__DOT__dtlb_req_q = vlSelfRef.__PVT__u_mmu__DOT__dtlb_miss_w;
        vlSelfRef.__Vdly__u_mmu__DOT__state_q = 1U;
    } else if (((1U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q)) 
                & (IData)(vlSelfRef.__PVT__arb_mmu_ack_w))) {
        if ((1U & ((IData)(vlSelfRef.__PVT__arb_mmu_error_w) 
                   | (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i)))) {
            vlSelfRef.__PVT__u_mmu__DOT__pte_entry_q = 0U;
            vlSelfRef.__Vdly__u_mmu__DOT__state_q = 3U;
        } else if ((IData)((0U != (0x0000000eU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i)))) {
            vlSelfRef.__PVT__u_mmu__DOT__pte_entry_q 
                = (((0xfffff000U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i 
                                    << 2U)) | (0x003ff000U 
                                               & vlSelfRef.__PVT__u_mmu__DOT__request_addr_w)) 
                   | (0x000003ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i));
            vlSelfRef.__Vdly__u_mmu__DOT__state_q = 3U;
        } else {
            vlSelfRef.__PVT__u_mmu__DOT__pte_addr_q 
                = ((0xfffff000U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i 
                                   << 2U)) + (0x00000ffcU 
                                              & (vlSelfRef.__PVT__u_mmu__DOT__request_addr_w 
                                                 >> 0x0000000aU)));
            vlSelfRef.__Vdly__u_mmu__DOT__state_q = 2U;
        }
    } else if (((2U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q)) 
                & (IData)(vlSelfRef.__PVT__arb_mmu_ack_w))) {
        vlSelfRef.__PVT__u_mmu__DOT__pte_entry_q = 
            ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i)
              ? ((0xfffff000U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i 
                                 << 2U)) | (0x000003ffU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i))
              : 0U);
        vlSelfRef.__Vdly__u_mmu__DOT__state_q = 3U;
    } else if ((3U == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q))) {
        vlSelfRef.__Vdly__u_mmu__DOT__state_q = 0U;
    }
    vlSelfRef.__PVT__u_mmu__DOT__state_q = vlSelfRef.__Vdly__u_mmu__DOT__state_q;
    vlSelfRef.__PVT__u_mmu__DOT__lsu_addr_w = ((IData)(__VdfgRegularize_hebeb780c_0_54)
                                                ? vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q
                                                : vlSelfRef.__PVT__u_mmu__DOT__lsu_in_addr_q);
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelfRef.__PVT__u_muldiv__DOT__mult_result_q = 0U;
        vlSelfRef.__PVT__u_muldiv__DOT__div_inst_q = 0U;
        vlSelfRef.__PVT__u_muldiv__DOT__invert_res_q = 0U;
        vlSelfRef.__PVT__u_muldiv__DOT__rd_q = 0U;
    } else {
        vlSelfRef.__PVT__u_muldiv__DOT__mult_result_q 
            = ((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                     >> 0x00000030U))))
                ? vlSelfRef.__PVT__u_muldiv__DOT__mult_result_w[1U]
                : vlSelfRef.__PVT__u_muldiv__DOT__mult_result_w[0U]);
        if (vlSelfRef.__PVT__u_muldiv__DOT__div_start_w) {
            vlSelfRef.__PVT__u_muldiv__DOT__div_inst_q 
                = (0U != (3U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x00000033U))));
            vlSelfRef.__PVT__u_muldiv__DOT__invert_res_q 
                = (1U & ((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                    >> 0x33U)) & ((vlSelfRef.__PVT__opcode_ra_operand_w 
                                                   >> 0x1fU) 
                                                  != 
                                                  (vlSelfRef.__PVT__opcode_rb_operand_w 
                                                   >> 0x1fU))) 
                          & (0U != vlSelfRef.__PVT__opcode_rb_operand_w)) 
                         | ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                     >> 0x35U)) & (vlSelfRef.__PVT__opcode_ra_operand_w 
                                                   >> 0x1fU))));
        }
        if ((((IData)(vlSelfRef.__PVT__muldiv_opcode_valid_w) 
              & (IData)((0ULL != (0x007f800000000000ULL 
                                  & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))) 
             & (~ (IData)(vlSelfRef.__PVT__muldiv_stall_w)))) {
            vlSelfRef.__PVT__u_muldiv__DOT__rd_q = 
                (0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                >> 7U));
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_muldiv__DOT__div_busy_q)))) {
            vlSelfRef.__PVT__u_muldiv__DOT__rd_q = 0U;
        }
    }
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelfRef.__PVT__u_csr__DOT__csr_mepc_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_sr_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_mcause_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_mip_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_mie_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q = 3U;
        vlSelfRef.__PVT__u_csr__DOT__csr_mcycle_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_mscratch_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_sepc_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_stvec_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_scause_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_stval_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_satp_q = 0U;
        vlSelfRef.__PVT__u_csr__DOT__csr_sscratch_q = 0U;
    } else {
        if (((((IData)(vlSelfRef.__PVT__csr_opcode_valid_w) 
               & ((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                  | (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) 
              & (0x07b2U == (0x00000fffU & vlSelfRef.__PVT__u_csr__DOT__imm12_r))) 
             & (~ (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_access_fault_w)))) {
            if (VL_UNLIKELY(((0U == (0xff000000U & vlSelfRef.__PVT__u_csr__DOT__data_r))))) {
                VL_FINISH_MT("../soc/../core/core/rv32imsu/riscv_csr.v", 926, "");
                VL_FINISH_MT("../soc/../core/core/rv32imsu/riscv_csr.v", 927, "");
            } else if (VL_UNLIKELY(((0x01000000U == 
                                     (0xff000000U & vlSelfRef.__PVT__u_csr__DOT__data_r))))) {
                VL_WRITEF_NX("%c",1, '#',8,(0x000000ffU 
                                            & vlSelfRef.__PVT__u_csr__DOT__data_r));
            }
        }
        vlSelfRef.__PVT__u_csr__DOT__csr_mepc_q = vlSelfRef.__PVT__u_csr__DOT__csr_mepc_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_sr_q = vlSelfRef.__PVT__u_csr__DOT__csr_sr_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_mcause_q = vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_q = vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_mip_q = vlSelfRef.__PVT__u_csr__DOT__csr_mip_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_mie_q = vlSelfRef.__PVT__u_csr__DOT__csr_mie_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q = vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_mcycle_q = vlSelfRef.__PVT__u_csr__DOT__csr_mcycle_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_mscratch_q 
            = vlSelfRef.__PVT__u_csr__DOT__csr_mscratch_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_q 
            = vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_q 
            = vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_sepc_q = vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_stvec_q = vlSelfRef.__PVT__u_csr__DOT__csr_stvec_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_scause_q = vlSelfRef.__PVT__u_csr__DOT__csr_scause_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_stval_q = vlSelfRef.__PVT__u_csr__DOT__csr_stval_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_satp_q = vlSelfRef.__PVT__u_csr__DOT__csr_satp_r;
        vlSelfRef.__PVT__u_csr__DOT__csr_sscratch_q 
            = vlSelfRef.__PVT__u_csr__DOT__csr_sscratch_r;
    }
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelfRef.__PVT__u_muldiv__DOT__div_busy_q = 0U;
    } else if (vlSelfRef.__PVT__u_muldiv__DOT__div_start_w) {
        vlSelfRef.__PVT__u_muldiv__DOT__div_busy_q = 1U;
    } else if (vlSelfRef.__PVT__u_muldiv__DOT__div_complete_w) {
        vlSelfRef.__PVT__u_muldiv__DOT__div_busy_q = 0U;
    }
    vlSelfRef.__PVT__u_mmu__DOT__dtlb_hit_w = ((IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_valid_q) 
                                               & (vlSelfRef.__PVT__u_mmu__DOT__dtlb_va_addr_q 
                                                  == 
                                                  (vlSelfRef.__PVT__u_mmu__DOT__lsu_addr_w 
                                                   >> 0x0000000cU)));
    vlSelfRef.__PVT__u_csr__DOT__csr_mcycle_r = ((IData)(1U) 
                                                 + vlSelfRef.__PVT__u_csr__DOT__csr_mcycle_q);
    vlSelfRef.__PVT__u_csr__DOT__irq_pending_r = (vlSelfRef.__PVT__u_csr__DOT__csr_mip_q 
                                                  & vlSelfRef.__PVT__u_csr__DOT__csr_mie_q);
    __VdfgRegularize_hebeb780c_0_53 = (1U & ((~ (vlSelfRef.__PVT__u_csr__DOT__csr_sr_q 
                                                 >> 0x00000012U)) 
                                             & (vlSelfRef.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                >> 4U)));
    vlSelfRef.__PVT__u_csr__DOT__m_enabled_r = ((3U 
                                                 > (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                | ((3U 
                                                    == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                   & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_q 
                                                      >> 3U)));
    vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w = ((3U 
                                                  != (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                 & (vlSelfRef.__PVT__u_csr__DOT__csr_satp_q 
                                                    >> 0x0000001fU));
    vlSelfRef.__PVT__u_muldiv__DOT__div_complete_w 
        = ((~ (0U != vlSelfRef.__PVT__u_muldiv__DOT__q_mask_q)) 
           & (IData)(vlSelfRef.__PVT__u_muldiv__DOT__div_busy_q));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_56 = ((~ vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_q) 
                                                 & vlSelfRef.__PVT__u_csr__DOT__irq_pending_r);
    vlSelfRef.__PVT__u_mmu__DOT__dtlb_miss_w = ((IData)(__VdfgRegularize_hebeb780c_0_54) 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_hit_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w)));
    vlSelfRef.__PVT__fault_page_store_w = ((IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w) 
                                           & ((0U != (IData)(vlSelfRef.__PVT__u_mmu__DOT__store_w)) 
                                              & (((1U 
                                                   == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q))
                                                   ? 
                                                  ((~ 
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                         >> 1U)))) 
                                                   | (IData)(__VdfgRegularize_hebeb780c_0_53))
                                                   : 
                                                  ((~ 
                                                    (vlSelfRef.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                     >> 4U)) 
                                                   | (~ 
                                                      (3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                           >> 1U)))))) 
                                                 & (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_hit_w))));
    vlSelfRef.__PVT__mmu_load_fault_w = ((IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w) 
                                         & ((IData)(vlSelfRef.__PVT__u_mmu__DOT__load_w) 
                                            & (((1U 
                                                 == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q))
                                                 ? 
                                                ((~ 
                                                  (vlSelfRef.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                   >> 1U)) 
                                                 | (IData)(__VdfgRegularize_hebeb780c_0_53))
                                                 : (IData)(
                                                           (0x00000012U 
                                                            != 
                                                            (0x00000012U 
                                                             & vlSelfRef.__PVT__u_mmu__DOT__dtlb_entry_q)))) 
                                               & (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_hit_w))));
    vlSelfRef.__PVT__u_csr__DOT__irq_masked_r = (((IData)(vlSelfRef.__PVT__u_csr__DOT__m_enabled_r) 
                                                  & (0U 
                                                     != vlSelfRef.__VdfgRegularize_hebeb780c_0_56))
                                                  ? 
                                                 ((- (IData)((IData)(vlSelfRef.__PVT__u_csr__DOT__m_enabled_r))) 
                                                  & vlSelfRef.__VdfgRegularize_hebeb780c_0_56)
                                                  : 
                                                 (vlSelfRef.__PVT__u_csr__DOT__irq_pending_r 
                                                  & (vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_q 
                                                     & (- (IData)(
                                                                  ((1U 
                                                                    > (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                                   | ((1U 
                                                                       == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                                      & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_q 
                                                                         >> 1U))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = ((IData)(vlSelfRef.__PVT__fault_page_store_w) 
                                                 | (IData)(vlSelfRef.__PVT__mmu_load_fault_w));
    vlSelfRef.__PVT__csr_stall_w = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_55));
    vlSelfRef.__PVT__mmu_lsu_accept_w = ((((~ (IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w)) 
                                           | ((IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w) 
                                              & (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_hit_w))) 
                                          & ((~ (IData)(vlSelfRef.__PVT__u_arb__DOT__src_mmu_w)) 
                                             & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o))) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22));
    vlSelfRef.__PVT__lsu_stall_w = ((~ (IData)(vlSelfRef.__PVT__mmu_lsu_accept_w)) 
                                    & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                       | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q) 
                                          | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q) 
                                             | (0U 
                                                != (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q))))));
}

void Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_csr__DOT__branch_q = vlSelfRef.__Vdly__u_csr__DOT__branch_q;
    vlSelfRef.__PVT__u_muldiv__DOT__signed_operation_w 
        = (IData)((0ULL != (0x0028000000000000ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)));
    vlSelfRef.__PVT__u_csr__DOT__set_r = (0U != (3U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x0000002cU)) 
                                                    | (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x00000029U)))));
    vlSelfRef.__PVT__u_csr__DOT__clr_r = (IData)((0ULL 
                                                  != 
                                                  (0x00005a0000000000ULL 
                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)));
    vlSelfRef.__PVT__muldiv_stall_w = (((IData)(vlSelfRef.__PVT__u_muldiv__DOT__div_busy_q) 
                                        & (0U != (0x000000ffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x0000002fU))))) 
                                       | ((IData)(vlSelfRef.__PVT__u_muldiv__DOT__mult_busy_q) 
                                          & (0U != 
                                             (0x0000000fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x00000033U))))));
    vlSelfRef.__PVT__u_csr__DOT__imm12_r = (((- (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                         >> 0x0000001fU))) 
                                             << 0x0000000cU) 
                                            | (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x00000014U));
}

void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__fetch_instr_w = ((IData)(vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q)
                                       ? (IData)(vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q)
                                       : ((IData)(vlSelfRef.__PVT__u_fetch__DOT__fetch_page_fault_q)
                                           ? 0x08000053U
                                           : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q)
                                               ? 0x00000053U
                                               : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w)
                                                   ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q
                                                   : 
                                                  ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q)))));
}

void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arb_mmu_ack_w = ((7U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                      & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_ack_o));
    vlSelfRef.__PVT__mmu_lsu_ack_w = ((7U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                      & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_ack_o));
    vlSelfRef.__PVT__arb_mmu_error_w = ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_error_o) 
                                        & (7U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)));
    vlSelfRef.__PVT__mmu_lsu_error_w = ((7U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                        & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_error_o));
    vlSelfRef.__PVT__u_lsu__DOT__wb_result_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__wb_idx_r = (0x0000001fU 
                                             & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                                             [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q]);
    vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r = (3U & 
                                               (vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                                                [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q] 
                                                >> 5U));
    vlSelfRef.__PVT__u_lsu__DOT__load_byte_r = (1U 
                                                & (vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                                                   [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q] 
                                                   >> 7U));
    vlSelfRef.__PVT__u_lsu__DOT__load_half_r = (1U 
                                                & (vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                                                   [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q] 
                                                   >> 8U));
    vlSelfRef.__PVT__u_lsu__DOT__load_word_r = (1U 
                                                & (vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                                                   [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q] 
                                                   >> 9U));
    vlSelfRef.__PVT__u_lsu__DOT__load_signed_r = (1U 
                                                  & (vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                                                     [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q] 
                                                     >> 0x0aU));
    if (((IData)(vlSelfRef.__PVT__mmu_lsu_ack_w) & 
         (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_byte_r) 
           | (IData)(vlSelfRef.__PVT__u_lsu__DOT__load_half_r)) 
          | (IData)(vlSelfRef.__PVT__u_lsu__DOT__load_word_r)))) {
        if (vlSelfRef.__PVT__u_lsu__DOT__load_byte_r) {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i 
                           >> 0x18U) : (0x000000ffU 
                                        & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i 
                                           >> 0x10U)))
                    : ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (0x000000ffU & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i 
                                          >> 8U)) : 
                       (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i)));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 7U))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffffff00U | (0x000000ffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else if (vlSelfRef.__PVT__u_lsu__DOT__load_half_r) {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i 
                       >> 0x10U) : (0x0000ffffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 0x0fU))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffff0000U | (0x0000ffffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i;
        }
    } else {
        vlSelfRef.__PVT__u_lsu__DOT__wb_idx_r = 0U;
    }
    vlSelfRef.__PVT__opcode_rb_operand_w = ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q) 
                                              == (0x0000001fU 
                                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                     >> 0x00000014U))) 
                                             & (0U 
                                                != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q)))
                                             ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q
                                             : (((0U 
                                                  != (IData)(vlSelfRef.__PVT__u_lsu__DOT__wb_idx_r)) 
                                                 & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__wb_idx_r) 
                                                    == 
                                                    (0x0000001fU 
                                                     & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                        >> 0x00000014U))))
                                                 ? vlSelfRef.__PVT__u_lsu__DOT__wb_result_r
                                                 : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__rb_value_w));
    vlSelfRef.__PVT__opcode_ra_operand_w = ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q) 
                                              == (0x0000001fU 
                                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                     >> 0x0000000fU))) 
                                             & (0U 
                                                != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q)))
                                             ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q
                                             : (((0U 
                                                  != (IData)(vlSelfRef.__PVT__u_lsu__DOT__wb_idx_r)) 
                                                 & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__wb_idx_r) 
                                                    == 
                                                    (0x0000001fU 
                                                     & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                        >> 0x0000000fU))))
                                                 ? vlSelfRef.__PVT__u_lsu__DOT__wb_result_r
                                                 : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ra_value_w));
    vlSelfRef.__PVT__branch_pc_w = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0x00000015U)))
                                     ? (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
                                        + (((- (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                        >> 0x0000001fU))) 
                                            << 0x00000014U) 
                                           | ((((0x000001feU 
                                                 & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                    >> 0x0000000bU)) 
                                                | (1U 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                      >> 0x00000014U))) 
                                               << 0x0000000bU) 
                                              | (0x000007feU 
                                                 & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                    >> 0x00000014U)))))
                                     : ((1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x00000016U)))
                                         ? (0xfffffffeU 
                                            & (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                               + vlSelfRef.__PVT__opcode_ra_operand_w))
                                         : (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
                                            + (((- (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000dU) 
                                               | ((((2U 
                                                     & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                        >> 0x0000001eU)) 
                                                    | (1U 
                                                       & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                          >> 7U))) 
                                                   << 0x0000000bU) 
                                                  | ((0x000007e0U 
                                                      & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001eU 
                                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                           >> 7U))))))));
}

void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_50;
    __VdfgRegularize_hebeb780c_0_50 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_57;
    __VdfgRegularize_hebeb780c_0_57 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__lsu_opcode_valid_w = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) 
                                           & ((~ (IData)(vlSelfRef.__PVT__csr_stall_w)) 
                                              & (~ (IData)(vlSelfRef.__PVT__muldiv_stall_w))));
    __VdfgRegularize_hebeb780c_0_50 = ((~ (IData)(vlSelfRef.__PVT__lsu_stall_w)) 
                                       & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r));
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_59)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__opcode_ra_operand_w))));
    __Vtemp_2[1U] = (((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_59))) 
                      << 1U) | (IData)(((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_59)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.__PVT__opcode_ra_operand_w))) 
                                        >> 0x00000020U)));
    __Vtemp_2[2U] = ((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_59))) 
                     >> 0x0000001fU);
    __Vtemp_3[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_58)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__opcode_rb_operand_w))));
    __Vtemp_3[1U] = (((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_58))) 
                      << 1U) | (IData)(((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_58)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.__PVT__opcode_rb_operand_w))) 
                                        >> 0x00000020U)));
    __Vtemp_3[2U] = ((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_58))) 
                     >> 0x0000001fU);
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.__PVT__u_muldiv__DOT__mult_result_w[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__u_muldiv__DOT__mult_result_w[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__u_muldiv__DOT__mult_result_w[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.__PVT__fetch_accept_w = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_input_w)) 
                                             | (IData)(vlSelfRef.__PVT__u_csr__DOT__branch_q)));
    vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r = (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                                                & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x29U)))
                                                ? vlSelfRef.__PVT__opcode_ra_operand_w
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                                                    & (0U 
                                                       != 
                                                       (0x0000003fU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                   >> 0x0000001dU)))))
                                                    ? 
                                                   (vlSelfRef.__PVT__opcode_ra_operand_w 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                  >> 0x1fU))) 
                                                      << 0x0000000cU) 
                                                     | (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                        >> 0x14U)))
                                                    : 
                                                   (vlSelfRef.__PVT__opcode_ra_operand_w 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                  >> 0x1fU))) 
                                                      << 0x0000000cU) 
                                                     | ((0x00000fe0U 
                                                         & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                            >> 0x00000014U)) 
                                                        | (0x0000001fU 
                                                           & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                              >> 7U)))))));
    if (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
         & (IData)((0ULL != (0x0000002480000000ULL 
                             & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r 
            = (0U != (3U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r));
    } else if (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                & (IData)((0ULL != (0x0000001240000000ULL 
                                    & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r 
            = (1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r);
    }
    vlSelfRef.__PVT__exec_opcode_valid_w = ((~ (IData)(vlSelfRef.__PVT__lsu_stall_w)) 
                                            & (IData)(vlSelfRef.__PVT__lsu_opcode_valid_w));
    vlSelfRef.__PVT__muldiv_opcode_valid_w = ((~ (IData)(vlSelfRef.__PVT__csr_stall_w)) 
                                              & (IData)(__VdfgRegularize_hebeb780c_0_50));
    vlSelfRef.__PVT__csr_opcode_valid_w = ((~ (IData)(vlSelfRef.__PVT__muldiv_stall_w)) 
                                           & (IData)(__VdfgRegularize_hebeb780c_0_50));
    vlSelfRef.__PVT__branch_request_w = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r) 
                                         & (IData)(vlSelfRef.__PVT__exec_opcode_valid_w));
    vlSelfRef.__PVT__u_muldiv__DOT__div_start_w = ((IData)(vlSelfRef.__PVT__muldiv_opcode_valid_w) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__muldiv_stall_w)) 
                                                      & (0U 
                                                         != 
                                                         (0x0000000fU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                     >> 0x00000033U))))));
    vlSelfRef.__PVT__u_csr__DOT__valid_unit_inst_w 
        = ((IData)(((0ULL != (0x00007f0000000000ULL 
                              & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                    | (0U != (3U & ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 0x00000026U)) 
                                    | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0x00000037U))))))) 
           & (IData)(vlSelfRef.__PVT__csr_opcode_valid_w));
    __VdfgRegularize_hebeb780c_0_57 = (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                        | (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r)) 
                                       & (IData)(vlSelfRef.__PVT__csr_opcode_valid_w));
    vlSelfRef.__PVT__fetch_branch_w = ((IData)(vlSelfRef.__PVT__u_csr__DOT__branch_q) 
                                       | (IData)(vlSelfRef.__PVT__branch_request_w));
    vlSelfRef.__PVT__mmu_flush_w = ((0x0180U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x00000014U)) 
                                    & (IData)(__VdfgRegularize_hebeb780c_0_57));
    vlSelfRef.__PVT__u_csr__DOT__csr_access_fault_w 
        = ((((IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q) 
             < (3U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                      >> 0x0000001cU))) | ((3U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                   >> 0x0000001eU)) 
                                           & (IData)(
                                                     ((0ULL 
                                                       != 
                                                       (0x0000120000000000ULL 
                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                                      | (0U 
                                                         != 
                                                         (0x000f8000U 
                                                          & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)))))) 
           & (IData)(__VdfgRegularize_hebeb780c_0_57));
    vlSelfRef.__PVT__u_fetch__DOT__branch_pc_w = ((
                                                   (~ (IData)(vlSelfRef.__PVT__fetch_branch_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_fetch__DOT__branch_valid_q))
                                                   ? vlSelfRef.__PVT__u_fetch__DOT__branch_pc_q
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__u_csr__DOT__branch_q)
                                                    ? vlSelfRef.__PVT__u_csr__DOT__branch_target_q
                                                    : vlSelfRef.__PVT__branch_pc_w));
    vlSelfRef.__PVT__u_fetch__DOT__branch_w = ((IData)(vlSelfRef.__PVT__u_fetch__DOT__branch_valid_q) 
                                               | (IData)(vlSelfRef.__PVT__fetch_branch_w));
    vlSelfRef.__PVT__mmu_ifetch_pc_w = ((IData)(vlSelfRef.__PVT__u_fetch__DOT__branch_w)
                                         ? vlSelfRef.__PVT__u_fetch__DOT__branch_pc_w
                                         : vlSelfRef.__PVT__u_fetch__DOT__fetch_pc_q);
    vlSelfRef.__PVT__u_mmu__DOT__request_addr_w = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.__PVT__u_mmu__DOT__state_q))
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_miss_w)
                                                     ? vlSelfRef.__PVT__u_mmu__DOT__lsu_addr_w
                                                     : vlSelfRef.__PVT__mmu_ifetch_pc_w)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_req_q)
                                                     ? vlSelfRef.__PVT__u_mmu__DOT__lsu_addr_w
                                                     : vlSelfRef.__PVT__mmu_ifetch_pc_w));
}

void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__3(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__3\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_46 = (((
                                                   (((IData)(vlSelfRef.__PVT__fault_page_store_w) 
                                                     << 7U) 
                                                    | (((IData)(vlSelfRef.__PVT__mmu_load_fault_w) 
                                                        << 5U) 
                                                       | (((IData)(
                                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                    >> 0x00000038U)) 
                                                           & (IData)(vlSelfRef.__PVT__csr_opcode_valid_w)) 
                                                          << 4U))) 
                                                   | ((((3U 
                                                         == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                        & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_23)) 
                                                       << 3U) 
                                                      | ((((1U 
                                                            == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_23)) 
                                                          << 1U) 
                                                         | ((0U 
                                                             == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                            & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_23))))) 
                                                  << 8U) 
                                                 | (((((((IData)(vlSelfRef.__PVT__mmu_lsu_ack_w) 
                                                         & ((0U 
                                                             == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                                            & (IData)(vlSelfRef.__PVT__mmu_lsu_error_w))) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_st_q) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.__PVT__mmu_lsu_ack_w) 
                                                           & ((0U 
                                                               != (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                                              & (IData)(vlSelfRef.__PVT__mmu_lsu_error_w))) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_ld_q))) 
                                                     << 4U) 
                                                    | (((((IData)(
                                                                  (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                   >> 0x00000027U)) 
                                                          & (IData)(vlSelfRef.__PVT__csr_opcode_valid_w)) 
                                                         << 3U) 
                                                        | ((((IData)(
                                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                      >> 0x00000039U)) 
                                                             | (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_access_fault_w)) 
                                                            & (IData)(vlSelfRef.__PVT__csr_opcode_valid_w)) 
                                                           << 2U)) 
                                                       | (((IData)(
                                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                    >> 0x00000037U)) 
                                                           & (IData)(vlSelfRef.__PVT__csr_opcode_valid_w)) 
                                                          << 1U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_36 = (((1U 
                                                   >= (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                  & (0U 
                                                     != 
                                                     (vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_q 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))))
                                                  ? vlSelfRef.__PVT__u_csr__DOT__csr_stvec_q
                                                  : vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_q);
    vlSelfRef.__PVT__u_csr__DOT__take_exception_r = 0U;
    vlSelfRef.__PVT__u_csr__DOT__csr_mepc_r = vlSelfRef.__PVT__u_csr__DOT__csr_mepc_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = vlSelfRef.__PVT__u_csr__DOT__csr_sr_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = vlSelfRef.__PVT__u_csr__DOT__csr_mcause_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_r = vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_mip_r = vlSelfRef.__PVT__u_csr__DOT__csr_mip_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_mie_r = vlSelfRef.__PVT__u_csr__DOT__csr_mie_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_r = vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_mscratch_r = vlSelfRef.__PVT__u_csr__DOT__csr_mscratch_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_r = vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_r = vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r = vlSelfRef.__PVT__u_csr__DOT__csr_sepc_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_stvec_r = vlSelfRef.__PVT__u_csr__DOT__csr_stvec_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = vlSelfRef.__PVT__u_csr__DOT__csr_scause_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_stval_r = vlSelfRef.__PVT__u_csr__DOT__csr_stval_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_satp_r = vlSelfRef.__PVT__u_csr__DOT__csr_satp_q;
    vlSelfRef.__PVT__u_csr__DOT__csr_sscratch_r = vlSelfRef.__PVT__u_csr__DOT__csr_sscratch_q;
    vlSelfRef.__PVT__u_csr__DOT__result_r = 0U;
    vlSelfRef.__PVT__u_csr__DOT__data_r = 0U;
    vlSelfRef.__PVT__u_csr__DOT__take_intr_r = (0U 
                                                != vlSelfRef.__PVT__u_csr__DOT__irq_masked_r);
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__csr_opcode_valid_w)) 
               | (0ULL != (0x0000003fe0000000ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))))) {
        vlSelfRef.__PVT__u_csr__DOT__take_intr_r = 0U;
    }
    vlSelfRef.__PVT__u_csr__DOT__exception_s_r = ((0U 
                                                   != 
                                                   (0xa050U 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)))
                                                   ? 
                                                  (0U 
                                                   != 
                                                   (0x0000a050U 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46) 
                                                       & vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_q)))
                                                   : 
                                                  (0U 
                                                   != 
                                                   (0xfffff0f7U 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46) 
                                                       & vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_q))));
    vlSelfRef.__PVT__u_csr__DOT__interrupt_s_r = (0U 
                                                  != 
                                                  (vlSelfRef.__PVT__u_csr__DOT__irq_masked_r 
                                                   & vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_q));
    if ((IData)((0U != (0xb0f6U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))))) {
        vlSelfRef.__PVT__u_csr__DOT__take_exception_r = 1U;
    }
    if (vlSelfRef.__PVT__u_csr__DOT__take_exception_r) {
        vlSelfRef.__PVT__u_csr__DOT__take_intr_r = 0U;
        if (((1U >= (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
             & (IData)(vlSelfRef.__PVT__u_csr__DOT__exception_s_r))) {
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xffffffdfU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | (0x00000020U & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                   << 4U)));
            vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_r = 1U;
            if ((0U != (0xa050U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r 
                    = vlSelfRef.__PVT__u_csr__DOT__pc_m_q;
                vlSelfRef.__PVT__u_csr__DOT__csr_stval_r 
                    = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22)
                        ? vlSelfRef.__PVT__u_mmu__DOT__lsu_in_addr_q
                        : (vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q 
                           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_55)))));
            } else if ((0x00001000U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r 
                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
                vlSelfRef.__PVT__u_csr__DOT__csr_stval_r 
                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
            } else {
                vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r 
                    = ((IData)(vlSelfRef.__PVT__u_csr__DOT__branch_q)
                        ? vlSelfRef.__PVT__u_csr__DOT__branch_target_q
                        : ((IData)(vlSelfRef.__PVT__u_csr__DOT__valid_unit_inst_w)
                            ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                            : ((IData)(vlSelfRef.__PVT__branch_request_w)
                                ? vlSelfRef.__PVT__branch_pc_w
                                : ((IData)(vlSelfRef.__PVT__csr_opcode_valid_w)
                                    ? ((IData)(4U) 
                                       + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))));
                vlSelfRef.__PVT__u_csr__DOT__csr_stval_r = 0U;
            }
            if ((0x00000010U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 4U;
            } else if ((0x00000040U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 6U;
            } else if ((0x00002000U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 0x0000000dU;
            } else if ((0x00008000U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 0x0000000fU;
            } else if ((0x00001000U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 0x0000000cU;
            } else if ((4U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 2U;
            } else if ((2U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 1U;
            } else if ((0x00000020U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 5U;
            } else if ((0x00000080U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 7U;
            }
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xfffffeffU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | ((1U == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                    << 8U));
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                (0xfffffffdU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r);
        } else {
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xffffff7fU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | (0x00000080U & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                   << 4U)));
            vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_r = 3U;
            vlSelfRef.__PVT__u_csr__DOT__csr_mepc_r 
                = ((0U != (0xa050U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)))
                    ? vlSelfRef.__PVT__u_csr__DOT__pc_m_q
                    : ((0x00001000U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))
                        ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                        : ((IData)(vlSelfRef.__PVT__u_csr__DOT__branch_q)
                            ? vlSelfRef.__PVT__u_csr__DOT__branch_target_q
                            : ((IData)(vlSelfRef.__PVT__u_csr__DOT__valid_unit_inst_w)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                                : ((IData)(vlSelfRef.__PVT__branch_request_w)
                                    ? vlSelfRef.__PVT__branch_pc_w
                                    : ((IData)(vlSelfRef.__PVT__csr_opcode_valid_w)
                                        ? ((IData)(4U) 
                                           + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                                        : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))))));
            if ((0x00000010U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 4U;
            } else if ((0x00000040U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 6U;
            } else if ((0x00002000U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 0x0000000dU;
            } else if ((0x00008000U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 0x0000000fU;
            } else if ((0x00001000U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 0x0000000cU;
            } else if ((4U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 2U;
            } else if ((2U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 1U;
            } else if ((0x00000020U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 5U;
            } else if ((0x00000080U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 7U;
            }
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xffffe7ffU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | ((IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q) 
                    << 0x0000000bU));
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                (0xfffffff7U & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r);
        }
    } else if (vlSelfRef.__PVT__u_csr__DOT__take_intr_r) {
        if (((1U >= (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
             & (IData)(vlSelfRef.__PVT__u_csr__DOT__interrupt_s_r))) {
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xffffffdfU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | (0x00000020U & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                   << 4U)));
            vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_r = 1U;
            vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r 
                = ((IData)(vlSelfRef.__PVT__u_csr__DOT__branch_q)
                    ? vlSelfRef.__PVT__u_csr__DOT__branch_target_q
                    : ((IData)(vlSelfRef.__PVT__u_csr__DOT__valid_unit_inst_w)
                        ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                        : ((IData)(vlSelfRef.__PVT__branch_request_w)
                            ? vlSelfRef.__PVT__branch_pc_w
                            : ((IData)(vlSelfRef.__PVT__csr_opcode_valid_w)
                                ? ((IData)(4U) + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                                : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))));
            if ((2U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 0x80000001U;
            } else if ((8U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 0x80000003U;
            } else if ((0x00000020U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 0x80000005U;
            } else if ((0x00000080U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 0x80000007U;
            } else if ((0x00000200U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 0x80000009U;
            } else if ((0x00000800U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_scause_r = 0x8000000bU;
            }
            vlSelfRef.__PVT__u_csr__DOT__csr_stval_r = 0U;
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xfffffeffU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | ((1U == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                    << 8U));
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                (0xfffffffdU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r);
        } else {
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xffffff7fU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | (0x00000080U & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                   << 4U)));
            vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_r = 3U;
            vlSelfRef.__PVT__u_csr__DOT__csr_mepc_r 
                = ((IData)(vlSelfRef.__PVT__u_csr__DOT__branch_q)
                    ? vlSelfRef.__PVT__u_csr__DOT__branch_target_q
                    : ((IData)(vlSelfRef.__PVT__u_csr__DOT__valid_unit_inst_w)
                        ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                        : ((IData)(vlSelfRef.__PVT__branch_request_w)
                            ? vlSelfRef.__PVT__branch_pc_w
                            : ((IData)(vlSelfRef.__PVT__csr_opcode_valid_w)
                                ? ((IData)(4U) + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                                : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))));
            if ((2U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 0x80000001U;
            } else if ((8U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 0x80000003U;
            } else if ((0x00000020U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 0x80000005U;
            } else if ((0x00000080U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 0x80000007U;
            } else if ((0x00000200U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 0x80000009U;
            } else if ((0x00000800U & vlSelfRef.__PVT__u_csr__DOT__irq_masked_r)) {
                vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r = 0x8000000bU;
            }
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xffffe7ffU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | ((IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q) 
                    << 0x0000000bU));
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                (0xfffffff7U & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r);
        }
    } else if (((IData)(vlSelfRef.__PVT__csr_opcode_valid_w) 
                & ((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                   | (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r)))) {
        vlSelfRef.__PVT__u_csr__DOT__data_r = ((IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x0000700000000000ULL 
                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))
                                                ? (0x0000001fU 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                      >> 0x0000000fU))
                                                : vlSelfRef.__PVT__opcode_ra_operand_w);
        if ((0x00000800U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
            if ((0x00000400U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                if ((0x00000200U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                    if ((0x00000100U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                              >> 5U)))) {
                                    if ((0x00000010U 
                                         & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ vlSelfRef.__PVT__u_csr__DOT__imm12_r))) {
                                                        vlSelfRef.__PVT__u_csr__DOT__result_r = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                     >> 8U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                  >> 7U)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                      >> 6U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelfRef.__PVT__u_csr__DOT__imm12_r))) {
                                                    vlSelfRef.__PVT__u_csr__DOT__result_r 
                                                        = vlSelfRef.__PVT__u_csr__DOT__csr_mcycle_q;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                             >> 0x0000000aU)))) {
            if ((0x00000200U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                if ((0x00000100U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                  >> 7U)))) {
                        if ((0x00000040U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                              >> 4U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                  >> 3U)))) {
                                        if ((4U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelfRef.__PVT__u_csr__DOT__imm12_r))) {
                                                    vlSelfRef.__PVT__u_csr__DOT__data_r 
                                                        = 
                                                        (0x00000aaaU 
                                                         & vlSelfRef.__PVT__u_csr__DOT__data_r);
                                                    vlSelfRef.__PVT__u_csr__DOT__result_r 
                                                        = 
                                                        (0x00000aaaU 
                                                         & vlSelfRef.__PVT__u_csr__DOT__csr_mip_r);
                                                    if (
                                                        ((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                                         & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                                        vlSelfRef.__PVT__u_csr__DOT__csr_mip_r 
                                                            = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                                    } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                                        vlSelfRef.__PVT__u_csr__DOT__csr_mip_r 
                                                            = 
                                                            (vlSelfRef.__PVT__u_csr__DOT__csr_mip_r 
                                                             | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                                    } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                                        vlSelfRef.__PVT__u_csr__DOT__csr_mip_r 
                                                            = 
                                                            (vlSelfRef.__PVT__u_csr__DOT__csr_mip_r 
                                                             & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                            if ((1U 
                                                 & (~ vlSelfRef.__PVT__u_csr__DOT__imm12_r))) {
                                                vlSelfRef.__PVT__u_csr__DOT__data_r 
                                                    = 
                                                    (0x8000000fU 
                                                     & vlSelfRef.__PVT__u_csr__DOT__data_r);
                                                vlSelfRef.__PVT__u_csr__DOT__result_r 
                                                    = 
                                                    (0x8000000fU 
                                                     & vlSelfRef.__PVT__u_csr__DOT__csr_mcause_q);
                                                if (
                                                    ((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                                     & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r 
                                                        = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                                } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r 
                                                        = 
                                                        (vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r 
                                                         | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                                } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r 
                                                        = 
                                                        (vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r 
                                                         & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                            if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                                 & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mepc_r 
                                                    = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                            } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mepc_r 
                                                    = 
                                                    (vlSelfRef.__PVT__u_csr__DOT__csr_mepc_r 
                                                     | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                            } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mepc_r 
                                                    = 
                                                    (vlSelfRef.__PVT__u_csr__DOT__csr_mepc_r 
                                                     & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                            }
                                            vlSelfRef.__PVT__u_csr__DOT__result_r 
                                                = vlSelfRef.__PVT__u_csr__DOT__csr_mepc_q;
                                        } else {
                                            if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                                 & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mscratch_r 
                                                    = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                            } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mscratch_r 
                                                    = 
                                                    (vlSelfRef.__PVT__u_csr__DOT__csr_mscratch_r 
                                                     | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                            } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mscratch_r 
                                                    = 
                                                    (vlSelfRef.__PVT__u_csr__DOT__csr_mscratch_r 
                                                     & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                            }
                                            vlSelfRef.__PVT__u_csr__DOT__result_r 
                                                = vlSelfRef.__PVT__u_csr__DOT__csr_mscratch_q;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                             >> 5U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                          >> 4U)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                              >> 3U)))) {
                                    if ((4U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                                if (
                                                    ((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                                     & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_r 
                                                        = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                                } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_r 
                                                        = 
                                                        (vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_r 
                                                         | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                                } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_r 
                                                        = 
                                                        (vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_r 
                                                         & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                                }
                                                vlSelfRef.__PVT__u_csr__DOT__result_r 
                                                    = vlSelfRef.__PVT__u_csr__DOT__csr_mtvec_q;
                                            } else {
                                                vlSelfRef.__PVT__u_csr__DOT__data_r 
                                                    = 
                                                    (0x00000aaaU 
                                                     & vlSelfRef.__PVT__u_csr__DOT__data_r);
                                                vlSelfRef.__PVT__u_csr__DOT__result_r 
                                                    = 
                                                    (0x00000aaaU 
                                                     & vlSelfRef.__PVT__u_csr__DOT__csr_mie_q);
                                                if (
                                                    ((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                                     & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_mie_r 
                                                        = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                                } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_mie_r 
                                                        = 
                                                        (vlSelfRef.__PVT__u_csr__DOT__csr_mie_r 
                                                         | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                                } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_mie_r 
                                                        = 
                                                        (vlSelfRef.__PVT__u_csr__DOT__csr_mie_r 
                                                         & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                                }
                                            }
                                        }
                                    } else if ((2U 
                                                & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                        if ((1U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                            vlSelfRef.__PVT__u_csr__DOT__data_r 
                                                = (0x0000ffffU 
                                                   & vlSelfRef.__PVT__u_csr__DOT__data_r);
                                            vlSelfRef.__PVT__u_csr__DOT__result_r 
                                                = (0x0000ffffU 
                                                   & vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_q);
                                            if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                                 & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_r 
                                                    = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                            } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_r 
                                                    = 
                                                    (vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_r 
                                                     | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                            } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_r 
                                                    = 
                                                    (vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_r 
                                                     & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                            }
                                        } else {
                                            vlSelfRef.__PVT__u_csr__DOT__data_r 
                                                = (0x0000ffffU 
                                                   & vlSelfRef.__PVT__u_csr__DOT__data_r);
                                            vlSelfRef.__PVT__u_csr__DOT__result_r 
                                                = (0x0000ffffU 
                                                   & vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_q);
                                            if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                                 & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_r 
                                                    = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                            } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_r 
                                                    = 
                                                    (vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_r 
                                                     | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                            } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_r 
                                                    = 
                                                    (vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_r 
                                                     & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                            }
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                        vlSelfRef.__PVT__u_csr__DOT__result_r = 0x40141100U;
                                    } else {
                                        if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                             & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                                = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                        } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                                = (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                                   | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                        } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                                = (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                                   & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                        }
                                        vlSelfRef.__PVT__u_csr__DOT__result_r 
                                            = vlSelfRef.__PVT__u_csr__DOT__csr_sr_q;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x00000100U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                if ((0x00000080U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                  >> 6U)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                          >> 4U)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelfRef.__PVT__u_csr__DOT__imm12_r))) {
                                                if (
                                                    ((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                                     & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_satp_r 
                                                        = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                                } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_satp_r 
                                                        = 
                                                        (vlSelfRef.__PVT__u_csr__DOT__csr_satp_r 
                                                         | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                                } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                                    vlSelfRef.__PVT__u_csr__DOT__csr_satp_r 
                                                        = 
                                                        (vlSelfRef.__PVT__u_csr__DOT__csr_satp_r 
                                                         & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                                }
                                                vlSelfRef.__PVT__u_csr__DOT__result_r 
                                                    = vlSelfRef.__PVT__u_csr__DOT__csr_satp_q;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x00000040U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                  >> 5U)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                          >> 3U)))) {
                                if ((4U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelfRef.__PVT__u_csr__DOT__imm12_r))) {
                                            vlSelfRef.__PVT__u_csr__DOT__data_r 
                                                = (0x00000222U 
                                                   & vlSelfRef.__PVT__u_csr__DOT__data_r);
                                            vlSelfRef.__PVT__u_csr__DOT__result_r 
                                                = (0x00000222U 
                                                   & vlSelfRef.__PVT__u_csr__DOT__csr_mip_r);
                                            if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                                 & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mip_r 
                                                    = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                            } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mip_r 
                                                    = 
                                                    (vlSelfRef.__PVT__u_csr__DOT__csr_mip_r 
                                                     | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                            } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                                vlSelfRef.__PVT__u_csr__DOT__csr_mip_r 
                                                    = 
                                                    (vlSelfRef.__PVT__u_csr__DOT__csr_mip_r 
                                                     & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                            }
                                        }
                                    }
                                } else if ((2U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                    if ((1U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                        if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                             & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_stval_r 
                                                = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                        } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_stval_r 
                                                = (vlSelfRef.__PVT__u_csr__DOT__csr_stval_r 
                                                   | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                        } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_stval_r 
                                                = (vlSelfRef.__PVT__u_csr__DOT__csr_stval_r 
                                                   & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                        }
                                        vlSelfRef.__PVT__u_csr__DOT__result_r 
                                            = vlSelfRef.__PVT__u_csr__DOT__csr_stval_q;
                                    } else {
                                        vlSelfRef.__PVT__u_csr__DOT__data_r 
                                            = (0x8000000fU 
                                               & vlSelfRef.__PVT__u_csr__DOT__data_r);
                                        vlSelfRef.__PVT__u_csr__DOT__result_r 
                                            = (0x8000000fU 
                                               & vlSelfRef.__PVT__u_csr__DOT__csr_scause_q);
                                        if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                             & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_scause_r 
                                                = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                        } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_scause_r 
                                                = (vlSelfRef.__PVT__u_csr__DOT__csr_scause_r 
                                                   | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                        } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_scause_r 
                                                = (vlSelfRef.__PVT__u_csr__DOT__csr_scause_r 
                                                   & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                        }
                                    }
                                } else if ((1U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                    if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                         & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                        vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r 
                                            = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                    } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                        vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r 
                                            = (vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r 
                                               | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                    } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                        vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r 
                                            = (vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r 
                                               & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                    }
                                    vlSelfRef.__PVT__u_csr__DOT__result_r 
                                        = vlSelfRef.__PVT__u_csr__DOT__csr_sepc_q;
                                } else {
                                    if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                         & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                        vlSelfRef.__PVT__u_csr__DOT__csr_sscratch_r 
                                            = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                    } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                        vlSelfRef.__PVT__u_csr__DOT__csr_sscratch_r 
                                            = (vlSelfRef.__PVT__u_csr__DOT__csr_sscratch_r 
                                               | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                    } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                        vlSelfRef.__PVT__u_csr__DOT__csr_sscratch_r 
                                            = (vlSelfRef.__PVT__u_csr__DOT__csr_sscratch_r 
                                               & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                    }
                                    vlSelfRef.__PVT__u_csr__DOT__result_r 
                                        = vlSelfRef.__PVT__u_csr__DOT__csr_sscratch_q;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                     >> 5U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                  >> 4U)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                      >> 3U)))) {
                            if ((4U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                              >> 1U)))) {
                                    if ((1U & vlSelfRef.__PVT__u_csr__DOT__imm12_r)) {
                                        if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                             & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_stvec_r 
                                                = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                        } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_stvec_r 
                                                = (vlSelfRef.__PVT__u_csr__DOT__csr_stvec_r 
                                                   | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                        } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_stvec_r 
                                                = (vlSelfRef.__PVT__u_csr__DOT__csr_stvec_r 
                                                   & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                        }
                                        vlSelfRef.__PVT__u_csr__DOT__result_r 
                                            = vlSelfRef.__PVT__u_csr__DOT__csr_stvec_q;
                                    } else {
                                        vlSelfRef.__PVT__u_csr__DOT__data_r 
                                            = (0x00000222U 
                                               & vlSelfRef.__PVT__u_csr__DOT__data_r);
                                        vlSelfRef.__PVT__u_csr__DOT__result_r 
                                            = (0x00000222U 
                                               & vlSelfRef.__PVT__u_csr__DOT__csr_mie_q);
                                        if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                             & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_mie_r 
                                                = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                        } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_mie_r 
                                                = (vlSelfRef.__PVT__u_csr__DOT__csr_mie_r 
                                                   | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                        } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                            vlSelfRef.__PVT__u_csr__DOT__csr_mie_r 
                                                = (vlSelfRef.__PVT__u_csr__DOT__csr_mie_r 
                                                   & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.__PVT__u_csr__DOT__imm12_r 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelfRef.__PVT__u_csr__DOT__imm12_r))) {
                                    vlSelfRef.__PVT__u_csr__DOT__data_r 
                                        = (0x00040133U 
                                           & vlSelfRef.__PVT__u_csr__DOT__data_r);
                                    vlSelfRef.__PVT__u_csr__DOT__result_r 
                                        = (0x00040133U 
                                           & vlSelfRef.__PVT__u_csr__DOT__csr_sr_q);
                                    if (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                         & (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r))) {
                                        vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                            = vlSelfRef.__PVT__u_csr__DOT__data_r;
                                    } else if (vlSelfRef.__PVT__u_csr__DOT__set_r) {
                                        vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                            = (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                               | vlSelfRef.__PVT__u_csr__DOT__data_r);
                                    } else if (vlSelfRef.__PVT__u_csr__DOT__clr_r) {
                                        vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                            = (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                               & (~ vlSelfRef.__PVT__u_csr__DOT__data_r));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if (((IData)(vlSelfRef.__PVT__csr_opcode_valid_w) 
                & (IData)((0ULL != (0x000000c000000000ULL 
                                    & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))))) {
        if (((1U >= (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
             & (0U != ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46) 
                       & vlSelfRef.__PVT__u_csr__DOT__csr_medeleg_q)))) {
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xffffffdfU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | (0x00000020U & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_q 
                                   << 4U)));
            vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_r = 1U;
            vlSelfRef.__PVT__u_csr__DOT__csr_sepc_r 
                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
            vlSelfRef.__PVT__u_csr__DOT__csr_scause_r 
                = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x27U))) ? 3U : 
                   ((IData)(8U) + (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)));
            vlSelfRef.__PVT__u_csr__DOT__csr_stval_r = 0U;
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xfffffeffU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | ((1U == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                    << 8U));
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                (0xfffffffdU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r);
        } else {
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xffffff7fU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | (0x00000080U & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                                   << 4U)));
            vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_r = 3U;
            vlSelfRef.__PVT__u_csr__DOT__csr_mepc_r 
                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
            vlSelfRef.__PVT__u_csr__DOT__csr_mcause_r 
                = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x27U))) ? 3U : 
                   ((IData)(8U) + (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)));
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xffffe7ffU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | ((IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q) 
                    << 0x0000000bU));
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                (0xfffffff7U & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r);
        }
    } else if (((IData)(vlSelfRef.__PVT__csr_opcode_valid_w) 
                & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x28U)))) {
        if ((0x20000000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)) {
            vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_r 
                = (3U & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                         >> 0x0bU));
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xfffffff7U & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | (8U & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                          >> 4U)));
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                (0x00000080U | vlSelfRef.__PVT__u_csr__DOT__csr_sr_r);
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                (0xffffe7ffU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r);
        } else {
            vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_r 
                = ((0x00000100U & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                ((0xfffffffdU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r) 
                 | (2U & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_r 
                          >> 4U)));
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                (0x00000020U | vlSelfRef.__PVT__u_csr__DOT__csr_sr_r);
            vlSelfRef.__PVT__u_csr__DOT__csr_sr_r = 
                (0xfffffeffU & vlSelfRef.__PVT__u_csr__DOT__csr_sr_r);
        }
    }
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__intr_q) {
        vlSelfRef.__PVT__u_csr__DOT__csr_mip_r = ((0x00000200U 
                                                   & vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_q)
                                                   ? 
                                                  (0x00000200U 
                                                   | vlSelfRef.__PVT__u_csr__DOT__csr_mip_r)
                                                   : 
                                                  (0x00000800U 
                                                   | vlSelfRef.__PVT__u_csr__DOT__csr_mip_r));
    }
}

void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__4(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__4\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_fetch__DOT__icache_busy_w = 
        ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o)) 
         & (IData)(vlSelfRef.__PVT__u_fetch__DOT__icache_fetch_q));
}

void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__5(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__5\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_38;
    __VdfgRegularize_hebeb780c_0_38 = 0;
    // Body
    vlSelfRef.__PVT__fetch_valid_w = ((~ (IData)(vlSelfRef.__PVT__u_fetch__DOT__branch_w)) 
                                      & ((IData)(vlSelfRef.__PVT__u_fetch__DOT__fetch_page_fault_q) 
                                         | ((IData)(vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q) 
                                            | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o))));
    vlSelfRef.__PVT__mmu_ifetch_rd_w = ((IData)(vlSelfRef.__PVT__u_fetch__DOT__active_q) 
                                        & ((~ (IData)(vlSelfRef.__PVT__u_fetch__DOT__icache_busy_w)) 
                                           & (IData)(vlSelfRef.__PVT__fetch_accept_w)));
    vlSelfRef.__PVT__u_mmu__DOT__itlb_hit_w = ((IData)(vlSelfRef.__PVT__mmu_ifetch_rd_w) 
                                               & ((IData)(vlSelfRef.__PVT__u_mmu__DOT__itlb_valid_q) 
                                                  & (vlSelfRef.__PVT__u_mmu__DOT__itlb_va_addr_q 
                                                     == 
                                                     (vlSelfRef.__PVT__mmu_ifetch_pc_w 
                                                      >> 0x0000000cU))));
    vlSelfRef.__PVT__u_mmu__DOT__itlb_miss_w = ((IData)(vlSelfRef.__PVT__mmu_ifetch_rd_w) 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_mmu__DOT__itlb_hit_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w)));
    __VdfgRegularize_hebeb780c_0_38 = ((IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w) 
                                       & (IData)(vlSelfRef.__PVT__u_mmu__DOT__itlb_hit_w));
    vlSelfRef.__PVT__mmu_fetch_fault_w = (((1U == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q))
                                            ? ((~ (vlSelfRef.__PVT__u_mmu__DOT__itlb_entry_q 
                                                   >> 3U)) 
                                               | ((~ 
                                                   (vlSelfRef.__PVT__u_csr__DOT__csr_sr_q 
                                                    >> 0x00000012U)) 
                                                  & (vlSelfRef.__PVT__u_mmu__DOT__itlb_entry_q 
                                                     >> 4U)))
                                            : (~ (3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__PVT__u_mmu__DOT__itlb_entry_q 
                                                      >> 3U))))) 
                                          & (IData)(__VdfgRegularize_hebeb780c_0_38));
    vlSelfRef.__PVT__mmu_ifetch_accept_w = ((((~ (IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w)) 
                                              | (IData)(__VdfgRegularize_hebeb780c_0_38)) 
                                             & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o)) 
                                            | (IData)(vlSelfRef.__PVT__mmu_fetch_fault_w));
    vlSelfRef.__PVT__u_fetch__DOT__stall_w = (1U & 
                                              ((~ ((IData)(vlSelfRef.__PVT__fetch_accept_w) 
                                                   & (IData)(vlSelfRef.__PVT__mmu_ifetch_accept_w))) 
                                               | (IData)(vlSelfRef.__PVT__u_fetch__DOT__icache_busy_w)));
}
