// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

VL_ATTR_COLD void Vriscv_soc_riscv_top___stl_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___stl_sequent__TOP__riscv_soc__u_core__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_61;
    __VdfgRegularize_hebeb780c_0_61 = 0;
    // Body
    vlSelfRef.__PVT__u_dport_bridge__DOT__mem_accept_o 
        = ((4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)) 
           & (4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = (7U 
                                                 & (vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                                                    [vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q] 
                                                    >> 7U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_34 = (1U 
                                                 & (vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                                    [vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U] 
                                                    >> 4U));
    if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w) {
        vlSelfRef.__PVT__u_dport_bridge__DOT__mem_wr_i = 0U;
        vlSelfRef.__PVT__u_dport_bridge__DOT__mem_rd_i 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q;
    } else if (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w) {
        vlSelfRef.__PVT__u_dport_bridge__DOT__mem_wr_i 
            = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w) 
               & (- (IData)(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fault_page_store_w)) 
                             & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)))));
        vlSelfRef.__PVT__u_dport_bridge__DOT__mem_rd_i 
            = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
               & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_load_fault_w)) 
                  & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)));
    } else {
        vlSelfRef.__PVT__u_dport_bridge__DOT__mem_wr_i 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q;
        vlSelfRef.__PVT__u_dport_bridge__DOT__mem_rd_i 
            = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q;
    }
    vlSelfRef.__PVT__u_dport_bridge__DOT__mem_error_o 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_bvalid_o)
            ? (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_bresp_i))
            : (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rresp_i)));
    vlSelfRef.__PVT__u_dport_bridge__DOT__mem_ack_o 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_bvalid_o) 
           | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
               >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i)));
    __VdfgRegularize_hebeb780c_0_61 = ((0U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_wr_i)) 
                                       | (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_rd_i));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_60 = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_ack_o)) 
                                                    & (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__request_pending_q)));
    vlSelfRef.__PVT__u_dport_bridge__DOT__req_push_w 
        = ((4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_61));
    vlSelfRef.__PVT__u_dport_bridge__DOT__res_push_w 
        = ((4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_61));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_25 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_34) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_60));
}

VL_ATTR_COLD void Vriscv_soc_riscv_top___ctor_var_reset(Vriscv_soc_riscv_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___ctor_var_reset\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__axi_i_awready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14766025047644636657ull);
    vlSelf->__PVT__axi_i_wready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8269567476437713517ull);
    vlSelf->__PVT__axi_i_bvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11329908568622999426ull);
    vlSelf->__PVT__axi_i_bresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1381934594416018020ull);
    vlSelf->__PVT__axi_i_bid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2797354901212218187ull);
    vlSelf->__PVT__axi_i_arready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15287678307954382679ull);
    vlSelf->__PVT__axi_i_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16780052360933930440ull);
    vlSelf->__PVT__axi_i_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 34627238731027321ull);
    vlSelf->__PVT__axi_i_rresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14012055248941750316ull);
    vlSelf->__PVT__axi_i_rid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8866955473213903370ull);
    vlSelf->__PVT__axi_i_rlast_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 421369090515352394ull);
    vlSelf->__PVT__axi_d_awready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14980359147590473248ull);
    vlSelf->__PVT__axi_d_wready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7543485514994633649ull);
    vlSelf->__PVT__axi_d_bvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3556539609430012942ull);
    vlSelf->__PVT__axi_d_bresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7020780010505512351ull);
    vlSelf->__PVT__axi_d_bid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13054151119786225234ull);
    vlSelf->__PVT__axi_d_arready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10142987107573891221ull);
    vlSelf->__PVT__axi_d_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7029247776012005825ull);
    vlSelf->__PVT__axi_d_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3660904907042371899ull);
    vlSelf->__PVT__axi_d_rresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6167529485948944870ull);
    vlSelf->__PVT__axi_d_rid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7140166019199306726ull);
    vlSelf->__PVT__axi_d_rlast_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 95717124512746171ull);
    vlSelf->__PVT__intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9031270550293618600ull);
    vlSelf->__PVT__reset_vector_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8393161498616798439ull);
    vlSelf->__PVT__axi_i_awvalid_o = 0U;
    ;
    vlSelf->__PVT__axi_i_awaddr_o = 0U;
    ;
    vlSelf->__PVT__axi_i_awid_o = 0U;
    ;
    vlSelf->__PVT__axi_i_awlen_o = 0U;
    ;
    vlSelf->__PVT__axi_i_awburst_o = 0U;
    ;
    vlSelf->__PVT__axi_i_wvalid_o = 0U;
    ;
    vlSelf->__PVT__axi_i_wdata_o = 0U;
    ;
    vlSelf->__PVT__axi_i_wstrb_o = 0U;
    ;
    vlSelf->__PVT__axi_i_wlast_o = 0U;
    ;
    vlSelf->__PVT__axi_i_bready_o = 0U;
    ;
    vlSelf->__PVT__axi_i_arvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17702331295171327655ull);
    vlSelf->__PVT__axi_i_araddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5073211200885827957ull);
    vlSelf->__PVT__axi_i_arid_o = 8U;
    ;
    vlSelf->__PVT__axi_i_arlen_o = 7U;
    ;
    vlSelf->__PVT__axi_i_arburst_o = 1U;
    ;
    vlSelf->__PVT__axi_i_rready_o = 1U;
    ;
    vlSelf->__PVT__axi_d_awvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10197829223960527609ull);
    vlSelf->__PVT__axi_d_awaddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13954351983671074747ull);
    vlSelf->__PVT__axi_d_awid_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1026218471842761276ull);
    vlSelf->__PVT__axi_d_awlen_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17522246145314166803ull);
    vlSelf->__PVT__axi_d_awburst_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17372173130479828000ull);
    vlSelf->__PVT__axi_d_wvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17536693725050043820ull);
    vlSelf->__PVT__axi_d_wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3650664325262579157ull);
    vlSelf->__PVT__axi_d_wstrb_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17213111376674661109ull);
    vlSelf->__PVT__axi_d_wlast_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6456840160096422076ull);
    vlSelf->__PVT__axi_d_bready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13100661326075888602ull);
    vlSelf->__PVT__axi_d_arvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12444596948046688526ull);
    vlSelf->__PVT__axi_d_araddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11285598238097230822ull);
    vlSelf->__PVT__axi_d_arid_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5053977572816179783ull);
    vlSelf->__PVT__axi_d_arlen_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3091326693240492017ull);
    vlSelf->__PVT__axi_d_arburst_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5938601795384425900ull);
    vlSelf->__PVT__axi_d_rready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 750985352688682445ull);
    vlSelf->__PVT__u_dport_bridge__DOT__mem_rd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13371316471138803827ull);
    vlSelf->__PVT__u_dport_bridge__DOT__mem_wr_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10664176200487623054ull);
    vlSelf->__PVT__u_dport_bridge__DOT__mem_accept_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3256630754438564423ull);
    vlSelf->__PVT__u_dport_bridge__DOT__mem_ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17827296737660009386ull);
    vlSelf->__PVT__u_dport_bridge__DOT__mem_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2345113418534437107ull);
    vlSelf->__PVT__u_dport_bridge__DOT__write_complete_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14789773791785228214ull);
    vlSelf->__PVT__u_dport_bridge__DOT__read_complete_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2892196520621874277ull);
    vlSelf->__PVT__u_dport_bridge__DOT__request_pending_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9097720293666508254ull);
    vlSelf->__PVT__u_dport_bridge__DOT__req_pop_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6405302120961802923ull);
    vlSelf->__PVT__u_dport_bridge__DOT__req_push_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5810825222323735042ull);
    vlSelf->__PVT__u_dport_bridge__DOT__res_push_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17220366306804135944ull);
    vlSelf->__PVT__u_dport_bridge__DOT__awvalid_inhibit_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5502124766245095184ull);
    vlSelf->__PVT__u_dport_bridge__DOT__wvalid_inhibit_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12555244580631440048ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4940099488376528444ull);
    }
    vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14601500154877821316ull);
    vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1302400778152006187ull);
    vlSelf->__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5724022254013971524ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(69, vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[__Vi0], __VscopeHash, 10609185952843332090ull);
    }
    vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10506927643315332367ull);
    vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8227561260345922849ull);
    vlSelf->__PVT__u_dport_bridge__DOT__u_req__DOT__count_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1116946210556127710ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_16 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_25 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_34 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_60 = 0;
}
