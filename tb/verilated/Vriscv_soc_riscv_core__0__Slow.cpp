// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_51;
    __VdfgRegularize_hebeb780c_0_51 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_52;
    __VdfgRegularize_hebeb780c_0_52 = 0;
    // Body
    vlSelfRef.__PVT__u_muldiv__DOT__signed_operation_w 
        = (IData)((0ULL != (0x0028000000000000ULL & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)));
    vlSelfRef.__PVT__u_csr__DOT__csr_mcycle_r = ((IData)(1U) 
                                                 + vlSelfRef.__PVT__u_csr__DOT__csr_mcycle_q);
    vlSelfRef.__PVT__u_muldiv__DOT__div_complete_w 
        = ((~ (0U != vlSelfRef.__PVT__u_muldiv__DOT__q_mask_q)) 
           & (IData)(vlSelfRef.__PVT__u_muldiv__DOT__div_busy_q));
    vlSelfRef.__PVT__fetch_pc_w = ((IData)(vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q)
                                    ? (IData)((vlSelfRef.__PVT__u_fetch__DOT__skid_buffer_q 
                                               >> 0x00000020U))
                                    : vlSelfRef.__PVT__u_fetch__DOT__pc_d_q);
    vlSelfRef.__PVT__writeback_csr_idx_w = ((IData)(vlSelfRef.__PVT__u_csr__DOT__writeback_idx_q) 
                                            & (- (IData)(
                                                         ((IData)(vlSelfRef.__PVT__u_csr__DOT__writeback_en_q) 
                                                          | (IData)(vlSelfRef.__PVT__u_csr__DOT__writeback_squash_q)))));
    vlSelfRef.__PVT__u_csr__DOT__m_enabled_r = ((3U 
                                                 > (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                | ((3U 
                                                    == (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                   & (vlSelfRef.__PVT__u_csr__DOT__csr_sr_q 
                                                      >> 3U)));
    vlSelfRef.__PVT__u_csr__DOT__irq_pending_r = (vlSelfRef.__PVT__u_csr__DOT__csr_mip_q 
                                                  & vlSelfRef.__PVT__u_csr__DOT__csr_mie_q);
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
    vlSelfRef.__PVT__u_csr__DOT__imm12_r = (((- (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                         >> 0x0000001fU))) 
                                             << 0x0000000cU) 
                                            | (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x00000014U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_53 = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_ld_q) 
                                                 | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_st_q));
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
    vlSelfRef.__PVT__u_arb__DOT__src_mmu_w = ((IData)(vlSelfRef.__PVT__u_arb__DOT__read_hold_q)
                                               ? (IData)(vlSelfRef.__PVT__u_arb__DOT__src_mmu_q)
                                               : (IData)(vlSelfRef.__PVT__u_mmu__DOT__mem_req_q));
    __VdfgRegularize_hebeb780c_0_51 = (1U & ((~ (vlSelfRef.__PVT__u_csr__DOT__csr_sr_q 
                                                 >> 0x00000012U)) 
                                             & (vlSelfRef.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                >> 4U)));
    vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w = ((3U 
                                                  != (IData)(vlSelfRef.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                 & (vlSelfRef.__PVT__u_csr__DOT__csr_satp_q 
                                                    >> 0x0000001fU));
    vlSelfRef.__PVT__u_mmu__DOT__store_w = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q) 
                                            | (IData)(vlSelfRef.__PVT__u_mmu__DOT__store_q));
    vlSelfRef.__PVT__u_mmu__DOT__load_w = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q) 
                                           | (IData)(vlSelfRef.__PVT__u_mmu__DOT__load_q));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_54 = ((~ vlSelfRef.__PVT__u_csr__DOT__csr_mideleg_q) 
                                                 & vlSelfRef.__PVT__u_csr__DOT__irq_pending_r);
    __VdfgRegularize_hebeb780c_0_52 = ((0U != (IData)(vlSelfRef.__PVT__u_mmu__DOT__store_w)) 
                                       | (IData)(vlSelfRef.__PVT__u_mmu__DOT__load_w));
    vlSelfRef.__PVT__u_csr__DOT__irq_masked_r = (((IData)(vlSelfRef.__PVT__u_csr__DOT__m_enabled_r) 
                                                  & (0U 
                                                     != vlSelfRef.__VdfgRegularize_hebeb780c_0_54))
                                                  ? 
                                                 ((- (IData)((IData)(vlSelfRef.__PVT__u_csr__DOT__m_enabled_r))) 
                                                  & vlSelfRef.__VdfgRegularize_hebeb780c_0_54)
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
    vlSelfRef.__PVT__u_mmu__DOT__lsu_addr_w = ((IData)(__VdfgRegularize_hebeb780c_0_52)
                                                ? vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q
                                                : vlSelfRef.__PVT__u_mmu__DOT__lsu_in_addr_q);
    vlSelfRef.__PVT__u_mmu__DOT__dtlb_hit_w = ((IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_valid_q) 
                                               & (vlSelfRef.__PVT__u_mmu__DOT__dtlb_va_addr_q 
                                                  == 
                                                  (vlSelfRef.__PVT__u_mmu__DOT__lsu_addr_w 
                                                   >> 0x0000000cU)));
    vlSelfRef.__PVT__u_mmu__DOT__dtlb_miss_w = ((IData)(__VdfgRegularize_hebeb780c_0_52) 
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
                                                   | (IData)(__VdfgRegularize_hebeb780c_0_51))
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
                                                 | (IData)(__VdfgRegularize_hebeb780c_0_51))
                                                 : (IData)(
                                                           (0x00000012U 
                                                            != 
                                                            (0x00000012U 
                                                             & vlSelfRef.__PVT__u_mmu__DOT__dtlb_entry_q)))) 
                                               & (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_hit_w))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = ((IData)(vlSelfRef.__PVT__fault_page_store_w) 
                                                 | (IData)(vlSelfRef.__PVT__mmu_load_fault_w));
    vlSelfRef.__PVT__csr_stall_w = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53));
}

VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__1\n"); );
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
    vlSelfRef.__PVT__u_fetch__DOT__icache_busy_w = 
        ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o)) 
         & (IData)(vlSelfRef.__PVT__u_fetch__DOT__icache_fetch_q));
    vlSelfRef.__PVT__mmu_lsu_accept_w = ((((~ (IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w)) 
                                           | ((IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w) 
                                              & (IData)(vlSelfRef.__PVT__u_mmu__DOT__dtlb_hit_w))) 
                                          & ((~ (IData)(vlSelfRef.__PVT__u_arb__DOT__src_mmu_w)) 
                                             & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o))) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_22));
    vlSelfRef.__PVT__arb_mmu_error_w = ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_error_o) 
                                        & (7U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)));
    vlSelfRef.__PVT__mmu_lsu_error_w = ((7U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                        & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_error_o));
    vlSelfRef.__PVT__arb_mmu_ack_w = ((7U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                      & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_ack_o));
    vlSelfRef.__PVT__mmu_lsu_ack_w = ((7U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                      & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_ack_o));
    vlSelfRef.__PVT__lsu_stall_w = ((~ (IData)(vlSelfRef.__PVT__mmu_lsu_accept_w)) 
                                    & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                       | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q) 
                                          | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q) 
                                             | (0U 
                                                != (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q))))));
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
                        ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i 
                           >> 0x18U) : (0x000000ffU 
                                        & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i 
                                           >> 0x10U)))
                    : ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (0x000000ffU & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i 
                                          >> 8U)) : 
                       (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i)));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 7U))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffffff00U | (0x000000ffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else if (vlSelfRef.__PVT__u_lsu__DOT__load_half_r) {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i 
                       >> 0x10U) : (0x0000ffffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 0x0fU))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffff0000U | (0x0000ffffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i;
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

VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_36;
    __VdfgRegularize_hebeb780c_0_36 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_48;
    __VdfgRegularize_hebeb780c_0_48 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_55;
    __VdfgRegularize_hebeb780c_0_55 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__lsu_opcode_valid_w = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) 
                                           & ((~ (IData)(vlSelfRef.__PVT__csr_stall_w)) 
                                              & (~ (IData)(vlSelfRef.__PVT__muldiv_stall_w))));
    __VdfgRegularize_hebeb780c_0_48 = ((~ (IData)(vlSelfRef.__PVT__lsu_stall_w)) 
                                       & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r));
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_57)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__opcode_ra_operand_w))));
    __Vtemp_2[1U] = (((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_57))) 
                      << 1U) | (IData)(((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_57)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.__PVT__opcode_ra_operand_w))) 
                                        >> 0x00000020U)));
    __Vtemp_2[2U] = ((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_57))) 
                     >> 0x0000001fU);
    __Vtemp_3[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_56)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__opcode_rb_operand_w))));
    __Vtemp_3[1U] = (((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_56))) 
                      << 1U) | (IData)(((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_56)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.__PVT__opcode_rb_operand_w))) 
                                        >> 0x00000020U)));
    __Vtemp_3[2U] = ((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_56))) 
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
                                              & (IData)(__VdfgRegularize_hebeb780c_0_48));
    vlSelfRef.__PVT__csr_opcode_valid_w = ((~ (IData)(vlSelfRef.__PVT__muldiv_stall_w)) 
                                           & (IData)(__VdfgRegularize_hebeb780c_0_48));
    vlSelfRef.__PVT__mmu_ifetch_rd_w = ((IData)(vlSelfRef.__PVT__u_fetch__DOT__active_q) 
                                        & ((~ (IData)(vlSelfRef.__PVT__u_fetch__DOT__icache_busy_w)) 
                                           & (IData)(vlSelfRef.__PVT__fetch_accept_w)));
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
    __VdfgRegularize_hebeb780c_0_55 = (((IData)(vlSelfRef.__PVT__u_csr__DOT__set_r) 
                                        | (IData)(vlSelfRef.__PVT__u_csr__DOT__clr_r)) 
                                       & (IData)(vlSelfRef.__PVT__csr_opcode_valid_w));
    vlSelfRef.__PVT__fetch_branch_w = ((IData)(vlSelfRef.__PVT__u_csr__DOT__branch_q) 
                                       | (IData)(vlSelfRef.__PVT__branch_request_w));
    vlSelfRef.__PVT__mmu_flush_w = ((0x0180U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x00000014U)) 
                                    & (IData)(__VdfgRegularize_hebeb780c_0_55));
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
           & (IData)(__VdfgRegularize_hebeb780c_0_55));
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
    vlSelfRef.__PVT__fetch_valid_w = ((~ (IData)(vlSelfRef.__PVT__u_fetch__DOT__branch_w)) 
                                      & ((IData)(vlSelfRef.__PVT__u_fetch__DOT__fetch_page_fault_q) 
                                         | ((IData)(vlSelfRef.__PVT__u_fetch__DOT__skid_valid_q) 
                                            | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o))));
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
    vlSelfRef.__PVT__u_mmu__DOT__itlb_hit_w = ((IData)(vlSelfRef.__PVT__mmu_ifetch_rd_w) 
                                               & ((IData)(vlSelfRef.__PVT__u_mmu__DOT__itlb_valid_q) 
                                                  & (vlSelfRef.__PVT__u_mmu__DOT__itlb_va_addr_q 
                                                     == 
                                                     (vlSelfRef.__PVT__mmu_ifetch_pc_w 
                                                      >> 0x0000000cU))));
    vlSelfRef.__PVT__u_mmu__DOT__itlb_miss_w = ((IData)(vlSelfRef.__PVT__mmu_ifetch_rd_w) 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_mmu__DOT__itlb_hit_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w)));
    __VdfgRegularize_hebeb780c_0_36 = ((IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w) 
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
                                          & (IData)(__VdfgRegularize_hebeb780c_0_36));
    vlSelfRef.__PVT__mmu_ifetch_accept_w = ((((~ (IData)(vlSelfRef.__PVT__u_csr__DOT__mmu_enable_w)) 
                                              | (IData)(__VdfgRegularize_hebeb780c_0_36)) 
                                             & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o)) 
                                            | (IData)(vlSelfRef.__PVT__mmu_fetch_fault_w));
    vlSelfRef.__PVT__u_fetch__DOT__stall_w = (1U & 
                                              ((~ ((IData)(vlSelfRef.__PVT__fetch_accept_w) 
                                                   & (IData)(vlSelfRef.__PVT__mmu_ifetch_accept_w))) 
                                               | (IData)(vlSelfRef.__PVT__u_fetch__DOT__icache_busy_w)));
}

VL_ATTR_COLD void Vriscv_soc_riscv_core___ctor_var_reset(Vriscv_soc_riscv_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core___ctor_var_reset\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__mem_d_data_rd_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5535162730722174623ull);
    vlSelf->__PVT__mem_d_accept_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14465756536532123179ull);
    vlSelf->__PVT__mem_d_ack_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12200939270533628549ull);
    vlSelf->__PVT__mem_d_error_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10605234860516451110ull);
    vlSelf->__PVT__mem_d_resp_tag_i = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10422909805835692666ull);
    vlSelf->__PVT__mem_i_accept_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11456281600117499858ull);
    vlSelf->__PVT__mem_i_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11802235425221801591ull);
    vlSelf->__PVT__mem_i_error_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15816708546262887358ull);
    vlSelf->__PVT__mem_i_inst_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5377878836006740643ull);
    vlSelf->__PVT__intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9031270550293618600ull);
    vlSelf->__PVT__reset_vector_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8393161498616798439ull);
    vlSelf->__PVT__cpu_id_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17716042512655663375ull);
    vlSelf->__PVT__mem_d_addr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16292353200008927167ull);
    vlSelf->__PVT__mem_d_data_wr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12713131541009893927ull);
    vlSelf->__PVT__mem_d_rd_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16080873923357345650ull);
    vlSelf->__PVT__mem_d_wr_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12355706460015641832ull);
    vlSelf->__PVT__mem_d_cacheable_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1758125131298196985ull);
    vlSelf->__PVT__mem_d_req_tag_o = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 263261780128050880ull);
    vlSelf->__PVT__mem_d_invalidate_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13311475721657721871ull);
    vlSelf->__PVT__mem_d_flush_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 185337832013031818ull);
    vlSelf->__PVT__mem_i_rd_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5258620033682095076ull);
    vlSelf->__PVT__mem_i_flush_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13616200475678214039ull);
    vlSelf->__PVT__mem_i_invalidate_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8118639269105469071ull);
    vlSelf->__PVT__mem_i_pc_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3834846593921654017ull);
    vlSelf->__PVT__mmu_flush_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16167495801001899110ull);
    vlSelf->__PVT__csr_stall_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6159646950449649884ull);
    vlSelf->__PVT__fetch_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1218918606956126236ull);
    vlSelf->__PVT__arb_mmu_error_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14312704754598300130ull);
    vlSelf->__PVT__csr_opcode_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8458740130801892657ull);
    vlSelf->__PVT__mmu_lsu_error_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13947229599854667222ull);
    vlSelf->__PVT__mmu_fetch_fault_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 437471667342175257ull);
    vlSelf->__PVT__branch_request_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10468817671877853211ull);
    vlSelf->__PVT__opcode_ra_operand_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8167338730032765838ull);
    vlSelf->__PVT__muldiv_opcode_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1619308134375366564ull);
    vlSelf->__PVT__fault_page_store_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12612485245373940081ull);
    vlSelf->__PVT__branch_pc_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3204261293716081091ull);
    vlSelf->__PVT__muldiv_stall_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12020649341075017900ull);
    vlSelf->__PVT__lsu_stall_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4747964465469554186ull);
    vlSelf->__PVT__writeback_csr_idx_w = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13249647139212857133ull);
    vlSelf->__PVT__fetch_branch_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13457172230426713219ull);
    vlSelf->__PVT__mmu_ifetch_pc_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4324480088747420501ull);
    vlSelf->__PVT__arb_mmu_ack_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3025660788572878886ull);
    vlSelf->__PVT__mmu_lsu_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17571834345717514025ull);
    vlSelf->__PVT__mmu_ifetch_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7173589473096598095ull);
    vlSelf->__PVT__mmu_lsu_ack_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18155695452397443987ull);
    vlSelf->__PVT__fetch_pc_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 343447475039831819ull);
    vlSelf->__PVT__mmu_ifetch_rd_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14176657399559500293ull);
    vlSelf->__PVT__mmu_load_fault_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12869332105766229502ull);
    vlSelf->__PVT__opcode_rb_operand_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10973004025914572873ull);
    vlSelf->__PVT__fetch_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4695706319663607375ull);
    vlSelf->__PVT__lsu_opcode_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16026235195227891176ull);
    vlSelf->__PVT__fetch_instr_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10475357235095822037ull);
    vlSelf->__PVT__exec_opcode_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17459375379696541789ull);
    vlSelf->__PVT__u_fetch__DOT__active_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10358217656156265783ull);
    vlSelf->__PVT__u_fetch__DOT__fetch_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9587501606062247366ull);
    vlSelf->__PVT__u_fetch__DOT__branch_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13704873714239081416ull);
    vlSelf->__PVT__u_fetch__DOT__branch_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17343057553637539183ull);
    vlSelf->__PVT__u_fetch__DOT__icache_fetch_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 640773245464241296ull);
    vlSelf->__PVT__u_fetch__DOT__icache_invalidate_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3709965499793803166ull);
    vlSelf->__PVT__u_fetch__DOT__skid_buffer_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14346067669118128349ull);
    vlSelf->__PVT__u_fetch__DOT__skid_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9249482916025664570ull);
    vlSelf->__PVT__u_fetch__DOT__icache_busy_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10710673306845760563ull);
    vlSelf->__PVT__u_fetch__DOT__stall_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13241514939310731676ull);
    vlSelf->__PVT__u_fetch__DOT__branch_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17559052665954596038ull);
    vlSelf->__PVT__u_fetch__DOT__branch_pc_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7724716403328990949ull);
    vlSelf->__PVT__u_fetch__DOT__pc_d_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10214732636701862560ull);
    vlSelf->__PVT__u_fetch__DOT__fetch_page_fault_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11828718105617106730ull);
    vlSelf->__PVT__u_muldiv__DOT__rd_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12352961905382083119ull);
    vlSelf->__PVT__u_muldiv__DOT__wb_result_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11747394659159600424ull);
    vlSelf->__PVT__u_muldiv__DOT__wb_rd_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1445940975704980053ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->__PVT__u_muldiv__DOT__mult_result_w, __VscopeHash, 13424977585486924906ull);
    vlSelf->__PVT__u_muldiv__DOT__mult_result_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14084842902604900803ull);
    vlSelf->__PVT__u_muldiv__DOT__mult_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11263420528788388026ull);
    vlSelf->__PVT__u_muldiv__DOT__signed_operation_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 430604449193445921ull);
    vlSelf->__PVT__u_muldiv__DOT__dividend_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17838275125256469160ull);
    vlSelf->__PVT__u_muldiv__DOT__divisor_q = VL_SCOPED_RAND_RESET_Q(63, __VscopeHash, 13801163410247793687ull);
    vlSelf->__PVT__u_muldiv__DOT__quotient_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1706818931483240092ull);
    vlSelf->__PVT__u_muldiv__DOT__q_mask_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2048544374859009475ull);
    vlSelf->__PVT__u_muldiv__DOT__div_inst_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4413444992177331412ull);
    vlSelf->__PVT__u_muldiv__DOT__div_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6448840368168110404ull);
    vlSelf->__PVT__u_muldiv__DOT__invert_res_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14226777076363141112ull);
    vlSelf->__PVT__u_muldiv__DOT__div_start_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8076028144362957622ull);
    vlSelf->__PVT__u_muldiv__DOT__div_complete_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2393802617315282532ull);
    vlSelf->__PVT__u_csr__DOT__csr_mepc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6250504901089208359ull);
    vlSelf->__PVT__u_csr__DOT__csr_mcause_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13453958282117968721ull);
    vlSelf->__PVT__u_csr__DOT__csr_sr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14718259504293485472ull);
    vlSelf->__PVT__u_csr__DOT__csr_mtvec_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6997240599585217897ull);
    vlSelf->__PVT__u_csr__DOT__csr_mip_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4846607041993422085ull);
    vlSelf->__PVT__u_csr__DOT__csr_mie_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3709380317333796470ull);
    vlSelf->__PVT__u_csr__DOT__csr_mpriv_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9947842462309892181ull);
    vlSelf->__PVT__u_csr__DOT__csr_mcycle_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5745329217097524168ull);
    vlSelf->__PVT__u_csr__DOT__csr_mscratch_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9878124801026661147ull);
    vlSelf->__PVT__u_csr__DOT__csr_sepc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1255263727665667140ull);
    vlSelf->__PVT__u_csr__DOT__csr_stvec_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11873076113870018011ull);
    vlSelf->__PVT__u_csr__DOT__csr_scause_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8023059338890207161ull);
    vlSelf->__PVT__u_csr__DOT__csr_stval_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5737818137525184633ull);
    vlSelf->__PVT__u_csr__DOT__csr_satp_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6577790249921524313ull);
    vlSelf->__PVT__u_csr__DOT__csr_sscratch_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11672162096914431085ull);
    vlSelf->__PVT__u_csr__DOT__pc_m_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10073215138705847249ull);
    vlSelf->__PVT__u_csr__DOT__csr_access_fault_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3513452010721880979ull);
    vlSelf->__PVT__u_csr__DOT__imm12_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5559340598649259931ull);
    vlSelf->__PVT__u_csr__DOT__set_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7102189727868223710ull);
    vlSelf->__PVT__u_csr__DOT__clr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15338636687943163772ull);
    vlSelf->__PVT__u_csr__DOT__csr_mepc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3285865866284175471ull);
    vlSelf->__PVT__u_csr__DOT__csr_mcause_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1447516266252117027ull);
    vlSelf->__PVT__u_csr__DOT__csr_sr_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2628797002830830510ull);
    vlSelf->__PVT__u_csr__DOT__csr_mtvec_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9041286231877966130ull);
    vlSelf->__PVT__u_csr__DOT__csr_mip_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13477630948148172022ull);
    vlSelf->__PVT__u_csr__DOT__csr_mie_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10292548685507040528ull);
    vlSelf->__PVT__u_csr__DOT__csr_mtime_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10485297143391907337ull);
    vlSelf->__PVT__u_csr__DOT__csr_mtimecmp_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16992133155970401507ull);
    vlSelf->__PVT__u_csr__DOT__csr_mpriv_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6755544554943909072ull);
    vlSelf->__PVT__u_csr__DOT__csr_mcycle_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7390798091955756237ull);
    vlSelf->__PVT__u_csr__DOT__csr_mscratch_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1609678776954660151ull);
    vlSelf->__PVT__u_csr__DOT__csr_sepc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14369798135379205878ull);
    vlSelf->__PVT__u_csr__DOT__csr_stvec_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9379016749206675198ull);
    vlSelf->__PVT__u_csr__DOT__csr_scause_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16619143896894282301ull);
    vlSelf->__PVT__u_csr__DOT__csr_stval_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7025836129519154541ull);
    vlSelf->__PVT__u_csr__DOT__csr_satp_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15814136257844146707ull);
    vlSelf->__PVT__u_csr__DOT__csr_sscratch_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 132584912571694615ull);
    vlSelf->__PVT__u_csr__DOT__csr_medeleg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10283213847719459743ull);
    vlSelf->__PVT__u_csr__DOT__csr_medeleg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9494965108035218517ull);
    vlSelf->__PVT__u_csr__DOT__csr_mideleg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17132676502320080395ull);
    vlSelf->__PVT__u_csr__DOT__csr_mideleg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 855544363977887424ull);
    vlSelf->__PVT__u_csr__DOT__take_intr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4035540282260501821ull);
    vlSelf->__PVT__u_csr__DOT__take_exception_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1209774945662042407ull);
    vlSelf->__PVT__u_csr__DOT__exception_s_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17523675374653391770ull);
    vlSelf->__PVT__u_csr__DOT__interrupt_s_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3008687528154282686ull);
    vlSelf->__PVT__u_csr__DOT__data_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6498111642441542083ull);
    vlSelf->__PVT__u_csr__DOT__result_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8053110849936395238ull);
    vlSelf->__PVT__u_csr__DOT__valid_unit_inst_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5616907964993506837ull);
    vlSelf->__PVT__u_csr__DOT__irq_pending_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7956091388877383364ull);
    vlSelf->__PVT__u_csr__DOT__m_enabled_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7084687136779162097ull);
    vlSelf->__PVT__u_csr__DOT__irq_masked_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15675273332305272856ull);
    vlSelf->__PVT__u_csr__DOT__writeback_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3347541588041126403ull);
    vlSelf->__PVT__u_csr__DOT__writeback_idx_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15673666715547925127ull);
    vlSelf->__PVT__u_csr__DOT__writeback_value_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6977987352708369632ull);
    vlSelf->__PVT__u_csr__DOT__writeback_squash_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 567430681400240963ull);
    vlSelf->__PVT__u_csr__DOT__branch_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 597298931836084191ull);
    vlSelf->__PVT__u_csr__DOT__branch_target_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11099720680405799328ull);
    vlSelf->__PVT__u_csr__DOT__reset_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16577689954787342144ull);
    vlSelf->__PVT__u_csr__DOT__mmu_enable_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17844052941231593564ull);
    vlSelf->__PVT__u_lsu__DOT__mem_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4238565073615085565ull);
    vlSelf->__PVT__u_lsu__DOT__mem_data_wr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15765514311479607518ull);
    vlSelf->__PVT__u_lsu__DOT__mem_rd_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6316841130352815506ull);
    vlSelf->__PVT__u_lsu__DOT__mem_wr_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2191050468666632611ull);
    vlSelf->__PVT__u_lsu__DOT__mem_cacheable_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17848171149574451264ull);
    vlSelf->__PVT__u_lsu__DOT__mem_req_tag_q = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 18073028907188624859ull);
    vlSelf->__PVT__u_lsu__DOT__mem_invalidate_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7057217159065195572ull);
    vlSelf->__PVT__u_lsu__DOT__mem_flush_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5665390379592711929ull);
    vlSelf->__PVT__u_lsu__DOT__mem_unaligned_ld_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11119352551043774938ull);
    vlSelf->__PVT__u_lsu__DOT__mem_unaligned_st_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10953694695094667088ull);
    vlSelf->__PVT__u_lsu__DOT__mem_addr_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17445693882518802778ull);
    vlSelf->__PVT__u_lsu__DOT__mem_unaligned_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2119185578304073521ull);
    vlSelf->__PVT__u_lsu__DOT__addr_lsb_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8734067713292667061ull);
    vlSelf->__PVT__u_lsu__DOT__load_byte_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18179193541432784799ull);
    vlSelf->__PVT__u_lsu__DOT__load_half_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17245497560623256355ull);
    vlSelf->__PVT__u_lsu__DOT__load_word_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 665313267312279419ull);
    vlSelf->__PVT__u_lsu__DOT__load_signed_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15458309123557268863ull);
    vlSelf->__PVT__u_lsu__DOT__wb_idx_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 845404383814358131ull);
    vlSelf->__PVT__u_lsu__DOT__wb_result_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5985780859190196745ull);
    vlSelf->__PVT__u_arb__DOT__read_hold_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17201636439585381507ull);
    vlSelf->__PVT__u_arb__DOT__src_mmu_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 521373089097841228ull);
    vlSelf->__PVT__u_arb__DOT__src_mmu_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7651645971845490888ull);
    vlSelf->__PVT__u_mmu__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2883590639566223290ull);
    vlSelf->__PVT__u_mmu__DOT__load_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4070944949048740757ull);
    vlSelf->__PVT__u_mmu__DOT__store_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7650594657689950369ull);
    vlSelf->__PVT__u_mmu__DOT__load_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1573253255026056082ull);
    vlSelf->__PVT__u_mmu__DOT__store_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14754612860785727764ull);
    vlSelf->__PVT__u_mmu__DOT__lsu_in_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12561965718552896958ull);
    vlSelf->__PVT__u_mmu__DOT__lsu_addr_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2656574631228910605ull);
    vlSelf->__PVT__u_mmu__DOT__itlb_hit_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 182347676927537853ull);
    vlSelf->__PVT__u_mmu__DOT__dtlb_hit_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6232988213258340528ull);
    vlSelf->__PVT__u_mmu__DOT__dtlb_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6366584332218461691ull);
    vlSelf->__PVT__u_mmu__DOT__itlb_miss_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8906053017212341575ull);
    vlSelf->__PVT__u_mmu__DOT__dtlb_miss_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4660339434606592377ull);
    vlSelf->__PVT__u_mmu__DOT__request_addr_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6687331341686452953ull);
    vlSelf->__PVT__u_mmu__DOT__pte_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 374053065452222687ull);
    vlSelf->__PVT__u_mmu__DOT__pte_entry_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10277359595543084185ull);
    vlSelf->__PVT__u_mmu__DOT__virt_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13135046257511118785ull);
    vlSelf->__PVT__u_mmu__DOT__itlb_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12094419141305976584ull);
    vlSelf->__PVT__u_mmu__DOT__itlb_va_addr_q = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13356688594945358800ull);
    vlSelf->__PVT__u_mmu__DOT__itlb_entry_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15399925677667900875ull);
    vlSelf->__PVT__u_mmu__DOT__dtlb_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4993093178758159065ull);
    vlSelf->__PVT__u_mmu__DOT__dtlb_va_addr_q = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 14298117226846978178ull);
    vlSelf->__PVT__u_mmu__DOT__dtlb_entry_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17769713418442643009ull);
    vlSelf->__PVT__u_mmu__DOT__mem_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 586365220882509387ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_22 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_34 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_44 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_53 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_54 = 0;
    vlSelf->__Vdly__u_muldiv__DOT__dividend_q = 0;
    vlSelf->__Vdly__u_muldiv__DOT__quotient_q = 0;
    vlSelf->__Vdly__u_csr__DOT__branch_q = 0;
    vlSelf->__Vdly__u_csr__DOT__reset_q = 0;
    vlSelf->__Vdly__u_lsu__DOT__mem_rd_q = 0;
    vlSelf->__Vdly__u_lsu__DOT__mem_wr_q = 0;
    vlSelf->__Vdly__u_lsu__DOT__mem_invalidate_q = 0;
    vlSelf->__Vdly__u_lsu__DOT__mem_flush_q = 0;
    vlSelf->__Vdly__u_mmu__DOT__state_q = 0;
}
