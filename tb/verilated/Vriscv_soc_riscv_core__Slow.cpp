// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_riscv_core.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vriscv_soc_riscv_core) {
    VL_CELL(u_exec, Vriscv_soc_riscv_exec);
    VL_CELL(u_decode, Vriscv_soc_riscv_decode);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_soc_riscv_core::__Vconfigure(Vriscv_soc__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vriscv_soc_riscv_core::~Vriscv_soc_riscv_core() {
}

void Vriscv_soc_riscv_core::_settle__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core::_settle__TOP__riscv_soc__u_core__u_core__1\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = (0xfffffffeU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = (0xfffffbffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = (0xffffbfffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = (0xffffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_r 
        = ((IData)(1U) + vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_pc_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q)
            ? (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_buffer_q 
                       >> 0x20U)) : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__pc_d_q);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w 
        = ((- (IData)(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_en_q) 
                       | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q)))) 
           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_idx_q));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r 
        = (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_q 
           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r 
        = ((3U > (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
           | ((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
              & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                 >> 3U)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__s_enabled_r 
        = ((1U > (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
           | ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
              & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                 >> 1U)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_interrupts_r 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r)
            ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r 
               & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q))
            : 0U);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__s_interrupts_r 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__s_enabled_r)
            ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r 
               & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q)
            : 0U);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r 
        = ((0U != vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_interrupts_r)
            ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_interrupts_r
            : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__s_interrupts_r);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xffffffbfU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q) 
              << 6U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__read_hold_q)
            ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_q)
            : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
        = ((0x80000000U & (((3U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                            << 0x1fU) & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q)) 
           | (0x7fffffffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xffffffefU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q) 
              << 4U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_rd_w 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_wr_w 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_invalidate_w 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_flush_w 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_q));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_q));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__signed_operation_w 
        = (1U & ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                          >> 0x33U)) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                >> 0x35U))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w 
        = ((~ (IData)((0U != vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q))) 
           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_inst_w 
        = (1U & ((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x1dU)) | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x1eU))) 
                    | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x1fU))) | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x20U))) 
                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                             >> 0x21U))) | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x22U))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r 
        = (1U & ((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                            >> 0x29U)) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x2aU))) 
                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                             >> 0x2cU))) | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x2dU))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r 
        = (1U & ((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                            >> 0x29U)) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x2bU))) 
                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                             >> 0x2cU))) | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x2eU))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
        = ((0xfffff000U & ((- (IData)((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 0x1fU)))) 
                           << 0xcU)) | (0xfffU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 0x14U)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__priv_r 
        = (3U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                 >> 8U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__readonly_r 
        = (3U == (3U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                        >> 0xaU)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_inst_w 
        = (1U & ((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                            >> 0x2fU)) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x30U))) 
                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                             >> 0x31U))) | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x32U))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_rem_inst_w 
        = (1U & ((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                            >> 0x33U)) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x34U))) 
                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                             >> 0x35U))) | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x36U))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
            | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w)))
            ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q
            : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q) 
            & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_inst_w) 
               | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_rem_inst_w))) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_busy_q) 
              & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_rem_inst_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
            ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
            : ((0x80000000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w)
                ? ((0xfffff000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q) 
                   | (0xfffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w))
                : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_valid_q) 
           & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_va_addr_q 
              == (0xfffffU & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                              >> 0xcU))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_miss_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
             | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w))) 
            & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
               >> 0x1fU)) & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r = 0U;
    if ((((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
           >> 0x1fU) & (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w))) 
         & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r 
            = (1U & ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))
                      ? (((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                           >> 4U) & (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                        >> 0x12U))) 
                         | ((~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                >> 1U)) | (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                              >> 2U))))
                      : (((~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                              >> 1U)) | (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                            >> 2U))) 
                         | (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                               >> 4U)))));
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r = 0U;
    if ((((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
           >> 0x1fU) & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w)) 
         & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r 
            = (1U & ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))
                      ? (((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                           >> 4U) & (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                        >> 0x12U))) 
                         | (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                               >> 1U))) : ((~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                               >> 1U)) 
                                           | (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                 >> 4U)))));
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_wr_o 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
            ? 0U : ((0x80000000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w)
                     ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w) 
                        & (- (IData)(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w) 
                                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r))))))
                     : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xffff7fffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r) 
              << 0xfU));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_rd_o 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
            ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q)
            : ((0x80000000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w)
                ? (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)) 
                   & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r)))
                : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__fault_addr_r = 0U;
    if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r) 
         | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__fault_addr_r 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q) 
             | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__fault_addr_r 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q;
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xffffdfffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r) 
              << 0xdU));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r) 
             | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r)) 
            | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q)) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q));
}

void Vriscv_soc_riscv_core::_settle__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core::_settle__TOP__riscv_soc__u_core__u_core__2\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w 
        = (((((~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                  >> 0x1fU)) | ((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                                 >> 0x1fU) & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w))) 
             & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w))) 
            | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r)) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_error_w 
        = ((7U == (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                         >> 7U))) & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_error_w));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_error_w 
        = ((7U != (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                         >> 7U))) & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_error_w));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_ack_w 
        = ((7U == (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                         >> 7U))) & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_ack_w 
        = ((7U != (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                         >> 7U))) & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q)
            ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_buffer_q)
            : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q)
                ? 0x8000053U : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q)
                                 ? 0x53U : vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__inst_r)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_busy_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_fetch_q) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w 
        = (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
              | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q)) 
             | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)) 
            | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xffffffdfU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_ack_w) 
               & ((0U != (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                >> 7U))) & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_error_w))) 
              << 5U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xffffff7fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_ack_w) 
               & ((0U == (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                >> 7U))) & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_error_w))) 
              << 7U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r = 0U;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r 
        = (0x1fU & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__addr_lsb_r 
        = (3U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                 >> 5U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_byte_r 
        = (1U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                 >> 7U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_half_r 
        = (1U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                 >> 8U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_word_r 
        = (1U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                 >> 9U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_signed_r 
        = (1U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                 >> 0xaU));
    if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_ack_w) 
         & (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_byte_r) 
             | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_half_r)) 
            | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_word_r)))) {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_byte_r) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (0xffU & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                    >> 0x18U)) : (0xffU 
                                                  & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                                     >> 0x10U)))
                    : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (0xffU & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                    >> 8U)) : (0xffU 
                                               & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r)));
            if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r 
                    >> 7U))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffffff00U | (0xffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else {
            if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_half_r) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r 
                    = ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (0xffffU & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                      >> 0x10U)) : 
                       (0xffffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r));
                if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_signed_r) 
                     & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r 
                        >> 0xfU))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r 
                        = (0xffff0000U | (0xffffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r));
                }
            } else {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r;
            }
        }
    } else {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r = 0U;
    }
}

void Vriscv_soc_riscv_core::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__mem_d_data_rd_i = VL_RAND_RESET_I(32);
    __PVT__mem_d_accept_i = VL_RAND_RESET_I(1);
    __PVT__mem_d_ack_i = VL_RAND_RESET_I(1);
    __PVT__mem_d_error_i = VL_RAND_RESET_I(1);
    __PVT__mem_d_resp_tag_i = VL_RAND_RESET_I(11);
    __PVT__mem_i_accept_i = VL_RAND_RESET_I(1);
    __PVT__mem_i_valid_i = VL_RAND_RESET_I(1);
    __PVT__mem_i_error_i = VL_RAND_RESET_I(1);
    __PVT__mem_i_inst_i = VL_RAND_RESET_I(32);
    __PVT__intr_i = VL_RAND_RESET_I(1);
    __PVT__reset_vector_i = VL_RAND_RESET_I(32);
    __PVT__cpu_id_i = VL_RAND_RESET_I(32);
    __PVT__mem_d_addr_o = VL_RAND_RESET_I(32);
    __PVT__mem_d_data_wr_o = VL_RAND_RESET_I(32);
    __PVT__mem_d_rd_o = VL_RAND_RESET_I(1);
    __PVT__mem_d_wr_o = VL_RAND_RESET_I(4);
    __PVT__mem_d_cacheable_o = VL_RAND_RESET_I(1);
    __PVT__mem_d_req_tag_o = VL_RAND_RESET_I(11);
    __PVT__mem_d_invalidate_o = VL_RAND_RESET_I(1);
    __PVT__mem_d_flush_o = VL_RAND_RESET_I(1);
    __PVT__mem_i_rd_o = VL_RAND_RESET_I(1);
    __PVT__mem_i_flush_o = VL_RAND_RESET_I(1);
    __PVT__mem_i_invalidate_o = VL_RAND_RESET_I(1);
    __PVT__mem_i_pc_o = VL_RAND_RESET_I(32);
    __PVT__mmu_flush_w = VL_RAND_RESET_I(1);
    __PVT__csr_stall_w = VL_RAND_RESET_I(1);
    __PVT__arb_mmu_error_w = VL_RAND_RESET_I(1);
    __PVT__arb_cpu_error_w = VL_RAND_RESET_I(1);
    __PVT__mmu_lsu_wr_w = VL_RAND_RESET_I(4);
    __PVT__muldiv_stall_w = VL_RAND_RESET_I(1);
    __PVT__lsu_stall_w = VL_RAND_RESET_I(1);
    __PVT__writeback_csr_idx_w = VL_RAND_RESET_I(5);
    __PVT__mmu_ifetch_pc_w = VL_RAND_RESET_I(32);
    __PVT__arb_mmu_ack_w = VL_RAND_RESET_I(1);
    __PVT__mmu_lsu_accept_w = VL_RAND_RESET_I(1);
    __PVT__mmu_ifetch_accept_w = VL_RAND_RESET_I(1);
    __PVT__fetch_pc_w = VL_RAND_RESET_I(32);
    __PVT__mmu_lsu_rd_w = VL_RAND_RESET_I(1);
    __PVT__arb_cpu_ack_w = VL_RAND_RESET_I(1);
    __PVT__mmu_ifetch_rd_w = VL_RAND_RESET_I(1);
    __PVT__mmu_satp_w = VL_RAND_RESET_I(32);
    __PVT__mmu_lsu_invalidate_w = VL_RAND_RESET_I(1);
    __PVT__fetch_valid_w = VL_RAND_RESET_I(1);
    __PVT__fetch_instr_w = VL_RAND_RESET_I(32);
    __PVT__mmu_lsu_flush_w = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__state_q = VL_RAND_RESET_I(2);
    __PVT__u_mmu__DOT__load_q = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__store_q = VL_RAND_RESET_I(4);
    __PVT__u_mmu__DOT__load_w = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__store_w = VL_RAND_RESET_I(4);
    __PVT__u_mmu__DOT__lsu_in_addr_q = VL_RAND_RESET_I(32);
    __PVT__u_mmu__DOT__lsu_addr_w = VL_RAND_RESET_I(32);
    __PVT__u_mmu__DOT__itlb_hit_w = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__dtlb_hit_w = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__dtlb_req_q = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__itlb_miss_w = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__dtlb_miss_w = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__request_addr_w = VL_RAND_RESET_I(32);
    __PVT__u_mmu__DOT__pte_addr_q = VL_RAND_RESET_I(32);
    __PVT__u_mmu__DOT__pte_entry_q = VL_RAND_RESET_I(32);
    __PVT__u_mmu__DOT__virt_addr_q = VL_RAND_RESET_I(32);
    __PVT__u_mmu__DOT__itlb_valid_q = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__itlb_va_addr_q = VL_RAND_RESET_I(20);
    __PVT__u_mmu__DOT__itlb_entry_q = VL_RAND_RESET_I(32);
    __PVT__u_mmu__DOT__pc_fault_r = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__dtlb_valid_q = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__dtlb_va_addr_q = VL_RAND_RESET_I(20);
    __PVT__u_mmu__DOT__dtlb_entry_q = VL_RAND_RESET_I(32);
    __PVT__u_mmu__DOT__load_fault_r = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__store_fault_r = VL_RAND_RESET_I(1);
    __PVT__u_mmu__DOT__mem_req_q = VL_RAND_RESET_I(1);
    __PVT__u_arb__DOT__read_hold_q = VL_RAND_RESET_I(1);
    __PVT__u_arb__DOT__src_mmu_q = VL_RAND_RESET_I(1);
    __PVT__u_arb__DOT__src_mmu_w = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__mem_addr_q = VL_RAND_RESET_I(32);
    __PVT__u_lsu__DOT__mem_data_wr_q = VL_RAND_RESET_I(32);
    __PVT__u_lsu__DOT__mem_rd_q = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__mem_wr_q = VL_RAND_RESET_I(4);
    __PVT__u_lsu__DOT__mem_cacheable_q = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__mem_req_tag_q = VL_RAND_RESET_I(11);
    __PVT__u_lsu__DOT__mem_invalidate_q = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__mem_flush_q = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__mem_unaligned_ld_q = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__mem_unaligned_st_q = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__load_inst_w = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__mem_addr_r = VL_RAND_RESET_I(32);
    __PVT__u_lsu__DOT__mem_unaligned_r = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__fault_addr_r = VL_RAND_RESET_I(32);
    __PVT__u_lsu__DOT__addr_lsb_r = VL_RAND_RESET_I(2);
    __PVT__u_lsu__DOT__load_byte_r = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__load_half_r = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__load_word_r = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__load_signed_r = VL_RAND_RESET_I(1);
    __PVT__u_lsu__DOT__wb_idx_r = VL_RAND_RESET_I(5);
    __PVT__u_lsu__DOT__wb_result_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mepc_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mcause_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_sr_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mtvec_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mip_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mie_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mpriv_q = VL_RAND_RESET_I(2);
    __PVT__u_csr__DOT__csr_mcycle_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mscratch_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_sepc_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_stvec_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_scause_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_stval_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_satp_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_sscratch_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__pc_m_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__exc_src_w = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_access_fault_w = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__imm12_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__priv_r = VL_RAND_RESET_I(2);
    __PVT__u_csr__DOT__readonly_r = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__set_r = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__clr_r = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__csr_mepc_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mcause_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_sr_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mtvec_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mip_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mie_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mtime_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mtimecmp_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mpriv_r = VL_RAND_RESET_I(2);
    __PVT__u_csr__DOT__csr_mcycle_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mscratch_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_sepc_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_stvec_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_scause_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_stval_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_satp_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_sscratch_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_medeleg_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_medeleg_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mideleg_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__csr_mideleg_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__take_intr_r = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__take_exception_r = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__exception_s_r = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__interrupt_s_r = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__data_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__result_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__valid_unit_inst_w = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__irq_pending_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__m_enabled_r = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__m_interrupts_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__s_enabled_r = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__s_interrupts_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__irq_masked_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__writeback_en_q = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__writeback_idx_q = VL_RAND_RESET_I(5);
    __PVT__u_csr__DOT__writeback_value_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__writeback_squash_q = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__branch_r = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__branch_target_r = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__branch_q = VL_RAND_RESET_I(1);
    __PVT__u_csr__DOT__branch_target_q = VL_RAND_RESET_I(32);
    __PVT__u_csr__DOT__reset_q = VL_RAND_RESET_I(1);
    __PVT__u_muldiv__DOT__rd_q = VL_RAND_RESET_I(5);
    __PVT__u_muldiv__DOT__wb_result_q = VL_RAND_RESET_I(32);
    __PVT__u_muldiv__DOT__wb_rd_q = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(65, __PVT__u_muldiv__DOT__mult_result_w);
    __PVT__u_muldiv__DOT__operand_b_r = VL_RAND_RESET_Q(33);
    __PVT__u_muldiv__DOT__operand_a_r = VL_RAND_RESET_Q(33);
    __PVT__u_muldiv__DOT__result_r = VL_RAND_RESET_I(32);
    __PVT__u_muldiv__DOT__mult_result_q = VL_RAND_RESET_I(32);
    __PVT__u_muldiv__DOT__mult_busy_q = VL_RAND_RESET_I(1);
    __PVT__u_muldiv__DOT__mult_inst_w = VL_RAND_RESET_I(1);
    __PVT__u_muldiv__DOT__div_rem_inst_w = VL_RAND_RESET_I(1);
    __PVT__u_muldiv__DOT__signed_operation_w = VL_RAND_RESET_I(1);
    __PVT__u_muldiv__DOT__dividend_q = VL_RAND_RESET_I(32);
    __PVT__u_muldiv__DOT__divisor_q = VL_RAND_RESET_Q(63);
    __PVT__u_muldiv__DOT__quotient_q = VL_RAND_RESET_I(32);
    __PVT__u_muldiv__DOT__q_mask_q = VL_RAND_RESET_I(32);
    __PVT__u_muldiv__DOT__div_inst_q = VL_RAND_RESET_I(1);
    __PVT__u_muldiv__DOT__div_busy_q = VL_RAND_RESET_I(1);
    __PVT__u_muldiv__DOT__invert_res_q = VL_RAND_RESET_I(1);
    __PVT__u_muldiv__DOT__div_start_w = VL_RAND_RESET_I(1);
    __PVT__u_muldiv__DOT__div_complete_w = VL_RAND_RESET_I(1);
    __PVT__u_fetch__DOT__active_q = VL_RAND_RESET_I(1);
    __PVT__u_fetch__DOT__fetch_pc_q = VL_RAND_RESET_I(32);
    __PVT__u_fetch__DOT__branch_pc_q = VL_RAND_RESET_I(32);
    __PVT__u_fetch__DOT__branch_valid_q = VL_RAND_RESET_I(1);
    __PVT__u_fetch__DOT__icache_fetch_q = VL_RAND_RESET_I(1);
    __PVT__u_fetch__DOT__icache_invalidate_q = VL_RAND_RESET_I(1);
    __PVT__u_fetch__DOT__skid_buffer_q = VL_RAND_RESET_Q(64);
    __PVT__u_fetch__DOT__skid_valid_q = VL_RAND_RESET_I(1);
    __PVT__u_fetch__DOT__icache_busy_w = VL_RAND_RESET_I(1);
    __PVT__u_fetch__DOT__stall_w = VL_RAND_RESET_I(1);
    __PVT__u_fetch__DOT__branch_w = VL_RAND_RESET_I(1);
    __PVT__u_fetch__DOT__branch_pc_w = VL_RAND_RESET_I(32);
    __PVT__u_fetch__DOT__pc_d_q = VL_RAND_RESET_I(32);
    __PVT__u_fetch__DOT__fetch_page_fault_q = VL_RAND_RESET_I(1);
    __Vdly__u_lsu__DOT__mem_flush_q = VL_RAND_RESET_I(1);
    __Vdly__u_lsu__DOT__mem_invalidate_q = VL_RAND_RESET_I(1);
    __Vdly__u_lsu__DOT__mem_wr_q = VL_RAND_RESET_I(4);
    __Vdly__u_csr__DOT__reset_q = VL_RAND_RESET_I(1);
    __Vdly__u_muldiv__DOT__dividend_q = VL_RAND_RESET_I(32);
    __Vdly__u_muldiv__DOT__quotient_q = VL_RAND_RESET_I(32);
}
