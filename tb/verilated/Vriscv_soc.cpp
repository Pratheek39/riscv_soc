// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

void Vriscv_soc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_soc::eval\n"); );
    Vriscv_soc__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../soc/../soc/riscv_soc.v", 46, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vriscv_soc::_eval_initial_loop(Vriscv_soc__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../soc/../soc/riscv_soc.v", 46, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vriscv_soc::_settle__TOP__2(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_settle__TOP__2\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_SII(1,vlTOPp->inport_arready_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w)));
    VL_ASSIGN_SII(1,vlTOPp->inport_wready_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w)));
    VL_ASSIGN_SII(1,vlTOPp->inport_awready_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) 
                                                  & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)))));
}

VL_INLINE_OPT void Vriscv_soc::_combo__TOP__3(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_combo__TOP__3\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__spi_miso_i, vlTOPp->spi_miso_i);
    VL_ASSIGN_ISU(4,vlTOPp->__Vcellinp__riscv_soc__inport_wstrb_i, vlTOPp->inport_wstrb_i);
    VL_ASSIGN_ISU(32,vlTOPp->__Vcellinp__riscv_soc__inport_wdata_i, vlTOPp->inport_wdata_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__inport_wvalid_i, vlTOPp->inport_wvalid_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__inport_bready_i, vlTOPp->inport_bready_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__inport_rready_i, vlTOPp->inport_rready_i);
    VL_ASSIGN_ISU(32,vlTOPp->__Vcellinp__riscv_soc__inport_awaddr_i, vlTOPp->inport_awaddr_i);
    VL_ASSIGN_ISU(32,vlTOPp->__Vcellinp__riscv_soc__inport_araddr_i, vlTOPp->inport_araddr_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__inport_awvalid_i, vlTOPp->inport_awvalid_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__inport_arvalid_i, vlTOPp->inport_arvalid_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__clk_i, vlTOPp->clk_i);
}

VL_INLINE_OPT void Vriscv_soc::_sequent__TOP__4(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_sequent__TOP__4\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_SII(1,vlTOPp->uart_rxd_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q);
    VL_ASSIGN_SUI(32,vlTOPp->gpio_output_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q);
    VL_ASSIGN_SII(1,vlTOPp->mem_wvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)));
    VL_ASSIGN_SII(1,vlTOPp->spi_cs_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q);
    VL_ASSIGN_SII(1,vlTOPp->mem_awvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)));
    VL_ASSIGN_SII(1,vlTOPp->spi_mosi_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q);
    VL_ASSIGN_SII(1,vlTOPp->spi_clk_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q);
    VL_ASSIGN_SII(1,vlTOPp->mem_arvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)));
    VL_ASSIGN_SII(1,vlTOPp->mem_bready_o, (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)));
    VL_ASSIGN_SII(1,vlTOPp->mem_rready_o, (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)));
    VL_ASSIGN_SUI(32,vlTOPp->accel_status_o, (((0U 
                                                != vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q) 
                                               << 2U) 
                                              | (((8U 
                                                   == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                                  << 1U) 
                                                 | ((0U 
                                                     != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                                    & (8U 
                                                       != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))))));
    VL_ASSIGN_SII(1,vlTOPp->mem_wlast_o, (1U & (IData)(
                                                       (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w 
                                                        >> 0x24U))));
    VL_ASSIGN_SUI(4,vlTOPp->mem_wstrb_o, (0xfU & (IData)(
                                                         (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w 
                                                          >> 0x20U))));
    VL_ASSIGN_SUI(32,vlTOPp->mem_wdata_o, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w));
    VL_ASSIGN_SUI(2,vlTOPp->mem_awburst_o, (3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w)));
    VL_ASSIGN_SUI(8,vlTOPp->mem_awlen_o, (0xffU & (IData)(
                                                          (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                                           >> 2U))));
    VL_ASSIGN_SUI(4,vlTOPp->mem_awid_o, (0xfU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                                         >> 0xaU))));
    VL_ASSIGN_SUI(32,vlTOPp->mem_awaddr_o, (IData)(
                                                   (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                                    >> 0xeU)));
    VL_ASSIGN_SUI(2,vlTOPp->mem_arburst_o, (3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w)));
    VL_ASSIGN_SUI(8,vlTOPp->mem_arlen_o, (0xffU & (IData)(
                                                          (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                                           >> 2U))));
    VL_ASSIGN_SUI(4,vlTOPp->mem_arid_o, (0xfU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                                         >> 0xaU))));
    VL_ASSIGN_SUI(32,vlTOPp->mem_araddr_o, (IData)(
                                                   (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                                    >> 0xeU)));
    VL_ASSIGN_SUI(32,vlTOPp->gpio_output_enable_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q);
    VL_ASSIGN_SUI(2,vlTOPp->inport_bresp_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r);
    VL_ASSIGN_SII(1,vlTOPp->inport_bvalid_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r)));
    VL_ASSIGN_SII(1,vlTOPp->inport_rvalid_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r)));
}

VL_INLINE_OPT void Vriscv_soc::_combo__TOP__5(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_combo__TOP__5\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_arready_i, vlTOPp->mem_arready_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_wready_i, vlTOPp->mem_wready_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_awready_i, vlTOPp->mem_awready_i);
    VL_ASSIGN_ISU(2,vlTOPp->__Vcellinp__riscv_soc__mem_bresp_i, vlTOPp->mem_bresp_i);
    VL_ASSIGN_ISU(4,vlTOPp->__Vcellinp__riscv_soc__mem_bid_i, vlTOPp->mem_bid_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_bvalid_i, vlTOPp->mem_bvalid_i);
    VL_ASSIGN_ISU(32,vlTOPp->__Vcellinp__riscv_soc__mem_rdata_i, vlTOPp->mem_rdata_i);
    VL_ASSIGN_ISU(2,vlTOPp->__Vcellinp__riscv_soc__mem_rresp_i, vlTOPp->mem_rresp_i);
    VL_ASSIGN_ISU(4,vlTOPp->__Vcellinp__riscv_soc__mem_rid_i, vlTOPp->mem_rid_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_rlast_i, vlTOPp->mem_rlast_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_rvalid_i, vlTOPp->mem_rvalid_i);
    VL_ASSIGN_ISU(32,vlTOPp->__Vcellinp__riscv_soc__gpio_input_i, vlTOPp->gpio_input_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__uart_txd_i, vlTOPp->uart_txd_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__rst_i, vlTOPp->rst_i);
    VL_ASSIGN_ISU(32,vlTOPp->__Vcellinp__riscv_soc__reset_vector_i, vlTOPp->reset_vector_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i, vlTOPp->rst_cpu_i);
}

VL_INLINE_OPT void Vriscv_soc::_sequent__TOP__6(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_sequent__TOP__6\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_SUI(32,vlTOPp->inport_rdata_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r);
    VL_ASSIGN_SUI(2,vlTOPp->inport_rresp_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r);
}

void Vriscv_soc::_eval(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_eval\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlSymsp->TOP__riscv_soc._combo__TOP__riscv_soc__3(vlSymsp);
    if ((((IData)(vlTOPp->__Vcellinp__riscv_soc__clk_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____Vcellinp__riscv_soc__clk_i))) 
         | ((IData)(vlTOPp->__VinpClk__TOP____Vcellinp__riscv_soc__rst_i) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__riscv_soc__rst_i))))) {
        vlSymsp->TOP__riscv_soc._sequent__TOP__riscv_soc__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlTOPp->__Vcellinp__riscv_soc__clk_i) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____Vcellinp__riscv_soc__clk_i)))) {
        vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0._sequent__TOP__riscv_soc__u_core__u_icache__u_tag0__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
        vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1._sequent__TOP__riscv_soc__u_core__u_icache__u_tag1__2(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0._sequent__TOP__riscv_soc__u_core__u_icache__u_data0__1(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1._sequent__TOP__riscv_soc__u_core__u_icache__u_data1__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->__Vcellinp__riscv_soc__clk_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____Vcellinp__riscv_soc__clk_i))) 
         | ((IData)(vlTOPp->__VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i))))) {
        vlSymsp->TOP__riscv_soc__u_core__u_core._sequent__TOP__riscv_soc__u_core__u_core__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec._sequent__TOP__riscv_soc__u_core__u_core__u_exec__3(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode._sequent__TOP__riscv_soc__u_core__u_core__u_decode__4(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core._sequent__TOP__riscv_soc__u_core__3(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile._sequent__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__2(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_icache._sequent__TOP__riscv_soc__u_core__u_icache__3(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core._sequent__TOP__riscv_soc__u_core__u_core__6(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode._sequent__TOP__riscv_soc__u_core__u_core__u_decode__5(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec._sequent__TOP__riscv_soc__u_core__u_core__u_exec__4(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core._sequent__TOP__riscv_soc__u_core__4(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core._sequent__TOP__riscv_soc__u_core__u_core__7(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode._sequent__TOP__riscv_soc__u_core__u_core__u_decode__6(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core._sequent__TOP__riscv_soc__u_core__u_core__8(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec._sequent__TOP__riscv_soc__u_core__u_core__u_exec__5(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile._settle__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__1(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode._sequent__TOP__riscv_soc__u_core__u_core__u_decode__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlSymsp->TOP__riscv_soc._combo__TOP__riscv_soc__5(vlSymsp);
    if ((((IData)(vlTOPp->__Vcellinp__riscv_soc__clk_i) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____Vcellinp__riscv_soc__clk_i))) 
         | ((IData)(vlTOPp->__VinpClk__TOP____Vcellinp__riscv_soc__rst_i) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__riscv_soc__rst_i))))) {
        vlSymsp->TOP__riscv_soc._sequent__TOP__riscv_soc__6(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
        vlSymsp->TOP__riscv_soc__u_core._sequent__TOP__riscv_soc__u_core__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlSymsp->TOP__riscv_soc._combo__TOP__riscv_soc__7(vlSymsp);
    if (((((IData)(vlTOPp->__Vcellinp__riscv_soc__clk_i) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP____Vcellinp__riscv_soc__clk_i))) 
          | ((IData)(vlTOPp->__VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i)))) 
         | ((IData)(vlTOPp->__VinpClk__TOP____Vcellinp__riscv_soc__rst_i) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__riscv_soc__rst_i))))) {
        vlSymsp->TOP__riscv_soc__u_core__u_icache._multiclk__TOP__riscv_soc__u_core__u_icache__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
        vlSymsp->TOP__riscv_soc__u_core__u_core._multiclk__TOP__riscv_soc__u_core__u_core__9(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core._multiclk__TOP__riscv_soc__u_core__6(vlSymsp);
        vlSymsp->TOP__riscv_soc._multiclk__TOP__riscv_soc__8(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode._multiclk__TOP__riscv_soc__u_core__u_core__u_decode__8(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core._settle__TOP__riscv_soc__u_core__u_core__3(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec._settle__TOP__riscv_soc__u_core__u_core__u_exec__2(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode._settle__TOP__riscv_soc__u_core__u_core__u_decode__3(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_core._settle__TOP__riscv_soc__u_core__u_core__4(vlSymsp);
        vlSymsp->TOP__riscv_soc__u_core__u_icache._settle__TOP__riscv_soc__u_core__u_icache__2(vlSymsp);
    }
    vlSymsp->TOP__riscv_soc._combo__TOP__riscv_soc__9(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core._settle__TOP__riscv_soc__u_core__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP____Vcellinp__riscv_soc__clk_i 
        = vlTOPp->__Vcellinp__riscv_soc__clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__riscv_soc__rst_i 
        = vlTOPp->__VinpClk__TOP____Vcellinp__riscv_soc__rst_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i 
        = vlTOPp->__VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i;
    vlTOPp->__VinpClk__TOP____Vcellinp__riscv_soc__rst_i 
        = vlTOPp->__Vcellinp__riscv_soc__rst_i;
    vlTOPp->__VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i 
        = vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i;
}

VL_INLINE_OPT QData Vriscv_soc::_change_request(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_change_request\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vriscv_soc::_change_request_1(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_change_request_1\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i ^ vlTOPp->__Vchglast__TOP____Vcellinp__riscv_soc__rst_cpu_i)
         | (vlTOPp->__Vcellinp__riscv_soc__rst_i ^ vlTOPp->__Vchglast__TOP____Vcellinp__riscv_soc__rst_i));
    VL_DEBUG_IF( if(__req && ((vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i ^ vlTOPp->__Vchglast__TOP____Vcellinp__riscv_soc__rst_cpu_i))) VL_DBG_MSGF("        CHANGE: ../soc/../soc/riscv_soc.v:61: __Vcellinp__riscv_soc__rst_cpu_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->__Vcellinp__riscv_soc__rst_i ^ vlTOPp->__Vchglast__TOP____Vcellinp__riscv_soc__rst_i))) VL_DBG_MSGF("        CHANGE: ../soc/../soc/riscv_soc.v:50: __Vcellinp__riscv_soc__rst_i\n"); );
    // Final
    vlTOPp->__Vchglast__TOP____Vcellinp__riscv_soc__rst_cpu_i 
        = vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i;
    vlTOPp->__Vchglast__TOP____Vcellinp__riscv_soc__rst_i 
        = vlTOPp->__Vcellinp__riscv_soc__rst_i;
    return __req;
}

#ifdef VL_DEBUG
void Vriscv_soc::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
