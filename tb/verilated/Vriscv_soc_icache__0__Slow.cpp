// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

VL_ATTR_COLD void Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tag_data_in_r = ((0x00080000U 
                                       | (vlSelfRef.__PVT__lookup_addr_q 
                                          >> 0x0000000dU)) 
                                      & (- (IData)(
                                                   ((0U 
                                                     != (IData)(vlSelfRef.__PVT__state_q)) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.__PVT__state_q))))));
    vlSelfRef.__PVT__tag0_hit_w = ((vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q 
                                    >> 0x00000013U) 
                                   & ((vlSelfRef.__PVT__lookup_addr_q 
                                       >> 0x0000000dU) 
                                      == (0x0007ffffU 
                                          & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q)));
    vlSelfRef.__PVT__tag1_hit_w = ((vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q 
                                    >> 0x00000013U) 
                                   & ((vlSelfRef.__PVT__lookup_addr_q 
                                       >> 0x0000000dU) 
                                      == (0x0007ffffU 
                                          & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q)));
    vlSelfRef.__PVT__tag_hit_any_w = ((IData)(vlSelfRef.__PVT__tag0_hit_w) 
                                      | (IData)(vlSelfRef.__PVT__tag1_hit_w));
    vlSelfRef.__PVT__req_valid_o = ((IData)(vlSelfRef.__PVT__lookup_valid_q) 
                                    & ((IData)(vlSelfRef.__PVT__tag_hit_any_w) 
                                       & (1U == (IData)(vlSelfRef.__PVT__state_q))));
    vlSelfRef.__PVT__next_state_r = (3U & ((2U & (IData)(vlSelfRef.__PVT__state_q))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.__PVT__state_q))
                                                ? 1U
                                                : ((IData)(vlSelfRef.__PVT__state_q) 
                                                   | (- (IData)((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_24)))))
                                            : ((1U 
                                                & (IData)(vlSelfRef.__PVT__state_q))
                                                ? (
                                                   ((~ (IData)(vlSelfRef.__PVT__tag_hit_any_w)) 
                                                    & (IData)(vlSelfRef.__PVT__lookup_valid_q))
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__state_q) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q) 
                                                                      | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q))))))))
                                                : ((IData)(vlSelfRef.__PVT__invalidate_q)
                                                    ? 1U
                                                    : 
                                                   ((0xffU 
                                                     == (IData)(vlSelfRef.__PVT__flush_addr_q))
                                                     ? 1U
                                                     : (IData)(vlSelfRef.__PVT__state_q))))));
    vlSelfRef.__PVT__req_accept_o = ((1U == (IData)(vlSelfRef.__PVT__state_q)) 
                                     & (2U != (IData)(vlSelfRef.__PVT__next_state_r)));
}

VL_ATTR_COLD void Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__1(Vriscv_soc_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_pc_i = ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                    ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q 
                                       >> 0x0000000cU)
                                    : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w 
                                       >> 0x0000000cU)) 
                                  << 0x0000000cU) | 
                                 (0x00000fffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w));
    vlSelfRef.__PVT__req_rd_i = (((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)) 
                                  & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w)) 
                                 | ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_fetch_fault_w)) 
                                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w)));
    vlSelfRef.__PVT__tag_addr_r = (0x000000ffU & ((0U 
                                                   == (IData)(vlSelfRef.__PVT__state_q))
                                                   ? (IData)(vlSelfRef.__PVT__flush_addr_q)
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelfRef.__PVT__state_q)) 
                                                    | (3U 
                                                       == (IData)(vlSelfRef.__PVT__state_q)))
                                                    ? 
                                                   (vlSelfRef.__PVT__lookup_addr_q 
                                                    >> 5U)
                                                    : 
                                                   (vlSelfRef.__PVT__req_pc_i 
                                                    >> 5U))));
    vlSelfRef.__PVT__data_addr_r = (0x000007ffU & (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__state_q))
                                                    ? (IData)(vlSelfRef.__PVT__data_write_addr_q)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__state_q))
                                                     ? 
                                                    (vlSelfRef.__PVT__lookup_addr_q 
                                                     >> 2U)
                                                     : 
                                                    (vlSelfRef.__PVT__req_pc_i 
                                                     >> 2U))));
}

VL_ATTR_COLD void Vriscv_soc_icache___ctor_var_reset(Vriscv_soc_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache___ctor_var_reset\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__req_rd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13498192458300988423ull);
    vlSelf->__PVT__req_flush_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13372209622087287565ull);
    vlSelf->__PVT__req_invalidate_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4781535271570564616ull);
    vlSelf->__PVT__req_pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6791694173133278595ull);
    vlSelf->__PVT__axi_awready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12234127594790196950ull);
    vlSelf->__PVT__axi_wready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7050310087720455162ull);
    vlSelf->__PVT__axi_bvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17884255309029706377ull);
    vlSelf->__PVT__axi_bresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4948651740071558206ull);
    vlSelf->__PVT__axi_bid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3388930068798728493ull);
    vlSelf->__PVT__axi_arready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12491755914061494437ull);
    vlSelf->__PVT__axi_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6116699644905141477ull);
    vlSelf->__PVT__axi_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14292434775926565658ull);
    vlSelf->__PVT__axi_rresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15348780561301092950ull);
    vlSelf->__PVT__axi_rid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14831536278709261127ull);
    vlSelf->__PVT__axi_rlast_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11572285030873530849ull);
    vlSelf->__PVT__req_accept_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16874245610013734242ull);
    vlSelf->__PVT__req_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14546853790447422879ull);
    vlSelf->__PVT__req_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14193339806147646831ull);
    vlSelf->__PVT__req_inst_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16805477887173454136ull);
    vlSelf->__PVT__axi_awvalid_o = 0U;
    ;
    vlSelf->__PVT__axi_awaddr_o = 0U;
    ;
    vlSelf->__PVT__axi_awid_o = 0U;
    ;
    vlSelf->__PVT__axi_awlen_o = 0U;
    ;
    vlSelf->__PVT__axi_awburst_o = 0U;
    ;
    vlSelf->__PVT__axi_wvalid_o = 0U;
    ;
    vlSelf->__PVT__axi_wdata_o = 0U;
    ;
    vlSelf->__PVT__axi_wstrb_o = 0U;
    ;
    vlSelf->__PVT__axi_wlast_o = 0U;
    ;
    vlSelf->__PVT__axi_bready_o = 0U;
    ;
    vlSelf->__PVT__axi_arvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14120138030509770650ull);
    vlSelf->__PVT__axi_araddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8847945662364852958ull);
    vlSelf->__PVT__axi_arid_o = 8U;
    ;
    vlSelf->__PVT__axi_arlen_o = 7U;
    ;
    vlSelf->__PVT__axi_arburst_o = 1U;
    ;
    vlSelf->__PVT__axi_rready_o = 1U;
    ;
    vlSelf->__PVT__next_state_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9253886169183682447ull);
    vlSelf->__PVT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14578357007859236226ull);
    vlSelf->__PVT__invalidate_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9020174779117143308ull);
    vlSelf->__PVT__replace_way_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10218525170876242621ull);
    vlSelf->__PVT__lookup_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7603776345113471248ull);
    vlSelf->__PVT__lookup_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5454541505850393730ull);
    vlSelf->__PVT__tag_addr_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 422920904476255751ull);
    vlSelf->__PVT__tag_data_in_r = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5021213094447757148ull);
    vlSelf->__PVT__tag0_hit_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17094251143997925323ull);
    vlSelf->__PVT__tag1_hit_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17016866106067246363ull);
    vlSelf->__PVT__tag_hit_any_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6005372777252642104ull);
    vlSelf->__PVT__data_addr_r = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 3741838447659146362ull);
    vlSelf->__PVT__data_write_addr_q = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14585334991938553732ull);
    vlSelf->__PVT__flush_addr_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15291150981820230879ull);
    vlSelf->__PVT__axi_arvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6424121389132464760ull);
    vlSelf->__PVT__axi_error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4853263340976820971ull);
    vlSelf->__Vdly__replace_way_q = 0;
}
