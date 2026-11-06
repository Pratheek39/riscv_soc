// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_sc.h"
#include "Vriscv_soc__Syms.h"


void Vriscv_soc___024root__trace_chg_0_sub_0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vriscv_soc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_0\n"); );
    // Body
    Vriscv_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vriscv_soc___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*0:0*/, 512> Vriscv_soc__ConstPool__TABLE_h73ab2485_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vriscv_soc__ConstPool__TABLE_haa28ef1b_0;
void Vriscv_soc___024root__trace_chg_dtype____0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*45:0*/, 2>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____1(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*38:0*/, 2>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____2(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 2>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____3(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 2>& __VdtypeVar);
extern const VlUnpacked<CData/*7:0*/, 512> Vriscv_soc__ConstPool__TABLE_h2582090b_0;
void Vriscv_soc___024root__trace_chg_dtype____4(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____5(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*68:0*/, 4>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____6(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*10:0*/, 4>& __VdtypeVar);
extern const VlWide<96>/*3071:0*/ Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0;

void Vriscv_soc___024root__trace_chg_0_sub_0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_0_sub_0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_WordIdx_3;
    IData/*31:0*/ __VExpandSel_WordIdx_4;
    IData/*31:0*/ __VExpandSel_WordIdx_5;
    IData/*31:0*/ __VExpandSel_WordIdx_6;
    IData/*31:0*/ __VExpandSel_WordIdx_7;
    IData/*31:0*/ __VExpandSel_WordIdx_8;
    IData/*31:0*/ __VExpandSel_WordIdx_9;
    IData/*31:0*/ __VExpandSel_WordIdx_10;
    IData/*31:0*/ __VExpandSel_WordIdx_11;
    IData/*31:0*/ __VExpandSel_WordIdx_12;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.__Vcellinp__riscv_soc__clk_i));
        bufp->chgBit(oldp+1,(vlSelfRef.__Vcellinp__riscv_soc__rst_i));
        bufp->chgIData(oldp+2,(vlSelfRef.__Vcellinp__riscv_soc__reset_vector_i),32);
        bufp->chgBit(oldp+3,(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i));
        bufp->chgIData(oldp+4,(vlSelfRef.__Vcellinp__riscv_soc__inport_awaddr_i),32);
        bufp->chgBit(oldp+5,(vlSelfRef.__Vcellinp__riscv_soc__inport_wvalid_i));
        bufp->chgIData(oldp+6,(vlSelfRef.__Vcellinp__riscv_soc__inport_wdata_i),32);
        bufp->chgCData(oldp+7,(vlSelfRef.__Vcellinp__riscv_soc__inport_wstrb_i),4);
        bufp->chgBit(oldp+8,(vlSelfRef.__Vcellinp__riscv_soc__inport_bready_i));
        bufp->chgBit(oldp+9,(vlSelfRef.__Vcellinp__riscv_soc__inport_arvalid_i));
        bufp->chgIData(oldp+10,(vlSelfRef.__Vcellinp__riscv_soc__inport_araddr_i),32);
        bufp->chgBit(oldp+11,(vlSelfRef.__Vcellinp__riscv_soc__inport_rready_i));
        bufp->chgBit(oldp+12,(vlSelfRef.__Vcellinp__riscv_soc__rst_cpu_i));
        bufp->chgBit(oldp+13,(vlSelfRef.__Vcellinp__riscv_soc__spi_miso_i));
        bufp->chgBit(oldp+14,(vlSelfRef.__Vcellinp__riscv_soc__uart_txd_i));
        bufp->chgIData(oldp+15,(vlSelfRef.__Vcellinp__riscv_soc__gpio_input_i),32);
        bufp->chgBit(oldp+16,(vlSelfRef.__Vcellinp__riscv_soc__mem_awready_i));
        bufp->chgBit(oldp+17,(vlSelfRef.__Vcellinp__riscv_soc__mem_wready_i));
        bufp->chgBit(oldp+18,(vlSelfRef.__Vcellinp__riscv_soc__mem_bvalid_i));
        bufp->chgCData(oldp+19,(vlSelfRef.__Vcellinp__riscv_soc__mem_bresp_i),2);
        bufp->chgCData(oldp+20,(vlSelfRef.__Vcellinp__riscv_soc__mem_bid_i),4);
        bufp->chgBit(oldp+21,(vlSelfRef.__Vcellinp__riscv_soc__mem_arready_i));
        bufp->chgBit(oldp+22,(vlSelfRef.__Vcellinp__riscv_soc__mem_rvalid_i));
        bufp->chgIData(oldp+23,(vlSelfRef.__Vcellinp__riscv_soc__mem_rdata_i),32);
        bufp->chgCData(oldp+24,(vlSelfRef.__Vcellinp__riscv_soc__mem_rresp_i),2);
        bufp->chgCData(oldp+25,(vlSelfRef.__Vcellinp__riscv_soc__mem_rid_i),4);
        bufp->chgBit(oldp+26,(vlSelfRef.__Vcellinp__riscv_soc__mem_rlast_i));
        bufp->chgCData(oldp+27,((6U | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_rready_i))),4);
        bufp->chgCData(oldp+28,((2U | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_bready_i))),4);
        bufp->chgQData(oldp+29,((((QData)((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rdata_i)) 
                                  << 7U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rresp_i) 
                                                             << 5U) 
                                                            | (((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rid_i) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rlast_i))))))),39);
        bufp->chgCData(oldp+31,((((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_bresp_i) 
                                  << 4U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_bid_i))),6);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgBit(oldp+32,(Vriscv_soc__ConstPool__TABLE_h73ab2485_0
                              [(((((4U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                                          << 2U)) | 
                                   ((2U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                                           << 1U)) 
                                    | (1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q))))) 
                                  << 6U) | (((2U & 
                                              ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))) 
                                            << 4U)) 
                                | (((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)) 
                                    << 3U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)))]));
        bufp->chgCData(oldp+33,((0x0000000fU & (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)) 
                                                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))
                                                 : 
                                                ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q) 
                                                 - 
                                                 ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w)) 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)))))),4);
        bufp->chgBit(oldp+34,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    ? ((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)) 
                                       & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    : (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_31))
                                : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    ? (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_30)
                                    : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                        ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i)
                                        : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))))));
        bufp->chgBit(oldp+35,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    ? ((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)) 
                                       & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    : (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_31))
                                : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    ? (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_30)
                                    : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                        ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i)
                                        : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))))));
        bufp->chgBit(oldp+36,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o))));
        bufp->chgIData(oldp+37,(((0U == (0x000000ffU 
                                         & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                  ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q
                                  : ((4U == (0x000000ffU 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                      ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q
                                      : ((8U == (0x000000ffU 
                                                 & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                          ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w
                                          : ((0x14U 
                                              == (0x000000ffU 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                              ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q
                                              : ((0x20U 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                  ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q
                                                  : 
                                                 ((0x24U 
                                                   == 
                                                   (0x000000ffU 
                                                    & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                   ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q
                                                   : 
                                                  (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                                   & (- (IData)(
                                                                (0x28U 
                                                                 == 
                                                                 (0x000000ffU 
                                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)))))))))))),32);
        bufp->chgBit(oldp+38,(((8U == (0x000000ffU 
                                       & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                               & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o)))));
        bufp->chgBit(oldp+39,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o))));
        bufp->chgIData(oldp+40,(((0U == (0x000000ffU 
                                         & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                  ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q)
                                  : ((4U == (0x000000ffU 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                      ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w)
                                      : ((8U == (0x000000ffU 
                                                 & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                          ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q)
                                          : ((0x18U 
                                              == (0x000000ffU 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                              ? Vriscv_soc__ConstPool__TABLE_haa28ef1b_0
                                             [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w]
                                              : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q) 
                                                 & (- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x000000ffU 
                                                                & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)))))))))),32);
        bufp->chgBit(oldp+41,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o))));
        bufp->chgIData(oldp+42,(((8U == (0x000000ffU 
                                         & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                  ? (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                                      << 2U) | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                                                << 1U))
                                  : ((0x0cU == (0x000000ffU 
                                                & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                      ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q
                                      : ((0x10U == 
                                          (0x000000ffU 
                                           & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                          ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q
                                          : ((0x14U 
                                              == (0x000000ffU 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                              ? (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                                                  << 2U) 
                                                 | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                                                    << 1U))
                                              : ((0x18U 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                  ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q
                                                  : 
                                                 (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q 
                                                  & (- (IData)(
                                                               (0x1cU 
                                                                == 
                                                                (0x000000ffU 
                                                                 & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))))))))))),32);
        bufp->chgIData(oldp+43,(((0U == (0x000000ffU 
                                         & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                  ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q)
                                  : ((8U == (0x000000ffU 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                      ? (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                                          << 4U) | 
                                         (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) 
                                           << 3U) | 
                                          ((4U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)) 
                                                  << 2U)) 
                                           | (3U & 
                                              (- (IData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q)))))))
                                      : (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                                          << 4U) & 
                                         (- (IData)(
                                                    (0x0cU 
                                                     == 
                                                     (0x000000ffU 
                                                      & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)))))))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgBit(oldp+44,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
        bufp->chgBit(oldp+45,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i))));
        bufp->chgBit(oldp+46,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awready_o));
        bufp->chgBit(oldp+48,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i))));
        bufp->chgBit(oldp+49,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))));
        bufp->chgBit(oldp+50,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
        bufp->chgBit(oldp+51,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wready_o));
        bufp->chgCData(oldp+53,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o),4);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_arvalid_o));
        bufp->chgBit(oldp+56,(((3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i));
        bufp->chgIData(oldp+59,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o),32);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_arvalid_o));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_awready_i));
        bufp->chgIData(oldp+62,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o),32);
        bufp->chgBit(oldp+63,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_awready_i));
        bufp->chgBit(oldp+64,(((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+65,(((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awready_i));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o));
        bufp->chgIData(oldp+69,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o),32);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_awready_i));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_awvalid_o));
        bufp->chgBit(oldp+73,(((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_5))));
        bufp->chgCData(oldp+74,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                  ? 1U : (1U & ((- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                >> 2U))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                  >> 3U))))))))),2);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o));
        bufp->chgCData(oldp+76,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                  ? 1U : ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                           ? 1U : (1U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                                                     >> 3U))))))))),2);
        bufp->chgBit(oldp+77,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_5))));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_awready_i));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o));
        bufp->chgBit(oldp+80,(((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+81,(((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_5))));
        bufp->chgBit(oldp+82,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+83,(((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_5))));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_arvalid_o));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_o));
        bufp->chgCData(oldp+87,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                  ? 4U : 0U)),4);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_wvalid_o));
        bufp->chgCData(oldp+89,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                  ? 0U : ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                           ? 7U : 0U))),8);
        bufp->chgBit(oldp+90,(((3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_5))));
        bufp->chgBit(oldp+91,(((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_5))));
        bufp->chgBit(oldp+92,(((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+93,(((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_3))));
        bufp->chgBit(oldp+94,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
        bufp->chgBit(oldp+95,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i))));
        bufp->chgBit(oldp+96,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))));
        bufp->chgCData(oldp+97,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i) 
                                  << 2U) | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_arvalid_i)))),4);
        bufp->chgCData(oldp+98,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w),4);
        bufp->chgCData(oldp+99,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i) 
                                  << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i))),4);
        bufp->chgCData(oldp+100,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w),4);
        bufp->chgBit(oldp+101,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r));
        bufp->chgBit(oldp+103,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                 ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i)
                                 : (IData)(((0U == 
                                             (0x0cU 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) 
                                            & (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i))))));
        bufp->chgCData(oldp+104,(((((0U != (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12)) 
                                    << 3U) | ((0U != 
                                               (7U 
                                                & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))) 
                                              << 2U)) 
                                  | (((0U != (3U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))) 
                                      << 1U) | (1U 
                                                & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))))),4);
        bufp->chgCData(oldp+105,(((0x0000000cU & ((- (IData)((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_46))) 
                                                  << 2U)) 
                                  | (((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_45) 
                                      << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_arvalid_i)))),4);
        bufp->chgCData(oldp+106,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w),4);
        bufp->chgCData(oldp+107,((0x0000000fU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                                  << 1U)))),4);
        bufp->chgCData(oldp+108,(((((0U != (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13)) 
                                    << 3U) | ((0U != 
                                               (7U 
                                                & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))) 
                                              << 2U)) 
                                  | (((0U != (3U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))) 
                                      << 1U) | (1U 
                                                & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))))),4);
        bufp->chgCData(oldp+109,(((0x0000000cU & ((- (IData)((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_26))) 
                                                  << 2U)) 
                                  | (((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_26) 
                                      << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i)))),4);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w),4);
        bufp->chgCData(oldp+111,((0x0000000fU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                                  << 1U)))),4);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r),3);
        bufp->chgBit(oldp+113,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w));
        bufp->chgCData(oldp+115,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r),3);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w));
        bufp->chgQData(oldp+120,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                                   << 0x0000000eU) 
                                  | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o) 
                                                      << 0x0000000aU) 
                                                     | ((((2U 
                                                           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                            ? 7U
                                                            : 0U)) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                            ? 1U
                                                            : 
                                                           ((4U 
                                                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                             ? 1U
                                                             : 
                                                            (1U 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (~ 
                                                                              ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                                                               >> 3U)))))))))))))),46);
        bufp->chgQData(oldp+122,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)) 
                                   << 0x0000000eU) 
                                  | (QData)((IData)(
                                                    ((((2U 
                                                        & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                        ? 4U
                                                        : 0U) 
                                                      << 0x0000000aU) 
                                                     | ((2U 
                                                         & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                         ? 1U
                                                         : 
                                                        (1U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                            >> 2U))))) 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                              >> 3U))))))))))))),46);
        bufp->chgBit(oldp+124,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w));
        bufp->chgIData(oldp+126,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r),32);
        bufp->chgBit(oldp+127,(((0x60U == (0x000000ffU 
                                           & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w))));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__read_en_w));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__write_complete_w));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__read_complete_w));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_pop_w));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+136,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i))));
        bufp->chgCData(oldp+137,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bresp_i),2);
        bufp->chgBit(oldp+138,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i))));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q));
        bufp->chgIData(oldp+143,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q),32);
        bufp->chgBit(oldp+145,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
        bufp->chgIData(oldp+146,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                          [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                          >> 0x0000000eU))),32);
        bufp->chgCData(oldp+147,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                         >> 0x0000000aU)))),4);
        bufp->chgCData(oldp+148,((0x000000ffU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                         >> 2U)))),8);
        bufp->chgCData(oldp+149,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                               [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q]))),2);
        bufp->chgBit(oldp+150,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
        bufp->chgIData(oldp+151,((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q])),32);
        bufp->chgCData(oldp+152,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                                         >> 0x00000020U)))),4);
        bufp->chgBit(oldp+153,((1U & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                              >> 0x00000024U)))));
        bufp->chgBit(oldp+154,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
        bufp->chgBit(oldp+155,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
        bufp->chgIData(oldp+156,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                          [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                          >> 0x0000000eU))),32);
        bufp->chgCData(oldp+157,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                         >> 0x0000000aU)))),4);
        bufp->chgCData(oldp+158,((0x000000ffU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                         >> 2U)))),8);
        bufp->chgCData(oldp+159,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                               [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q]))),2);
        bufp->chgBit(oldp+160,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
        bufp->chgCData(oldp+161,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bid_i),4);
        bufp->chgBit(oldp+162,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_bvalid_o));
        bufp->chgBit(oldp+163,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                 >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i))));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__intr_q));
        bufp->chgCData(oldp+165,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rid_i),4);
        bufp->chgBit(oldp+166,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                                 >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i))));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q));
        bufp->chgBit(oldp+168,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
        bufp->chgBit(oldp+169,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)))));
        bufp->chgBit(oldp+170,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)))));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q));
        bufp->chgIData(oldp+172,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_i),32);
        bufp->chgBit(oldp+173,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)))));
        bufp->chgIData(oldp+174,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q),32);
        bufp->chgBit(oldp+175,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))));
        bufp->chgBit(oldp+176,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
        bufp->chgBit(oldp+177,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_i));
        bufp->chgCData(oldp+179,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rid_i),4);
        bufp->chgBit(oldp+180,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
        bufp->chgCData(oldp+181,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_i),2);
        bufp->chgCData(oldp+182,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bid_i),4);
        bufp->chgBit(oldp+183,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q));
        bufp->chgBit(oldp+187,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q));
        bufp->chgBit(oldp+188,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q));
        bufp->chgBit(oldp+189,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q))));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q));
        bufp->chgIData(oldp+191,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q),32);
        bufp->chgBit(oldp+192,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q));
        bufp->chgIData(oldp+193,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q),32);
        bufp->chgBit(oldp+194,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q));
        bufp->chgBit(oldp+195,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q));
        bufp->chgBit(oldp+196,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
        bufp->chgIData(oldp+197,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q),32);
        bufp->chgBit(oldp+198,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i));
        bufp->chgCData(oldp+199,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_i),2);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q),32);
        bufp->chgBit(oldp+201,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q));
        bufp->chgBit(oldp+204,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                 >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i))));
        bufp->chgBit(oldp+205,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                                 >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i))));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q));
        bufp->chgCData(oldp+207,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r),4);
        bufp->chgBit(oldp+208,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q));
        bufp->chgCData(oldp+210,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r),4);
        bufp->chgCData(oldp+211,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q),4);
        bufp->chgCData(oldp+212,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q),4);
        bufp->chgCData(oldp+213,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q),4);
        bufp->chgCData(oldp+214,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q),4);
        bufp->chgCData(oldp+215,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q),4);
        bufp->chgCData(oldp+216,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q),4);
        bufp->chgCData(oldp+217,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q),3);
        bufp->chgCData(oldp+218,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q),4);
        bufp->chgCData(oldp+219,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q),4);
        bufp->chgCData(oldp+220,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q),3);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q),32);
        bufp->chgBit(oldp+222,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_wr_q));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_input_wr_q));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q));
        bufp->chgBit(oldp+225,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_wr_q));
        bufp->chgIData(oldp+228,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q),32);
        bufp->chgBit(oldp+229,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_status_wr_q));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_wr_q));
        bufp->chgIData(oldp+233,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q),32);
        bufp->chgBit(oldp+234,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_wr_q));
        bufp->chgIData(oldp+235,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q),32);
        bufp->chgIData(oldp+236,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q),32);
        bufp->chgIData(oldp+237,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q),32);
        bufp->chgIData(oldp+238,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_ms),32);
        bufp->chgIData(oldp+239,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q)
                                   ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                      | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)
                                   : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q)
                                       ? ((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q) 
                                          & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)
                                       : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q)
                                           ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q
                                           : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)))),32);
        bufp->chgIData(oldp+240,((((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q) 
                                   & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_60) 
                                  | (((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                       ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q) 
                                      & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                         & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_60)) 
                                     | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q)
                                          ? ((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q) 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q)
                                          : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q) 
                                        | (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                           & (- (IData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q)))))))),32);
        bufp->chgIData(oldp+241,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q),32);
        bufp->chgIData(oldp+242,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q)),32);
        bufp->chgIData(oldp+243,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q)),32);
        bufp->chgIData(oldp+244,(((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q) 
                                  & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_60)),32);
        bufp->chgIData(oldp+245,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                  ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q)),32);
        bufp->chgIData(oldp+246,(((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                   ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q) 
                                  & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                     & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_60))),32);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q),32);
        bufp->chgBit(oldp+248,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_isr_wr_q));
        bufp->chgCData(oldp+249,((0x0000000fU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q)),4);
        bufp->chgBit(oldp+250,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_wr_q));
        bufp->chgBit(oldp+251,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_wr_q));
        bufp->chgCData(oldp+253,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q),4);
        bufp->chgBit(oldp+254,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ivr_wr_q));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_wr_q));
        bufp->chgBit(oldp+258,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q));
        bufp->chgCData(oldp+259,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q),4);
        bufp->chgCData(oldp+260,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w),4);
        bufp->chgCData(oldp+261,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q),4);
        bufp->chgIData(oldp+262,(Vriscv_soc__ConstPool__TABLE_haa28ef1b_0
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w]),32);
        bufp->chgCData(oldp+263,(((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q) 
                                    << 3U) | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q) 
                                      << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q)))),4);
        bufp->chgQData(oldp+264,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q]),46);
        bufp->chgQData(oldp+266,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q]),37);
        bufp->chgCData(oldp+268,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q]),6);
        bufp->chgQData(oldp+269,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q]),46);
        bufp->chgQData(oldp+271,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q]),39);
        Vriscv_soc___024root__trace_chg_dtype____0(vlSelf, bufp, 273, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q);
        bufp->chgBit(oldp+277,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q));
        bufp->chgBit(oldp+278,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q));
        bufp->chgCData(oldp+279,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q),2);
        Vriscv_soc___024root__trace_chg_dtype____1(vlSelf, bufp, 280, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q);
        bufp->chgBit(oldp+284,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q));
        bufp->chgBit(oldp+285,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q));
        bufp->chgCData(oldp+286,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q),2);
        Vriscv_soc___024root__trace_chg_dtype____0(vlSelf, bufp, 287, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q);
        bufp->chgBit(oldp+291,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q));
        bufp->chgBit(oldp+292,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q));
        bufp->chgCData(oldp+293,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q),2);
        Vriscv_soc___024root__trace_chg_dtype____2(vlSelf, bufp, 294, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q);
        bufp->chgBit(oldp+298,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q));
        bufp->chgBit(oldp+299,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q));
        bufp->chgCData(oldp+300,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q),2);
        Vriscv_soc___024root__trace_chg_dtype____3(vlSelf, bufp, 301, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q);
        bufp->chgBit(oldp+303,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q));
        bufp->chgCData(oldp+305,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q),2);
        bufp->chgBit(oldp+306,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_wr_q));
        bufp->chgBit(oldp+307,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q));
        bufp->chgBit(oldp+308,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q));
        bufp->chgBit(oldp+309,((1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                      >> 2U))));
        bufp->chgBit(oldp+310,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_wr_q));
        bufp->chgBit(oldp+311,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_wr_q));
        bufp->chgIData(oldp+313,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q),32);
        bufp->chgBit(oldp+314,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q));
        bufp->chgBit(oldp+316,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q));
        bufp->chgBit(oldp+318,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q));
        bufp->chgBit(oldp+319,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q));
        bufp->chgBit(oldp+320,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q));
        bufp->chgBit(oldp+321,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q));
        bufp->chgBit(oldp+322,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q));
        bufp->chgBit(oldp+323,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q));
        bufp->chgBit(oldp+324,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_sr_wr_q));
        bufp->chgBit(oldp+326,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q));
        bufp->chgCData(oldp+327,((0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q)),8);
        bufp->chgBit(oldp+328,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_wr_q));
        bufp->chgBit(oldp+329,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_wr_q));
        bufp->chgBit(oldp+330,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        bufp->chgBit(oldp+331,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        bufp->chgBit(oldp+332,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        bufp->chgBit(oldp+333,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        bufp->chgCData(oldp+334,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q]),8);
        bufp->chgBit(oldp+335,((0x0000000aU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q)));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w));
        bufp->chgBit(oldp+338,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        bufp->chgBit(oldp+339,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        bufp->chgCData(oldp+340,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q]),8);
        bufp->chgBit(oldp+341,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q));
        bufp->chgCData(oldp+342,(Vriscv_soc__ConstPool__TABLE_h2582090b_0
                                 [(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
                                            [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q]) 
                                    << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))]),8);
        bufp->chgBit(oldp+343,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        bufp->chgBit(oldp+344,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        bufp->chgCData(oldp+345,(Vriscv_soc__ConstPool__TABLE_h2582090b_0
                                 [(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                    << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))]),8);
        bufp->chgBit(oldp+346,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q));
        bufp->chgCData(oldp+347,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q),6);
        bufp->chgCData(oldp+348,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q),8);
        bufp->chgIData(oldp+349,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q),32);
        bufp->chgBit(oldp+350,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
                                & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q)))));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w));
        bufp->chgBit(oldp+352,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q)));
        bufp->chgBit(oldp+353,(((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_27) 
                                & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_63)))));
        bufp->chgBit(oldp+354,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r));
        bufp->chgBit(oldp+355,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q));
        bufp->chgBit(oldp+356,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q));
        Vriscv_soc___024root__trace_chg_dtype____4(vlSelf, bufp, 357, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q);
        bufp->chgCData(oldp+361,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q),2);
        bufp->chgCData(oldp+362,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q),2);
        bufp->chgCData(oldp+363,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q),3);
        Vriscv_soc___024root__trace_chg_dtype____4(vlSelf, bufp, 364, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q);
        bufp->chgCData(oldp+368,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q),2);
        bufp->chgCData(oldp+369,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q),2);
        bufp->chgCData(oldp+370,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q),3);
        bufp->chgIData(oldp+371,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q),32);
        bufp->chgBit(oldp+372,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_wr_q));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_wr_q));
        bufp->chgIData(oldp+376,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q),32);
        bufp->chgBit(oldp+377,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_wr_q));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_wr_q));
        bufp->chgIData(oldp+382,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q),32);
        bufp->chgBit(oldp+383,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q));
        bufp->chgIData(oldp+384,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q),32);
        bufp->chgIData(oldp+385,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q),32);
        bufp->chgBit(oldp+386,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                                & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                                   & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q 
                                      == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q)))));
        bufp->chgBit(oldp+387,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                                & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                                   & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q 
                                      == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q)))));
        bufp->chgBit(oldp+388,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_wr_q));
        bufp->chgBit(oldp+389,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q));
        bufp->chgBit(oldp+390,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_status_wr_q));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_wr_q));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_tx_q));
        bufp->chgCData(oldp+395,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q),8);
        bufp->chgBit(oldp+396,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q));
        bufp->chgBit(oldp+397,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)))));
        bufp->chgBit(oldp+398,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q));
        bufp->chgCData(oldp+399,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q),4);
        bufp->chgIData(oldp+400,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q),32);
        bufp->chgCData(oldp+401,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q),8);
        bufp->chgBit(oldp+402,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q));
        bufp->chgCData(oldp+403,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q),4);
        bufp->chgIData(oldp+404,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q),32);
        bufp->chgCData(oldp+405,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q),8);
        bufp->chgBit(oldp+406,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q));
        bufp->chgBit(oldp+409,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q)));
        bufp->chgBit(oldp+410,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q)));
        bufp->chgBit(oldp+411,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q));
        bufp->chgBit(oldp+412,((1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)) 
                                      | ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                         & ((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                            | ((0x0aU 
                                                == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                               | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q))))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+413,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awaddr_i),32);
        bufp->chgIData(oldp+414,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][1U]),32);
        bufp->chgCData(oldp+415,((0x0000000fU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                  [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U])),4);
        bufp->chgIData(oldp+416,((0xffffffe0U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q)),32);
        bufp->chgBit(oldp+417,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o));
        bufp->chgBit(oldp+418,(((0x80000000U <= ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                  ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                                  : 
                                                 ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                                     ? 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                     >> 0x0000000cU)
                                                     : 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                                     >> 0x0000000cU)) 
                                                   << 0x0000000cU) 
                                                  | (0x00000fffU 
                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))) 
                                & (0x8fffffffU >= ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                                    : 
                                                   ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                                       ? 
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                       >> 0x0000000cU)
                                                       : 
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                                       >> 0x0000000cU)) 
                                                     << 0x0000000cU) 
                                                    | (0x00000fffU 
                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))))));
        bufp->chgSData(oldp+419,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q]),11);
        bufp->chgBit(oldp+420,(((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w))) 
                                && (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
        bufp->chgIData(oldp+421,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                   ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                   : ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                         ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                            >> 0x0000000cU)
                                         : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                            >> 0x0000000cU)) 
                                       << 0x0000000cU) 
                                      | (0x00000fffU 
                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))),32);
        bufp->chgBit(oldp+422,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q) 
                                | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q))));
        bufp->chgSData(oldp+423,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                   ? 0x0380U : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q))),11);
        bufp->chgIData(oldp+424,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                   ? 0U : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)),32);
        bufp->chgBit(oldp+425,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_rd_i));
        bufp->chgBit(oldp+426,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q));
        bufp->chgCData(oldp+427,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_wr_i),4);
        bufp->chgBit(oldp+428,(((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w))) 
                                && (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
        bufp->chgBit(oldp+429,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
        bufp->chgBit(oldp+430,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
        bufp->chgBit(oldp+431,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_pending_q));
        bufp->chgBit(oldp+432,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
        bufp->chgWData(oldp+433,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q]),69);
        bufp->chgBit(oldp+436,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_push_w));
        bufp->chgBit(oldp+437,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__res_push_w));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q));
        bufp->chgBit(oldp+439,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q));
        __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                    ? 0U
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                                      ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                                                      : 
                                                                     ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                                                         ? 
                                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                                         >> 0x0000000cU)
                                                                         : 
                                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                                                         >> 0x0000000cU)) 
                                                                       << 0x0000000cU) 
                                                                      | (0x00000fffU 
                                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))))));
        __Vtemp_1[1U] = (IData)(((((QData)((IData)(
                                                   ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                     ? 0U
                                                     : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                      ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                                      : 
                                                     ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                                         ? 
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                         >> 0x0000000cU)
                                                         : 
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                                         >> 0x0000000cU)) 
                                                       << 0x0000000cU) 
                                                      | (0x00000fffU 
                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))))) 
                                 >> 0x00000020U));
        __Vtemp_1[2U] = (((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_rd_i) 
                          << 4U) | (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_wr_i));
        bufp->chgWData(oldp+440,(__Vtemp_1),69);
        Vriscv_soc___024root__trace_chg_dtype____5(vlSelf, bufp, 443, vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q);
        bufp->chgCData(oldp+455,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q),2);
        bufp->chgCData(oldp+456,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q),2);
        bufp->chgCData(oldp+457,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q),3);
        bufp->chgBit(oldp+458,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
        Vriscv_soc___024root__trace_chg_dtype____6(vlSelf, bufp, 459, vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q);
        bufp->chgCData(oldp+463,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q),2);
        bufp->chgCData(oldp+464,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q),2);
        bufp->chgCData(oldp+465,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q),3);
        bufp->chgBit(oldp+466,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__invalidate_q));
        bufp->chgBit(oldp+467,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_valid_q));
        bufp->chgIData(oldp+468,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q),32);
        bufp->chgIData(oldp+469,((vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                                  >> 0x0000000dU)),19);
        bufp->chgSData(oldp+470,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_write_addr_q),11);
        bufp->chgCData(oldp+471,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__flush_addr_q),8);
        bufp->chgBit(oldp+472,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_q));
        bufp->chgBit(oldp+473,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w));
        bufp->chgQData(oldp+474,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q),58);
        bufp->chgBit(oldp+476,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w) 
                                & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o))));
        bufp->chgBit(oldp+477,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q));
        bufp->chgIData(oldp+478,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q),32);
        bufp->chgBit(oldp+479,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q));
        bufp->chgBit(oldp+480,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
        bufp->chgIData(oldp+481,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q),32);
        bufp->chgBit(oldp+482,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                 ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
                                    & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_load_fault_w)) 
                                       & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)))
                                 : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q))));
        bufp->chgBit(oldp+483,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q));
        bufp->chgIData(oldp+484,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q),32);
        bufp->chgCData(oldp+485,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
        bufp->chgBit(oldp+486,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q));
        bufp->chgIData(oldp+487,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
        bufp->chgSData(oldp+488,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q),11);
        bufp->chgCData(oldp+489,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q),5);
        bufp->chgBit(oldp+490,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fault_page_store_w));
        bufp->chgBit(oldp+491,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w));
        bufp->chgBit(oldp+492,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w));
        bufp->chgCData(oldp+493,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w),5);
        bufp->chgIData(oldp+494,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q),32);
        bufp->chgCData(oldp+495,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x00000014U))),5);
        bufp->chgBit(oldp+496,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q));
        bufp->chgBit(oldp+497,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w));
        bufp->chgIData(oldp+499,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
        bufp->chgIData(oldp+500,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_22)
                                   ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q
                                   : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q 
                                      & (- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_53)))))),32);
        bufp->chgIData(oldp+501,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_pc_w),32);
        bufp->chgCData(oldp+502,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q),5);
        bufp->chgBit(oldp+503,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q));
        bufp->chgIData(oldp+504,(((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                     ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                        >> 0x0000000cU)
                                     : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                        >> 0x0000000cU)) 
                                   << 0x0000000cU) 
                                  | (0x00000fffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w))),32);
        bufp->chgBit(oldp+505,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q));
        bufp->chgBit(oldp+506,((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))));
        bufp->chgBit(oldp+507,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
        bufp->chgIData(oldp+508,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q),32);
        bufp->chgCData(oldp+509,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+510,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                   ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w) 
                                      & (- (IData)(
                                                   ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fault_page_store_w)) 
                                                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)))))
                                   : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))),4);
        bufp->chgIData(oldp+511,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q),32);
        bufp->chgBit(oldp+512,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                                & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o))));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_load_fault_w));
        bufp->chgIData(oldp+514,((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w) 
                                   << 0x0000001fU) 
                                  | (0x7fffffffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q))),32);
        bufp->chgCData(oldp+515,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 7U))),5);
        bufp->chgBit(oldp+516,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                      >> 0x00000012U))));
        bufp->chgIData(oldp+517,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q),32);
        bufp->chgIData(oldp+518,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q),32);
        bufp->chgBit(oldp+519,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__read_hold_q));
        bufp->chgBit(oldp+520,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_q));
        bufp->chgBit(oldp+521,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w));
        bufp->chgBit(oldp+522,((7U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16))));
        bufp->chgIData(oldp+523,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q),32);
        bufp->chgIData(oldp+524,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_q),32);
        bufp->chgIData(oldp+525,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q),32);
        bufp->chgIData(oldp+526,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q),32);
        bufp->chgIData(oldp+527,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_q),32);
        bufp->chgIData(oldp+528,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q),32);
        bufp->chgCData(oldp+529,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q),2);
        bufp->chgIData(oldp+530,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q),32);
        bufp->chgIData(oldp+531,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_q),32);
        bufp->chgIData(oldp+532,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q),32);
        bufp->chgIData(oldp+533,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q),32);
        bufp->chgIData(oldp+534,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_q),32);
        bufp->chgIData(oldp+535,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_q),32);
        bufp->chgIData(oldp+536,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q),32);
        bufp->chgIData(oldp+537,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_q),32);
        bufp->chgIData(oldp+538,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__pc_m_q),32);
        bufp->chgIData(oldp+539,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r),32);
        bufp->chgCData(oldp+540,((3U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                        >> 0x0000001cU))),2);
        bufp->chgBit(oldp+541,((3U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                       >> 0x0000001eU))));
        bufp->chgBit(oldp+542,((1U & (IData)(((0ULL 
                                               != (0x0000120000000000ULL 
                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                              | (0U 
                                                 != 
                                                 (0x000f8000U 
                                                  & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)))))));
        bufp->chgBit(oldp+543,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r));
        bufp->chgBit(oldp+544,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r));
        bufp->chgIData(oldp+545,(((IData)(1U) + vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q)),32);
        bufp->chgIData(oldp+546,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q),32);
        bufp->chgIData(oldp+547,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q),32);
        bufp->chgBit(oldp+548,((0U != (0x0000003fU 
                                       & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x0000001dU))))));
        bufp->chgBit(oldp+549,((0U != (7U & (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x00000023U))))));
        bufp->chgIData(oldp+550,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r),32);
        bufp->chgBit(oldp+551,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r));
        bufp->chgIData(oldp+552,(((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r))) 
                                  & vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_54)),32);
        bufp->chgBit(oldp+553,(((1U > (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                | ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                      >> 1U)))));
        bufp->chgIData(oldp+554,((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r 
                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q 
                                     & (- (IData)((
                                                   (1U 
                                                    > (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                   | ((1U 
                                                       == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                      & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                                         >> 1U)))))))),32);
        bufp->chgIData(oldp+555,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r),32);
        bufp->chgBit(oldp+556,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_en_q));
        bufp->chgCData(oldp+557,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_idx_q),5);
        bufp->chgBit(oldp+558,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__reset_q));
        bufp->chgBit(oldp+559,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w));
        bufp->chgBit(oldp+560,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__active_q));
        bufp->chgIData(oldp+561,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_pc_q),32);
        bufp->chgIData(oldp+562,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_q),32);
        bufp->chgBit(oldp+563,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_valid_q));
        bufp->chgBit(oldp+564,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_fetch_q));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q));
        bufp->chgQData(oldp+566,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_buffer_q),64);
        bufp->chgBit(oldp+568,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q));
        bufp->chgIData(oldp+569,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__pc_d_q),32);
        bufp->chgBit(oldp+570,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q));
        bufp->chgBit(oldp+571,((0U != (7U & (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x0000001dU))))));
        bufp->chgBit(oldp+572,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x00000029U)) 
                                & (0x03a0U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x00000014U)))));
        bufp->chgBit(oldp+573,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x00000029U)) 
                                & (0x03a1U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x00000014U)))));
        bufp->chgBit(oldp+574,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x00000029U)) 
                                & (0x03a2U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x00000014U)))));
        bufp->chgCData(oldp+575,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q),2);
        bufp->chgBit(oldp+576,((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q))));
        bufp->chgBit(oldp+577,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_q));
        bufp->chgCData(oldp+578,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_q),4);
        bufp->chgBit(oldp+579,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w));
        bufp->chgCData(oldp+580,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w),4);
        bufp->chgIData(oldp+581,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w),32);
        bufp->chgBit(oldp+582,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w));
        bufp->chgBit(oldp+583,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q));
        bufp->chgIData(oldp+584,((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q 
                                  << 0x0000000cU)),32);
        bufp->chgBit(oldp+585,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_miss_w));
        bufp->chgIData(oldp+586,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q),32);
        bufp->chgIData(oldp+587,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__virt_addr_q),32);
        bufp->chgBit(oldp+588,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_valid_q));
        bufp->chgIData(oldp+589,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_va_addr_q),20);
        bufp->chgIData(oldp+590,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q),32);
        bufp->chgBit(oldp+591,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_valid_q));
        bufp->chgIData(oldp+592,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_va_addr_q),20);
        bufp->chgIData(oldp+593,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q),32);
        bufp->chgCData(oldp+594,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__rd_q),5);
        bufp->chgIData(oldp+595,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_q),32);
        bufp->chgBit(oldp+596,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_busy_q));
        bufp->chgBit(oldp+597,((0U != (0x0000000fU 
                                       & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x0000002fU))))));
        bufp->chgBit(oldp+598,((0U != (0x0000000fU 
                                       & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x00000033U))))));
        bufp->chgBit(oldp+599,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__signed_operation_w));
        bufp->chgBit(oldp+600,((0U != (3U & (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x00000033U))))));
        bufp->chgIData(oldp+601,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q),32);
        bufp->chgQData(oldp+602,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__divisor_q),63);
        bufp->chgIData(oldp+604,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q),32);
        bufp->chgIData(oldp+605,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q),32);
        bufp->chgBit(oldp+606,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q));
        bufp->chgBit(oldp+607,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q));
        bufp->chgBit(oldp+609,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w));
        bufp->chgIData(oldp+610,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q)
                                   ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                       ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                       : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                   : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                       ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q)
                                       : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q))),32);
        bufp->chgBit(oldp+611,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__valid_q));
        bufp->chgIData(oldp+612,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_q),32);
        bufp->chgIData(oldp+613,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ra_value_w),32);
        bufp->chgIData(oldp+614,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__rb_value_w),32);
        bufp->chgCData(oldp+615,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w),5);
        bufp->chgBit(oldp+616,((IData)((0ULL != (0x007ffe07e0000000ULL 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))));
        bufp->chgIData(oldp+617,((0xfffff000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)),32);
        bufp->chgIData(oldp+618,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x0000001fU))) 
                                   << 0x0000000dU) 
                                  | ((((2U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 0x0000001eU)) 
                                       | (1U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                >> 7U))) 
                                      << 0x0000000bU) 
                                     | ((0x000007e0U 
                                         & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                            >> 0x00000014U)) 
                                        | (0x0000001eU 
                                           & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 7U)))))),32);
        bufp->chgIData(oldp+619,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x0000001fU))) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                >> 0x00000014U))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 0x00000014U))))),32);
        bufp->chgIData(oldp+620,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | ((0x00000fe0U & 
                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                       >> 0x00000014U)) 
                                     | (0x0000001fU 
                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 7U))))),32);
        bufp->chgCData(oldp+621,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__alu_op_i),4);
        bufp->chgBit(oldp+622,((1U & (IData)(((0ULL 
                                               != (0x0000000000649fffULL 
                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                              | (0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x0000000dU)) 
                                                     | ((IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x00000010U)) 
                                                        | (IData)(
                                                                  (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                   >> 0x00000013U)))))))))));
        bufp->chgBit(oldp+623,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_valid_q));
        bufp->chgIData(oldp+624,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_pc_q),32);
        bufp->chgIData(oldp+625,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r1_q),32);
        bufp->chgIData(oldp+626,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r2_q),32);
        bufp->chgIData(oldp+627,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r3_q),32);
        bufp->chgIData(oldp+628,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r4_q),32);
        bufp->chgIData(oldp+629,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r5_q),32);
        bufp->chgIData(oldp+630,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r6_q),32);
        bufp->chgIData(oldp+631,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r7_q),32);
        bufp->chgIData(oldp+632,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r8_q),32);
        bufp->chgIData(oldp+633,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r9_q),32);
        bufp->chgIData(oldp+634,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r10_q),32);
        bufp->chgIData(oldp+635,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r11_q),32);
        bufp->chgIData(oldp+636,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r12_q),32);
        bufp->chgIData(oldp+637,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r13_q),32);
        bufp->chgIData(oldp+638,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r14_q),32);
        bufp->chgIData(oldp+639,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r15_q),32);
        bufp->chgIData(oldp+640,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r16_q),32);
        bufp->chgIData(oldp+641,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r17_q),32);
        bufp->chgIData(oldp+642,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r18_q),32);
        bufp->chgIData(oldp+643,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r19_q),32);
        bufp->chgIData(oldp+644,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r20_q),32);
        bufp->chgIData(oldp+645,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r21_q),32);
        bufp->chgIData(oldp+646,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r22_q),32);
        bufp->chgIData(oldp+647,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r23_q),32);
        bufp->chgIData(oldp+648,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r24_q),32);
        bufp->chgIData(oldp+649,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r25_q),32);
        bufp->chgIData(oldp+650,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r26_q),32);
        bufp->chgIData(oldp+651,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r27_q),32);
        bufp->chgIData(oldp+652,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r28_q),32);
        bufp->chgIData(oldp+653,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r29_q),32);
        bufp->chgIData(oldp+654,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r30_q),32);
        bufp->chgIData(oldp+655,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r31_q),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgBit(oldp+656,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w) 
                                & ((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w)))));
        bufp->chgBit(oldp+657,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w) 
                                & ((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w)))));
        bufp->chgIData(oldp+658,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                                   ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                                   : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_pc_w)),32);
        bufp->chgBit(oldp+659,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r) 
                                | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r) 
                                   | ((1U & (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x00000026U)))
                                       ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w)
                                       : ((1U & (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x00000027U)))
                                           ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w)
                                           : ((IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x00000028U)) 
                                              & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w))))))));
        bufp->chgIData(oldp+660,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r)
                                   ? (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exception_s_r) 
                                       & (1U >= (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)))
                                       ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q
                                       : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q)
                                   : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r)
                                       ? (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__interrupt_s_r) 
                                           & (1U >= (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)))
                                           ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q
                                           : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q)
                                       : ((1U & (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x00000026U)))
                                           ? vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_34
                                           : ((1U & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x00000027U)))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_34
                                               : ((
                                                   (0x20000000U 
                                                    & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                           >> 0x00000028U))))))))))),32);
        bufp->chgIData(oldp+661,(((0U != (7U & (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x00000030U))))
                                   ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w[1U]
                                   : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w[0U])),32);
        if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
            if ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) {
                __Vtemp_2[0U] = 0x616e6469U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 1U)))) {
                __Vtemp_2[0U] = 0x61646469U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 2U)))) {
                __Vtemp_2[0U] = 0x736c7469U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 3U)))) {
                __Vtemp_2[0U] = 0x6c746975U;
                __Vtemp_2[1U] = 0x00000073U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 4U)))) {
                __Vtemp_2[0U] = 0x006f7269U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 5U)))) {
                __Vtemp_2[0U] = 0x786f7269U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 6U)))) {
                __Vtemp_2[0U] = 0x736c6c69U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 7U)))) {
                __Vtemp_2[0U] = 0x73726c69U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((0U != (0x000000ffU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 8U))))) {
                if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                   >> 8U)))) {
                    __Vtemp_2[0U] = 0x73726169U;
                    __Vtemp_2[1U] = 0U;
                } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 9U)))) {
                    __Vtemp_2[0U] = 0x006c7569U;
                    __Vtemp_2[1U] = 0U;
                } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                          >> 0x0000000aU)))) {
                    __Vtemp_2[0U] = 0x75697063U;
                    __Vtemp_2[1U] = 0x00000061U;
                } else {
                    __Vtemp_2[0U] = ((1U & (IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x0000000bU)))
                                      ? 0x00616464U
                                      : ((1U & (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x0000000cU)))
                                          ? 0x00737562U
                                          : ((1U & (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x0000000dU)))
                                              ? 0x00736c74U
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x0000000eU)))
                                                  ? 0x736c7475U
                                                  : 0x00786f72U))));
                    __Vtemp_2[1U] = 0U;
                }
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000010U)))) {
                __Vtemp_2[0U] = 0x00006f72U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000011U)))) {
                __Vtemp_2[0U] = 0x00616e64U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000012U)))) {
                __Vtemp_2[0U] = 0x00736c6cU;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000013U)))) {
                __Vtemp_2[0U] = 0x0073726cU;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000014U)))) {
                __Vtemp_2[0U] = 0x00737261U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000015U)))) {
                __Vtemp_2[0U] = 0x006a616cU;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000016U)))) {
                __Vtemp_2[0U] = 0x6a616c72U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000017U)))) {
                __Vtemp_2[0U] = 0x00626571U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000018U)))) {
                __Vtemp_2[0U] = 0x00626e65U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000019U)))) {
                __Vtemp_2[0U] = 0x00626c74U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000001aU)))) {
                __Vtemp_2[0U] = 0x00626765U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000001bU)))) {
                __Vtemp_2[0U] = 0x626c7475U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000001cU)))) {
                __Vtemp_2[0U] = 0x62676575U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000001dU)))) {
                __Vtemp_2[0U] = 0x00006c62U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000001eU)))) {
                __Vtemp_2[0U] = 0x00006c68U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000001fU)))) {
                __Vtemp_2[0U] = 0x00006c77U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000020U)))) {
                __Vtemp_2[0U] = 0x006c6275U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000021U)))) {
                __Vtemp_2[0U] = 0x006c6875U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000022U)))) {
                __Vtemp_2[0U] = 0x006c7775U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000023U)))) {
                __Vtemp_2[0U] = 0x00007362U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000024U)))) {
                __Vtemp_2[0U] = 0x00007368U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000025U)))) {
                __Vtemp_2[0U] = 0x00007377U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000026U)))) {
                __Vtemp_2[0U] = 0x63616c6cU;
                __Vtemp_2[1U] = 0x00000065U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000027U)))) {
                __Vtemp_2[0U] = 0x7265616bU;
                __Vtemp_2[1U] = 0x00006562U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000028U)))) {
                __Vtemp_2[0U] = 0x65726574U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000029U)))) {
                __Vtemp_2[0U] = 0x73727277U;
                __Vtemp_2[1U] = 0x00000063U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000002aU)))) {
                __Vtemp_2[0U] = 0x73727273U;
                __Vtemp_2[1U] = 0x00000063U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000002bU)))) {
                __Vtemp_2[0U] = 0x73727263U;
                __Vtemp_2[1U] = 0x00000063U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000002cU)))) {
                __Vtemp_2[0U] = 0x72727769U;
                __Vtemp_2[1U] = 0x00006373U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000002dU)))) {
                __Vtemp_2[0U] = 0x72727369U;
                __Vtemp_2[1U] = 0x00006373U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000002eU)))) {
                __Vtemp_2[0U] = 0x72726369U;
                __Vtemp_2[1U] = 0x00006373U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000002fU)))) {
                __Vtemp_2[0U] = 0x006d756cU;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000030U)))) {
                __Vtemp_2[0U] = 0x6d756c68U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000031U)))) {
                __Vtemp_2[0U] = 0x6c687375U;
                __Vtemp_2[1U] = 0x00006d75U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000032U)))) {
                __Vtemp_2[0U] = 0x756c6875U;
                __Vtemp_2[1U] = 0x0000006dU;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000033U)))) {
                __Vtemp_2[0U] = 0x00646976U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000034U)))) {
                __Vtemp_2[0U] = 0x64697675U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000035U)))) {
                __Vtemp_2[0U] = 0x0072656dU;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000036U)))) {
                __Vtemp_2[0U] = 0x72656d75U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000037U)))) {
                __Vtemp_2[0U] = 0x41554c54U;
                __Vtemp_2[1U] = 0x00000046U;
                __Vtemp_2[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000038U)))) {
                __Vtemp_2[0U] = 0x41554c54U;
                __Vtemp_2[1U] = 0x47455f46U;
                __Vtemp_2[2U] = 0x00005041U;
            } else {
                __Vtemp_2[0U] = 0x0000002dU;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
            }
        } else {
            __Vtemp_2[0U] = 0x0000002dU;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        }
        bufp->chgWData(oldp+662,(__Vtemp_2),80);
        if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
            if ((0U != (0x0000003fU & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q) 
                                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x00000029U)))))) {
                __VExpandSel_WordIdx_1 = (((IData)(0x00000060U) 
                                           * (0x0000001fU 
                                              & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x0000000fU))) 
                                          >> 5U);
                __Vtemp_4[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_1];
                __Vtemp_4[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_1)];
                __Vtemp_4[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_1)];
            } else if ((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 6U))))) {
                __VExpandSel_WordIdx_2 = (((IData)(0x00000060U) 
                                           * (0x0000001fU 
                                              & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x0000000fU))) 
                                          >> 5U);
                __Vtemp_4[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_2];
                __Vtemp_4[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_2)];
                __Vtemp_4[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_2)];
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 9U)))) {
                __Vtemp_4[0U] = 0x0000002dU;
                __Vtemp_4[1U] = 0U;
                __Vtemp_4[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000000aU)))) {
                __Vtemp_4[0U] = 0x00007063U;
                __Vtemp_4[1U] = 0U;
                __Vtemp_4[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000015U)))) {
                __Vtemp_4[0U] = 0x0000002dU;
                __Vtemp_4[1U] = 0U;
                __Vtemp_4[2U] = 0U;
            } else {
                __VExpandSel_WordIdx_3 = (((IData)(0x00000060U) 
                                           * (0x0000001fU 
                                              & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x0000000fU))) 
                                          >> 5U);
                __Vtemp_4[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_3];
                __Vtemp_4[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_3)];
                __Vtemp_4[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_3)];
            }
        } else {
            __Vtemp_4[0U] = 0x0000002dU;
            __Vtemp_4[1U] = 0U;
            __Vtemp_4[2U] = 0U;
        }
        __Vtemp_5[0U] = __Vtemp_4[0U];
        __Vtemp_5[1U] = __Vtemp_4[1U];
        __Vtemp_5[2U] = (0x0000ffffU & __Vtemp_4[2U]);
        bufp->chgWData(oldp+665,(__Vtemp_5),80);
        if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
            if ((0U != (0x0000003fU & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q) 
                                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x00000029U)))))) {
                __Vtemp_7[0U] = 0x0000002dU;
                __Vtemp_7[1U] = 0U;
                __Vtemp_7[2U] = 0U;
            } else if ((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 6U))))) {
                __Vtemp_7[0U] = 0x0000002dU;
                __Vtemp_7[1U] = 0U;
                __Vtemp_7[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 9U)))) {
                __Vtemp_7[0U] = 0x0000002dU;
                __Vtemp_7[1U] = 0U;
                __Vtemp_7[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000000aU)))) {
                __Vtemp_7[0U] = 0x0000002dU;
                __Vtemp_7[1U] = 0U;
                __Vtemp_7[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000015U)))) {
                __Vtemp_7[0U] = 0x0000002dU;
                __Vtemp_7[1U] = 0U;
                __Vtemp_7[2U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000016U)))) {
                __Vtemp_7[0U] = 0x0000002dU;
                __Vtemp_7[1U] = 0U;
                __Vtemp_7[2U] = 0U;
            } else if ((0U != (0x0000003fU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x0000001dU))))) {
                __Vtemp_7[0U] = 0x0000002dU;
                __Vtemp_7[1U] = 0U;
                __Vtemp_7[2U] = 0U;
            } else {
                __VExpandSel_WordIdx_4 = (((IData)(0x00000060U) 
                                           * (0x0000001fU 
                                              & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x00000014U))) 
                                          >> 5U);
                __Vtemp_7[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_4];
                __Vtemp_7[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_4)];
                __Vtemp_7[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_4)];
            }
        } else {
            __Vtemp_7[0U] = 0x0000002dU;
            __Vtemp_7[1U] = 0U;
            __Vtemp_7[2U] = 0U;
        }
        __Vtemp_8[0U] = __Vtemp_7[0U];
        __Vtemp_8[1U] = __Vtemp_7[1U];
        __Vtemp_8[2U] = (0x0000ffffU & __Vtemp_7[2U]);
        bufp->chgWData(oldp+668,(__Vtemp_8),80);
        if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
            if ((0U != (0x0000003fU & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q) 
                                       | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x00000029U)))))) {
                __VExpandSel_WordIdx_5 = (((IData)(0x00000060U) 
                                           * (0x0000001fU 
                                              & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 7U))) 
                                          >> 5U);
                __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_5];
                __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_5)];
                __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_5)];
            } else if ((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 6U))))) {
                __VExpandSel_WordIdx_6 = (((IData)(0x00000060U) 
                                           * (0x0000001fU 
                                              & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 7U))) 
                                          >> 5U);
                __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_6];
                __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_6)];
                __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_6)];
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 9U)))) {
                __VExpandSel_WordIdx_7 = (((IData)(0x00000060U) 
                                           * (0x0000001fU 
                                              & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 7U))) 
                                          >> 5U);
                __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_7];
                __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_7)];
                __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_7)];
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000000aU)))) {
                __VExpandSel_WordIdx_8 = (((IData)(0x00000060U) 
                                           * (0x0000001fU 
                                              & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 7U))) 
                                          >> 5U);
                __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_8];
                __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_8)];
                __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_8)];
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000015U)))) {
                __VExpandSel_WordIdx_9 = (((IData)(0x00000060U) 
                                           * (0x0000001fU 
                                              & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 7U))) 
                                          >> 5U);
                __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_9];
                __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_9)];
                __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_9)];
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000016U)))) {
                __VExpandSel_WordIdx_10 = (((IData)(0x00000060U) 
                                            * (0x0000001fU 
                                               & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 7U))) 
                                           >> 5U);
                __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_10];
                __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_10)];
                __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_10)];
            } else if ((0U != (0x0000003fU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x0000001dU))))) {
                __VExpandSel_WordIdx_11 = (((IData)(0x00000060U) 
                                            * (0x0000001fU 
                                               & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 7U))) 
                                           >> 5U);
                __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_11];
                __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_11)];
                __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_11)];
            } else if ((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                             >> 0x00000023U))))) {
                __Vtemp_10[0U] = 0x0000002dU;
                __Vtemp_10[1U] = 0U;
                __Vtemp_10[2U] = 0U;
            } else {
                __VExpandSel_WordIdx_12 = (((IData)(0x00000060U) 
                                            * (0x0000001fU 
                                               & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 7U))) 
                                           >> 5U);
                __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [__VExpandSel_WordIdx_12];
                __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(1U) + __VExpandSel_WordIdx_12)];
                __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                    [((IData)(2U) + __VExpandSel_WordIdx_12)];
            }
        } else {
            __Vtemp_10[0U] = 0x0000002dU;
            __Vtemp_10[1U] = 0U;
            __Vtemp_10[2U] = 0U;
        }
        __Vtemp_11[0U] = __Vtemp_10[0U];
        __Vtemp_11[1U] = __Vtemp_10[1U];
        __Vtemp_11[2U] = (0x0000ffffU & __Vtemp_10[2U]);
        bufp->chgWData(oldp+671,(__Vtemp_11),80);
        bufp->chgIData(oldp+674,((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
                                  & (- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r))))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+675,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q),20);
        bufp->chgBit(oldp+676,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q 
                                      >> 0x00000013U))));
        bufp->chgIData(oldp+677,((0x0007ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q)),19);
        bufp->chgIData(oldp+678,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q),20);
        bufp->chgBit(oldp+679,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q 
                                      >> 0x00000013U))));
        bufp->chgIData(oldp+680,((0x0007ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q)),19);
        bufp->chgIData(oldp+681,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q),32);
        bufp->chgIData(oldp+682,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+683,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i),32);
        bufp->chgCData(oldp+684,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rresp_i),2);
        bufp->chgBit(oldp+685,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o));
        bufp->chgBit(oldp+686,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rlast_i));
        bufp->chgBit(oldp+687,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_error_o));
        bufp->chgBit(oldp+688,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_ack_o));
        bufp->chgIData(oldp+689,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i 
                                  >> 0x0000000aU)),32);
        bufp->chgSData(oldp+690,((0x000003ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i)),10);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+691,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w));
        bufp->chgBit(oldp+692,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w));
        bufp->chgBit(oldp+693,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_hit_any_w));
        bufp->chgIData(oldp+694,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w),32);
        bufp->chgQData(oldp+695,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w),58);
        bufp->chgBit(oldp+697,(((0x10500073U == (0xffff8fffU 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                | ((0x0000000fU == 
                                    (0x0000707fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x12000073U 
                                       == (0xfe007fffU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                      | (0x0000100fU 
                                         == (0x0000707fU 
                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))))));
        bufp->chgBit(oldp+698,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__invalid_inst_w));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+699,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q),2);
        bufp->chgBit(oldp+700,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q));
        bufp->chgIData(oldp+701,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r),20);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+702,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i));
        bufp->chgBit(oldp+703,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i));
        bufp->chgBit(oldp+704,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i));
        bufp->chgBit(oldp+705,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wvalid_i));
        bufp->chgIData(oldp+706,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_pc_i),32);
        bufp->chgBit(oldp+707,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o));
        bufp->chgBit(oldp+708,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_25)))));
        bufp->chgCData(oldp+709,((0x000000ffU & (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_pc_i 
                                                 >> 5U))),8);
        bufp->chgSData(oldp+710,((0x000007ffU & (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_pc_i 
                                                 >> 2U))),11);
        bufp->chgCData(oldp+711,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r),2);
        bufp->chgCData(oldp+712,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r),8);
        bufp->chgSData(oldp+713,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r),11);
        bufp->chgBit(oldp+714,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_flush_w));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_accept_w));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_error_w));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_request_w));
        bufp->chgIData(oldp+720,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w),32);
        bufp->chgBit(oldp+721,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_opcode_valid_w));
        bufp->chgIData(oldp+722,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_pc_w),32);
        bufp->chgBit(oldp+723,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_branch_w));
        bufp->chgIData(oldp+724,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w),32);
        bufp->chgCData(oldp+725,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r),5);
        bufp->chgBit(oldp+726,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_ack_w));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w));
        bufp->chgIData(oldp+728,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
        bufp->chgIData(oldp+729,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w),32);
        bufp->chgBit(oldp+730,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_opcode_valid_w));
        bufp->chgBit(oldp+731,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__exec_opcode_valid_w));
        bufp->chgIData(oldp+732,(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_44),32);
        bufp->chgBit(oldp+733,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_access_fault_w));
        bufp->chgBit(oldp+734,((0U != (0xa050U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_44)))));
        bufp->chgIData(oldp+735,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r),32);
        bufp->chgIData(oldp+736,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r),32);
        bufp->chgIData(oldp+737,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r),32);
        bufp->chgIData(oldp+738,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r),32);
        bufp->chgIData(oldp+739,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r),32);
        bufp->chgIData(oldp+740,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r),32);
        bufp->chgCData(oldp+741,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r),2);
        bufp->chgIData(oldp+742,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r),32);
        bufp->chgIData(oldp+743,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r),32);
        bufp->chgIData(oldp+744,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r),32);
        bufp->chgIData(oldp+745,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r),32);
        bufp->chgIData(oldp+746,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r),32);
        bufp->chgIData(oldp+747,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r),32);
        bufp->chgIData(oldp+748,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r),32);
        bufp->chgIData(oldp+749,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r),32);
        bufp->chgIData(oldp+750,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r),32);
        bufp->chgBit(oldp+751,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exception_s_r));
        bufp->chgBit(oldp+754,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__interrupt_s_r));
        bufp->chgIData(oldp+755,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r),32);
        bufp->chgIData(oldp+756,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r),32);
        bufp->chgBit(oldp+757,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w));
        bufp->chgBit(oldp+758,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_w));
        bufp->chgIData(oldp+759,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_w),32);
        bufp->chgIData(oldp+760,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
        bufp->chgBit(oldp+761,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
        bufp->chgCData(oldp+762,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
        bufp->chgBit(oldp+763,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_byte_r));
        bufp->chgBit(oldp+764,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_half_r));
        bufp->chgBit(oldp+765,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_word_r));
        bufp->chgBit(oldp+766,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_signed_r));
        bufp->chgIData(oldp+767,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__request_addr_w),32);
        bufp->chgWData(oldp+768,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w),65);
        bufp->chgQData(oldp+771,((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_56)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w)))),33);
        bufp->chgQData(oldp+773,((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_57)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w)))),33);
        bufp->chgBit(oldp+775,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_start_w));
        bufp->chgBit(oldp+776,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_scoreboard_r));
        bufp->chgBit(oldp+777,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_input_w));
        bufp->chgIData(oldp+778,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r),32);
        bufp->chgBit(oldp+779,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r));
        bufp->chgIData(oldp+780,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r),32);
        bufp->chgIData(oldp+781,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_imm),32);
        bufp->chgIData(oldp+782,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__alu_a_i),32);
        bufp->chgIData(oldp+783,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__alu_b_i),32);
        bufp->chgIData(oldp+784,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__less_than_signed__Vstatic__v),32);
        bufp->chgIData(oldp+785,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__greater_than_signed__Vstatic__v),32);
        bufp->chgBit(oldp+786,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r));
        bufp->chgIData(oldp+787,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r),32);
        bufp->chgSData(oldp+788,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r),16);
        bufp->chgIData(oldp+789,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_1_r),32);
        bufp->chgIData(oldp+790,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_2_r),32);
        bufp->chgIData(oldp+791,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_4_r),32);
        bufp->chgIData(oldp+792,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_8_r),32);
        bufp->chgIData(oldp+793,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_1_r),32);
        bufp->chgIData(oldp+794,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_2_r),32);
        bufp->chgIData(oldp+795,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_4_r),32);
        bufp->chgIData(oldp+796,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_8_r),32);
        bufp->chgIData(oldp+797,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__sub_res_w),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+798,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_rd_i));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_fetch_fault_w));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_accept_w));
        bufp->chgBit(oldp+801,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_valid_w));
        bufp->chgBit(oldp+803,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__stall_w));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_miss_w));
    }
    bufp->chgBit(oldp+806,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o));
    bufp->chgCData(oldp+807,((0x0000000fU & ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                              ? vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                             [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U]
                                              : ((IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_wstrb_i) 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                    >> 2U))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                      >> 3U)))))))))),4);
    bufp->chgBit(oldp+808,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o));
    bufp->chgCData(oldp+809,((0x0000000fU & (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w))
                                              ? ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))
                                              : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q) 
                                                 - 
                                                 ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w)) 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)))))),4);
    bufp->chgBit(oldp+810,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w));
    bufp->chgBit(oldp+811,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w));
    bufp->chgQData(oldp+812,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o)) 
                               << 0x00000024U) | (((QData)((IData)(
                                                                   (0x0000000fU 
                                                                    & ((2U 
                                                                        & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                                        ? vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                                                       [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U]
                                                                        : 
                                                                       ((IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_wstrb_i) 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                                >> 2U))))) 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                                >> 3U))))))))))) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o))))),37);
    bufp->chgBit(oldp+814,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
                             ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
                             : (IData)(vlSelfRef.__Vcellinp__riscv_soc__spi_miso_i))));
    bufp->chgIData(oldp+815,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w)
                               ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q
                               : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w)
                                   ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q
                                   : vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q))),32);
    bufp->chgBit(oldp+816,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o));
    bufp->chgBit(oldp+817,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_ack_o)) 
                            & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_pending_q))));
    bufp->chgBit(oldp+818,(((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                            | ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                               & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_24))))));
    bufp->chgBit(oldp+819,(((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                            | ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_24))))));
    bufp->chgBit(oldp+820,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o))));
    bufp->chgBit(oldp+821,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o))));
    bufp->chgBit(oldp+822,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_busy_w));
    bufp->chgIData(oldp+823,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q)
                               ? 0x08000053U : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q)
                                                 ? 0x00000053U
                                                 : 
                                                ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w)
                                                  ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q
                                                  : 
                                                 ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w)
                                                   ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q
                                                   : vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q))))),32);
}

void Vriscv_soc___024root__trace_chg_dtype____0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*45:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[1]),46);
    bufp->chgQData(oldp+2,(__VdtypeVar[0]),46);
}

void Vriscv_soc___024root__trace_chg_dtype____1(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*38:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[1]),39);
    bufp->chgQData(oldp+2,(__VdtypeVar[0]),39);
}

void Vriscv_soc___024root__trace_chg_dtype____2(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[1]),37);
    bufp->chgQData(oldp+2,(__VdtypeVar[0]),37);
}

void Vriscv_soc___024root__trace_chg_dtype____3(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____3\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[1]),6);
    bufp->chgCData(oldp+1,(__VdtypeVar[0]),6);
}

void Vriscv_soc___024root__trace_chg_dtype____4(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____4\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[0]),8);
}

void Vriscv_soc___024root__trace_chg_dtype____5(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*68:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____5\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgWData(oldp+0,(__VdtypeVar[3]),69);
    bufp->chgWData(oldp+3,(__VdtypeVar[2]),69);
    bufp->chgWData(oldp+6,(__VdtypeVar[1]),69);
    bufp->chgWData(oldp+9,(__VdtypeVar[0]),69);
}

void Vriscv_soc___024root__trace_chg_dtype____6(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*10:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____6\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[3]),11);
    bufp->chgSData(oldp+1,(__VdtypeVar[2]),11);
    bufp->chgSData(oldp+2,(__VdtypeVar[1]),11);
    bufp->chgSData(oldp+3,(__VdtypeVar[0]),11);
}

void Vriscv_soc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_cleanup\n"); );
    // Body
    Vriscv_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
