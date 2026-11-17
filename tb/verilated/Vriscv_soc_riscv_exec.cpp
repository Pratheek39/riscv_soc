// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_riscv_exec.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

bool Vriscv_soc_riscv_exec::get_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::get_valid\n"); );
    // Variables
    VL_OUT8(get_valid__Vfuncrtn,0,0);
    Vriscv_soc__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_valid__Vfuncrtn = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_valid_q;
    // Final
    return (get_valid__Vfuncrtn);
}

uint32_t Vriscv_soc_riscv_exec::get_pc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::get_pc\n"); );
    // Variables
    VL_OUT(get_pc__Vfuncrtn,31,0);
    Vriscv_soc__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_pc__Vfuncrtn = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_pc_q;
    // Final
    return (get_pc__Vfuncrtn);
}

VL_INLINE_OPT void Vriscv_soc_riscv_exec::_settle__TOP__riscv_soc__u_core__u_core__u_exec__2(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::_settle__TOP__riscv_soc__u_core__u_core__u_exec__2\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r = 0U;
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0xbU)))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
    } else {
        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x11U)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
        } else {
            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x10U)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
            } else {
                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                   >> 0x12U)))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
                } else {
                    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x14U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
                    } else {
                        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0x13U)))) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
                        } else {
                            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0xcU)))) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
                            } else {
                                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0xfU)))) {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
                                } else {
                                    if ((1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0xdU)))) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
                                    } else {
                                        if ((1U & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0xeU)))) {
                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
                                        } else {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 1U)))) {
                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) {
                                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r;
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                    >> 2U)))) {
                                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r;
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                        >> 3U)))) {
                                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r;
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                            >> 4U)))) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r;
                                                            } else {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 5U)))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r;
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 6U)))) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                                            = 
                                                                            (0x1fU 
                                                                             & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                                >> 0x14U));
                                                                    } else {
                                                                        if (
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                                                = 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                                >> 0x14U));
                                                                        } else {
                                                                            if (
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 8U)))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                                                = 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                                                >> 0x14U));
                                                                            } else {
                                                                                if (
                                                                                (1U 
                                                                                & (~ (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 9U))))) {
                                                                                if (
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0xaU)))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                                                = 
                                                                                (0xfffff000U 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q);
                                                                                } else {
                                                                                if (
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x15U)) 
                                                                                | (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x16U))))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r = 4U;
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
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r = 0U;
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0xbU)))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
    } else {
        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x11U)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
        } else {
            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x10U)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
            } else {
                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                   >> 0x12U)))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                } else {
                    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x14U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                    } else {
                        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0x13U)))) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                        } else {
                            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0xcU)))) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                            } else {
                                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0xfU)))) {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                } else {
                                    if ((1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0xdU)))) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                    } else {
                                        if ((1U & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0xeU)))) {
                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                        } else {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 1U)))) {
                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) {
                                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                    >> 2U)))) {
                                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                        >> 3U)))) {
                                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                            >> 4U)))) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                                    = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                                            } else {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 5U)))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 6U)))) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                                                    } else {
                                                                        if (
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                                                        } else {
                                                                            if (
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 8U)))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                                                                            } else {
                                                                                if (
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 9U)))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                                                = 
                                                                                (0xfffff000U 
                                                                                & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q);
                                                                                } else {
                                                                                if (
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0xaU)))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
                                                                                } else {
                                                                                if (
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x15U)) 
                                                                                | (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x16U))))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                                                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q;
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
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r 
        = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
           + ((0xffffe000U & ((- (IData)((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                >> 0x1fU)))) 
                              << 0xdU)) | ((0x1000U 
                                            & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                       >> 7U)))))));
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0x15U)))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r 
            = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
               + ((0xfff00000U & ((- (IData)((1U & 
                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x1fU)))) 
                                  << 0x14U)) | ((0xff000U 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                       >> 9U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                            >> 0x14U)))))));
    } else {
        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x16U)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r 
                = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                   + vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r);
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r 
                = (0xfffffffeU & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r);
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r = 0U;
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0x15U)))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r = 1U;
    } else {
        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x16U)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r = 1U;
        } else {
            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x17U)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r 
                    = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                       == vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r);
            } else {
                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                   >> 0x18U)))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r 
                        = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                           != vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r);
                } else {
                    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x19U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_less_than_signed__0__y 
                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_less_than_signed__0__x 
                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_less_than_signed__0__v 
                            = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_less_than_signed__0__x 
                               - vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_less_than_signed__0__y);
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_less_than_signed__0__Vfuncout 
                            = (1U & (((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_less_than_signed__0__x 
                                             >> 0x1fU)) 
                                      != (1U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_less_than_signed__0__y 
                                                >> 0x1fU)))
                                      ? (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_less_than_signed__0__x 
                                         >> 0x1fU) : 
                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_less_than_signed__0__v 
                                      >> 0x1fU)));
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r 
                            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_less_than_signed__0__Vfuncout;
                    } else {
                        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0x1aU)))) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_greater_than_signed__1__y 
                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r;
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_greater_than_signed__1__x 
                                = vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r;
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_greater_than_signed__1__v 
                                = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_greater_than_signed__1__y 
                                   - vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_greater_than_signed__1__x);
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_greater_than_signed__1__Vfuncout 
                                = (1U & (((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_greater_than_signed__1__x 
                                                 >> 0x1fU)) 
                                          != (1U & 
                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_greater_than_signed__1__y 
                                               >> 0x1fU)))
                                          ? (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_greater_than_signed__1__y 
                                             >> 0x1fU)
                                          : (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_greater_than_signed__1__v 
                                             >> 0x1fU)));
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r 
                                = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__Vfunc_greater_than_signed__1__Vfuncout) 
                                   | (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                      == vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r));
                        } else {
                            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0x1bU)))) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r 
                                    = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                       < vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r);
                            } else {
                                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0x1cU)))) {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r 
                                        = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r 
                                           >= vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__sub_res_w 
        = (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
           - vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r);
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_request_o 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r) 
           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__exec_opcode_valid_o));
    if ((8U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r))
                ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r
                : ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r))
                    ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r))
                        ? (((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                   >> 0x1fU)) != (1U 
                                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r 
                                                     >> 0x1fU)))
                            ? ((0x80000000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r)
                                ? 1U : 0U) : ((0x80000000U 
                                               & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__sub_res_w)
                                               ? 1U
                                               : 0U))
                        : ((vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                            < vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                            ? 1U : 0U)) : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r))
                                            ? (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                               ^ vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                                            : (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                               | vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r))));
    } else {
        if ((4U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r 
                = ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r))
                    ? ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r))
                        ? (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                           & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                        : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__sub_res_w)
                    : ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r))
                        ? vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r
                        : (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                           + vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)));
        } else {
            if ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r 
                    = (((vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                         >> 0x1fU) & (3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r)))
                        ? 0xffffU : 0U);
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_1_r 
                    = ((1U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                        ? ((0x80000000U & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r) 
                                           << 0x10U)) 
                           | (0x7fffffffU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                             >> 1U)))
                        : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r);
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_2_r 
                    = ((2U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                        ? ((0xc0000000U & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r) 
                                           << 0x10U)) 
                           | (0x3fffffffU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_1_r 
                                             >> 2U)))
                        : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_1_r);
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_4_r 
                    = ((4U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                        ? ((0xf0000000U & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r) 
                                           << 0x10U)) 
                           | (0xfffffffU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_2_r 
                                            >> 4U)))
                        : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_2_r);
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_8_r 
                    = ((8U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                        ? ((0xff000000U & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r) 
                                           << 0x10U)) 
                           | (0xffffffU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_4_r 
                                           >> 8U)))
                        : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_4_r);
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r 
                    = ((0x10U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                        ? (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r) 
                            << 0x10U) | (0xffffU & 
                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_8_r 
                                          >> 0x10U)))
                        : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_8_r);
            } else {
                if ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_1_r 
                        = ((1U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                            ? (0xfffffffeU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r 
                                              << 1U))
                            : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r);
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_2_r 
                        = ((2U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                            ? (0xfffffffcU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_1_r 
                                              << 2U))
                            : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_1_r);
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_4_r 
                        = ((4U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                            ? (0xfffffff0U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_2_r 
                                              << 4U))
                            : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_2_r);
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_8_r 
                        = ((8U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                            ? (0xffffff00U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_4_r 
                                              << 8U))
                            : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_4_r);
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r 
                        = ((0x10U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r)
                            ? (0xffff0000U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_8_r 
                                              << 0x10U))
                            : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_8_r);
                } else {
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r 
                        = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vriscv_soc_riscv_exec::_sequent__TOP__riscv_soc__u_core__u_core__u_exec__3(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::_sequent__TOP__riscv_soc__u_core__u_core__u_exec__3\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_pc_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)
            ? 0U : vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q);
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_valid_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)) 
           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__exec_opcode_valid_o));
}

VL_INLINE_OPT void Vriscv_soc_riscv_exec::_sequent__TOP__riscv_soc__u_core__u_core__u_exec__4(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::_sequent__TOP__riscv_soc__u_core__u_core__u_exec__4\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 0U;
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0xbU)))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 4U;
    } else {
        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x11U)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 7U;
        } else {
            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x10U)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 8U;
            } else {
                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                   >> 0x12U)))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 1U;
                } else {
                    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x14U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 3U;
                    } else {
                        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0x13U)))) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 2U;
                        } else {
                            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0xcU)))) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 6U;
                            } else {
                                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0xfU)))) {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 9U;
                                } else {
                                    if ((1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0xdU)))) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 0xbU;
                                    } else {
                                        if ((1U & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0xeU)))) {
                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 0xaU;
                                        } else {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 1U)))) {
                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 4U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) {
                                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 7U;
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                    >> 2U)))) {
                                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 0xbU;
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                        >> 3U)))) {
                                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 0xaU;
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                            >> 4U)))) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 8U;
                                                            } else {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 5U)))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 9U;
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 6U)))) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 1U;
                                                                    } else {
                                                                        if (
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 2U;
                                                                        } else {
                                                                            if (
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 8U)))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 3U;
                                                                            } else {
                                                                                if (
                                                                                (1U 
                                                                                & (~ (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 9U))))) {
                                                                                if (
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0xaU)))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 4U;
                                                                                } else {
                                                                                if (
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x15U)) 
                                                                                | (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x16U))))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r = 4U;
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
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q = 0U;
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q = 0U;
    } else {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q 
            = vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r;
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q 
            = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__exec_opcode_valid_o) 
                & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r))
                ? (0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                            >> 7U)) : 0U);
    }
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 0U;
    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                       >> 0xbU)))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
    } else {
        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                           >> 0x11U)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
        } else {
            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 0x10U)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
            } else {
                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                   >> 0x12U)))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                } else {
                    if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                       >> 0x14U)))) {
                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                    } else {
                        if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                           >> 0x13U)))) {
                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                        } else {
                            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0xcU)))) {
                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                            } else {
                                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                   >> 0xfU)))) {
                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                } else {
                                    if ((1U & (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0xdU)))) {
                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                    } else {
                                        if ((1U & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0xeU)))) {
                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                        } else {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 1U)))) {
                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) {
                                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                    >> 2U)))) {
                                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                        >> 3U)))) {
                                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                                        } else {
                                                            if (
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                            >> 4U)))) {
                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                                            } else {
                                                                if (
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 5U)))) {
                                                                    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 6U)))) {
                                                                        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                                                    } else {
                                                                        if (
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                                                        } else {
                                                                            if (
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 8U)))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                                                            } else {
                                                                                if (
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 9U)))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                                                                } else {
                                                                                if (
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0xaU)))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
                                                                                } else {
                                                                                if (
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x15U)) 
                                                                                | (IData)(
                                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                                >> 0x16U))))) {
                                                                                vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r = 1U;
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
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vriscv_soc_riscv_exec::_sequent__TOP__riscv_soc__u_core__u_core__u_exec__5(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::_sequent__TOP__riscv_soc__u_core__u_core__u_exec__5\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r 
        = ((0xfffff000U & ((- (IData)((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 0x1fU)))) 
                           << 0xcU)) | (0xfffU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 0x14U)));
}
