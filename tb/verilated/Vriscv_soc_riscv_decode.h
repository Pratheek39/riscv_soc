// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC_RISCV_DECODE_H_
#define VERILATED_VRISCV_SOC_RISCV_DECODE_H_  // guard

#include "verilated.h"
class Vriscv_soc_riscv_regfile;


class Vriscv_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc_riscv_decode final {
  public:
    // CELLS
    Vriscv_soc_riscv_regfile* u_regfile;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk_i;
    CData/*0:0*/ __PVT__rst_i;
    CData/*0:0*/ __PVT__fetch_valid_i;
    CData/*0:0*/ __PVT__branch_request_i;
    CData/*0:0*/ __PVT__branch_csr_request_i;
    CData/*4:0*/ __PVT__writeback_exec_idx_i;
    CData/*0:0*/ __PVT__writeback_exec_squash_i;
    CData/*4:0*/ __PVT__writeback_mem_idx_i;
    CData/*0:0*/ __PVT__writeback_mem_squash_i;
    CData/*4:0*/ __PVT__writeback_csr_idx_i;
    CData/*0:0*/ __PVT__writeback_csr_squash_i;
    CData/*4:0*/ __PVT__writeback_muldiv_idx_i;
    CData/*0:0*/ __PVT__writeback_muldiv_squash_i;
    CData/*0:0*/ __PVT__exec_stall_i;
    CData/*0:0*/ __PVT__lsu_stall_i;
    CData/*0:0*/ __PVT__csr_stall_i;
    CData/*0:0*/ __PVT__muldiv_stall_i;
    CData/*0:0*/ __PVT__fetch_branch_o;
    CData/*0:0*/ __PVT__fetch_accept_o;
    CData/*0:0*/ __PVT__exec_opcode_valid_o;
    CData/*0:0*/ __PVT__lsu_opcode_valid_o;
    CData/*0:0*/ __PVT__csr_opcode_valid_o;
    CData/*0:0*/ __PVT__muldiv_opcode_valid_o;
    CData/*4:0*/ __PVT__opcode_rd_idx_o;
    CData/*4:0*/ __PVT__opcode_ra_idx_o;
    CData/*4:0*/ __PVT__opcode_rb_idx_o;
    CData/*0:0*/ __PVT__fetch_invalidate_o;
    CData/*0:0*/ __PVT__valid_q;
    CData/*0:0*/ __PVT__fault_fetch_q;
    CData/*0:0*/ __PVT__stall_scoreboard_r;
    CData/*0:0*/ __PVT__stall_input_w;
    CData/*4:0*/ __PVT__wb_csr_rd_w;
    CData/*0:0*/ __PVT__ifence_q;
    CData/*0:0*/ __PVT__invalid_inst_w;
    CData/*0:0*/ __PVT__opcode_valid_r;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_23;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_58;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_59;
    IData/*31:0*/ __PVT__fetch_instr_i;
    IData/*31:0*/ __PVT__fetch_pc_i;
    IData/*31:0*/ __PVT__branch_pc_i;
    IData/*31:0*/ __PVT__branch_csr_pc_i;
    IData/*31:0*/ __PVT__writeback_exec_value_i;
    IData/*31:0*/ __PVT__writeback_mem_value_i;
    IData/*31:0*/ __PVT__writeback_csr_value_i;
    IData/*31:0*/ __PVT__writeback_muldiv_value_i;
    IData/*31:0*/ __PVT__fetch_branch_pc_o;
    IData/*31:0*/ __PVT__opcode_opcode_o;
    IData/*31:0*/ __PVT__opcode_pc_o;
    IData/*31:0*/ __PVT__opcode_ra_operand_o;
    IData/*31:0*/ __PVT__opcode_rb_operand_o;
    IData/*31:0*/ __PVT__pc_q;
    IData/*31:0*/ __PVT__inst_q;
    IData/*31:0*/ __PVT__scoreboard_q;
    IData/*31:0*/ __PVT__ra_value_w;
    IData/*31:0*/ __PVT__rb_value_w;
    IData/*31:0*/ __PVT__scoreboard_r;
    IData/*31:0*/ __PVT__current_scoreboard_r;
    IData/*31:0*/ __PVT__dbg_inst_imm;
    IData/*31:0*/ __Vdly__pc_q;
    QData/*57:0*/ __PVT__opcode_instr_o;
    QData/*57:0*/ __PVT__opcode_instr_w;
    QData/*57:0*/ __PVT__opcode_instr_q;

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vriscv_soc_riscv_decode();
    ~Vriscv_soc_riscv_decode();
    void ctor(Vriscv_soc__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vriscv_soc_riscv_decode);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    bool get_reg_valid(uint32_t r);
    uint32_t get_register(uint32_t r);
    bool set_register(uint32_t r, uint32_t value);
};


#endif  // guard
