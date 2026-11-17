// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_riscv_regfile.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vriscv_soc_riscv_regfile) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_soc_riscv_regfile::__Vconfigure(Vriscv_soc__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vriscv_soc_riscv_regfile::~Vriscv_soc_riscv_regfile() {
}

void Vriscv_soc_riscv_regfile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_soc_riscv_regfile::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__rd0_i = VL_RAND_RESET_I(5);
    __PVT__rd1_i = VL_RAND_RESET_I(5);
    __PVT__rd2_i = VL_RAND_RESET_I(5);
    __PVT__rd3_i = VL_RAND_RESET_I(5);
    __PVT__rd0_value_i = VL_RAND_RESET_I(32);
    __PVT__rd1_value_i = VL_RAND_RESET_I(32);
    __PVT__rd2_value_i = VL_RAND_RESET_I(32);
    __PVT__rd3_value_i = VL_RAND_RESET_I(32);
    __PVT__ra_i = VL_RAND_RESET_I(5);
    __PVT__rb_i = VL_RAND_RESET_I(5);
    __PVT__ra_value_o = VL_RAND_RESET_I(32);
    __PVT__rb_value_o = VL_RAND_RESET_I(32);
    __PVT__reg_r1_q = VL_RAND_RESET_I(32);
    __PVT__reg_r2_q = VL_RAND_RESET_I(32);
    __PVT__reg_r3_q = VL_RAND_RESET_I(32);
    __PVT__reg_r4_q = VL_RAND_RESET_I(32);
    __PVT__reg_r5_q = VL_RAND_RESET_I(32);
    __PVT__reg_r6_q = VL_RAND_RESET_I(32);
    __PVT__reg_r7_q = VL_RAND_RESET_I(32);
    __PVT__reg_r8_q = VL_RAND_RESET_I(32);
    __PVT__reg_r9_q = VL_RAND_RESET_I(32);
    __PVT__reg_r10_q = VL_RAND_RESET_I(32);
    __PVT__reg_r11_q = VL_RAND_RESET_I(32);
    __PVT__reg_r12_q = VL_RAND_RESET_I(32);
    __PVT__reg_r13_q = VL_RAND_RESET_I(32);
    __PVT__reg_r14_q = VL_RAND_RESET_I(32);
    __PVT__reg_r15_q = VL_RAND_RESET_I(32);
    __PVT__reg_r16_q = VL_RAND_RESET_I(32);
    __PVT__reg_r17_q = VL_RAND_RESET_I(32);
    __PVT__reg_r18_q = VL_RAND_RESET_I(32);
    __PVT__reg_r19_q = VL_RAND_RESET_I(32);
    __PVT__reg_r20_q = VL_RAND_RESET_I(32);
    __PVT__reg_r21_q = VL_RAND_RESET_I(32);
    __PVT__reg_r22_q = VL_RAND_RESET_I(32);
    __PVT__reg_r23_q = VL_RAND_RESET_I(32);
    __PVT__reg_r24_q = VL_RAND_RESET_I(32);
    __PVT__reg_r25_q = VL_RAND_RESET_I(32);
    __PVT__reg_r26_q = VL_RAND_RESET_I(32);
    __PVT__reg_r27_q = VL_RAND_RESET_I(32);
    __PVT__reg_r28_q = VL_RAND_RESET_I(32);
    __PVT__reg_r29_q = VL_RAND_RESET_I(32);
    __PVT__reg_r30_q = VL_RAND_RESET_I(32);
    __PVT__reg_r31_q = VL_RAND_RESET_I(32);
    __PVT__ra_value_r = VL_RAND_RESET_I(32);
    __PVT__rb_value_r = VL_RAND_RESET_I(32);
}
