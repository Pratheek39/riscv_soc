// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_riscv_exec.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vriscv_soc_riscv_exec) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_soc_riscv_exec::__Vconfigure(Vriscv_soc__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vriscv_soc_riscv_exec::~Vriscv_soc_riscv_exec() {
}

void Vriscv_soc_riscv_exec::_settle__TOP__riscv_soc__u_core__u_core__u_exec__1(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::_settle__TOP__riscv_soc__u_core__u_core__u_exec__1\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r 
        = ((0xfffff000U & ((- (IData)((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 0x1fU)))) 
                           << 0xcU)) | (0xfffU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 0x14U)));
}

void Vriscv_soc_riscv_exec::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__opcode_valid_i = VL_RAND_RESET_I(1);
    __PVT__opcode_instr_i = VL_RAND_RESET_Q(58);
    __PVT__opcode_opcode_i = VL_RAND_RESET_I(32);
    __PVT__opcode_pc_i = VL_RAND_RESET_I(32);
    __PVT__opcode_rd_idx_i = VL_RAND_RESET_I(5);
    __PVT__opcode_ra_idx_i = VL_RAND_RESET_I(5);
    __PVT__opcode_rb_idx_i = VL_RAND_RESET_I(5);
    __PVT__opcode_ra_operand_i = VL_RAND_RESET_I(32);
    __PVT__opcode_rb_operand_i = VL_RAND_RESET_I(32);
    __PVT__branch_request_o = VL_RAND_RESET_I(1);
    __PVT__branch_pc_o = VL_RAND_RESET_I(32);
    __PVT__writeback_idx_o = VL_RAND_RESET_I(5);
    __PVT__writeback_squash_o = VL_RAND_RESET_I(1);
    __PVT__writeback_value_o = VL_RAND_RESET_I(32);
    __PVT__stall_o = VL_RAND_RESET_I(1);
    __PVT__rd_x_q = VL_RAND_RESET_I(5);
    __PVT__imm12_r = VL_RAND_RESET_I(32);
    __PVT__alu_func_r = VL_RAND_RESET_I(4);
    __PVT__alu_input_a_r = VL_RAND_RESET_I(32);
    __PVT__alu_input_b_r = VL_RAND_RESET_I(32);
    __PVT__write_rd_r = VL_RAND_RESET_I(1);
    __PVT__branch_r = VL_RAND_RESET_I(1);
    __PVT__branch_target_r = VL_RAND_RESET_I(32);
    __PVT__result_q = VL_RAND_RESET_I(32);
    __PVT__v_dbg_valid_q = VL_RAND_RESET_I(1);
    __PVT__v_dbg_pc_q = VL_RAND_RESET_I(32);
    __PVT__u_alu__DOT__result_r = VL_RAND_RESET_I(32);
    __PVT__u_alu__DOT__shift_right_fill_r = VL_RAND_RESET_I(16);
    __PVT__u_alu__DOT__shift_right_1_r = VL_RAND_RESET_I(32);
    __PVT__u_alu__DOT__shift_right_2_r = VL_RAND_RESET_I(32);
    __PVT__u_alu__DOT__shift_right_4_r = VL_RAND_RESET_I(32);
    __PVT__u_alu__DOT__shift_right_8_r = VL_RAND_RESET_I(32);
    __PVT__u_alu__DOT__shift_left_1_r = VL_RAND_RESET_I(32);
    __PVT__u_alu__DOT__shift_left_2_r = VL_RAND_RESET_I(32);
    __PVT__u_alu__DOT__shift_left_4_r = VL_RAND_RESET_I(32);
    __PVT__u_alu__DOT__shift_left_8_r = VL_RAND_RESET_I(32);
    __PVT__u_alu__DOT__sub_res_w = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__0__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_less_than_signed__0__x = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__0__y = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__0__v = VL_RAND_RESET_I(32);
    __Vfunc_greater_than_signed__1__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_greater_than_signed__1__x = VL_RAND_RESET_I(32);
    __Vfunc_greater_than_signed__1__y = VL_RAND_RESET_I(32);
    __Vfunc_greater_than_signed__1__v = VL_RAND_RESET_I(32);
}
