// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

VL_ATTR_COLD void Vriscv_soc_riscv_regfile___ctor_var_reset(Vriscv_soc_riscv_regfile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_soc_riscv_regfile___ctor_var_reset\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__rd0_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2095879876080289334ull);
    vlSelf->__PVT__rd1_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10304170628855693815ull);
    vlSelf->__PVT__rd2_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6014304635634868186ull);
    vlSelf->__PVT__rd3_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13109859215411589480ull);
    vlSelf->__PVT__rd0_value_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8571077863275677288ull);
    vlSelf->__PVT__rd1_value_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9211611357688752433ull);
    vlSelf->__PVT__rd2_value_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9952980768979167716ull);
    vlSelf->__PVT__rd3_value_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13582737970631782536ull);
    vlSelf->__PVT__ra_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 757215640119341404ull);
    vlSelf->__PVT__rb_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12587864775238484924ull);
    vlSelf->__PVT__ra_value_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8220691501173454714ull);
    vlSelf->__PVT__rb_value_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7856975992954554591ull);
    vlSelf->__PVT__reg_r1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8392440761823390995ull);
    vlSelf->__PVT__reg_r2_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4242183843031604725ull);
    vlSelf->__PVT__reg_r3_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17357608832891726819ull);
    vlSelf->__PVT__reg_r4_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4411797404867934543ull);
    vlSelf->__PVT__reg_r5_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10848958854031765685ull);
    vlSelf->__PVT__reg_r6_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10660236468113453192ull);
    vlSelf->__PVT__reg_r7_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6693637067535158678ull);
    vlSelf->__PVT__reg_r8_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6242535449974661809ull);
    vlSelf->__PVT__reg_r9_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3597199085926029032ull);
    vlSelf->__PVT__reg_r10_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8898585112106209024ull);
    vlSelf->__PVT__reg_r11_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5766867442414312901ull);
    vlSelf->__PVT__reg_r12_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6050751884808340695ull);
    vlSelf->__PVT__reg_r13_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6903192680249502312ull);
    vlSelf->__PVT__reg_r14_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5896004692131705782ull);
    vlSelf->__PVT__reg_r15_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1248583938437447433ull);
    vlSelf->__PVT__reg_r16_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3583383441309395780ull);
    vlSelf->__PVT__reg_r17_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3583972694758190087ull);
    vlSelf->__PVT__reg_r18_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5272973654539952436ull);
    vlSelf->__PVT__reg_r19_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1106767491796813938ull);
    vlSelf->__PVT__reg_r20_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3727085975171723380ull);
    vlSelf->__PVT__reg_r21_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8115058310447416261ull);
    vlSelf->__PVT__reg_r22_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2760029743583334107ull);
    vlSelf->__PVT__reg_r23_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13695643713673113775ull);
    vlSelf->__PVT__reg_r24_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17025827765205954967ull);
    vlSelf->__PVT__reg_r25_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8900719893337998677ull);
    vlSelf->__PVT__reg_r26_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3648371778233690255ull);
    vlSelf->__PVT__reg_r27_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2827433244267559825ull);
    vlSelf->__PVT__reg_r28_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17676897193283679551ull);
    vlSelf->__PVT__reg_r29_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10915324733727229827ull);
    vlSelf->__PVT__reg_r30_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13945295873606213355ull);
    vlSelf->__PVT__reg_r31_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10494786810180064700ull);
}
