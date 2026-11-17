// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef _VRISCV_SOC_RISCV_EXEC_H_
#define _VRISCV_SOC_RISCV_EXEC_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated_heavy.h"
#include "Vriscv_soc__Dpi.h"

//==========

class Vriscv_soc__Syms;
class Vriscv_soc_VerilatedVcd;


//----------

VL_MODULE(Vriscv_soc_riscv_exec) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__opcode_valid_i,0,0);
    VL_IN8(__PVT__opcode_rd_idx_i,4,0);
    VL_IN8(__PVT__opcode_ra_idx_i,4,0);
    VL_IN8(__PVT__opcode_rb_idx_i,4,0);
    VL_OUT8(__PVT__branch_request_o,0,0);
    VL_OUT8(__PVT__writeback_idx_o,4,0);
    VL_OUT8(__PVT__writeback_squash_o,0,0);
    VL_OUT8(__PVT__stall_o,0,0);
    VL_IN(__PVT__opcode_opcode_i,31,0);
    VL_IN(__PVT__opcode_pc_i,31,0);
    VL_IN(__PVT__opcode_ra_operand_i,31,0);
    VL_IN(__PVT__opcode_rb_operand_i,31,0);
    VL_OUT(__PVT__branch_pc_o,31,0);
    VL_OUT(__PVT__writeback_value_o,31,0);
    VL_IN64(__PVT__opcode_instr_i,57,0);
    
    // LOCAL SIGNALS
    CData/*4:0*/ __PVT__rd_x_q;
    CData/*3:0*/ __PVT__alu_func_r;
    CData/*0:0*/ __PVT__write_rd_r;
    CData/*0:0*/ __PVT__branch_r;
    CData/*0:0*/ __PVT__v_dbg_valid_q;
    SData/*15:0*/ __PVT__u_alu__DOT__shift_right_fill_r;
    IData/*31:0*/ __PVT__imm12_r;
    IData/*31:0*/ __PVT__alu_input_a_r;
    IData/*31:0*/ __PVT__alu_input_b_r;
    IData/*31:0*/ __PVT__branch_target_r;
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
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vfunc_less_than_signed__0__Vfuncout;
    CData/*0:0*/ __Vfunc_greater_than_signed__1__Vfuncout;
    IData/*31:0*/ __Vfunc_less_than_signed__0__x;
    IData/*31:0*/ __Vfunc_less_than_signed__0__y;
    IData/*31:0*/ __Vfunc_less_than_signed__0__v;
    IData/*31:0*/ __Vfunc_greater_than_signed__1__x;
    IData/*31:0*/ __Vfunc_greater_than_signed__1__y;
    IData/*31:0*/ __Vfunc_greater_than_signed__1__v;
    
    // INTERNAL VARIABLES
  private:
    Vriscv_soc__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_soc_riscv_exec);  ///< Copying not allowed
  public:
    VL_CTOR(Vriscv_soc_riscv_exec);
    ~Vriscv_soc_riscv_exec();
    
    // INTERNAL METHODS
    void __Vconfigure(Vriscv_soc__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__riscv_soc__u_core__u_core__u_exec__3(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__u_core__u_core__u_exec__4(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__u_core__u_core__u_exec__5(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _settle__TOP__riscv_soc__u_core__u_core__u_exec__1(Vriscv_soc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__riscv_soc__u_core__u_core__u_exec__2(Vriscv_soc__Syms* __restrict vlSymsp);
    uint32_t get_pc();
    bool get_valid();
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
