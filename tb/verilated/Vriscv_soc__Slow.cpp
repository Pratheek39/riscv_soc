// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_SC_CTOR_IMP(Vriscv_soc) {
    Vriscv_soc__Syms* __restrict vlSymsp = __VlSymsp = new Vriscv_soc__Syms(this, name());
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(riscv_soc, Vriscv_soc_riscv_soc);
    // Sensitivities on all clocks and combo inputs
    SC_METHOD(eval);
    sensitive << clk_i;
    sensitive << rst_i;
    sensitive << reset_vector_i;
    sensitive << inport_awvalid_i;
    sensitive << inport_awaddr_i;
    sensitive << inport_wvalid_i;
    sensitive << inport_wdata_i;
    sensitive << inport_wstrb_i;
    sensitive << inport_bready_i;
    sensitive << inport_arvalid_i;
    sensitive << inport_araddr_i;
    sensitive << inport_rready_i;
    sensitive << rst_cpu_i;
    sensitive << spi_miso_i;
    sensitive << uart_txd_i;
    sensitive << gpio_input_i;
    sensitive << mem_awready_i;
    sensitive << mem_wready_i;
    sensitive << mem_bvalid_i;
    sensitive << mem_bresp_i;
    sensitive << mem_bid_i;
    sensitive << mem_arready_i;
    sensitive << mem_rvalid_i;
    sensitive << mem_rdata_i;
    sensitive << mem_rresp_i;
    sensitive << mem_rid_i;
    sensitive << mem_rlast_i;
    
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_soc::__Vconfigure(Vriscv_soc__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vriscv_soc::~Vriscv_soc() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vriscv_soc::_settle__TOP__1(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_settle__TOP__1\n"); );
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
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_rlast_i, vlTOPp->mem_rlast_i);
    VL_ASSIGN_ISU(4,vlTOPp->__Vcellinp__riscv_soc__mem_rid_i, vlTOPp->mem_rid_i);
    VL_ASSIGN_ISU(2,vlTOPp->__Vcellinp__riscv_soc__mem_rresp_i, vlTOPp->mem_rresp_i);
    VL_ASSIGN_ISU(32,vlTOPp->__Vcellinp__riscv_soc__mem_rdata_i, vlTOPp->mem_rdata_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_rvalid_i, vlTOPp->mem_rvalid_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_arready_i, vlTOPp->mem_arready_i);
    VL_ASSIGN_ISU(4,vlTOPp->__Vcellinp__riscv_soc__mem_bid_i, vlTOPp->mem_bid_i);
    VL_ASSIGN_ISU(2,vlTOPp->__Vcellinp__riscv_soc__mem_bresp_i, vlTOPp->mem_bresp_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_bvalid_i, vlTOPp->mem_bvalid_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_wready_i, vlTOPp->mem_wready_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__mem_awready_i, vlTOPp->mem_awready_i);
    VL_ASSIGN_SII(1,vlTOPp->mem_rready_o, (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)));
    VL_ASSIGN_SII(1,vlTOPp->mem_arvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)));
    VL_ASSIGN_SII(1,vlTOPp->mem_bready_o, (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)));
    VL_ASSIGN_SII(1,vlTOPp->mem_wvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)));
    VL_ASSIGN_SII(1,vlTOPp->mem_awvalid_o, (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)));
    VL_ASSIGN_SUI(32,vlTOPp->gpio_output_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q);
    VL_ASSIGN_SII(1,vlTOPp->uart_rxd_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q);
    VL_ASSIGN_SII(1,vlTOPp->spi_cs_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q);
    VL_ASSIGN_SII(1,vlTOPp->spi_mosi_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q);
    VL_ASSIGN_SII(1,vlTOPp->spi_clk_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q);
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
    VL_ASSIGN_SUI(32,vlTOPp->gpio_output_enable_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q);
    VL_ASSIGN_ISU(32,vlTOPp->__Vcellinp__riscv_soc__gpio_input_i, vlTOPp->gpio_input_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__rst_i, vlTOPp->rst_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__uart_txd_i, vlTOPp->uart_txd_i);
    VL_ASSIGN_ISI(1,vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i, vlTOPp->rst_cpu_i);
    VL_ASSIGN_ISU(32,vlTOPp->__Vcellinp__riscv_soc__reset_vector_i, vlTOPp->reset_vector_i);
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
    VL_ASSIGN_SUI(2,vlTOPp->inport_bresp_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r);
    VL_ASSIGN_SII(1,vlTOPp->inport_bvalid_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r)));
    VL_ASSIGN_SUI(2,vlTOPp->inport_rresp_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r);
    VL_ASSIGN_SUI(32,vlTOPp->inport_rdata_o, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r);
    VL_ASSIGN_SII(1,vlTOPp->inport_rvalid_o, ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r)));
}

void Vriscv_soc::_eval_initial(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_eval_initial\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP____Vcellinp__riscv_soc__clk_i 
        = vlTOPp->__Vcellinp__riscv_soc__clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i 
        = vlTOPp->__VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP____Vcellinp__riscv_soc__rst_i 
        = vlTOPp->__VinpClk__TOP____Vcellinp__riscv_soc__rst_i;
}

void Vriscv_soc::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::final\n"); );
    // Variables
    Vriscv_soc__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vriscv_soc::_eval_settle(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_eval_settle\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc._settle__TOP__riscv_soc__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_core._settle__TOP__riscv_soc__u_core__u_core__1(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core._settle__TOP__riscv_soc__u_core__1(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_icache._settle__TOP__riscv_soc__u_core__u_icache__1(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode._settle__TOP__riscv_soc__u_core__u_core__u_decode__1(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec._settle__TOP__riscv_soc__u_core__u_core__u_exec__1(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile._settle__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__1(vlSymsp);
    vlSymsp->TOP__riscv_soc._settle__TOP__riscv_soc__2(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_core._settle__TOP__riscv_soc__u_core__u_core__2(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core._settle__TOP__riscv_soc__u_core__2(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode._settle__TOP__riscv_soc__u_core__u_core__u_decode__2(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_core._settle__TOP__riscv_soc__u_core__u_core__3(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec._settle__TOP__riscv_soc__u_core__u_core__u_exec__2(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode._settle__TOP__riscv_soc__u_core__u_core__u_decode__3(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_core._settle__TOP__riscv_soc__u_core__u_core__4(vlSymsp);
    vlSymsp->TOP__riscv_soc__u_core__u_icache._settle__TOP__riscv_soc__u_core__u_icache__2(vlSymsp);
}

void Vriscv_soc::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc::_ctor_var_reset\n"); );
    // Body
    __Vcellinp__riscv_soc__mem_rlast_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__mem_rid_i = VL_RAND_RESET_I(4);
    __Vcellinp__riscv_soc__mem_rresp_i = VL_RAND_RESET_I(2);
    __Vcellinp__riscv_soc__mem_rdata_i = VL_RAND_RESET_I(32);
    __Vcellinp__riscv_soc__mem_rvalid_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__mem_arready_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__mem_bid_i = VL_RAND_RESET_I(4);
    __Vcellinp__riscv_soc__mem_bresp_i = VL_RAND_RESET_I(2);
    __Vcellinp__riscv_soc__mem_bvalid_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__mem_wready_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__mem_awready_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__gpio_input_i = VL_RAND_RESET_I(32);
    __Vcellinp__riscv_soc__uart_txd_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__spi_miso_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__rst_cpu_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__inport_rready_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__inport_araddr_i = VL_RAND_RESET_I(32);
    __Vcellinp__riscv_soc__inport_arvalid_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__inport_bready_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__inport_wstrb_i = VL_RAND_RESET_I(4);
    __Vcellinp__riscv_soc__inport_wdata_i = VL_RAND_RESET_I(32);
    __Vcellinp__riscv_soc__inport_wvalid_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__inport_awaddr_i = VL_RAND_RESET_I(32);
    __Vcellinp__riscv_soc__inport_awvalid_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__reset_vector_i = VL_RAND_RESET_I(32);
    __Vcellinp__riscv_soc__rst_i = VL_RAND_RESET_I(1);
    __Vcellinp__riscv_soc__clk_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP____Vcellinp__riscv_soc__rst_cpu_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP____Vcellinp__riscv_soc__rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP____Vcellinp__riscv_soc__rst_cpu_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP____Vcellinp__riscv_soc__rst_i = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
