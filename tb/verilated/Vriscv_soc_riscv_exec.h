// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC_RISCV_EXEC_H_
#define VERILATED_VRISCV_SOC_RISCV_EXEC_H_  // guard

#include "verilated.h"


class Vriscv_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc_riscv_exec final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VlemCall_0__greater_than_signed;
    CData/*0:0*/ __PVT__clk_i;
    CData/*0:0*/ __PVT__rst_i;
    CData/*0:0*/ __PVT__opcode_valid_i;
    CData/*4:0*/ __PVT__opcode_rd_idx_i;
    CData/*4:0*/ __PVT__opcode_ra_idx_i;
    CData/*4:0*/ __PVT__opcode_rb_idx_i;
    CData/*0:0*/ __PVT__branch_request_o;
    CData/*4:0*/ __PVT__writeback_idx_o;
    CData/*0:0*/ __PVT__writeback_squash_o;
    CData/*0:0*/ __PVT__stall_o;
    CData/*4:0*/ __PVT__rd_x_q;
    CData/*3:0*/ __PVT__alu_func_r;
    CData/*0:0*/ __PVT__branch_r;
    CData/*0:0*/ __PVT__v_dbg_valid_q;
    CData/*0:0*/ __Vfunc_less_than_signed__0__Vfuncout;
    SData/*15:0*/ __PVT__u_alu__DOT__shift_right_fill_r;
    IData/*31:0*/ __PVT__opcode_opcode_i;
    IData/*31:0*/ __PVT__opcode_pc_i;
    IData/*31:0*/ __PVT__opcode_ra_operand_i;
    IData/*31:0*/ __PVT__opcode_rb_operand_i;
    IData/*31:0*/ __PVT__branch_pc_o;
    IData/*31:0*/ __PVT__writeback_value_o;
    IData/*31:0*/ __PVT__imm12_r;
    IData/*31:0*/ __PVT__alu_input_a_r;
    IData/*31:0*/ __PVT__alu_input_b_r;
    IData/*31:0*/ __PVT__less_than_signed__Vstatic__v;
    IData/*31:0*/ __PVT__greater_than_signed__Vstatic__v;
    IData/*31:0*/ __PVT__result_q;
    IData/*31:0*/ __PVT__v_dbg_pc_q;
    IData/*31:0*/ __PVT__u_alu__DOT__result_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_right_1_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_right_2_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_right_4_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_right_8_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_left_1_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_left_2_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_left_4_r;
    IData/*31:0*/ __PVT__u_alu__DOT__shift_left_8_r;
    IData/*31:0*/ __PVT__u_alu__DOT__sub_res_w;
    IData/*31:0*/ __Vfunc_less_than_signed__0__x;
    IData/*31:0*/ __Vfunc_less_than_signed__0__y;
    IData/*31:0*/ __Vfunc_greater_than_signed__1__x;
    IData/*31:0*/ __Vfunc_greater_than_signed__1__y;
    QData/*57:0*/ __PVT__opcode_instr_i;

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vriscv_soc_riscv_exec();
    ~Vriscv_soc_riscv_exec();
    void ctor(Vriscv_soc__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vriscv_soc_riscv_exec);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t get_pc();
    bool get_valid();
};


#endif  // guard
