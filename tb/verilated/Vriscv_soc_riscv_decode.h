// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef _VRISCV_SOC_RISCV_DECODE_H_
#define _VRISCV_SOC_RISCV_DECODE_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated_heavy.h"
#include "Vriscv_soc__Dpi.h"

//==========

class Vriscv_soc__Syms;
class Vriscv_soc_VerilatedVcd;
class Vriscv_soc_riscv_regfile;


//----------

VL_MODULE(Vriscv_soc_riscv_decode) {
  public:
    // CELLS
    Vriscv_soc_riscv_regfile* u_regfile;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__fetch_valid_i,0,0);
    VL_IN8(__PVT__branch_request_i,0,0);
    VL_IN8(__PVT__branch_csr_request_i,0,0);
    VL_IN8(__PVT__writeback_exec_idx_i,4,0);
    VL_IN8(__PVT__writeback_exec_squash_i,0,0);
    VL_IN8(__PVT__writeback_mem_idx_i,4,0);
    VL_IN8(__PVT__writeback_mem_squash_i,0,0);
    VL_IN8(__PVT__writeback_csr_idx_i,4,0);
    VL_IN8(__PVT__writeback_csr_squash_i,0,0);
    VL_IN8(__PVT__writeback_muldiv_idx_i,4,0);
    VL_IN8(__PVT__writeback_muldiv_squash_i,0,0);
    VL_IN8(__PVT__exec_stall_i,0,0);
    VL_IN8(__PVT__lsu_stall_i,0,0);
    VL_IN8(__PVT__csr_stall_i,0,0);
    VL_IN8(__PVT__muldiv_stall_i,0,0);
    VL_OUT8(__PVT__fetch_branch_o,0,0);
    VL_OUT8(__PVT__fetch_accept_o,0,0);
    VL_OUT8(__PVT__exec_opcode_valid_o,0,0);
    VL_OUT8(__PVT__lsu_opcode_valid_o,0,0);
    VL_OUT8(__PVT__csr_opcode_valid_o,0,0);
    VL_OUT8(__PVT__muldiv_opcode_valid_o,0,0);
    VL_OUT8(__PVT__opcode_rd_idx_o,4,0);
    VL_OUT8(__PVT__opcode_ra_idx_o,4,0);
    VL_OUT8(__PVT__opcode_rb_idx_o,4,0);
    VL_OUT8(__PVT__fetch_invalidate_o,0,0);
    VL_IN(__PVT__fetch_instr_i,31,0);
    VL_IN(__PVT__fetch_pc_i,31,0);
    VL_IN(__PVT__branch_pc_i,31,0);
    VL_IN(__PVT__branch_csr_pc_i,31,0);
    VL_IN(__PVT__writeback_exec_value_i,31,0);
    VL_IN(__PVT__writeback_mem_value_i,31,0);
    VL_IN(__PVT__writeback_csr_value_i,31,0);
    VL_IN(__PVT__writeback_muldiv_value_i,31,0);
    VL_OUT(__PVT__fetch_branch_pc_o,31,0);
    VL_OUT(__PVT__opcode_opcode_o,31,0);
    VL_OUT(__PVT__opcode_pc_o,31,0);
    VL_OUT(__PVT__opcode_ra_operand_o,31,0);
    VL_OUT(__PVT__opcode_rb_operand_o,31,0);
    VL_OUT64(__PVT__opcode_instr_o,57,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__valid_q;
    CData/*0:0*/ __PVT__fault_fetch_q;
    CData/*0:0*/ __PVT__stall_scoreboard_r;
    CData/*0:0*/ __PVT__stall_input_w;
    CData/*4:0*/ __PVT__wb_csr_rd_w;
    CData/*0:0*/ __PVT__ifence_q;
    CData/*0:0*/ __PVT__opcode_valid_r;
    IData/*31:0*/ __PVT__pc_q;
    IData/*31:0*/ __PVT__inst_q;
    IData/*31:0*/ __PVT__scoreboard_q;
    IData/*31:0*/ __PVT__scoreboard_r;
    IData/*31:0*/ __PVT__opcode_ra_operand_r;
    IData/*31:0*/ __PVT__opcode_rb_operand_r;
    IData/*31:0*/ __PVT__current_scoreboard_r;
    WData/*79:0*/ __PVT__dbg_inst_str[3];
    WData/*79:0*/ __PVT__dbg_inst_ra[3];
    WData/*79:0*/ __PVT__dbg_inst_rb[3];
    WData/*79:0*/ __PVT__dbg_inst_rd[3];
    IData/*31:0*/ __PVT__dbg_inst_imm;
    IData/*31:0*/ __PVT__dbg_inst_pc;
    QData/*57:0*/ __PVT__opcode_instr_w;
    QData/*57:0*/ __PVT__opcode_instr_q;
    
    // LOCAL VARIABLES
    CData/*4:0*/ __Vfunc_get_regname_str__2__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__3__regnum;
    CData/*4:0*/ __Vfunc_get_regname_str__4__regnum;
    WData/*79:0*/ __Vfunc_get_regname_str__2__Vfuncout[3];
    WData/*79:0*/ __Vfunc_get_regname_str__3__Vfuncout[3];
    WData/*79:0*/ __Vfunc_get_regname_str__4__Vfuncout[3];
    
    // INTERNAL VARIABLES
  private:
    Vriscv_soc__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_soc_riscv_decode);  ///< Copying not allowed
  public:
    VL_CTOR(Vriscv_soc_riscv_decode);
    ~Vriscv_soc_riscv_decode();
    
    // INTERNAL METHODS
    void __Vconfigure(Vriscv_soc__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _multiclk__TOP__riscv_soc__u_core__u_core__u_decode__8(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__u_core__u_core__u_decode__4(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__u_core__u_core__u_decode__5(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__u_core__u_core__u_decode__6(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__u_core__u_core__u_decode__7(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _settle__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__riscv_soc__u_core__u_core__u_decode__2(Vriscv_soc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__riscv_soc__u_core__u_core__u_decode__3(Vriscv_soc__Syms* __restrict vlSymsp);
    bool get_reg_valid(uint32_t r);
    uint32_t get_register(uint32_t r);
    bool set_register(uint32_t r, uint32_t value);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
