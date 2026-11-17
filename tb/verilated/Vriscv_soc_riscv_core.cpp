// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_riscv_core.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vriscv_soc_riscv_core::_settle__TOP__riscv_soc__u_core__u_core__3(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core::_settle__TOP__riscv_soc__u_core__u_core__3\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp4[3];
    WData/*95:0*/ __Vtemp5[3];
    WData/*95:0*/ __Vtemp6[3];
    // Body
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0x31U)))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_b_r 
            = (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r));
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_a_r 
            = (((QData)((IData)((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                       >> 0x1fU)))) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r)));
    } else {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_b_r 
            = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x30U))) ? (((QData)((IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r 
                                                                  >> 0x1fU)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r)))
                : (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r)));
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_a_r 
            = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                              >> 0x30U))) ? (((QData)((IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                                                  >> 0x1fU)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r)))
                : (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r)));
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__active_q) 
            & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_accept_o)) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_busy_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r = 0U;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
            & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0x29U))) ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r
            : (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_inst_w))
                ? (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                   + ((0xfffff000U & ((- (IData)((1U 
                                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (0xfffU 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                      >> 0x14U))))
                : (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                   + ((0xfffff000U & ((- (IData)((1U 
                                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (
                                                   (0xfe0U 
                                                    & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                         >> 7U)))))));
    if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
         & (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                      >> 0x25U)) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x1fU))) 
            | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0x22U))))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r 
            = (0U != (3U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r));
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
             & (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                          >> 0x24U)) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                >> 0x1eU))) 
                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x21U))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r 
                = (1U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r);
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_start_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__muldiv_opcode_valid_o) 
            & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_rem_inst_w)) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_flush_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
            & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
               | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) 
           & (0x180U == (0xfffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
           & (((((((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x29U)) | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x2aU))) 
                      | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                 >> 0x2bU))) | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x2cU))) 
                    | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x2dU))) | (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x2eU))) 
                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                             >> 0x26U))) | (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x27U))) 
                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x28U))) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x37U))) 
              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                         >> 0x38U))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xfffffffdU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
               & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                          >> 0x37U))) << 1U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xfffffff7U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
               & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                          >> 0x27U))) << 3U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xffffefffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
               & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                          >> 0x38U))) << 0xcU));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xfffffeffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x26U))) & (0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))) 
              << 8U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xfffffdffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x26U))) & (1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))) 
              << 9U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xfffff7ffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x26U))) & (3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))) 
              << 0xbU));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_access_fault_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
            & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
               | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) 
           & (((((0U != (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                  >> 0xfU))) | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x29U))) 
                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x2cU))) & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__readonly_r)) 
              | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q) 
                 < (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__priv_r))));
    __Vtemp4[0U] = (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_a_r);
    __Vtemp4[1U] = ((0xfffffffeU & ((- (IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_a_r 
                                                           >> 0x20U))))) 
                                    << 1U)) | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_a_r 
                                                       >> 0x20U)));
    __Vtemp4[2U] = (1U & ((- (IData)((1U & (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_a_r 
                                                    >> 0x20U))))) 
                          >> 0x1fU));
    __Vtemp5[0U] = (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_b_r);
    __Vtemp5[1U] = ((0xfffffffeU & ((- (IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_b_r 
                                                           >> 0x20U))))) 
                                    << 1U)) | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_b_r 
                                                       >> 0x20U)));
    __Vtemp5[2U] = (1U & ((- (IData)((1U & (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_b_r 
                                                    >> 0x20U))))) 
                          >> 0x1fU));
    VL_MUL_W(3, __Vtemp6, __Vtemp4, __Vtemp5);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w[0U] 
        = __Vtemp6[0U];
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w[1U] 
        = __Vtemp6[1U];
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w[2U] 
        = (1U & __Vtemp6[2U]);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xfffffffbU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
               & ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x39U)) | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_access_fault_w))) 
              << 2U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__result_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w[0U];
    if ((1U & (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                         >> 0x30U)) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0x32U))) 
               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                          >> 0x31U))))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__result_r 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w[1U];
    } else {
        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x2fU)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__result_r 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w[0U];
        }
    }
}

VL_INLINE_OPT void Vriscv_soc_riscv_core::_settle__TOP__riscv_soc__u_core__u_core__4(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core::_settle__TOP__riscv_soc__u_core__u_core__4\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r = 0U;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r = 0U;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r = 0U;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r 
        = (0U != vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r);
    if ((1U & (((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o)) 
                | ((((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
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
                                                      >> 0x22U)))) 
               | (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                            >> 0x23U)) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x24U))) 
                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                             >> 0x25U)))))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r = 0U;
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exception_s_r 
        = ((0U != (0xa050U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w))
            ? (0U != (0xa050U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q)))
            : (0U != (0xfffff0f7U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__interrupt_s_r 
        = (0U != (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r 
                  & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q));
    if ((1U & (((((((((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                       >> 1U) | (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                                 >> 5U)) | (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                                            >> 7U)) 
                    | (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                       >> 0xdU)) | (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                                    >> 0xfU)) | (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                                                 >> 0xcU)) 
                 | (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                    >> 4U)) | (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                               >> 6U)) | (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                                          >> 2U)))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r = 1U;
    }
    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r = 0U;
        if (((1U >= (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
             & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exception_s_r))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                = ((0xffffffdfU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                   | (0x20U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                               << 4U)));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r = 1U;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r 
                = ((0U != (0xa050U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w))
                    ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__pc_m_q
                    : ((0x1000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)
                        ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                        : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                            ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                            : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                                : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_request_o)
                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r
                                    : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o)
                                        ? ((IData)(4U) 
                                           + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                                        : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))))));
            if ((0x10U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 4U;
            } else {
                if ((0x40U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 6U;
                } else {
                    if ((0x2000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 0xdU;
                    } else {
                        if ((0x8000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 0xfU;
                        } else {
                            if ((0x1000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 0xcU;
                            } else {
                                if ((4U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 2U;
                                } else {
                                    if ((2U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 1U;
                                    } else {
                                        if ((0x20U 
                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 5U;
                                        } else {
                                            if ((0x80U 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 7U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r 
                = ((0U != (0xa050U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w))
                    ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__fault_addr_r
                    : ((0x1000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)
                        ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                        : 0U));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                = ((0xfffffeffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                   | ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                      << 8U));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                = (0xfffffffdU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r);
        } else {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                = ((0xffffff7fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                   | (0x80U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                               << 4U)));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r = 3U;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r 
                = ((0U != (0xa050U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w))
                    ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__pc_m_q
                    : ((0x1000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)
                        ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                        : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                            ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                            : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                                : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_request_o)
                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r
                                    : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o)
                                        ? ((IData)(4U) 
                                           + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                                        : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))))));
            if ((0x10U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 4U;
            } else {
                if ((0x40U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 6U;
                } else {
                    if ((0x2000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 0xdU;
                    } else {
                        if ((0x8000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 0xfU;
                        } else {
                            if ((0x1000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 0xcU;
                            } else {
                                if ((4U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 2U;
                                } else {
                                    if ((2U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 1U;
                                    } else {
                                        if ((0x20U 
                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 5U;
                                        } else {
                                            if ((0x80U 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)) {
                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 7U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                = ((0xffffe7ffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                   | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q) 
                      << 0xbU));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                = (0xfffffff7U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r);
        }
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r) {
            if (((1U >= (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                 & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__interrupt_s_r))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                    = ((0xffffffdfU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                       | (0x20U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                   << 4U)));
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r = 1U;
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r 
                    = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                        ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                        : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w)
                            ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                            : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_request_o)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r
                                : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o)
                                    ? ((IData)(4U) 
                                       + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))));
                if ((2U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 0x80000001U;
                } else {
                    if ((8U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 0x80000003U;
                    } else {
                        if ((0x20U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 0x80000005U;
                        } else {
                            if ((0x80U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 0x80000007U;
                            } else {
                                if ((0x200U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 0x80000009U;
                                } else {
                                    if ((0x800U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r = 0x8000000bU;
                                    }
                                }
                            }
                        }
                    }
                }
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r = 0U;
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                    = ((0xfffffeffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                       | ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                          << 8U));
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                    = (0xfffffffdU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r);
            } else {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                    = ((0xffffff7fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                       | (0x80U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                   << 4U)));
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r = 3U;
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r 
                    = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                        ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                        : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w)
                            ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q
                            : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_request_o)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r
                                : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o)
                                    ? ((IData)(4U) 
                                       + vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q)
                                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q))));
                if ((2U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 0x80000001U;
                } else {
                    if ((8U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 0x80000003U;
                    } else {
                        if ((0x20U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 0x80000005U;
                        } else {
                            if ((0x80U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 0x80000007U;
                            } else {
                                if ((0x200U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 0x80000009U;
                                } else {
                                    if ((0x800U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r)) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r = 0x8000000bU;
                                    }
                                }
                            }
                        }
                    }
                }
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                    = ((0xffffe7ffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                       | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q) 
                          << 0xbU));
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                    = (0xfffffff7U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r);
            }
        } else {
            if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                 & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                    | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r 
                    = ((1U & (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                        >> 0x2cU)) 
                               | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x2dU))) 
                              | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x2eU))))
                        ? (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                    >> 0xfU)) : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r);
                if ((0x800U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                    if ((0x400U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                        if ((0x200U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                            if ((0x100U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                if ((1U & (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r))) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((1U & (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r))) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q;
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
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                  >> 0xaU)))) {
                        if ((0x200U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                            if ((0x100U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                if ((1U & (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                              >> 7U)))) {
                                    if ((0x40U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r))) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r 
                                                                    = 
                                                                    (0xaaaU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = 
                                                                    (0xaaaU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r);
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (2U 
                                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                            if (
                                                                (1U 
                                                                 & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r))) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r 
                                                                    = 
                                                                    (0x8000000fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = 
                                                                    (0x8000000fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_q);
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q;
                                                            } else {
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q;
                                                            } else {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r 
                                                                    = 
                                                                    (0xaaaU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = 
                                                                    (0xaaaU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q);
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (2U 
                                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                            if (
                                                                (1U 
                                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r 
                                                                    = 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q);
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r 
                                                                    = 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q);
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r = 0x40141100U;
                                                            } else {
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x100U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                if ((0x80U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                    if ((1U & (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r))) {
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((0x40U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r))) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r 
                                                                    = 
                                                                    (0x222U 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = 
                                                                    (0x222U 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r);
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (2U 
                                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                            if (
                                                                (1U 
                                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_q;
                                                            } else {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r 
                                                                    = 
                                                                    (0x8000000fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = 
                                                                    (0x8000000fU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_q);
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q;
                                                            } else {
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r)) {
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q;
                                                            } else {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r 
                                                                    = 
                                                                    (0x222U 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = 
                                                                    (0x222U 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q);
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r))) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r 
                                                                    = 
                                                                    (0x40133U 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r 
                                                                    = 
                                                                    (0x40133U 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q);
                                                                if (
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r;
                                                                } else {
                                                                    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                                                            = 
                                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                                                             | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r);
                                                                    } else {
                                                                        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                                                                = 
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                                                                & (~ vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
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
                                }
                            }
                        }
                    }
                }
            } else {
                if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                     & ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                 >> 0x26U)) | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x27U))))) {
                    if (((1U >= (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                         & (0U != (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                            = ((0xffffffdfU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                               | (0x20U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                           << 4U)));
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r = 1U;
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r 
                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r 
                            = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x27U)))
                                ? 3U : ((IData)(8U) 
                                        + (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)));
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r = 0U;
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                            = ((0xfffffeffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                               | ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                  << 8U));
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                            = (0xfffffffdU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r);
                    } else {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                            = ((0xffffff7fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                               | (0x80U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                           << 4U)));
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r = 3U;
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r 
                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r 
                            = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x27U)))
                                ? 3U : ((IData)(8U) 
                                        + (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)));
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                            = ((0xffffe7ffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                               | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q) 
                                  << 0xbU));
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                            = (0xfffffff7U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r);
                    }
                } else {
                    if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
                         & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                    >> 0x28U)))) {
                        if ((0x20000000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r 
                                = (3U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                         >> 0xbU));
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                = ((0xfffffff7U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                                   | (8U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                            >> 4U)));
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                = (0x80U | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r);
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                = (0xffffe7ffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r);
                        } else {
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r 
                                = ((0x100U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r)
                                    ? 1U : 0U);
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                = ((0xfffffffdU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r) 
                                   | (2U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                            >> 4U)));
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                = (0x20U | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r);
                            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r 
                                = (0xfffffeffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r);
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__intr_q) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r 
            = ((0x200U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q)
                ? (0x200U | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r)
                : (0x800U | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r));
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_valid_q) 
            & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_branch_o)))
            ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_q
            : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_valid_q) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_branch_o));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_r = 0U;
    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_r = 1U;
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_r = 1U;
        } else {
            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x26U)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_r 
                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o;
            } else {
                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                   >> 0x27U)))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_r 
                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o;
                } else {
                    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x28U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_r 
                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_r = 0U;
    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_r 
            = (((1U >= (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exception_s_r))
                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q
                : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q);
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_r 
                = (((1U >= (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__interrupt_s_r))
                    ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q
                    : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q);
        } else {
            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x26U)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_r 
                    = (((1U >= (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                        & (0U != (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                                  & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q)))
                        ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q
                        : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q);
            } else {
                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                   >> 0x27U)))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_r 
                        = (((1U >= (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                            & (0U != (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q)))
                            ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q
                            : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q);
                } else {
                    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x28U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_r 
                            = ((0x20000000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q
                                : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q);
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_valid_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q) 
             | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o)) 
            | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q)) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_w)
            ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_w
            : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_pc_q);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__request_addr_w 
        = ((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q))
            ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_miss_w)
                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w
                : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w)
            : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q)
                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w
                : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_pc_o 
        = ((0x80000000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w)
            ? ((0xfffff000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q) 
               | (0xfffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w))
            : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w) 
            & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_valid_q)) 
           & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_va_addr_q 
              == (0xfffffU & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w 
                              >> 0xcU))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_miss_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w) 
            & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
               >> 0x1fU)) & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pc_fault_r = 0U;
    if (((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
          >> 0x1fU) & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pc_fault_r 
            = (1U & ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))
                      ? (((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q 
                           >> 4U) & (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                        >> 0x12U))) 
                         | (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q 
                               >> 3U))) : ((~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q 
                                               >> 3U)) 
                                           | (~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q 
                                                 >> 4U)))));
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_rd_o 
        = (((~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                >> 0x1fU)) & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w) 
              & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pc_fault_r))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_accept_w 
        = ((((~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                 >> 0x1fU)) | ((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                                >> 0x1fU) & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w))) 
            & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o)) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pc_fault_r));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__stall_w 
        = (1U & (((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_accept_o)) 
                  | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_busy_w)) 
                 | (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_accept_w))));
}

VL_INLINE_OPT void Vriscv_soc_riscv_core::_sequent__TOP__riscv_soc__u_core__u_core__5(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core::_sequent__TOP__riscv_soc__u_core__u_core__5\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__u_mmu__DOT__state_q;
    IData/*31:0*/ __Vdly__u_muldiv__DOT__q_mask_q;
    QData/*62:0*/ __Vdly__u_muldiv__DOT__divisor_q;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_csr__DOT__reset_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__reset_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_muldiv__DOT__quotient_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q;
    __Vdly__u_muldiv__DOT__divisor_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__divisor_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_muldiv__DOT__dividend_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q;
    __Vdly__u_muldiv__DOT__q_mask_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q;
    __Vdly__u_mmu__DOT__state_q = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_invalidate_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_flush_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_wr_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q;
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__pc_d_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w) 
             & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_accept_w))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__pc_d_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_pc_q = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__stall_w)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_pc_q 
                = ((IData)(4U) + vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w);
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_fetch_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w) 
             & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_accept_w))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_fetch_q 
                = (1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pc_fault_r)));
        } else {
            if (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_fetch_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_valid_q = 0U;
    } else {
        if ((1U & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__stall_w) 
                   | (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__active_q))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_valid_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_w;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_w;
        } else {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_valid_q = 0U;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_q = 0U;
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)) 
           & (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w) 
               & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_accept_w)) 
              & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pc_fault_r)));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_valid_w) 
              & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_accept_o))));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__pc_m_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__pc_m_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_en_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)) 
           & (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
               & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w))) 
              & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                 | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_buffer_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)
            ? 0ULL : (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_valid_w) 
                       & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_accept_o)))
                       ? (((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_pc_w)) 
                           << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))
                       : 0ULL));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_muldiv__DOT__dividend_q = 0U;
        __Vdly__u_muldiv__DOT__divisor_q = 0ULL;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_muldiv__DOT__quotient_q = 0U;
        __Vdly__u_muldiv__DOT__q_mask_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_start_w) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_muldiv__DOT__dividend_q 
                = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__signed_operation_w) 
                    & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                       >> 0x1fU)) ? (- vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r)
                    : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r);
            __Vdly__u_muldiv__DOT__divisor_q = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__signed_operation_w) 
                                                 & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r 
                                                    >> 0x1fU))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (- vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r))) 
                                                 << 0x1fU)
                                                 : 
                                                ((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r)) 
                                                 << 0x1fU));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_muldiv__DOT__quotient_q = 0U;
            __Vdly__u_muldiv__DOT__q_mask_q = 0x80000000U;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w)))) {
                if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q) {
                    if ((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__divisor_q 
                         <= (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_muldiv__DOT__dividend_q 
                            = (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q 
                               - (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__divisor_q));
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_muldiv__DOT__quotient_q 
                            = (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q 
                               | vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q);
                    }
                    __Vdly__u_muldiv__DOT__divisor_q 
                        = (0x3fffffffffffffffULL & 
                           (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__divisor_q 
                            >> 1U));
                    __Vdly__u_muldiv__DOT__q_mask_q 
                        = (0x7fffffffU & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q 
                                          >> 1U));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__read_hold_q = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_rd_o) 
              | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_wr_o))) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__read_hold_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__read_hold_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_idx_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_idx_q 
                = (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                            >> 7U));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_q = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_rd_o) 
              | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_wr_o))) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q = 0U;
    } else {
        if (((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q)) 
             & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_miss_w) 
                | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_miss_w)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q = 1U;
        } else {
            if ((((((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q)) 
                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_ack_w)) 
                   & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_error_w))) 
                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r) 
                 & (~ (((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                         >> 1U) | (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                   >> 2U)) | (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                              >> 3U))))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q = 1U;
            } else {
                if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w) 
                     & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q = 0U;
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_valid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_flush_w) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_valid_q = 0U;
        } else {
            if (((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_valid_q = 1U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q = 0U;
    } else {
        if (((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q)) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_va_addr_q = 0U;
    } else {
        if (((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q)) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_va_addr_q 
                = (0xfffffU & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__virt_addr_q 
                               >> 0xcU));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q = 0U;
    } else {
        if (((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q)) 
             & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_valid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_flush_w) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_valid_q = 0U;
        } else {
            if (((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q)) 
                 & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_valid_q = 1U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q = 3U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_q = 0U;
    } else {
        if (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
               & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r) 
                  | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r))) 
              & (0x7b2U == (0xfffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r))) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_access_fault_w)))) {
            if (VL_UNLIKELY((0U == (0xff000000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r)))) {
                VL_FINISH_MT("../soc/../core/core/rv32imsu/riscv_csr.v", 926, "");
                VL_FINISH_MT("../soc/../core/core/rv32imsu/riscv_csr.v", 927, "");
            } else {
                if (VL_UNLIKELY((0x1000000U == (0xff000000U 
                                                & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r)))) {
                    VL_WRITEF("%c",8,(0xffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r));
                }
            }
        }
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r;
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_va_addr_q = 0U;
    } else {
        if (((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q)) 
             & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_va_addr_q 
                = (0xfffffU & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__virt_addr_q 
                               >> 0xcU));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_q = 0U;
    } else {
        if ((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_q 
                = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)
                    ? 0U : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_cacheable_q = 0U;
    } else {
        if ((1U & (~ (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                         | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q)) 
                        | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)) 
                       | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_cacheable_q = 0U;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_cacheable_q = 1U;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q = 0U;
    } else {
        if ((1U & (~ (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                         | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q)) 
                        | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)) 
                       | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q 
                = ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_inst_w)) 
                   & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)) 
           & ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w) 
                & (((~ (IData)((0U != (0xa050U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w)))) 
                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r)) 
                   | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r))) 
               | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r)) 
              | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q)));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_invalidate_q = 0U;
    } else {
        if ((1U & (~ (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_invalidate_w) 
                         | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q)) 
                        | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)) 
                       | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_invalidate_q = 0U;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_invalidate_q 
                = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                   & ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x29U)) & (0x3a2U 
                                             == (0xfffU 
                                                 & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                    >> 0x14U)))));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_flush_q = 0U;
    } else {
        if ((1U & (~ (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                         | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_flush_w)) 
                        | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)) 
                       | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_flush_q = 0U;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_flush_q 
                = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                   & ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x29U)) & (0x3a0U 
                                             == (0xfffU 
                                                 & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                    >> 0x14U)))));
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q = 0U;
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_q 
                = (1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_wr_q = 0U;
    } else {
        if ((1U & (~ (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                         | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q)) 
                        | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)) 
                       | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_wr_w))) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_wr_q = 0U;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_wr_q 
                = ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                     & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                >> 0x25U))) & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r)))
                    ? 0xfU : ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                                & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0x24U))) 
                               & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r)))
                               ? ((2U == (3U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r))
                                   ? 0xcU : 3U) : (
                                                   ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x23U)))
                                                    ? 
                                                   ((2U 
                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r)
                                                      ? 8U
                                                      : 4U)
                                                     : 
                                                    ((1U 
                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r)
                                                      ? 2U
                                                      : 1U))
                                                    : 0U)));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
             | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q;
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__divisor_q 
        = __Vdly__u_muldiv__DOT__divisor_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q 
        = __Vdly__u_muldiv__DOT__q_mask_q;
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__active_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_w) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__active_q = 1U;
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_r 
        = ((IData)(1U) + vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q);
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
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__virt_addr_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q = 0U;
        __Vdly__u_mmu__DOT__state_q = 0U;
    } else {
        if (((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q)) 
             & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_miss_w) 
                | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_miss_w)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q 
                = ((0xfffff000U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                                   << 0xcU)) + (0xffcU 
                                                & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__request_addr_w 
                                                   >> 0x14U)));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__virt_addr_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__request_addr_w;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_miss_w;
            __Vdly__u_mmu__DOT__state_q = 1U;
        } else {
            if (((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q)) 
                 & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_ack_w))) {
                if ((1U & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_error_w) 
                           | (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r)))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q = 0U;
                    __Vdly__u_mmu__DOT__state_q = 3U;
                } else {
                    if ((1U & (((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                 >> 1U) | (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                           >> 2U)) 
                               | (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                  >> 3U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q 
                            = (((0xfffff000U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                                << 2U)) 
                                | (0x3ff000U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__request_addr_w)) 
                               | (0x3ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r));
                        __Vdly__u_mmu__DOT__state_q = 3U;
                    } else {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q 
                            = ((0xfffff000U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                               << 2U)) 
                               + (0xffcU & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__request_addr_w 
                                            >> 0xaU)));
                        __Vdly__u_mmu__DOT__state_q = 2U;
                    }
                }
            } else {
                if (((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q)) 
                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_ack_w))) {
                    if ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r)) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q 
                            = ((0xfffff000U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                               << 2U)) 
                               | (0x3ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r));
                        __Vdly__u_mmu__DOT__state_q = 3U;
                    } else {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q = 0U;
                        __Vdly__u_mmu__DOT__state_q = 3U;
                    }
                } else {
                    if ((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q))) {
                        __Vdly__u_mmu__DOT__state_q = 0U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xffffffbfU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q) 
              << 6U));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w 
        = ((- (IData)(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_en_q) 
                       | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q)))) 
           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_idx_q));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q = 0U;
    } else {
        if ((1U & (~ (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                         | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q)) 
                        | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)) 
                       | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q 
                = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_inst_w) 
                   & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q = 0U;
    } else {
        if ((1U & (~ (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                         | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q)) 
                        | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)) 
                       | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q = 0U;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r;
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q 
        = __Vdly__u_mmu__DOT__state_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
        = ((0x80000000U & (((3U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                            << 0x1fU) & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q)) 
           | (0x7fffffffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w 
        = ((0xffffffefU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q) 
              << 4U));
}

VL_INLINE_OPT void Vriscv_soc_riscv_core::_sequent__TOP__riscv_soc__u_core__u_core__6(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core::_sequent__TOP__riscv_soc__u_core__u_core__6\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_pc_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q)
            ? (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_buffer_q 
                       >> 0x20U)) : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__pc_d_q);
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__read_hold_q)
            ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_q)
            : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_busy_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_fetch_q) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o)));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q = 0U;
    } else {
        if ((1U & (~ (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                         | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q)) 
                        | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)) 
                       | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q = 0U;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q 
                = ((0x7e0U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q)) 
                   | (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                               >> 7U)));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q 
                = ((0x79fU & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q)) 
                   | (0x60U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r 
                               << 5U)));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q 
                = ((0x77fU & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q)) 
                   | (0x80U & (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x1dU)) 
                                | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0x20U))) 
                               << 7U)));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q 
                = ((0x6ffU & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q)) 
                   | (0x100U & (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x1eU)) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x21U))) 
                                << 8U)));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q 
                = ((0x5ffU & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q)) 
                   | (0x200U & (((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x1fU)) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x22U))) 
                                << 9U)));
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q 
                = ((0x3ffU & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q)) 
                   | (0x400U & ((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0x1dU)) 
                                  | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 0x1eU))) 
                                 | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                            >> 0x1fU))) 
                                << 0xaU)));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q = 0U;
    } else {
        if ((1U & (~ (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                         | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q)) 
                        | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)) 
                       | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q = 0U;
            if ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                  & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                             >> 0x25U))) & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q 
                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
            } else {
                if ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                      & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                 >> 0x24U))) & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r)))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q 
                        = ((2U == (3U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r))
                            ? (0xffff0000U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r 
                                              << 0x10U))
                            : (0xffffU & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r));
                } else {
                    if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                         & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                    >> 0x23U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q 
                            = ((2U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r)
                                ? ((1U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r)
                                    ? (0xff000000U 
                                       & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r 
                                          << 0x18U))
                                    : (0xff0000U & 
                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r 
                                        << 0x10U)))
                                : ((1U & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r)
                                    ? (0xff00U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r 
                                                  << 8U))
                                    : (0xffU & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r)));
                    }
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q = 0U;
    } else {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q 
            = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_busy_q)
                ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__rd_q)
                : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w)
                    ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__rd_q)
                    : 0U));
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q 
            = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w)
                ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q)
                    ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                        ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                        : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                    : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                        ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q)
                        : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q))
                : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_q);
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_muldiv__DOT__quotient_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_muldiv__DOT__dividend_q;
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q = 0U;
    } else {
        if ((1U & (~ (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                         | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q)) 
                        | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_rd_w)) 
                       | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)))))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q = 0U;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q 
                = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o) 
                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_inst_w)) 
                   & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r)));
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_busy_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)) 
           & (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__muldiv_opcode_valid_o) 
               & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w))) 
              & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_inst_w)));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__rd_q = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__muldiv_opcode_valid_o) 
              & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_rem_inst_w) 
                 | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_inst_w))) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__rd_q 
                = (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                            >> 7U));
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__rd_q = 0U;
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)
            ? 0U : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__result_r);
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_start_w) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q 
                = (1U & ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x33U)) | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x34U))));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_start_w) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q 
                = (1U & ((((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                    >> 0x33U)) & ((1U 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                                      >> 0x1fU)) 
                                                  != 
                                                  (1U 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r 
                                                      >> 0x1fU)))) 
                          & (0U != vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r)) 
                         | ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                     >> 0x35U)) & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                                   >> 0x1fU))));
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_invalidate_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_flush_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_lsu__DOT__mem_wr_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_invalidate_w 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_flush_w 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_wr_w 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_q));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_rd_w 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q;
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_q));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_start_w) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w) {
                vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q = 0U;
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
            | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w)))
            ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q
            : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q);
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
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w 
        = ((~ (IData)((0U != vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q))) 
           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q));
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
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w 
        = (((((~ (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                  >> 0x1fU)) | ((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                                 >> 0x1fU) & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w))) 
             & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w))) 
            | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r)) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w 
        = (((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
              | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q)) 
             | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q)) 
            | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w)));
}

VL_INLINE_OPT void Vriscv_soc_riscv_core::_sequent__TOP__riscv_soc__u_core__u_core__7(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core::_sequent__TOP__riscv_soc__u_core__u_core__7\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__signed_operation_w 
        = (1U & ((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                          >> 0x33U)) | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                >> 0x35U))));
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
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q) 
            & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_inst_w) 
               | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_rem_inst_w))) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_busy_q) 
              & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_rem_inst_w)));
}

VL_INLINE_OPT void Vriscv_soc_riscv_core::_sequent__TOP__riscv_soc__u_core__u_core__8(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core::_sequent__TOP__riscv_soc__u_core__u_core__8\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q)
            ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_buffer_q)
            : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q)
                ? 0x8000053U : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q)
                                 ? 0x53U : vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__inst_r)));
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
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_csr__DOT__reset_q = 1U;
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__reset_q) {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q 
                = vlTOPp->__Vcellinp__riscv_soc__reset_vector_i;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q = 1U;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_csr__DOT__reset_q = 0U;
        } else {
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_r;
            vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_r;
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__reset_q 
        = vlSymsp->TOP__riscv_soc__u_core__u_core.__Vdly__u_csr__DOT__reset_q;
}

VL_INLINE_OPT void Vriscv_soc_riscv_core::_multiclk__TOP__riscv_soc__u_core__u_core__9(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_riscv_core::_multiclk__TOP__riscv_soc__u_core__u_core__9\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_ack_w 
        = ((7U == (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                         >> 7U))) & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_ack_w 
        = ((7U != (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                         >> 7U))) & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_error_w 
        = ((7U == (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                         >> 7U))) & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_error_w));
    vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_error_w 
        = ((7U != (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                         >> 7U))) & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_error_w));
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
}
