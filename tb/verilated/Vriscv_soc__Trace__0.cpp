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

extern const VlUnpacked<CData/*0:0*/, 1024> Vriscv_soc__ConstPool__TABLE_h830b1134_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vriscv_soc__ConstPool__TABLE_haa28ef1b_0;
void Vriscv_soc___024root__trace_chg_dtype____0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____1(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____2(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____3(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____4(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____5(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*45:0*/, 2>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____6(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*38:0*/, 2>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____7(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 2>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____8(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 2>& __VdtypeVar);
extern const VlUnpacked<CData/*7:0*/, 512> Vriscv_soc__ConstPool__TABLE_h2582090b_0;
void Vriscv_soc___024root__trace_chg_dtype____9(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____10(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*68:0*/, 4>& __VdtypeVar);
void Vriscv_soc___024root__trace_chg_dtype____11(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*10:0*/, 4>& __VdtypeVar);
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
        bufp->chgQData(oldp+27,((((QData)((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rdata_i)) 
                                  << 7U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rresp_i) 
                                                             << 5U) 
                                                            | (((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rid_i) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rlast_i))))))),39);
        bufp->chgCData(oldp+29,((((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_bresp_i) 
                                  << 4U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_bid_i))),6);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+30,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_rready_i));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_bready_i));
        bufp->chgCData(oldp+32,((6U | ((((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                         | (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) 
                                        << 3U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_rready_i)))),4);
        bufp->chgCData(oldp+33,((2U | (((7U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                        << 3U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_bready_i)))),4);
        bufp->chgBit(oldp+34,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w));
        bufp->chgBit(oldp+35,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
                                ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
                                : (IData)(vlSelfRef.__Vcellinp__riscv_soc__spi_miso_i))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgCData(oldp+36,(((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_arvalid_o) 
                                   << 3U) | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i) 
                                     << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_arvalid_i)))),4);
        bufp->chgCData(oldp+37,((((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                  << 3U) | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i)))),4);
        bufp->chgBit(oldp+38,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i)
                                : ((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                       >> 2U)) & ((8U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                   ? 
                                                  (6U 
                                                   == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))
                                                   : (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i))))));
        bufp->chgCData(oldp+39,((((((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_48) 
                                    | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_arvalid_o)) 
                                   << 3U) | ((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_48) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_47) 
                                     << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_arvalid_i)))),4);
        bufp->chgCData(oldp+40,((((((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                    | (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_26)) 
                                   << 3U) | ((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_26) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_26) 
                                     << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i)))),4);
        bufp->chgBit(oldp+41,(Vriscv_soc__ConstPool__TABLE_h830b1134_0
                              [(((((4U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                                          << 2U)) | 
                                   ((2U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                                           << 1U)) 
                                    | (1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q))))) 
                                  << 7U) | (((2U & 
                                              ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))) 
                                            << 5U)) 
                                | ((0x00000010U & (
                                                   (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)) 
                                                   << 4U)) 
                                   | (((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)) 
                                       << 3U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))))]));
        bufp->chgCData(oldp+42,((0x0000000fU & (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)) 
                                                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))
                                                 : 
                                                ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q) 
                                                 - 
                                                 ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w)) 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)))))),4);
        bufp->chgBit(oldp+43,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                        ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))
                                        : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awready_o))
                                    : (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_33))
                                : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    ? (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_32)
                                    : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                        ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i)
                                        : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))))));
        bufp->chgBit(oldp+44,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                        ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))
                                        : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awready_o))
                                    : (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_33))
                                : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                    ? (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_32)
                                    : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                        ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i)
                                        : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))))));
        bufp->chgBit(oldp+45,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o))));
        bufp->chgIData(oldp+46,(((0U == (0x000000ffU 
                                         & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                  ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q
                                  : ((4U == (0x000000ffU 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                      ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q
                                      : ((8U == (0x000000ffU 
                                                 & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                          ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w
                                          : ((0x14U 
                                              == (0x000000ffU 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                              ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q
                                              : ((0x20U 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                                  ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q
                                                  : 
                                                 ((0x24U 
                                                   == 
                                                   (0x000000ffU 
                                                    & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                                   ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q
                                                   : 
                                                  (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                                   & (- (IData)(
                                                                (0x28U 
                                                                 == 
                                                                 (0x000000ffU 
                                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)))))))))))),32);
        bufp->chgBit(oldp+47,(((8U == (0x000000ffU 
                                       & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)) 
                               & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o)))));
        bufp->chgBit(oldp+48,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o))));
        bufp->chgIData(oldp+49,(((0U == (0x000000ffU 
                                         & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                  ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q)
                                  : ((4U == (0x000000ffU 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                      ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w)
                                      : ((8U == (0x000000ffU 
                                                 & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                          ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q)
                                          : ((0x18U 
                                              == (0x000000ffU 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                              ? Vriscv_soc__ConstPool__TABLE_haa28ef1b_0
                                             [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w]
                                              : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q) 
                                                 & (- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x000000ffU 
                                                                & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)))))))))),32);
        bufp->chgBit(oldp+50,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o))));
        bufp->chgIData(oldp+51,(((8U == (0x000000ffU 
                                         & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                  ? (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                                      << 2U) | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                                                << 1U))
                                  : ((0x0cU == (0x000000ffU 
                                                & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                      ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q
                                      : ((0x10U == 
                                          (0x000000ffU 
                                           & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                          ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q
                                          : ((0x14U 
                                              == (0x000000ffU 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                              ? (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                                                  << 2U) 
                                                 | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                                                    << 1U))
                                              : ((0x18U 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                                  ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q
                                                  : 
                                                 (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q 
                                                  & (- (IData)(
                                                               (0x1cU 
                                                                == 
                                                                (0x000000ffU 
                                                                 & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))))))))))),32);
        bufp->chgIData(oldp+52,(((0U == (0x000000ffU 
                                         & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                  ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q)
                                  : ((8U == (0x000000ffU 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
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
                                                      & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)))))))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgBit(oldp+53,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
        bufp->chgBit(oldp+54,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i))));
        bufp->chgBit(oldp+55,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awready_o));
        bufp->chgBit(oldp+57,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i))));
        bufp->chgBit(oldp+58,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))));
        bufp->chgBit(oldp+59,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
        bufp->chgBit(oldp+60,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wready_o));
        bufp->chgCData(oldp+62,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o),4);
        bufp->chgBit(oldp+63,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_arvalid_o));
        bufp->chgBit(oldp+65,(((3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i));
        bufp->chgIData(oldp+68,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wdata_i),32);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_arvalid_o));
        bufp->chgCData(oldp+70,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wstrb_i),4);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_awready_i));
        bufp->chgIData(oldp+72,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i),32);
        bufp->chgBit(oldp+73,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_awready_i));
        bufp->chgBit(oldp+74,(((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+75,(((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awready_i));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o));
        bufp->chgIData(oldp+79,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awaddr_i),32);
        bufp->chgBit(oldp+80,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_awready_i));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_awvalid_o));
        bufp->chgBit(oldp+83,(((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
        bufp->chgCData(oldp+84,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                  ? 1U : (1U & (- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                               >> 2U)))))))),2);
        bufp->chgBit(oldp+85,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o));
        bufp->chgBit(oldp+86,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_awready_i));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o));
        bufp->chgBit(oldp+89,(((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+90,(((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
        bufp->chgBit(oldp+91,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+92,(((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_arvalid_o));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_o));
        bufp->chgCData(oldp+96,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_o),4);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_wvalid_o));
        bufp->chgCData(oldp+98,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                  ? 0U : ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                           ? 7U : 0U))),8);
        bufp->chgBit(oldp+99,(((3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
        bufp->chgBit(oldp+100,(((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
        bufp->chgBit(oldp+101,(((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                                & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_arvalid_i));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awready_o));
        bufp->chgBit(oldp+104,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                 >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
        bufp->chgBit(oldp+105,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                 >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i))));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_arready_i));
        bufp->chgIData(oldp+107,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r),32);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__read_en_w));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w));
        bufp->chgBit(oldp+110,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w) 
                                & ((0U == (0x000000ffU 
                                           & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awaddr_i)) 
                                   & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wstrb_i) 
                                      & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wdata_i)))));
        bufp->chgCData(oldp+111,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w),4);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w),4);
        bufp->chgBit(oldp+113,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r));
        bufp->chgCData(oldp+115,(((((0U != (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12)) 
                                    << 3U) | ((0U != 
                                               (7U 
                                                & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))) 
                                              << 2U)) 
                                  | (((0U != (3U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))) 
                                      << 1U) | (1U 
                                                & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))))),4);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w),4);
        bufp->chgCData(oldp+117,((0x0000000fU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                                  << 1U)))),4);
        bufp->chgCData(oldp+118,(((((0U != (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13)) 
                                    << 3U) | ((0U != 
                                               (7U 
                                                & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))) 
                                              << 2U)) 
                                  | (((0U != (3U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))) 
                                      << 1U) | (1U 
                                                & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))))),4);
        bufp->chgCData(oldp+119,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w),4);
        bufp->chgCData(oldp+120,((0x0000000fU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                                 ^ 
                                                 ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                                  << 1U)))),4);
        bufp->chgCData(oldp+121,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r),3);
        bufp->chgBit(oldp+122,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w));
        bufp->chgCData(oldp+124,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r),3);
        bufp->chgBit(oldp+125,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w));
        bufp->chgQData(oldp+129,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)) 
                                   << 0x0000000eU) 
                                  | (QData)((IData)(
                                                    (1U 
                                                     | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o) 
                                                         << 0x0000000aU) 
                                                        | (((2U 
                                                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                             ? 0U
                                                             : 
                                                            ((4U 
                                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                              ? 7U
                                                              : 0U)) 
                                                           << 2U))))))),46);
        bufp->chgQData(oldp+131,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awaddr_i)) 
                                   << 0x0000000eU) 
                                  | (QData)((IData)(
                                                    (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_o) 
                                                      << 0x0000000aU) 
                                                     | ((2U 
                                                         & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                         ? 1U
                                                         : 
                                                        (1U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                           >> 2U)))))))))))),46);
        bufp->chgQData(oldp+133,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o)) 
                                   << 0x00000024U) 
                                  | (((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wstrb_i)) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wdata_i))))),37);
        bufp->chgBit(oldp+135,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w));
        bufp->chgIData(oldp+137,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r),32);
        bufp->chgBit(oldp+138,(((0x60U == (0x000000ffU 
                                           & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w))));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__read_en_w));
        bufp->chgBit(oldp+142,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w));
        bufp->chgBit(oldp+143,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__write_complete_w));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__read_complete_w));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_pop_w));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+147,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i))));
        bufp->chgCData(oldp+148,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_bresp_i),2);
        bufp->chgBit(oldp+149,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i))));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q));
        bufp->chgIData(oldp+154,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q),32);
        bufp->chgBit(oldp+156,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
        bufp->chgIData(oldp+157,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                          [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                          >> 0x0000000eU))),32);
        bufp->chgCData(oldp+158,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                         >> 0x0000000aU)))),4);
        bufp->chgCData(oldp+159,((0x000000ffU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                         >> 2U)))),8);
        bufp->chgCData(oldp+160,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                               [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q]))),2);
        bufp->chgBit(oldp+161,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
        bufp->chgIData(oldp+162,((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q])),32);
        bufp->chgCData(oldp+163,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                                         >> 0x00000020U)))),4);
        bufp->chgBit(oldp+164,((1U & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                              >> 0x00000024U)))));
        bufp->chgBit(oldp+165,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
        bufp->chgBit(oldp+166,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
        bufp->chgIData(oldp+167,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                          [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                          >> 0x0000000eU))),32);
        bufp->chgCData(oldp+168,((0x0000000fU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                         >> 0x0000000aU)))),4);
        bufp->chgCData(oldp+169,((0x000000ffU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                         >> 2U)))),8);
        bufp->chgCData(oldp+170,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                               [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q]))),2);
        bufp->chgBit(oldp+171,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
        bufp->chgIData(oldp+172,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__status_o),32);
        bufp->chgCData(oldp+173,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_bid_i),4);
        bufp->chgBit(oldp+174,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_bvalid_o));
        bufp->chgBit(oldp+175,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                 >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i))));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__intr_q));
        bufp->chgCData(oldp+177,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rid_i),4);
        bufp->chgBit(oldp+178,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                                 >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i))));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q));
        bufp->chgBit(oldp+180,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
        bufp->chgBit(oldp+181,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)))));
        bufp->chgBit(oldp+182,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)))));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q));
        bufp->chgIData(oldp+184,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_i),32);
        bufp->chgBit(oldp+185,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)))));
        bufp->chgIData(oldp+186,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q),32);
        bufp->chgBit(oldp+187,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))));
        bufp->chgBit(oldp+188,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
        bufp->chgBit(oldp+189,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
        bufp->chgBit(oldp+190,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_i));
        bufp->chgCData(oldp+191,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rid_i),4);
        bufp->chgBit(oldp+192,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
        bufp->chgCData(oldp+193,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_i),2);
        bufp->chgCData(oldp+194,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bid_i),4);
        bufp->chgBit(oldp+195,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q));
        bufp->chgBit(oldp+196,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q));
        bufp->chgBit(oldp+197,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i));
        bufp->chgBit(oldp+198,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q));
        bufp->chgBit(oldp+200,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q));
        bufp->chgBit(oldp+201,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q))));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q));
        bufp->chgIData(oldp+203,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q),32);
        bufp->chgBit(oldp+204,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q));
        bufp->chgIData(oldp+205,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q),32);
        bufp->chgBit(oldp+206,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q));
        bufp->chgBit(oldp+208,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
        bufp->chgIData(oldp+209,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q),32);
        bufp->chgBit(oldp+210,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i));
        bufp->chgCData(oldp+211,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_i),2);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q),32);
        bufp->chgBit(oldp+213,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))));
        bufp->chgBit(oldp+214,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__bvalid_q));
        bufp->chgBit(oldp+215,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)))));
        bufp->chgBit(oldp+216,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q));
        bufp->chgIData(oldp+217,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rd_data_q),32);
        bufp->chgBit(oldp+218,((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
        bufp->chgIData(oldp+219,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q 
                                  + ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                                     << 2U))),32);
        bufp->chgIData(oldp+220,(((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))
                                   ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                                  [(3U & VL_DIV_III(4, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q), (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))]
                                  [(3U & VL_MODDIV_III(4, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q), (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))]
                                   : 0U)),32);
        bufp->chgBit(oldp+221,((7U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
        bufp->chgBit(oldp+222,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_arvalid_o));
        bufp->chgIData(oldp+223,(((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))
                                   ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q 
                                      + ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                                         << 2U)) : 
                                  (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q 
                                   + ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                                      << 2U)))),32);
        bufp->chgBit(oldp+224,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                | (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)))));
        bufp->chgBit(oldp+225,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                 >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i))));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rvalid_i));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q));
        bufp->chgCData(oldp+229,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q),4);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q),32);
        bufp->chgIData(oldp+231,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q),32);
        bufp->chgIData(oldp+232,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q),32);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cycle_q),32);
        bufp->chgIData(oldp+234,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__mac_cycle_q),32);
        bufp->chgIData(oldp+235,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q),32);
        bufp->chgCData(oldp+236,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q),3);
        bufp->chgCData(oldp+237,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q),3);
        bufp->chgCData(oldp+238,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q),3);
        bufp->chgCData(oldp+239,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q),4);
        bufp->chgCData(oldp+240,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_q),4);
        Vriscv_soc___024root__trace_chg_dtype____0(vlSelf, bufp, 241, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem);
        Vriscv_soc___024root__trace_chg_dtype____1(vlSelf, bufp, 257, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem);
        Vriscv_soc___024root__trace_chg_dtype____2(vlSelf, bufp, 273, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum);
        Vriscv_soc___024root__trace_chg_dtype____3(vlSelf, bufp, 289, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe);
        Vriscv_soc___024root__trace_chg_dtype____4(vlSelf, bufp, 305, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe);
        bufp->chgIData(oldp+321,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[0]),32);
        bufp->chgIData(oldp+322,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[1]),32);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[2]),32);
        bufp->chgIData(oldp+324,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[3]),32);
        bufp->chgIData(oldp+325,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[0]),32);
        bufp->chgIData(oldp+326,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[1]),32);
        bufp->chgIData(oldp+327,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[2]),32);
        bufp->chgIData(oldp+328,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[3]),32);
        bufp->chgIData(oldp+329,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__i),32);
        bufp->chgIData(oldp+330,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row),32);
        bufp->chgIData(oldp+331,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col),32);
        bufp->chgIData(oldp+332,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx),32);
        bufp->chgBit(oldp+333,(((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                & ((4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                   & ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)) 
                                      & ((4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)) 
                                         & ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)) 
                                            & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))))))));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w));
        bufp->chgBit(oldp+335,((((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                 & ((4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                    & ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)) 
                                       & ((4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)) 
                                          & ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)) 
                                             & (4U 
                                                >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))))))) 
                                & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w) 
                                   & ((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                      | (8U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)))))));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q));
        bufp->chgCData(oldp+337,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r),4);
        bufp->chgBit(oldp+338,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q));
        bufp->chgBit(oldp+339,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q));
        bufp->chgCData(oldp+340,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r),4);
        bufp->chgCData(oldp+341,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q),4);
        bufp->chgCData(oldp+342,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q),4);
        bufp->chgCData(oldp+343,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q),4);
        bufp->chgCData(oldp+344,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q),4);
        bufp->chgCData(oldp+345,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q),4);
        bufp->chgCData(oldp+346,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q),4);
        bufp->chgCData(oldp+347,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q),3);
        bufp->chgCData(oldp+348,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q),4);
        bufp->chgCData(oldp+349,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q),4);
        bufp->chgCData(oldp+350,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q),3);
        bufp->chgIData(oldp+351,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q),32);
        bufp->chgBit(oldp+352,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_wr_q));
        bufp->chgBit(oldp+353,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_input_wr_q));
        bufp->chgBit(oldp+354,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q));
        bufp->chgBit(oldp+355,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q));
        bufp->chgBit(oldp+356,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_wr_q));
        bufp->chgIData(oldp+358,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q),32);
        bufp->chgBit(oldp+359,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_status_wr_q));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_wr_q));
        bufp->chgIData(oldp+363,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q),32);
        bufp->chgBit(oldp+364,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_wr_q));
        bufp->chgIData(oldp+365,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q),32);
        bufp->chgIData(oldp+366,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q),32);
        bufp->chgIData(oldp+367,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q),32);
        bufp->chgIData(oldp+368,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_ms),32);
        bufp->chgIData(oldp+369,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q)
                                   ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                      | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)
                                   : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q)
                                       ? ((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q) 
                                          & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)
                                       : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q)
                                           ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q
                                           : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)))),32);
        bufp->chgIData(oldp+370,((((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q) 
                                   & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_62) 
                                  | (((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                       ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q) 
                                      & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                         & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_62)) 
                                     | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q)
                                          ? ((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q) 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q)
                                          : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q) 
                                        | (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                           & (- (IData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q)))))))),32);
        bufp->chgIData(oldp+371,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q),32);
        bufp->chgIData(oldp+372,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q)),32);
        bufp->chgIData(oldp+373,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q)),32);
        bufp->chgIData(oldp+374,(((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q) 
                                  & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_62)),32);
        bufp->chgIData(oldp+375,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                  ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q)),32);
        bufp->chgIData(oldp+376,(((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                   ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q) 
                                  & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                     & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_62))),32);
        bufp->chgIData(oldp+377,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q),32);
        bufp->chgBit(oldp+378,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_isr_wr_q));
        bufp->chgCData(oldp+379,((0x0000000fU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q)),4);
        bufp->chgBit(oldp+380,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_wr_q));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_wr_q));
        bufp->chgCData(oldp+383,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q),4);
        bufp->chgBit(oldp+384,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q));
        bufp->chgBit(oldp+385,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ivr_wr_q));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_wr_q));
        bufp->chgBit(oldp+388,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q));
        bufp->chgCData(oldp+389,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q),4);
        bufp->chgCData(oldp+390,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w),4);
        bufp->chgCData(oldp+391,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q),4);
        bufp->chgIData(oldp+392,(Vriscv_soc__ConstPool__TABLE_haa28ef1b_0
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w]),32);
        bufp->chgCData(oldp+393,(((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q) 
                                    << 3U) | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q) 
                                      << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q)))),4);
        bufp->chgQData(oldp+394,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q]),46);
        bufp->chgQData(oldp+396,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q]),37);
        bufp->chgCData(oldp+398,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q]),6);
        bufp->chgQData(oldp+399,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q]),46);
        bufp->chgQData(oldp+401,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q]),39);
        Vriscv_soc___024root__trace_chg_dtype____5(vlSelf, bufp, 403, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q);
        bufp->chgBit(oldp+407,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q));
        bufp->chgCData(oldp+409,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q),2);
        Vriscv_soc___024root__trace_chg_dtype____6(vlSelf, bufp, 410, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q);
        bufp->chgBit(oldp+414,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q));
        bufp->chgBit(oldp+415,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q));
        bufp->chgCData(oldp+416,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q),2);
        Vriscv_soc___024root__trace_chg_dtype____5(vlSelf, bufp, 417, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q);
        bufp->chgBit(oldp+421,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q));
        bufp->chgBit(oldp+422,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q));
        bufp->chgCData(oldp+423,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q),2);
        Vriscv_soc___024root__trace_chg_dtype____7(vlSelf, bufp, 424, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q);
        bufp->chgBit(oldp+428,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q));
        bufp->chgBit(oldp+429,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q));
        bufp->chgCData(oldp+430,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q),2);
        Vriscv_soc___024root__trace_chg_dtype____8(vlSelf, bufp, 431, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q);
        bufp->chgBit(oldp+433,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q));
        bufp->chgBit(oldp+434,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q));
        bufp->chgCData(oldp+435,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q),2);
        bufp->chgBit(oldp+436,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_wr_q));
        bufp->chgBit(oldp+437,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q));
        bufp->chgBit(oldp+439,((1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                      >> 2U))));
        bufp->chgBit(oldp+440,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_wr_q));
        bufp->chgBit(oldp+441,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q));
        bufp->chgBit(oldp+442,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_wr_q));
        bufp->chgIData(oldp+443,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q),32);
        bufp->chgBit(oldp+444,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q));
        bufp->chgBit(oldp+446,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q));
        bufp->chgBit(oldp+447,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q));
        bufp->chgBit(oldp+448,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q));
        bufp->chgBit(oldp+449,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q));
        bufp->chgBit(oldp+451,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q));
        bufp->chgBit(oldp+452,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q));
        bufp->chgBit(oldp+453,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q));
        bufp->chgBit(oldp+454,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q));
        bufp->chgBit(oldp+455,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_sr_wr_q));
        bufp->chgBit(oldp+456,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q));
        bufp->chgCData(oldp+457,((0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q)),8);
        bufp->chgBit(oldp+458,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_wr_q));
        bufp->chgBit(oldp+459,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_wr_q));
        bufp->chgBit(oldp+460,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        bufp->chgBit(oldp+461,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        bufp->chgBit(oldp+462,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        bufp->chgBit(oldp+463,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        bufp->chgCData(oldp+464,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q]),8);
        bufp->chgBit(oldp+465,((0x0000000aU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q)));
        bufp->chgBit(oldp+466,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w));
        bufp->chgBit(oldp+467,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w));
        bufp->chgBit(oldp+468,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        bufp->chgBit(oldp+469,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
        bufp->chgCData(oldp+470,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q]),8);
        bufp->chgBit(oldp+471,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q));
        bufp->chgCData(oldp+472,(Vriscv_soc__ConstPool__TABLE_h2582090b_0
                                 [(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
                                            [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q]) 
                                    << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))]),8);
        bufp->chgBit(oldp+473,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        bufp->chgBit(oldp+474,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
        bufp->chgCData(oldp+475,(Vriscv_soc__ConstPool__TABLE_h2582090b_0
                                 [(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                    << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))]),8);
        bufp->chgBit(oldp+476,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q));
        bufp->chgCData(oldp+477,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q),6);
        bufp->chgCData(oldp+478,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q),8);
        bufp->chgIData(oldp+479,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q),32);
        bufp->chgBit(oldp+480,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
                                & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q)))));
        bufp->chgBit(oldp+481,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w));
        bufp->chgBit(oldp+482,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q)));
        bufp->chgBit(oldp+483,(((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_29) 
                                & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_65)))));
        bufp->chgBit(oldp+484,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r));
        bufp->chgBit(oldp+485,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q));
        bufp->chgBit(oldp+486,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q));
        Vriscv_soc___024root__trace_chg_dtype____9(vlSelf, bufp, 487, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q);
        bufp->chgCData(oldp+491,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q),2);
        bufp->chgCData(oldp+492,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q),2);
        bufp->chgCData(oldp+493,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q),3);
        Vriscv_soc___024root__trace_chg_dtype____9(vlSelf, bufp, 494, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q);
        bufp->chgCData(oldp+498,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q),2);
        bufp->chgCData(oldp+499,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q),2);
        bufp->chgCData(oldp+500,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q),3);
        bufp->chgIData(oldp+501,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q),32);
        bufp->chgBit(oldp+502,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_wr_q));
        bufp->chgBit(oldp+503,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q));
        bufp->chgBit(oldp+504,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q));
        bufp->chgBit(oldp+505,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_wr_q));
        bufp->chgIData(oldp+506,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q),32);
        bufp->chgBit(oldp+507,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q));
        bufp->chgBit(oldp+508,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_wr_q));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q));
        bufp->chgBit(oldp+510,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q));
        bufp->chgBit(oldp+511,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_wr_q));
        bufp->chgIData(oldp+512,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q),32);
        bufp->chgBit(oldp+513,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q));
        bufp->chgIData(oldp+514,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q),32);
        bufp->chgIData(oldp+515,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q),32);
        bufp->chgBit(oldp+516,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                                & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                                   & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q 
                                      == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q)))));
        bufp->chgBit(oldp+517,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                                & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                                   & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q 
                                      == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q)))));
        bufp->chgBit(oldp+518,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_wr_q));
        bufp->chgBit(oldp+519,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q));
        bufp->chgBit(oldp+520,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_status_wr_q));
        bufp->chgBit(oldp+521,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_wr_q));
        bufp->chgBit(oldp+522,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q));
        bufp->chgBit(oldp+523,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q));
        bufp->chgBit(oldp+524,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_tx_q));
        bufp->chgCData(oldp+525,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q),8);
        bufp->chgBit(oldp+526,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q));
        bufp->chgBit(oldp+527,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)))));
        bufp->chgBit(oldp+528,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q));
        bufp->chgCData(oldp+529,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q),4);
        bufp->chgIData(oldp+530,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q),32);
        bufp->chgCData(oldp+531,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q),8);
        bufp->chgBit(oldp+532,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q));
        bufp->chgCData(oldp+533,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q),4);
        bufp->chgIData(oldp+534,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q),32);
        bufp->chgCData(oldp+535,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q),8);
        bufp->chgBit(oldp+536,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q));
        bufp->chgBit(oldp+537,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q));
        bufp->chgBit(oldp+538,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q));
        bufp->chgBit(oldp+539,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q)));
        bufp->chgBit(oldp+540,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q)));
        bufp->chgBit(oldp+541,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q));
        bufp->chgBit(oldp+542,((1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)) 
                                      | ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                         & ((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                            | ((0x0aU 
                                                == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                               | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q))))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+543,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awaddr_i),32);
        bufp->chgIData(oldp+544,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][1U]),32);
        bufp->chgCData(oldp+545,((0x0000000fU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                  [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U])),4);
        bufp->chgIData(oldp+546,((0xffffffe0U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q)),32);
        bufp->chgBit(oldp+547,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o));
        bufp->chgBit(oldp+548,(((0x80000000U <= ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
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
        bufp->chgSData(oldp+549,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q]),11);
        bufp->chgBit(oldp+550,(((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w))) 
                                && (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
        bufp->chgIData(oldp+551,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                   ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                   : ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                         ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                            >> 0x0000000cU)
                                         : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                            >> 0x0000000cU)) 
                                       << 0x0000000cU) 
                                      | (0x00000fffU 
                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))),32);
        bufp->chgBit(oldp+552,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q) 
                                | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q))));
        bufp->chgSData(oldp+553,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                   ? 0x0380U : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q))),11);
        bufp->chgIData(oldp+554,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                   ? 0U : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)),32);
        bufp->chgBit(oldp+555,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_rd_i));
        bufp->chgBit(oldp+556,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q));
        bufp->chgCData(oldp+557,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_wr_i),4);
        bufp->chgBit(oldp+558,(((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w))) 
                                && (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
        bufp->chgBit(oldp+559,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
        bufp->chgBit(oldp+560,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
        bufp->chgBit(oldp+561,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_pending_q));
        bufp->chgBit(oldp+562,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
        bufp->chgWData(oldp+563,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q]),69);
        bufp->chgBit(oldp+566,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_push_w));
        bufp->chgBit(oldp+567,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__res_push_w));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q));
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
        bufp->chgWData(oldp+570,(__Vtemp_1),69);
        Vriscv_soc___024root__trace_chg_dtype____10(vlSelf, bufp, 573, vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q);
        bufp->chgCData(oldp+585,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q),2);
        bufp->chgCData(oldp+586,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q),2);
        bufp->chgCData(oldp+587,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q),3);
        bufp->chgBit(oldp+588,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
        Vriscv_soc___024root__trace_chg_dtype____11(vlSelf, bufp, 589, vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q);
        bufp->chgCData(oldp+593,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q),2);
        bufp->chgCData(oldp+594,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q),2);
        bufp->chgCData(oldp+595,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q),3);
        bufp->chgBit(oldp+596,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__invalidate_q));
        bufp->chgBit(oldp+597,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_valid_q));
        bufp->chgIData(oldp+598,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q),32);
        bufp->chgIData(oldp+599,((vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                                  >> 0x0000000dU)),19);
        bufp->chgSData(oldp+600,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_write_addr_q),11);
        bufp->chgCData(oldp+601,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__flush_addr_q),8);
        bufp->chgBit(oldp+602,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_q));
        bufp->chgBit(oldp+603,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w));
        bufp->chgQData(oldp+604,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q),58);
        bufp->chgBit(oldp+606,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w) 
                                & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o))));
        bufp->chgBit(oldp+607,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q));
        bufp->chgIData(oldp+608,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q),32);
        bufp->chgBit(oldp+609,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
        bufp->chgIData(oldp+611,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q),32);
        bufp->chgBit(oldp+612,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                 ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
                                    & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_load_fault_w)) 
                                       & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)))
                                 : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q))));
        bufp->chgBit(oldp+613,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q));
        bufp->chgIData(oldp+614,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q),32);
        bufp->chgCData(oldp+615,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
        bufp->chgBit(oldp+616,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q));
        bufp->chgIData(oldp+617,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
        bufp->chgSData(oldp+618,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q),11);
        bufp->chgCData(oldp+619,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q),5);
        bufp->chgBit(oldp+620,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fault_page_store_w));
        bufp->chgBit(oldp+621,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w));
        bufp->chgBit(oldp+622,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w));
        bufp->chgCData(oldp+623,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w),5);
        bufp->chgIData(oldp+624,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q),32);
        bufp->chgCData(oldp+625,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x00000014U))),5);
        bufp->chgBit(oldp+626,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q));
        bufp->chgBit(oldp+627,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q));
        bufp->chgBit(oldp+628,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w));
        bufp->chgIData(oldp+629,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
        bufp->chgIData(oldp+630,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_22)
                                   ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q
                                   : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q 
                                      & (- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_55)))))),32);
        bufp->chgIData(oldp+631,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_pc_w),32);
        bufp->chgCData(oldp+632,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q),5);
        bufp->chgBit(oldp+633,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q));
        bufp->chgIData(oldp+634,(((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                     ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                        >> 0x0000000cU)
                                     : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                        >> 0x0000000cU)) 
                                   << 0x0000000cU) 
                                  | (0x00000fffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w))),32);
        bufp->chgBit(oldp+635,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q));
        bufp->chgBit(oldp+636,((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))));
        bufp->chgBit(oldp+637,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
        bufp->chgIData(oldp+638,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q),32);
        bufp->chgCData(oldp+639,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+640,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                   ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w) 
                                      & (- (IData)(
                                                   ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fault_page_store_w)) 
                                                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)))))
                                   : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))),4);
        bufp->chgIData(oldp+641,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q),32);
        bufp->chgBit(oldp+642,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                                & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o))));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_load_fault_w));
        bufp->chgIData(oldp+644,((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w) 
                                   << 0x0000001fU) 
                                  | (0x7fffffffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q))),32);
        bufp->chgCData(oldp+645,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 7U))),5);
        bufp->chgBit(oldp+646,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                      >> 0x00000012U))));
        bufp->chgIData(oldp+647,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q),32);
        bufp->chgIData(oldp+648,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q),32);
        bufp->chgBit(oldp+649,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__read_hold_q));
        bufp->chgBit(oldp+650,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_q));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w));
        bufp->chgBit(oldp+652,((7U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16))));
        bufp->chgIData(oldp+653,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q),32);
        bufp->chgIData(oldp+654,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_q),32);
        bufp->chgIData(oldp+655,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q),32);
        bufp->chgIData(oldp+656,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q),32);
        bufp->chgIData(oldp+657,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_q),32);
        bufp->chgIData(oldp+658,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q),32);
        bufp->chgCData(oldp+659,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q),2);
        bufp->chgIData(oldp+660,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q),32);
        bufp->chgIData(oldp+661,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_q),32);
        bufp->chgIData(oldp+662,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q),32);
        bufp->chgIData(oldp+663,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q),32);
        bufp->chgIData(oldp+664,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_q),32);
        bufp->chgIData(oldp+665,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_q),32);
        bufp->chgIData(oldp+666,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q),32);
        bufp->chgIData(oldp+667,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_q),32);
        bufp->chgIData(oldp+668,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__pc_m_q),32);
        bufp->chgIData(oldp+669,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r),32);
        bufp->chgCData(oldp+670,((3U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                        >> 0x0000001cU))),2);
        bufp->chgBit(oldp+671,((3U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                       >> 0x0000001eU))));
        bufp->chgBit(oldp+672,((1U & (IData)(((0ULL 
                                               != (0x0000120000000000ULL 
                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                              | (0U 
                                                 != 
                                                 (0x000f8000U 
                                                  & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)))))));
        bufp->chgBit(oldp+673,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r));
        bufp->chgBit(oldp+674,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r));
        bufp->chgIData(oldp+675,(((IData)(1U) + vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q)),32);
        bufp->chgIData(oldp+676,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q),32);
        bufp->chgIData(oldp+677,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q),32);
        bufp->chgBit(oldp+678,((0U != (0x0000003fU 
                                       & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x0000001dU))))));
        bufp->chgBit(oldp+679,((0U != (7U & (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x00000023U))))));
        bufp->chgIData(oldp+680,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r),32);
        bufp->chgBit(oldp+681,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r));
        bufp->chgIData(oldp+682,(((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r))) 
                                  & vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_56)),32);
        bufp->chgBit(oldp+683,(((1U > (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                | ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                      >> 1U)))));
        bufp->chgIData(oldp+684,((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r 
                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q 
                                     & (- (IData)((
                                                   (1U 
                                                    > (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                   | ((1U 
                                                       == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                      & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                                         >> 1U)))))))),32);
        bufp->chgIData(oldp+685,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r),32);
        bufp->chgBit(oldp+686,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_en_q));
        bufp->chgCData(oldp+687,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_idx_q),5);
        bufp->chgBit(oldp+688,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__reset_q));
        bufp->chgBit(oldp+689,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w));
        bufp->chgBit(oldp+690,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__active_q));
        bufp->chgIData(oldp+691,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_pc_q),32);
        bufp->chgIData(oldp+692,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_q),32);
        bufp->chgBit(oldp+693,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_valid_q));
        bufp->chgBit(oldp+694,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_fetch_q));
        bufp->chgBit(oldp+695,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q));
        bufp->chgQData(oldp+696,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_buffer_q),64);
        bufp->chgBit(oldp+698,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q));
        bufp->chgIData(oldp+699,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__pc_d_q),32);
        bufp->chgBit(oldp+700,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q));
        bufp->chgBit(oldp+701,((0U != (7U & (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x0000001dU))))));
        bufp->chgBit(oldp+702,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x00000029U)) 
                                & (0x03a0U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x00000014U)))));
        bufp->chgBit(oldp+703,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x00000029U)) 
                                & (0x03a1U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x00000014U)))));
        bufp->chgBit(oldp+704,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x00000029U)) 
                                & (0x03a2U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x00000014U)))));
        bufp->chgCData(oldp+705,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q),2);
        bufp->chgBit(oldp+706,((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q))));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_q));
        bufp->chgCData(oldp+708,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_q),4);
        bufp->chgBit(oldp+709,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w));
        bufp->chgCData(oldp+710,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w),4);
        bufp->chgIData(oldp+711,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w),32);
        bufp->chgBit(oldp+712,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w));
        bufp->chgBit(oldp+713,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q));
        bufp->chgIData(oldp+714,((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q 
                                  << 0x0000000cU)),32);
        bufp->chgBit(oldp+715,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_miss_w));
        bufp->chgIData(oldp+716,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q),32);
        bufp->chgIData(oldp+717,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__virt_addr_q),32);
        bufp->chgBit(oldp+718,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_valid_q));
        bufp->chgIData(oldp+719,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_va_addr_q),20);
        bufp->chgIData(oldp+720,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q),32);
        bufp->chgBit(oldp+721,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_valid_q));
        bufp->chgIData(oldp+722,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_va_addr_q),20);
        bufp->chgIData(oldp+723,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q),32);
        bufp->chgCData(oldp+724,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__rd_q),5);
        bufp->chgIData(oldp+725,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_q),32);
        bufp->chgBit(oldp+726,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_busy_q));
        bufp->chgBit(oldp+727,((0U != (0x0000000fU 
                                       & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x0000002fU))))));
        bufp->chgBit(oldp+728,((0U != (0x0000000fU 
                                       & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x00000033U))))));
        bufp->chgBit(oldp+729,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__signed_operation_w));
        bufp->chgBit(oldp+730,((0U != (3U & (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x00000033U))))));
        bufp->chgIData(oldp+731,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q),32);
        bufp->chgQData(oldp+732,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__divisor_q),63);
        bufp->chgIData(oldp+734,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q),32);
        bufp->chgIData(oldp+735,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q),32);
        bufp->chgBit(oldp+736,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q));
        bufp->chgBit(oldp+737,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q));
        bufp->chgBit(oldp+738,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q));
        bufp->chgBit(oldp+739,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w));
        bufp->chgIData(oldp+740,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q)
                                   ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                       ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                       : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                   : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                       ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q)
                                       : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q))),32);
        bufp->chgBit(oldp+741,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__valid_q));
        bufp->chgIData(oldp+742,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_q),32);
        bufp->chgIData(oldp+743,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ra_value_w),32);
        bufp->chgIData(oldp+744,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__rb_value_w),32);
        bufp->chgCData(oldp+745,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w),5);
        bufp->chgBit(oldp+746,((IData)((0ULL != (0x007ffe07e0000000ULL 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))));
        bufp->chgIData(oldp+747,((0xfffff000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)),32);
        bufp->chgIData(oldp+748,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
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
        bufp->chgIData(oldp+749,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
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
        bufp->chgIData(oldp+750,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | ((0x00000fe0U & 
                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                       >> 0x00000014U)) 
                                     | (0x0000001fU 
                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 7U))))),32);
        bufp->chgCData(oldp+751,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__alu_op_i),4);
        bufp->chgBit(oldp+752,((1U & (IData)(((0ULL 
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
        bufp->chgBit(oldp+753,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_valid_q));
        bufp->chgIData(oldp+754,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_pc_q),32);
        bufp->chgIData(oldp+755,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r1_q),32);
        bufp->chgIData(oldp+756,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r2_q),32);
        bufp->chgIData(oldp+757,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r3_q),32);
        bufp->chgIData(oldp+758,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r4_q),32);
        bufp->chgIData(oldp+759,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r5_q),32);
        bufp->chgIData(oldp+760,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r6_q),32);
        bufp->chgIData(oldp+761,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r7_q),32);
        bufp->chgIData(oldp+762,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r8_q),32);
        bufp->chgIData(oldp+763,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r9_q),32);
        bufp->chgIData(oldp+764,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r10_q),32);
        bufp->chgIData(oldp+765,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r11_q),32);
        bufp->chgIData(oldp+766,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r12_q),32);
        bufp->chgIData(oldp+767,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r13_q),32);
        bufp->chgIData(oldp+768,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r14_q),32);
        bufp->chgIData(oldp+769,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r15_q),32);
        bufp->chgIData(oldp+770,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r16_q),32);
        bufp->chgIData(oldp+771,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r17_q),32);
        bufp->chgIData(oldp+772,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r18_q),32);
        bufp->chgIData(oldp+773,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r19_q),32);
        bufp->chgIData(oldp+774,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r20_q),32);
        bufp->chgIData(oldp+775,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r21_q),32);
        bufp->chgIData(oldp+776,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r22_q),32);
        bufp->chgIData(oldp+777,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r23_q),32);
        bufp->chgIData(oldp+778,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r24_q),32);
        bufp->chgIData(oldp+779,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r25_q),32);
        bufp->chgIData(oldp+780,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r26_q),32);
        bufp->chgIData(oldp+781,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r27_q),32);
        bufp->chgIData(oldp+782,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r28_q),32);
        bufp->chgIData(oldp+783,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r29_q),32);
        bufp->chgIData(oldp+784,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r30_q),32);
        bufp->chgIData(oldp+785,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r31_q),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgBit(oldp+786,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w) 
                                & ((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w)))));
        bufp->chgBit(oldp+787,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w) 
                                & ((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w)))));
        bufp->chgIData(oldp+788,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                                   ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                                   : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_pc_w)),32);
        bufp->chgBit(oldp+789,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r) 
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
        bufp->chgIData(oldp+790,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r)
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
                                           ? vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_36
                                           : ((1U & (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x00000027U)))
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_36
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
        bufp->chgIData(oldp+791,(((0U != (7U & (IData)(
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
        bufp->chgWData(oldp+792,(__Vtemp_2),80);
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
        bufp->chgWData(oldp+795,(__Vtemp_5),80);
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
        bufp->chgWData(oldp+798,(__Vtemp_8),80);
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
        bufp->chgWData(oldp+801,(__Vtemp_11),80);
        bufp->chgIData(oldp+804,((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
                                  & (- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r))))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+805,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q),20);
        bufp->chgBit(oldp+806,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q 
                                      >> 0x00000013U))));
        bufp->chgIData(oldp+807,((0x0007ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q)),19);
        bufp->chgIData(oldp+808,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q),20);
        bufp->chgBit(oldp+809,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q 
                                      >> 0x00000013U))));
        bufp->chgIData(oldp+810,((0x0007ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q)),19);
        bufp->chgIData(oldp+811,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q),32);
        bufp->chgIData(oldp+812,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+813,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i),32);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rresp_i),2);
        bufp->chgBit(oldp+815,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o));
        bufp->chgBit(oldp+816,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rlast_i));
        bufp->chgBit(oldp+817,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_error_o));
        bufp->chgBit(oldp+818,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_ack_o));
        bufp->chgIData(oldp+819,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i 
                                  >> 0x0000000aU)),32);
        bufp->chgSData(oldp+820,((0x000003ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i)),10);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+821,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w));
        bufp->chgBit(oldp+822,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w));
        bufp->chgBit(oldp+823,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_hit_any_w));
        bufp->chgIData(oldp+824,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w),32);
        bufp->chgQData(oldp+825,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w),58);
        bufp->chgBit(oldp+827,(((0x10500073U == (0xffff8fffU 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                | ((0x0000000fU == 
                                    (0x0000707fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                   | ((0x12000073U 
                                       == (0xfe007fffU 
                                           & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                      | (0x0000100fU 
                                         == (0x0000707fU 
                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))))));
        bufp->chgBit(oldp+828,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__invalid_inst_w));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgCData(oldp+829,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q),2);
        bufp->chgBit(oldp+830,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q));
        bufp->chgIData(oldp+831,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r),20);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+832,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i));
        bufp->chgBit(oldp+833,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i));
        bufp->chgBit(oldp+834,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i));
        bufp->chgBit(oldp+835,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wvalid_i));
        bufp->chgIData(oldp+836,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_pc_i),32);
        bufp->chgBit(oldp+837,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o));
        bufp->chgBit(oldp+838,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_25)))));
        bufp->chgCData(oldp+839,((0x000000ffU & (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_pc_i 
                                                 >> 5U))),8);
        bufp->chgSData(oldp+840,((0x000007ffU & (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_pc_i 
                                                 >> 2U))),11);
        bufp->chgCData(oldp+841,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r),2);
        bufp->chgCData(oldp+842,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r),8);
        bufp->chgSData(oldp+843,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r),11);
        bufp->chgBit(oldp+844,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_flush_w));
        bufp->chgBit(oldp+845,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_accept_w));
        bufp->chgBit(oldp+846,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_error_w));
        bufp->chgBit(oldp+847,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w));
        bufp->chgBit(oldp+849,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_request_w));
        bufp->chgIData(oldp+850,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w),32);
        bufp->chgBit(oldp+851,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_opcode_valid_w));
        bufp->chgIData(oldp+852,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_pc_w),32);
        bufp->chgBit(oldp+853,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_branch_w));
        bufp->chgIData(oldp+854,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w),32);
        bufp->chgCData(oldp+855,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r),5);
        bufp->chgBit(oldp+856,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_ack_w));
        bufp->chgBit(oldp+857,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w));
        bufp->chgIData(oldp+858,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
        bufp->chgIData(oldp+859,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w),32);
        bufp->chgBit(oldp+860,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_opcode_valid_w));
        bufp->chgBit(oldp+861,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__exec_opcode_valid_w));
        bufp->chgIData(oldp+862,(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_46),32);
        bufp->chgBit(oldp+863,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_access_fault_w));
        bufp->chgBit(oldp+864,((0U != (0xa050U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_46)))));
        bufp->chgIData(oldp+865,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r),32);
        bufp->chgIData(oldp+866,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r),32);
        bufp->chgIData(oldp+867,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r),32);
        bufp->chgIData(oldp+868,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r),32);
        bufp->chgIData(oldp+869,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r),32);
        bufp->chgIData(oldp+870,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r),32);
        bufp->chgCData(oldp+871,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r),2);
        bufp->chgIData(oldp+872,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r),32);
        bufp->chgIData(oldp+873,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r),32);
        bufp->chgIData(oldp+874,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r),32);
        bufp->chgIData(oldp+875,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r),32);
        bufp->chgIData(oldp+876,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r),32);
        bufp->chgIData(oldp+877,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r),32);
        bufp->chgIData(oldp+878,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r),32);
        bufp->chgIData(oldp+879,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r),32);
        bufp->chgIData(oldp+880,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r),32);
        bufp->chgBit(oldp+881,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r));
        bufp->chgBit(oldp+882,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r));
        bufp->chgBit(oldp+883,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exception_s_r));
        bufp->chgBit(oldp+884,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__interrupt_s_r));
        bufp->chgIData(oldp+885,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r),32);
        bufp->chgIData(oldp+886,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r),32);
        bufp->chgBit(oldp+887,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w));
        bufp->chgBit(oldp+888,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_w));
        bufp->chgIData(oldp+889,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_w),32);
        bufp->chgIData(oldp+890,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
        bufp->chgBit(oldp+891,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
        bufp->chgCData(oldp+892,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
        bufp->chgBit(oldp+893,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_byte_r));
        bufp->chgBit(oldp+894,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_half_r));
        bufp->chgBit(oldp+895,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_word_r));
        bufp->chgBit(oldp+896,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_signed_r));
        bufp->chgIData(oldp+897,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__request_addr_w),32);
        bufp->chgWData(oldp+898,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w),65);
        bufp->chgQData(oldp+901,((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_58)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w)))),33);
        bufp->chgQData(oldp+903,((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_59)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w)))),33);
        bufp->chgBit(oldp+905,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_start_w));
        bufp->chgBit(oldp+906,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_scoreboard_r));
        bufp->chgBit(oldp+907,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_input_w));
        bufp->chgIData(oldp+908,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r),32);
        bufp->chgBit(oldp+909,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r));
        bufp->chgIData(oldp+910,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r),32);
        bufp->chgIData(oldp+911,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_imm),32);
        bufp->chgIData(oldp+912,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__alu_a_i),32);
        bufp->chgIData(oldp+913,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__alu_b_i),32);
        bufp->chgIData(oldp+914,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__less_than_signed__Vstatic__v),32);
        bufp->chgIData(oldp+915,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__greater_than_signed__Vstatic__v),32);
        bufp->chgBit(oldp+916,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r));
        bufp->chgIData(oldp+917,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r),32);
        bufp->chgSData(oldp+918,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r),16);
        bufp->chgIData(oldp+919,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_1_r),32);
        bufp->chgIData(oldp+920,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_2_r),32);
        bufp->chgIData(oldp+921,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_4_r),32);
        bufp->chgIData(oldp+922,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_8_r),32);
        bufp->chgIData(oldp+923,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_1_r),32);
        bufp->chgIData(oldp+924,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_2_r),32);
        bufp->chgIData(oldp+925,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_4_r),32);
        bufp->chgIData(oldp+926,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_8_r),32);
        bufp->chgIData(oldp+927,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__sub_res_w),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+928,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_rd_i));
        bufp->chgBit(oldp+929,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_fetch_fault_w));
        bufp->chgBit(oldp+930,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_accept_w));
        bufp->chgBit(oldp+931,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w));
        bufp->chgBit(oldp+932,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_valid_w));
        bufp->chgBit(oldp+933,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__stall_w));
        bufp->chgBit(oldp+934,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w));
        bufp->chgBit(oldp+935,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_miss_w));
    }
    bufp->chgCData(oldp+936,((0x0000000fU & (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w))
                                              ? ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))
                                              : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q) 
                                                 - 
                                                 ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w)) 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)))))),4);
    bufp->chgBit(oldp+937,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w));
    bufp->chgIData(oldp+938,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w)
                               ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q
                               : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w)
                                   ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q
                                   : vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q))),32);
    bufp->chgBit(oldp+939,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o));
    bufp->chgBit(oldp+940,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_ack_o)) 
                            & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_pending_q))));
    bufp->chgBit(oldp+941,(((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                            | ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                               & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_24))))));
    bufp->chgBit(oldp+942,(((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                            | ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                               & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q) 
                                  & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_24))))));
    bufp->chgBit(oldp+943,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o))));
    bufp->chgBit(oldp+944,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o))));
    bufp->chgBit(oldp+945,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_busy_w));
    bufp->chgIData(oldp+946,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q)
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

void Vriscv_soc___024root__trace_chg_dtype____0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
}

void Vriscv_soc___024root__trace_chg_dtype____1(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
}

void Vriscv_soc___024root__trace_chg_dtype____2(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0U][0U]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0U][1U]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[0U][2U]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[0U][3U]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[1U][0U]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[1U][1U]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[1U][2U]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[1U][3U]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[2U][0U]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[2U][1U]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[2U][2U]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[2U][3U]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[3U][0U]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[3U][1U]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[3U][2U]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[3U][3U]),32);
}

void Vriscv_soc___024root__trace_chg_dtype____3(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____3\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0U][0U]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0U][1U]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[0U][2U]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[0U][3U]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[1U][0U]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[1U][1U]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[1U][2U]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[1U][3U]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[2U][0U]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[2U][1U]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[2U][2U]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[2U][3U]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[3U][0U]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[3U][1U]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[3U][2U]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[3U][3U]),32);
}

void Vriscv_soc___024root__trace_chg_dtype____4(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____4\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0U][0U]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[0U][1U]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[0U][2U]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[0U][3U]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[1U][0U]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[1U][1U]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[1U][2U]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[1U][3U]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[2U][0U]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[2U][1U]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[2U][2U]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[2U][3U]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[3U][0U]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[3U][1U]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[3U][2U]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[3U][3U]),32);
}

void Vriscv_soc___024root__trace_chg_dtype____5(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*45:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____5\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[1]),46);
    bufp->chgQData(oldp+2,(__VdtypeVar[0]),46);
}

void Vriscv_soc___024root__trace_chg_dtype____6(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*38:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____6\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[1]),39);
    bufp->chgQData(oldp+2,(__VdtypeVar[0]),39);
}

void Vriscv_soc___024root__trace_chg_dtype____7(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____7\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[1]),37);
    bufp->chgQData(oldp+2,(__VdtypeVar[0]),37);
}

void Vriscv_soc___024root__trace_chg_dtype____8(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____8\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[1]),6);
    bufp->chgCData(oldp+1,(__VdtypeVar[0]),6);
}

void Vriscv_soc___024root__trace_chg_dtype____9(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____9\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[0]),8);
}

void Vriscv_soc___024root__trace_chg_dtype____10(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*68:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____10\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgWData(oldp+0,(__VdtypeVar[3]),69);
    bufp->chgWData(oldp+3,(__VdtypeVar[2]),69);
    bufp->chgWData(oldp+6,(__VdtypeVar[1]),69);
    bufp->chgWData(oldp+9,(__VdtypeVar[0]),69);
}

void Vriscv_soc___024root__trace_chg_dtype____11(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*10:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_chg_dtype____11\n"); );
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
