// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

void Vriscv_soc___024root___eval_sample(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_sample\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vriscv_soc___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vriscv_soc_riscv_soc___ico_sequent__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf);
void Vriscv_soc_riscv_top___ico_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf);

bool Vriscv_soc___024root___eval_ico(Vriscv_soc___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_ico\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_soc___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vriscv_soc___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__rst_cpu_i, vlSelfRef.rst_cpu_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__rst_i, vlSelfRef.rst_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__clk_i, vlSelfRef.clk_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__mem_rlast_i, vlSelfRef.mem_rlast_i);
                    VL_ASSIGN_ISU(4, vlSelfRef.__Vcellinp__riscv_soc__mem_rid_i, vlSelfRef.mem_rid_i);
                    VL_ASSIGN_ISU(2, vlSelfRef.__Vcellinp__riscv_soc__mem_rresp_i, vlSelfRef.mem_rresp_i);
                    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__riscv_soc__mem_rdata_i, vlSelfRef.mem_rdata_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__mem_rvalid_i, vlSelfRef.mem_rvalid_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__mem_arready_i, vlSelfRef.mem_arready_i);
                    VL_ASSIGN_ISU(4, vlSelfRef.__Vcellinp__riscv_soc__mem_bid_i, vlSelfRef.mem_bid_i);
                    VL_ASSIGN_ISU(2, vlSelfRef.__Vcellinp__riscv_soc__mem_bresp_i, vlSelfRef.mem_bresp_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__mem_bvalid_i, vlSelfRef.mem_bvalid_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__mem_wready_i, vlSelfRef.mem_wready_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__mem_awready_i, vlSelfRef.mem_awready_i);
                    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__riscv_soc__gpio_input_i, vlSelfRef.gpio_input_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__uart_txd_i, vlSelfRef.uart_txd_i);
                    VL_ASSIGN_ISU(4, vlSelfRef.__Vcellinp__riscv_soc__inport_wstrb_i, vlSelfRef.inport_wstrb_i);
                    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__riscv_soc__reset_vector_i, vlSelfRef.reset_vector_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__spi_miso_i, vlSelfRef.spi_miso_i);
                    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__riscv_soc__inport_wdata_i, vlSelfRef.inport_wdata_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__inport_bready_i, vlSelfRef.inport_bready_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__inport_rready_i, vlSelfRef.inport_rready_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__inport_wvalid_i, vlSelfRef.inport_wvalid_i);
                    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__riscv_soc__inport_awaddr_i, vlSelfRef.inport_awaddr_i);
                    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__riscv_soc__inport_araddr_i, vlSelfRef.inport_araddr_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i, vlSelfRef.inport_awvalid_i);
                    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__inport_arvalid_i, vlSelfRef.inport_arvalid_i);
                }
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
                Vriscv_soc_riscv_soc___ico_sequent__TOP__riscv_soc__0((&vlSymsp->TOP__riscv_soc));
                {
                    // Inlined CFunc: _ico_sequent__TOP__1
                    VL_ASSIGN_SII(1, vlSelfRef.inport_arready_o, 
                                  ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i)));
                    VL_ASSIGN_SII(1, vlSelfRef.inport_wready_o, 
                                  ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i)));
                    VL_ASSIGN_SII(1, vlSelfRef.inport_awready_o, 
                                  ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14)));
                }
                Vriscv_soc_riscv_top___ico_sequent__TOP__riscv_soc__u_core__0((&vlSymsp->TOP__riscv_soc__u_core));
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vriscv_soc___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vriscv_soc___024root___eval_act(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_act\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.__Vcellinp__riscv_soc__rst_cpu_i) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_cpu_i__0))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.__Vcellinp__riscv_soc__rst_i) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_i__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.__Vcellinp__riscv_soc__clk_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__clk_i__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__clk_i__0 
            = vlSelfRef.__Vcellinp__riscv_soc__clk_i;
        vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_i__0 
            = vlSelfRef.__Vcellinp__riscv_soc__rst_i;
        vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_cpu_i__0 
            = vlSelfRef.__Vcellinp__riscv_soc__rst_cpu_i;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_soc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vriscv_soc___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vriscv_soc___024root___eval_inact(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_inact\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vriscv_soc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vriscv_soc___024root___eval_body__nba(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vriscv_soc___024root___eval_nba(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_nba\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vriscv_soc___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vriscv_soc___024root___eval_body__nba(vlSelf);
        Vriscv_soc___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vriscv_soc___024root___eval_obs(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_obs\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vriscv_soc___024root___eval_react(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_react\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vriscv_soc___024root___eval_postponed(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_postponed\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vriscv_soc___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vriscv_soc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf);
void Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_icache___nba_sequent__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf);
void Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf);
void Vriscv_soc_riscv_regfile___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0(Vriscv_soc_riscv_regfile* vlSelf);
void Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__1(Vriscv_soc_riscv_soc* vlSelf);
void Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__1(Vriscv_soc_riscv_exec* vlSelf);
void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__1(Vriscv_soc_riscv_top* vlSelf);
void Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__2(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__2(Vriscv_soc_riscv_exec* vlSelf);
void Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data0__0(Vriscv_soc_icache_data_ram* vlSelf);
void Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data1__0(Vriscv_soc_icache_data_ram* vlSelf);
void Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag0__0(Vriscv_soc_icache_tag_ram* vlSelf);
void Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag1__0(Vriscv_soc_icache_tag_ram* vlSelf);
void Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__2(Vriscv_soc_riscv_soc* vlSelf);
void Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__2(Vriscv_soc_riscv_top* vlSelf);
void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_icache___nba_sequent__TOP__riscv_soc__u_core__u_icache__1(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_top___nba_comb__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf);
void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__1(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf);
void Vriscv_soc_riscv_soc___nba_comb__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__2(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__2(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__3(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__3(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__4(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__5(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__4(Vriscv_soc_icache* vlSelf);

void Vriscv_soc___024root___eval_body__nba(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_body__nba\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__0((&vlSymsp->TOP__riscv_soc));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            VL_ASSIGN_SUI(2, vlSelfRef.mem_awburst_o, 
                          (3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q])));
            VL_ASSIGN_SUI(8, vlSelfRef.mem_awlen_o, 
                          (0x000000ffU & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                  [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                  >> 2U))));
            VL_ASSIGN_SUI(4, vlSelfRef.mem_awid_o, 
                          (0x0000000fU & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                  [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                  >> 0x0000000aU))));
            VL_ASSIGN_SUI(32, vlSelfRef.mem_awaddr_o, (IData)(
                                                              (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                               [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                               >> 0x0000000eU)));
            VL_ASSIGN_SII(1, vlSelfRef.mem_awvalid_o, 
                          (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)));
            VL_ASSIGN_SUI(2, vlSelfRef.mem_arburst_o, 
                          (3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q])));
            VL_ASSIGN_SUI(8, vlSelfRef.mem_arlen_o, 
                          (0x000000ffU & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                  [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                  >> 2U))));
            VL_ASSIGN_SUI(4, vlSelfRef.mem_arid_o, 
                          (0x0000000fU & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                  [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                  >> 0x0000000aU))));
            VL_ASSIGN_SUI(32, vlSelfRef.mem_araddr_o, (IData)(
                                                              (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                               [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                               >> 0x0000000eU)));
            VL_ASSIGN_SII(1, vlSelfRef.mem_arvalid_o, 
                          (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)));
            VL_ASSIGN_SII(1, vlSelfRef.spi_clk_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q);
            VL_ASSIGN_SII(1, vlSelfRef.mem_wlast_o, 
                          (1U & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                         >> 0x00000024U))));
            VL_ASSIGN_SUI(4, vlSelfRef.mem_wstrb_o, 
                          (0x0000000fU & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                                  [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                                  >> 0x00000020U))));
            VL_ASSIGN_SUI(32, vlSelfRef.mem_wdata_o, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                                             [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q]));
            VL_ASSIGN_SII(1, vlSelfRef.mem_wvalid_o, 
                          (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)));
            VL_ASSIGN_SII(1, vlSelfRef.mem_bready_o, 
                          (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)));
            VL_ASSIGN_SII(1, vlSelfRef.mem_rready_o, 
                          (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)));
            VL_ASSIGN_SUI(32, vlSelfRef.gpio_output_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q);
            VL_ASSIGN_SII(1, vlSelfRef.uart_rxd_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q);
            VL_ASSIGN_SII(1, vlSelfRef.spi_cs_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q);
            VL_ASSIGN_SII(1, vlSelfRef.spi_mosi_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q);
            VL_ASSIGN_SUI(2, vlSelfRef.inport_bresp_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bresp_i);
            VL_ASSIGN_SUI(32, vlSelfRef.gpio_output_enable_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q);
            VL_ASSIGN_SII(1, vlSelfRef.inport_bvalid_o, 
                          ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i)));
            VL_ASSIGN_SII(1, vlSelfRef.inport_rvalid_o, 
                          ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i)));
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__0((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vriscv_soc_icache___nba_sequent__TOP__riscv_soc__u_core__u_icache__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__0((&vlSymsp->TOP__riscv_soc__u_core));
        Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
        Vriscv_soc_riscv_regfile___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile));
        Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__1((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__1((&vlSymsp->TOP__riscv_soc));
        Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__1((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__1((&vlSymsp->TOP__riscv_soc__u_core));
        Vriscv_soc_riscv_decode___nba_sequent__TOP__riscv_soc__u_core__u_core__u_decode__2((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_riscv_core___nba_sequent__TOP__riscv_soc__u_core__u_core__2((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__2((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data0__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vriscv_soc_icache_data_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_data1__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1));
        Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag0__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0));
        Vriscv_soc_icache_tag_ram___nba_sequent__TOP__riscv_soc__u_core__u_icache__u_tag1__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__2((&vlSymsp->TOP__riscv_soc));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vriscv_soc_riscv_top___nba_sequent__TOP__riscv_soc__u_core__2((&vlSymsp->TOP__riscv_soc__u_core));
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            VL_ASSIGN_SUI(2, vlSelfRef.inport_rresp_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rresp_i);
            VL_ASSIGN_SUI(32, vlSelfRef.inport_rdata_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i);
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__0((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vriscv_soc_icache___nba_sequent__TOP__riscv_soc__u_core__u_icache__1((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__1((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
        Vriscv_soc_riscv_top___nba_comb__TOP__riscv_soc__u_core__0((&vlSymsp->TOP__riscv_soc__u_core));
        Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__1((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
        Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__1((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
        Vriscv_soc_riscv_soc___nba_comb__TOP__riscv_soc__0((&vlSymsp->TOP__riscv_soc));
        Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__2((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        {
            // Inlined CFunc: _ico_sequent__TOP__1
            VL_ASSIGN_SII(1, vlSelfRef.inport_arready_o, 
                          ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i)));
            VL_ASSIGN_SII(1, vlSelfRef.inport_wready_o, 
                          ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i)));
            VL_ASSIGN_SII(1, vlSelfRef.inport_awready_o, 
                          ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                           & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14)));
        }
        Vriscv_soc_riscv_top___ico_sequent__TOP__riscv_soc__u_core__0((&vlSymsp->TOP__riscv_soc__u_core));
        Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__2((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
        Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__2((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
        Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__3((&vlSymsp->TOP__riscv_soc__u_core__u_core));
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__3((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
        Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__4((&vlSymsp->TOP__riscv_soc__u_core__u_core));
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__5((&vlSymsp->TOP__riscv_soc__u_core__u_core));
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
        Vriscv_soc_icache___nba_comb__TOP__riscv_soc__u_core__u_icache__4((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
    }
}

void Vriscv_soc___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vriscv_soc___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vriscv_soc___024root___eval_debug_assertions(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_debug_assertions\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
