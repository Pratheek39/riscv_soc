// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

VL_ATTR_COLD void Vriscv_soc_riscv_exec___eval_static__TOP__riscv_soc__u_core__u_core__u_exec(Vriscv_soc_riscv_exec* vlSelf);

VL_ATTR_COLD void Vriscv_soc___024root___eval_static(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_static\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc_riscv_exec___eval_static__TOP__riscv_soc__u_core__u_core__u_exec((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
    {
        // Inlined CFunc: __Vm_traceActivitySetAll
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__clk_i__0 
        = vlSelfRef.__Vcellinp__riscv_soc__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_i__0 
        = vlSelfRef.__Vcellinp__riscv_soc__rst_i;
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_cpu_i__0 
        = vlSelfRef.__Vcellinp__riscv_soc__rst_cpu_i;
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_initial(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_initial\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vriscv_soc___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vriscv_soc___024root___stl_sequent__TOP__0(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc_riscv_core* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf);
VL_ATTR_COLD void Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__2(Vriscv_soc_riscv_exec* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc_riscv_decode* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_top___stl_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc_riscv_core* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__1(Vriscv_soc_riscv_soc* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1(Vriscv_soc_riscv_decode* vlSelf);
void Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc_riscv_exec* vlSelf);
void Vriscv_soc_riscv_top___ico_sequent__TOP__riscv_soc__u_core__0(Vriscv_soc_riscv_top* vlSelf);
VL_ATTR_COLD void Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc_riscv_core* vlSelf);
void Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__2(Vriscv_soc_riscv_decode* vlSelf);
VL_ATTR_COLD void Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__1(Vriscv_soc_icache* vlSelf);
void Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__3(Vriscv_soc_riscv_core* vlSelf);

VL_ATTR_COLD bool Vriscv_soc___024root___eval_stl(Vriscv_soc___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_stl\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_soc___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vriscv_soc___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vriscv_soc___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                    vlSelfRef.__Vm_traceActivity[6U] = 1U;
                    vlSelfRef.__Vm_traceActivity[7U] = 1U;
                    vlSelfRef.__Vm_traceActivity[8U] = 1U;
                    vlSelfRef.__Vm_traceActivity[9U] = 1U;
                }
                Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__0((&vlSymsp->TOP__riscv_soc__u_core__u_core));
                Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__0((&vlSymsp->TOP__riscv_soc));
                Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__0((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
                Vriscv_soc_riscv_exec___nba_sequent__TOP__riscv_soc__u_core__u_core__u_exec__2((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
                Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
                Vriscv_soc_riscv_top___stl_sequent__TOP__riscv_soc__u_core__0((&vlSymsp->TOP__riscv_soc__u_core));
                {
                    // Inlined CFunc: _stl_sequent__TOP__1
                    VL_ASSIGN_SUI(2, vlSelfRef.inport_bresp_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bresp_i);
                    VL_ASSIGN_SUI(2, vlSelfRef.inport_rresp_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rresp_i);
                    VL_ASSIGN_SUI(32, vlSelfRef.inport_rdata_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i);
                    VL_ASSIGN_SII(1, vlSelfRef.inport_bvalid_o, 
                                  ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i)));
                    VL_ASSIGN_SII(1, vlSelfRef.inport_rvalid_o, 
                                  ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i)));
                }
                Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__1((&vlSymsp->TOP__riscv_soc__u_core__u_core));
                Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__1((&vlSymsp->TOP__riscv_soc));
                Vriscv_soc_riscv_decode___stl_sequent__TOP__riscv_soc__u_core__u_core__u_decode__1((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
                Vriscv_soc_riscv_exec___nba_comb__TOP__riscv_soc__u_core__u_core__u_exec__0((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec));
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
                Vriscv_soc_riscv_core___stl_sequent__TOP__riscv_soc__u_core__u_core__2((&vlSymsp->TOP__riscv_soc__u_core__u_core));
                Vriscv_soc_riscv_decode___nba_comb__TOP__riscv_soc__u_core__u_core__u_decode__2((&vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode));
                Vriscv_soc_icache___stl_sequent__TOP__riscv_soc__u_core__u_icache__1((&vlSymsp->TOP__riscv_soc__u_core__u_icache));
                Vriscv_soc_riscv_core___nba_comb__TOP__riscv_soc__u_core__u_core__3((&vlSymsp->TOP__riscv_soc__u_core__u_core));
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__stl(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_dump_triggers__stl\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vriscv_soc___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__ico(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_dump_triggers__ico\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vriscv_soc___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__act(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_dump_triggers__act\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vriscv_soc___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__nba(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_dump_triggers__nba\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vriscv_soc___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__obs(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_dump_triggers__obs\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__react(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_dump_triggers__react\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_final(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_final\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vriscv_soc___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vriscv_soc___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vriscv_soc___024root___stl_sequent__TOP__0(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___stl_sequent__TOP__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_SII(1, vlSelfRef.mem_rready_o, (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)));
    VL_ASSIGN_SII(1, vlSelfRef.mem_arvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)));
    VL_ASSIGN_SII(1, vlSelfRef.mem_bready_o, (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)));
    VL_ASSIGN_SII(1, vlSelfRef.mem_wvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)));
    VL_ASSIGN_SII(1, vlSelfRef.mem_awvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)));
    VL_ASSIGN_SUI(32, vlSelfRef.gpio_output_enable_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q);
    VL_ASSIGN_SUI(32, vlSelfRef.gpio_output_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q);
    VL_ASSIGN_SII(1, vlSelfRef.uart_rxd_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q);
    VL_ASSIGN_SII(1, vlSelfRef.spi_cs_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q);
    VL_ASSIGN_SII(1, vlSelfRef.spi_mosi_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q);
    VL_ASSIGN_SII(1, vlSelfRef.spi_clk_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q);
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
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__rst_cpu_i, vlSelfRef.rst_cpu_i);
    VL_ASSIGN_ISU(4, vlSelfRef.__Vcellinp__riscv_soc__inport_wstrb_i, vlSelfRef.inport_wstrb_i);
    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__riscv_soc__reset_vector_i, vlSelfRef.reset_vector_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__rst_i, vlSelfRef.rst_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__riscv_soc__clk_i, vlSelfRef.clk_i);
    VL_ASSIGN_SUI(2, vlSelfRef.mem_arburst_o, (3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                            [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q])));
    VL_ASSIGN_SUI(8, vlSelfRef.mem_arlen_o, (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                        >> 2U))));
    VL_ASSIGN_SUI(4, vlSelfRef.mem_arid_o, (0x0000000fU 
                                            & (IData)(
                                                      (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                       [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                       >> 0x0000000aU))));
    VL_ASSIGN_SUI(32, vlSelfRef.mem_araddr_o, (IData)(
                                                      (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                       [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                       >> 0x0000000eU)));
    VL_ASSIGN_SII(1, vlSelfRef.mem_wlast_o, (1U & (IData)(
                                                          (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                                           [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                                           >> 0x00000024U))));
    VL_ASSIGN_SUI(4, vlSelfRef.mem_wstrb_o, (0x0000000fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                                        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                                        >> 0x00000020U))));
    VL_ASSIGN_SUI(32, vlSelfRef.mem_wdata_o, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                                     [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q]));
    VL_ASSIGN_SUI(2, vlSelfRef.mem_awburst_o, (3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                            [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q])));
    VL_ASSIGN_SUI(8, vlSelfRef.mem_awlen_o, (0x000000ffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                        >> 2U))));
    VL_ASSIGN_SUI(4, vlSelfRef.mem_awid_o, (0x0000000fU 
                                            & (IData)(
                                                      (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                       [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                       >> 0x0000000aU))));
    VL_ASSIGN_SUI(32, vlSelfRef.mem_awaddr_o, (IData)(
                                                      (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                       [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                       >> 0x0000000eU)));
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

bool Vriscv_soc___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vriscv_soc___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vriscv_soc___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vriscv_soc___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge __Vcellinp__riscv_soc__clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge __Vcellinp__riscv_soc__rst_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge __Vcellinp__riscv_soc__rst_cpu_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_soc___024root___ctor_var_reset(Vriscv_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___ctor_var_reset\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vcellinp__riscv_soc__mem_rlast_i = 0;
    vlSelf->__Vcellinp__riscv_soc__mem_rid_i = 0;
    vlSelf->__Vcellinp__riscv_soc__mem_rresp_i = 0;
    vlSelf->__Vcellinp__riscv_soc__mem_rdata_i = 0;
    vlSelf->__Vcellinp__riscv_soc__mem_rvalid_i = 0;
    vlSelf->__Vcellinp__riscv_soc__mem_arready_i = 0;
    vlSelf->__Vcellinp__riscv_soc__mem_bid_i = 0;
    vlSelf->__Vcellinp__riscv_soc__mem_bresp_i = 0;
    vlSelf->__Vcellinp__riscv_soc__mem_bvalid_i = 0;
    vlSelf->__Vcellinp__riscv_soc__mem_wready_i = 0;
    vlSelf->__Vcellinp__riscv_soc__mem_awready_i = 0;
    vlSelf->__Vcellinp__riscv_soc__gpio_input_i = 0;
    vlSelf->__Vcellinp__riscv_soc__uart_txd_i = 0;
    vlSelf->__Vcellinp__riscv_soc__spi_miso_i = 0;
    vlSelf->__Vcellinp__riscv_soc__rst_cpu_i = 0;
    vlSelf->__Vcellinp__riscv_soc__inport_rready_i = 0;
    vlSelf->__Vcellinp__riscv_soc__inport_araddr_i = 0;
    vlSelf->__Vcellinp__riscv_soc__inport_arvalid_i = 0;
    vlSelf->__Vcellinp__riscv_soc__inport_bready_i = 0;
    vlSelf->__Vcellinp__riscv_soc__inport_wstrb_i = 0;
    vlSelf->__Vcellinp__riscv_soc__inport_wdata_i = 0;
    vlSelf->__Vcellinp__riscv_soc__inport_wvalid_i = 0;
    vlSelf->__Vcellinp__riscv_soc__inport_awaddr_i = 0;
    vlSelf->__Vcellinp__riscv_soc__inport_awvalid_i = 0;
    vlSelf->__Vcellinp__riscv_soc__reset_vector_i = 0;
    vlSelf->__Vcellinp__riscv_soc__rst_i = 0;
    vlSelf->__Vcellinp__riscv_soc__clk_i = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__riscv_soc__rst_cpu_i__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
