// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

void Vriscv_soc_icache___nba_sequent__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache___nba_sequent__TOP__riscv_soc__u_core__u_icache__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*10:0*/ __Vdly__data_write_addr_q;
    __Vdly__data_write_addr_q = 0;
    // Body
    vlSelfRef.__Vdly__replace_way_q = vlSelfRef.__PVT__replace_way_q;
    __Vdly__data_write_addr_q = vlSelfRef.__PVT__data_write_addr_q;
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSelfRef.__Vdly__replace_way_q = 0U;
        vlSelfRef.__PVT__flush_addr_q = 0U;
        __Vdly__data_write_addr_q = 0U;
        vlSelfRef.__PVT__axi_error_q = 0U;
        vlSelfRef.__PVT__lookup_valid_q = 0U;
        vlSelfRef.__PVT__lookup_addr_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rlast_i))) {
            vlSelfRef.__Vdly__replace_way_q = (1U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__replace_way_q)));
        }
        vlSelfRef.__PVT__flush_addr_q = ((0U == (IData)(vlSelfRef.__PVT__state_q))
                                          ? (0x000000ffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__flush_addr_q)))
                                          : 0U);
        if (((1U == (IData)(vlSelfRef.__PVT__state_q)) 
             & (2U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
            __Vdly__data_write_addr_q = (0x000007f8U 
                                         & (vlSelfRef.__PVT__lookup_addr_q 
                                            >> 2U));
        } else if (((2U == (IData)(vlSelfRef.__PVT__state_q)) 
                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o))) {
            __Vdly__data_write_addr_q = (0x000007ffU 
                                         & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__data_write_addr_q)));
        }
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o) 
             & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rresp_i)))) {
            vlSelfRef.__PVT__axi_error_q = 1U;
        } else if (vlSelfRef.__PVT__req_valid_o) {
            vlSelfRef.__PVT__axi_error_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__req_rd_i) & (IData)(vlSelfRef.__PVT__req_accept_o))) {
            vlSelfRef.__PVT__lookup_valid_q = 1U;
            vlSelfRef.__PVT__lookup_addr_q = vlSelfRef.__PVT__req_pc_i;
        } else if (vlSelfRef.__PVT__req_valid_o) {
            vlSelfRef.__PVT__lookup_valid_q = 0U;
        }
    }
    vlSelfRef.__PVT__invalidate_q = 0U;
    vlSelfRef.__PVT__axi_arvalid_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i)) 
                                      & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i) 
                                         & (~ (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i)))));
    vlSelfRef.__PVT__data_write_addr_q = __Vdly__data_write_addr_q;
}

void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vriscv_soc_icache___nba_sequent__TOP__riscv_soc__u_core__u_icache__1(Vriscv_soc_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache___nba_sequent__TOP__riscv_soc__u_core__u_icache__1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__replace_way_q = vlSelfRef.__Vdly__replace_way_q;
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i)
                                 ? 0U : (IData)(vlSelfRef.__PVT__next_state_r));
    vlSelfRef.__PVT__tag_data_in_r = ((0x00080000U 
                                       | (vlSelfRef.__PVT__lookup_addr_q 
                                          >> 0x0000000dU)) 
                                      & (- (IData)(
                                                   ((0U 
                                                     != (IData)(vlSelfRef.__PVT__state_q)) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.__PVT__state_q))))));
}

void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__1(Vriscv_soc_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__2(Vriscv_soc_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__2\n"); );
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

void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__3(Vriscv_soc_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__3\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_valid_o = ((IData)(vlSelfRef.__PVT__lookup_valid_q) 
                                    & ((IData)(vlSelfRef.__PVT__tag_hit_any_w) 
                                       & (1U == (IData)(vlSelfRef.__PVT__state_q))));
}

void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__4(Vriscv_soc_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__4\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__req_rd_i = (((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)) 
                                  & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w)) 
                                 | ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_fetch_fault_w)) 
                                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w)));
}
