// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

VL_ATTR_COLD void Vriscv_soc_riscv_exec___eval_static__TOP__riscv_soc__u_core__u_core__u_exec(Vriscv_soc_riscv_exec* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___eval_static__TOP__riscv_soc__u_core__u_core__u_exec\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelfRef.__PVT__less_than_signed__Vstatic__v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5877710750218089102ull);
    vlSelfRef.__PVT__greater_than_signed__Vstatic__v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15188045347573103019ull);
}

VL_ATTR_COLD void Vriscv_soc_riscv_exec___ctor_var_reset(Vriscv_soc_riscv_exec* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_soc_riscv_exec___ctor_var_reset\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__opcode_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16982480924762222379ull);
    vlSelf->__PVT__opcode_instr_i = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 5990436729656282356ull);
    vlSelf->__PVT__opcode_opcode_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7767630247744091974ull);
    vlSelf->__PVT__opcode_pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6435640624736824449ull);
    vlSelf->__PVT__opcode_rd_idx_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2462951064103124320ull);
    vlSelf->__PVT__opcode_ra_idx_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8459162984025992126ull);
    vlSelf->__PVT__opcode_rb_idx_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12164162518468872581ull);
    vlSelf->__PVT__opcode_ra_operand_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3041175409154459088ull);
    vlSelf->__PVT__opcode_rb_operand_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18402755230010304820ull);
    vlSelf->__PVT__branch_request_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13473080899034328032ull);
    vlSelf->__PVT__branch_pc_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1683976891232213935ull);
    vlSelf->__PVT__writeback_idx_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13246552298710633314ull);
    vlSelf->__PVT__writeback_squash_o = 0U;
    ;
    vlSelf->__PVT__writeback_value_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14114847868987987405ull);
    vlSelf->__PVT__stall_o = 0U;
    ;
    vlSelf->__PVT__rd_x_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12641935862572147160ull);
    vlSelf->__PVT__branch_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6269576432420957588ull);
    vlSelf->__PVT__result_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10969619753148672842ull);
    vlSelf->__PVT__v_dbg_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7457940917363301915ull);
    vlSelf->__PVT__v_dbg_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3590528233879809091ull);
    vlSelf->__PVT__u_alu__DOT__alu_op_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7995652240929288098ull);
    vlSelf->__PVT__u_alu__DOT__alu_a_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1095676946677905297ull);
    vlSelf->__PVT__u_alu__DOT__alu_b_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14221276321394699628ull);
    vlSelf->__PVT__u_alu__DOT__result_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7787747001623389270ull);
    vlSelf->__PVT__u_alu__DOT__shift_right_fill_r = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12848713521611739921ull);
    vlSelf->__PVT__u_alu__DOT__shift_right_1_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 744597458558614260ull);
    vlSelf->__PVT__u_alu__DOT__shift_right_2_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10680662443140356168ull);
    vlSelf->__PVT__u_alu__DOT__shift_right_4_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11570935385152613402ull);
    vlSelf->__PVT__u_alu__DOT__shift_right_8_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11907651894226954818ull);
    vlSelf->__PVT__u_alu__DOT__shift_left_1_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11820588343606008809ull);
    vlSelf->__PVT__u_alu__DOT__shift_left_2_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13090150585033628279ull);
    vlSelf->__PVT__u_alu__DOT__shift_left_4_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1702861337251423336ull);
    vlSelf->__PVT__u_alu__DOT__shift_left_8_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16973937010972112130ull);
    vlSelf->__PVT__u_alu__DOT__sub_res_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13633863302458550860ull);
    vlSelf->__Vfunc_less_than_signed__0__Vfuncout = 0;
    vlSelf->__Vfunc_less_than_signed__0__x = 0;
    vlSelf->__Vfunc_less_than_signed__0__y = 0;
    vlSelf->__Vfunc_greater_than_signed__1__x = 0;
    vlSelf->__Vfunc_greater_than_signed__1__y = 0;
}
