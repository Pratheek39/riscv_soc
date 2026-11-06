// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

void Vriscv_soc_riscv_top___ico_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___ico_sequent__TOP__riscv_soc__u_core__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dport_bridge__DOT__read_complete_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i) 
           & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
               >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i)));
    vlSelfRef.__PVT__u_dport_bridge__DOT__write_complete_w 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_25)) 
           & (((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q) 
               | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awready_o)) 
              & ((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q) 
                 | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wready_o))));
    vlSelfRef.__PVT__u_dport_bridge__DOT__req_pop_w 
        = ((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__read_complete_w) 
           | (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__write_complete_w));
}

void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q = 0;
    CData/*2:0*/ __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q;
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q = 0;
    CData/*1:0*/ __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q = 0;
    CData/*2:0*/ __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q = 0;
    CData/*1:0*/ __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q = 0;
    SData/*10:0*/ __VdlyVal__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0;
    __VdlyVal__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 = 0;
    CData/*1:0*/ __VdlyDim0__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0;
    __VdlyDim0__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0;
    __VdlySet__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 = 0;
    VlWide<3>/*68:0*/ __VdlyVal__u_dport_bridge__DOT__u_req__DOT__ram_q__v0;
    VL_ZERO_W(69, __VdlyVal__u_dport_bridge__DOT__u_req__DOT__ram_q__v0);
    CData/*1:0*/ __VdlyDim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0;
    __VdlyDim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_dport_bridge__DOT__u_req__DOT__ram_q__v0;
    __VdlySet__u_dport_bridge__DOT__u_req__DOT__ram_q__v0 = 0;
    // Body
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q 
        = vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q 
        = vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q;
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q;
    __VdlySet__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 = 0U;
    __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q;
    __VdlySet__u_dport_bridge__DOT__u_req__DOT__ram_q__v0 = 0U;
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_cpu_i) {
        __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q = 0U;
        __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q = 0U;
        __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q = 0U;
        __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q = 0U;
        __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q = 0U;
        __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q = 0U;
        vlSelfRef.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q = 0U;
        vlSelfRef.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q = 0U;
        vlSelfRef.__PVT__u_dport_bridge__DOT__request_pending_q = 0U;
    } else {
        if ((((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__res_push_w) 
              & (4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))) 
             & (~ ((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_ack_o) 
                   & (0U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)))))) {
            __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__res_push_w) 
                        & (4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)))) 
                    & ((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_ack_o) 
                       & (0U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))))) {
            __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q 
                = (7U & ((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q) 
                         - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__req_push_w) 
              & (4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))) 
             & (~ ((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__req_pop_w) 
                   & (0U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)))))) {
            __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__req_push_w) 
                        & (4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)))) 
                    & ((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__req_pop_w) 
                       & (0U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))))) {
            __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q 
                = (7U & ((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_ack_o) 
             & (0U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)))) {
            __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q)));
        }
        if (((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__req_pop_w) 
             & (0U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)))) {
            __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q)));
        }
        if (((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__res_push_w) 
             & (4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)))) {
            __VdlyVal__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 
                = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                    ? 0x0380U : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q));
            __VdlyDim0__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q;
            __VdlySet__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0 = 1U;
            __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q)));
        }
        if (((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__req_push_w) 
             & (4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)))) {
            __VdlyVal__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[0U] 
                = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                    ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                    : ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                          ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                             >> 0x0000000cU) : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                                >> 0x0000000cU)) 
                        << 0x0000000cU) | (0x00000fffU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)));
            __VdlyVal__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[1U] 
                = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_rd_i)) 
                            << 0x00000024U) | (((QData)((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_wr_i)) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                                   ? 0U
                                                                   : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))))));
            __VdlyVal__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[2U] 
                = (0x0000001fU & (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_rd_i)) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_wr_i)) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                                  ? 0U
                                                                  : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))))) 
                                          >> 0x00000020U)));
            __VdlyDim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q;
            __VdlySet__u_dport_bridge__DOT__u_req__DOT__ram_q__v0 = 1U;
            __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q)));
        }
        if (((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wvalid_i) 
               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wready_o)) 
              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i)) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awready_o)))) {
            vlSelfRef.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q = 1U;
        } else if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i) 
                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awready_o))) {
            vlSelfRef.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q = 0U;
        }
        if (((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i) 
               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awready_o)) 
              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wvalid_i)) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wready_o)))) {
            vlSelfRef.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q = 1U;
        } else if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wvalid_i) 
                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wready_o))) {
            vlSelfRef.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__write_complete_w) 
             | (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__read_complete_w))) {
            vlSelfRef.__PVT__u_dport_bridge__DOT__request_pending_q = 1U;
        } else if (vlSelfRef.__PVT__u_dport_bridge__DOT__mem_ack_o) {
            vlSelfRef.__PVT__u_dport_bridge__DOT__request_pending_q = 0U;
        }
    }
    vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q 
        = __Vdly__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q;
    vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q 
        = __Vdly__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q;
    vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q 
        = __Vdly__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q;
    vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q 
        = __Vdly__u_dport_bridge__DOT__u_resp__DOT__count_q;
    if (__VdlySet__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[__VdlyDim0__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0] 
            = __VdlyVal__u_dport_bridge__DOT__u_resp__DOT__ram_q__v0;
    }
    vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q 
        = __Vdly__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q;
    vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q 
        = __Vdly__u_dport_bridge__DOT__u_req__DOT__count_q;
    if (__VdlySet__u_dport_bridge__DOT__u_req__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[__VdlyDim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0][0U] 
            = __VdlyVal__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[0U];
        vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[__VdlyDim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0][1U] 
            = __VdlyVal__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[1U];
        vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[__VdlyDim0__u_dport_bridge__DOT__u_req__DOT__ram_q__v0][2U] 
            = __VdlyVal__u_dport_bridge__DOT__u_req__DOT__ram_q__v0[2U];
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = (7U 
                                                 & (vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                                                    [vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q] 
                                                    >> 7U));
    vlSelfRef.__PVT__u_dport_bridge__DOT__mem_accept_o 
        = ((4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)) 
           & (4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_34 = (1U 
                                                 & (vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                                    [vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U] 
                                                    >> 4U));
}

void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__1(Vriscv_soc_riscv_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_61;
    __VdfgRegularize_hebeb780c_0_61 = 0;
    // Body
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
    __VdfgRegularize_hebeb780c_0_61 = ((0U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_wr_i)) 
                                       | (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_rd_i));
    vlSelfRef.__PVT__u_dport_bridge__DOT__req_push_w 
        = ((4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_61));
    vlSelfRef.__PVT__u_dport_bridge__DOT__res_push_w 
        = ((4U != (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_61));
}

void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__2(Vriscv_soc_riscv_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dport_bridge__DOT__mem_ack_o 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_bvalid_o) 
           | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
               >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i)));
    vlSelfRef.__PVT__u_dport_bridge__DOT__mem_error_o 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_bvalid_o)
            ? (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_bresp_i))
            : (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rresp_i)));
}

void Vriscv_soc_riscv_top___nba_comb__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top___nba_comb__TOP__riscv_soc__u_core__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_60 = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__mem_ack_o)) 
                                                    & (IData)(vlSelfRef.__PVT__u_dport_bridge__DOT__request_pending_q)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_25 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_34) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_60));
}
