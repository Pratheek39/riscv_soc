// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

VL_ATTR_COLD void Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q) 
           | (0x0000000aU == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q) 
           | (0x0000000aU == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q)
            ? (vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
               | vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__output_q)
            : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q)
                ? ((~ vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q) 
                   & vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__output_q)
                : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q)
                    ? vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q
                    : vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__output_q)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
                                                 & (0U 
                                                    == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_63 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_60 = ((~ vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q) 
                                                 ^ vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_q);
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__start_w 
        = ((~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
               | ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                  | (0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))))) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
              & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q)) 
                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q))));
    vlSelfRef.__PVT__u_soc__DOT__axi_retime_rresp_w 
        = (3U & (IData)((vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                         [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q] 
                         >> 5U)));
    vlSelfRef.__PVT__u_soc__DOT__axi_retime_bresp_w 
        = (3U & (vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q
                 [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q] 
                 >> 4U));
    vlSelfRef.__PVT__axi4_d_awaddr_w = (0xfffffffcU 
                                        & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                        [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][0U]);
    vlSelfRef.__PVT__u_soc__DOT__axi_retime_rdata_w 
        = (IData)((vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                   [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q] 
                   >> 7U));
    vlSelfRef.__PVT__u_soc__DOT__axi_retime_rlast_w 
        = (1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                        [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q]));
    vlSelfRef.__PVT__u_soc__DOT__axi_retime_bid_w = 
        (0x0000000fU & vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q
         [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q]);
    if ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
            vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_bvalid_w 
                = (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q));
            vlSelfRef.inport_bresp_o = vlSelfRef.__PVT__u_soc__DOT__axi_retime_bresp_w;
            vlSelfRef.__PVT__axi4_conv_bid_w = vlSelfRef.__PVT__u_soc__DOT__axi_retime_bid_w;
        } else {
            vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_bvalid_w 
                = ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q)
                    : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q));
            vlSelfRef.inport_bresp_o = 0U;
            vlSelfRef.__PVT__axi4_conv_bid_w = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
        vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_bvalid_w 
            = ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q)
                : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q));
        vlSelfRef.inport_bresp_o = 0U;
        vlSelfRef.__PVT__axi4_conv_bid_w = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q;
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
        vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_bvalid_w 
            = vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q;
        vlSelfRef.inport_bresp_o = 0U;
        vlSelfRef.__PVT__axi4_conv_bid_w = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q;
    } else {
        vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_bvalid_w 
            = (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q));
        vlSelfRef.inport_bresp_o = vlSelfRef.__PVT__u_soc__DOT__axi_retime_bresp_w;
        vlSelfRef.__PVT__axi4_conv_bid_w = vlSelfRef.__PVT__u_soc__DOT__axi_retime_bid_w;
    }
    vlSelfRef.__PVT__u_soc__DOT__axi_retime_rid_w = 
        (0x0000000fU & (IData)((vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                                [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q] 
                                >> 1U)));
    if ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
            vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_rvalid_w 
                = (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q));
            vlSelfRef.inport_rresp_o = vlSelfRef.__PVT__u_soc__DOT__axi_retime_rresp_w;
            vlSelfRef.inport_rdata_o = vlSelfRef.__PVT__u_soc__DOT__axi_retime_rdata_w;
            vlSelfRef.__PVT__axi4_conv_rid_w = vlSelfRef.__PVT__u_soc__DOT__axi_retime_rid_w;
        } else {
            if ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
                vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_rvalid_w 
                    = vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q;
                vlSelfRef.inport_rdata_o = vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q;
            } else {
                vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_rvalid_w 
                    = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q;
                vlSelfRef.inport_rdata_o = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q;
            }
            vlSelfRef.inport_rresp_o = 0U;
            vlSelfRef.__PVT__axi4_conv_rid_w = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q;
        }
        vlSelfRef.__PVT__axi4_i_rlast_w = (1U & ((~ 
                                                  ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
                                                   >> 1U)) 
                                                 | (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_retime_rlast_w)));
    } else {
        if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
                vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_rvalid_w 
                    = vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q;
                vlSelfRef.inport_rdata_o = vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q;
            } else {
                vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_rvalid_w 
                    = vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q;
                vlSelfRef.inport_rdata_o = vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q;
            }
            vlSelfRef.inport_rresp_o = 0U;
            vlSelfRef.__PVT__axi4_conv_rid_w = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q;
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
            vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_rvalid_w 
                = vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q;
            vlSelfRef.inport_rresp_o = 0U;
            vlSelfRef.inport_rdata_o = vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q;
            vlSelfRef.__PVT__axi4_conv_rid_w = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q;
        } else {
            vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_rvalid_w 
                = (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q));
            vlSelfRef.inport_rresp_o = vlSelfRef.__PVT__u_soc__DOT__axi_retime_rresp_w;
            vlSelfRef.inport_rdata_o = vlSelfRef.__PVT__u_soc__DOT__axi_retime_rdata_w;
            vlSelfRef.__PVT__axi4_conv_rid_w = vlSelfRef.__PVT__u_soc__DOT__axi_retime_rid_w;
        }
        vlSelfRef.__PVT__axi4_i_rlast_w = (1U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_retime_rlast_w) 
                                                 | (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q)))));
    }
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__miso_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
            ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
            : (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__spi_miso_i));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
        = (((~ vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q) 
            & vlSelfRef.__VdfgRegularize_hebeb780c_0_60) 
           | (((vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                ^ vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q) 
               & (vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                  & vlSelfRef.__VdfgRegularize_hebeb780c_0_60)) 
              | (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q)
                   ? ((~ vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q) 
                      & vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q)
                   : vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q) 
                 | (vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                    & (- (IData)((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q)))))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__drive_r 
        = (1U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__start_w)
                  ? (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q))
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_63)) 
                     & (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q) 
                         | ((0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)) 
                            & (0x0fU != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)))) 
                        & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27)))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r 
        = ((8U & (IData)(vlSelfRef.__PVT__axi4_conv_bid_w))
            ? (((4U & (IData)(vlSelfRef.__PVT__axi4_conv_bid_w))
                 ? 2U : 1U) << 2U) : ((4U & (IData)(vlSelfRef.__PVT__axi4_conv_bid_w))
                                       ? 2U : 1U));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r 
        = ((8U & (IData)(vlSelfRef.__PVT__axi4_conv_rid_w))
            ? (((4U & (IData)(vlSelfRef.__PVT__axi4_conv_rid_w))
                 ? 2U : 1U) << 2U) : ((4U & (IData)(vlSelfRef.__PVT__axi4_conv_rid_w))
                                       ? 2U : 1U));
    vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_bready_w 
        = (0U != ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                  & (2U | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_bready_i))));
    vlSelfRef.__PVT__axi4_d_bvalid_w = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                         >> 1U) & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_bvalid_w));
    vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_rready_w 
        = (0U != ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                  & (6U | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_rready_i))));
    vlSelfRef.__PVT__axi4_i_rvalid_w = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                                         >> 2U) & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_rvalid_w));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_bready_w) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_bvalid_w));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_rvalid_w) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_rready_w) 
              & (IData)(vlSelfRef.__PVT__axi4_i_rlast_w)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = ((IData)(vlSelfRef.__PVT__axi4_i_rlast_w) 
                                                 & (IData)(vlSelfRef.__PVT__axi4_i_rvalid_w));
}

extern const VlUnpacked<CData/*0:0*/, 512> Vriscv_soc__ConstPool__TABLE_h8ee0fb0c_0;

VL_ATTR_COLD void Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__1(Vriscv_soc_riscv_soc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc___stl_sequent__TOP__riscv_soc__1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    // Body
    vlSelfRef.__PVT__axi4_i_arvalid_w = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_q) 
                                         | ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                                            & (2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r))));
    vlSelfRef.__PVT__axi4_d_arvalid_w = ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_58)) 
                                         & (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_32));
    vlSelfRef.__PVT__axi4_d_wvalid_w = (1U & (~ ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q) 
                                                 | (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_25))));
    vlSelfRef.__PVT__axi4_d_awvalid_w = (1U & (~ ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q) 
                                                  | (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_25))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q) 
                                                 & (((IData)(vlSelfRef.__PVT__axi4_i_arvalid_w) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.__PVT__axi4_d_arvalid_w) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_45 = ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i) 
                                                 | (IData)(vlSelfRef.__PVT__axi4_d_arvalid_w));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = ((IData)(vlSelfRef.__PVT__axi4_d_awvalid_w) 
                                                 | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q) 
                                                 & (((IData)(vlSelfRef.__PVT__axi4_d_awvalid_w) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_46 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45) 
                                                 | (IData)(vlSelfRef.__PVT__axi4_i_arvalid_w));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w 
        = ((IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13)))
            ? ((((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13)) 
                 << 3U) | ((0U != (7U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13))) 
                           << 2U)) | (((0U != (3U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13))) 
                                       << 1U) | (1U 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_13))))
            : ((0x0000000cU & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26))) 
                               << 2U)) | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26) 
                                           << 1U) | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w 
        = ((IData)((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_12)))
            ? ((((0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_12)) 
                 << 3U) | ((0U != (7U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_12))) 
                           << 2U)) | (((0U != (3U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_12))) 
                                       << 1U) | (1U 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_12))))
            : ((0x0000000cU & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46))) 
                               << 2U)) | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45) 
                                           << 1U) | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q)
                           ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q)
                           : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                              ^ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                 << 1U))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q)
                           ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q)
                           : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                              ^ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                 << 1U))));
    if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) {
        vlSelfRef.__PVT__u_soc__DOT__axi_tap_output3_wdata_w 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
            [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][1U];
        vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wvalid_w 
            = vlSelfRef.__PVT__axi4_d_wvalid_w;
        vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_awaddr_w 
            = vlSelfRef.__PVT__axi4_d_awaddr_w;
    } else {
        vlSelfRef.__PVT__u_soc__DOT__axi_tap_output3_wdata_w 
            = (vlSymsp->TOP.__Vcellinp__riscv_soc__inport_wdata_i 
               & ((- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                       >> 2U))))) & 
                  (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                       >> 3U)))))));
        vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wvalid_w 
            = (IData)(((0U == (0x0cU & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) 
                       & (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_wvalid_i)));
        vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_awaddr_w 
            = ((- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                    >> 3U))))) & (vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awaddr_i 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                    >> 2U)))))));
    }
    vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wlast_w 
        = ((1U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                  >> 1U)) || (IData)((0U == (0x0cU 
                                             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w)))));
    vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_awvalid_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)) 
           & ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
               ? (IData)(vlSelfRef.__PVT__axi4_d_awvalid_w)
               : (IData)(((0U == (0x0cU & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) 
                          & (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i)))));
    if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))) {
        vlSelfRef.__PVT__u_soc__DOT__axi_retime_arid_w = 4U;
        vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_arvalid_w 
            = vlSelfRef.__PVT__axi4_d_arvalid_w;
        vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w 
            = vlSelfRef.__PVT__axi4_d_awaddr_w;
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))) {
        vlSelfRef.__PVT__u_soc__DOT__axi_retime_arid_w = 8U;
        vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_arvalid_w 
            = vlSelfRef.__PVT__axi4_i_arvalid_w;
        vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w 
            = (0xffffffe0U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q);
    } else {
        vlSelfRef.__PVT__u_soc__DOT__axi_retime_arid_w = 0U;
        vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_arvalid_w 
            = ((~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                   >> 3U)) & (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i));
        vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w 
            = (vlSymsp->TOP.__Vcellinp__riscv_soc__inport_araddr_i 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                      >> 3U))))));
    }
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r 
        = ((0x94000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_awaddr_w))
            ? 5U : ((0x93000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_awaddr_w))
                     ? 4U : ((0x92000000U == (0xff000000U 
                                              & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_awaddr_w))
                              ? 3U : ((0x91000000U 
                                       == (0xff000000U 
                                           & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_awaddr_w))
                                       ? 2U : (1U & 
                                               (- (IData)(
                                                          (0x90000000U 
                                                           == 
                                                           (0xff000000U 
                                                            & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_awaddr_w)))))))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__data_r 
        = (((0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
             ? ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                << 0x0000001fU) : ((0x20U == (0x000000ffU 
                                              & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                    ? ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                                       << 2U) : ((0x28U 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q) 
                                                  << 2U)
                                                  : 
                                                 ((- (IData)(
                                                             (0x40U 
                                                              != 
                                                              (0x000000ffU 
                                                               & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)))) 
                                                  & ((0x60U 
                                                      == 
                                                      (0x000000ffU 
                                                       & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                                      ? 
                                                     ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q) 
                                                        << 9U) 
                                                       | (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q) 
                                                           << 8U) 
                                                          | ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q) 
                                                             << 7U))) 
                                                      | ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q) 
                                                           << 4U) 
                                                          | (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q) 
                                                                << 2U))) 
                                                         | (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q))))
                                                      : 
                                                     ((0x64U 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                                       ? 
                                                      ((((4U 
                                                          == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                                                         << 3U) 
                                                        | ((0U 
                                                            == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                                                           << 2U)) 
                                                       | (((4U 
                                                            == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)) 
                                                           << 1U) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))))
                                                       : 
                                                      ((0x6cU 
                                                        == 
                                                        (0x000000ffU 
                                                         & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                                        ? vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                                                       [vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q]
                                                        : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q)))))))) 
           & (- (IData)(((0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
                         | ((0x20U == (0x000000ffU 
                                       & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
                            | ((0x28U == (0x000000ffU 
                                          & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
                               | ((0x40U == (0x000000ffU 
                                             & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
                                  | ((0x60U == (0x000000ffU 
                                                & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
                                     | ((0x64U == (0x000000ffU 
                                                   & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
                                        | ((0x6cU == 
                                            (0x000000ffU 
                                             & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
                                           | (0x70U 
                                              == (0x000000ffU 
                                                  & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))))))))))));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r 
        = ((0x94000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
            ? 5U : ((0x93000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                     ? 4U : ((0x92000000U == (0xff000000U 
                                              & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                              ? 3U : ((0x91000000U 
                                       == (0xff000000U 
                                           & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                       ? 2U : (1U & 
                                               (- (IData)(
                                                          (0x90000000U 
                                                           == 
                                                           (0xff000000U 
                                                            & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)))))))));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w 
        = ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q) 
             == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
            & (0x0fU != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))) 
           | (0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q)));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w 
        = ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
             == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
            & (0x0fU != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))) 
           | (0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q)));
    vlSelfRef.__PVT__u_soc__DOT__axi_retime_wvalid_w 
        = ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wvalid_w) 
              & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
                                                & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_awvalid_w));
    vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_arready_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w) 
           & Vriscv_soc__ConstPool__TABLE_h8ee0fb0c_0
           [(((((4U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                       << 2U)) | ((2U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                                         << 1U)) | 
                                  (1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q))))) 
               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
                                 << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))) 
                         << 4U)) | (((2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)) 
                                     << 3U) | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)))]);
    __VdfgRegularize_hebeb780c_0_5 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_arvalid_w) 
                                      & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w));
    vlSelfRef.__PVT__u_soc__DOT__axi_retime_awvalid_w 
        = ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_arvalid_w) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_arready_w));
    vlSelfRef.__PVT__u_soc__DOT__axi_retime_arvalid_w 
        = ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w 
        = ((1U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w 
        = ((5U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w 
        = ((2U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w 
        = ((3U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w 
        = ((4U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
        = (0x0000000fU & (((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)) 
                           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))
                           : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q) 
                              - ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w)) 
                                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w));
    vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_awready_w 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w));
    vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_awready_w 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w))));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w));
    vlSelfRef.__PVT__u_soc__DOT__axi_tap_output1_awready_w 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w))));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w));
    vlSelfRef.__PVT__u_soc__DOT__axi_tap_output2_wready_w 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w));
    vlSelfRef.__PVT__u_soc__DOT__axi_tap_output3_wready_w 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_awready_w) 
           & ((1U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7)));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_awready_w) 
           & ((5U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7)));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output1_awready_w) 
           & ((2U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7)));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w 
        = ((0U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__read_en_w));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output2_wready_w) 
           & ((3U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7)));
    if ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = vlSelfRef.__PVT__u_soc__DOT__axi_tap_output2_wready_w;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = vlSelfRef.__PVT__u_soc__DOT__axi_tap_output4_awready_w;
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = vlSelfRef.__PVT__u_soc__DOT__axi_tap_output1_awready_w;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = vlSelfRef.__PVT__u_soc__DOT__axi_tap_output3_wready_w;
    }
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w 
        = ((0x6cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__read_en_w));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output3_wready_w) 
           & ((4U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7)));
    vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wready_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
               ? ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))
                   : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31))
               : ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)
                   : ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_awready_w)
                       : (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))))));
    vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_awready_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
               ? ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))
                   : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31))
               : ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)
                   : ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_tap_output0_awready_w)
                       : (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))))));
    vlSelfRef.__PVT__axi4_d_wready_w = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                         >> 1U) & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wready_w));
    if (vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) {
        if (vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_awready_w) {
            vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w = 1U;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q;
            if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wvalid_w) 
                  & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wready_w)) 
                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wlast_w))) {
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 0U;
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
            } else {
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w = 0U;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q;
        if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r) {
            if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wvalid_w) 
                  & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wready_w)) 
                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_wlast_w))) {
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 0U;
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
            } else {
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 1U;
            }
        }
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)) 
                                                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__axi_arb_out_awready_w));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
        = (0x0000000fU & (((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)) 
                           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))
                           : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q) 
                              - ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w)) 
                                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)))));
    vlSelfRef.__PVT__axi4_d_awready_w = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                          >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14));
}

VL_ATTR_COLD void Vriscv_soc_riscv_soc___ctor_var_reset(Vriscv_soc_riscv_soc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc___ctor_var_reset\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->reset_vector_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8393161498616798439ull);
    vlSelf->inport_awvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16815688939777094164ull);
    vlSelf->inport_awaddr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17264335690393215559ull);
    vlSelf->inport_wvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4552375244054101223ull);
    vlSelf->inport_wdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8893660701107798341ull);
    vlSelf->inport_wstrb_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13790822455296553478ull);
    vlSelf->inport_bready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 104350643710136831ull);
    vlSelf->inport_arvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13066339196843470176ull);
    vlSelf->inport_araddr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2059099442407551175ull);
    vlSelf->inport_rready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5789612654892198512ull);
    vlSelf->rst_cpu_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13191268749260761433ull);
    vlSelf->spi_miso_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9441733603558256456ull);
    vlSelf->uart_txd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8711258923479740921ull);
    vlSelf->gpio_input_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2635487931870649046ull);
    vlSelf->mem_awready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10710925704169068937ull);
    vlSelf->mem_wready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12743838527624918351ull);
    vlSelf->mem_bvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15624202945045536601ull);
    vlSelf->mem_bresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 218890773123368585ull);
    vlSelf->mem_bid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12337104836013042361ull);
    vlSelf->mem_arready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8634270877704102188ull);
    vlSelf->mem_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13727100719229330614ull);
    vlSelf->mem_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13248888798300937371ull);
    vlSelf->mem_rresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16479506793011835947ull);
    vlSelf->mem_rid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2023312757284587774ull);
    vlSelf->mem_rlast_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1860033574873434148ull);
    vlSelf->inport_awready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10484525795072698646ull);
    vlSelf->inport_wready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3259886827306044233ull);
    vlSelf->inport_bvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8090738484960819251ull);
    vlSelf->inport_bresp_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6113148844522094398ull);
    vlSelf->inport_arready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5965197179179608118ull);
    vlSelf->inport_rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13502922546723851228ull);
    vlSelf->inport_rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1437458010467862676ull);
    vlSelf->inport_rresp_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7953390701608411026ull);
    vlSelf->spi_clk_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2581297830937863824ull);
    vlSelf->spi_mosi_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16087010640899814074ull);
    vlSelf->spi_cs_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13755761095609958371ull);
    vlSelf->uart_rxd_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3703417622347947515ull);
    vlSelf->gpio_output_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7575546096533203583ull);
    vlSelf->gpio_output_enable_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9920977815513113820ull);
    vlSelf->mem_awvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3367900774932595271ull);
    vlSelf->mem_awaddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10544837424696642626ull);
    vlSelf->mem_awid_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16609763242450241130ull);
    vlSelf->mem_awlen_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8929165152628388238ull);
    vlSelf->mem_awburst_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12256657292755226455ull);
    vlSelf->mem_wvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2264584863364122783ull);
    vlSelf->mem_wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12378967071608703019ull);
    vlSelf->mem_wstrb_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 668850943555517619ull);
    vlSelf->mem_wlast_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2387808217662775408ull);
    vlSelf->mem_bready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10495425550070076997ull);
    vlSelf->mem_arvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14449568008136353800ull);
    vlSelf->mem_araddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10225445978899783539ull);
    vlSelf->mem_arid_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8583192300002739065ull);
    vlSelf->mem_arlen_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2018435242938871402ull);
    vlSelf->mem_arburst_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2214257806403962488ull);
    vlSelf->mem_rready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8580188362890201238ull);
    vlSelf->__PVT__axi4_conv_bid_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6542165535935258628ull);
    vlSelf->__PVT__axi4_i_rvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3153431945094181676ull);
    vlSelf->__PVT__axi4_d_awaddr_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 515653274725554573ull);
    vlSelf->__PVT__axi4_d_awvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17461657915603707595ull);
    vlSelf->__PVT__axi4_i_arvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4389527778009485643ull);
    vlSelf->__PVT__axi4_d_bvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 196822520860327644ull);
    vlSelf->__PVT__axi4_d_awready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15107892486305403688ull);
    vlSelf->__PVT__axi4_i_rlast_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13336541685307665424ull);
    vlSelf->__PVT__axi4_conv_rid_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12677013296707583415ull);
    vlSelf->__PVT__axi4_d_arvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 73149351436351437ull);
    vlSelf->__PVT__axi4_d_wready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10124208637369633125ull);
    vlSelf->__PVT__axi4_d_wvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4648966720053015636ull);
    vlSelf->__PVT__u_soc__DOT__axi_retime_arid_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15274347020756627637ull);
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_arvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3424423358886890393ull);
    vlSelf->__PVT__u_soc__DOT__axi_retime_arvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15940172672750268590ull);
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_rready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4873102729889494029ull);
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_wvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4341211936890406482ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output0_awready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14390887101062094867ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output3_wdata_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4767457060871292741ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output2_arvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6805216681613995657ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output3_wready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9297651704847827834ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output0_araddr_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11353674062301293785ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output4_awready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4015952256423288349ull);
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_awready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14193991035923958055ull);
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_wready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11768771731706560313ull);
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_bready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17121424711992822307ull);
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_wlast_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16429208358538807804ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output4_awaddr_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5921363425475948825ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output4_arvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1991167279460868349ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output1_awready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14959942336416285196ull);
    vlSelf->__PVT__u_soc__DOT__axi_retime_awvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11915645028874125178ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output1_arvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13305387438948976700ull);
    vlSelf->__PVT__u_soc__DOT__axi_retime_rdata_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8367096439398514926ull);
    vlSelf->__PVT__u_soc__DOT__axi_retime_rlast_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12401711747949450992ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output2_wready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12288272466590010445ull);
    vlSelf->__PVT__u_soc__DOT__axi_retime_rid_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14805262435394124450ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output0_arvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 321398878953473430ull);
    vlSelf->__PVT__u_soc__DOT__axi_retime_rresp_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3109354044710792519ull);
    vlSelf->__PVT__u_soc__DOT__axi_retime_bid_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15571382424204524816ull);
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_rvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13349232363368419028ull);
    vlSelf->__PVT__u_soc__DOT__axi_tap_output3_arvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3749088345376072488ull);
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_bvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5240363339025857282ull);
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_arready_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9665296360836465582ull);
    vlSelf->__PVT__u_soc__DOT__axi_arb_out_awvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3431467713809752020ull);
    vlSelf->__PVT__u_soc__DOT__axi_retime_bresp_w = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6245223166374350483ull);
    vlSelf->__PVT__u_soc__DOT__axi_retime_wvalid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9138206206621605219ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(46, __VscopeHash, 16892061300296025331ull);
    }
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4385573788318354663ull);
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16049766412809247469ull);
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15479527363648458559ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(46, __VscopeHash, 570553443975285870ull);
    }
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14551131612702888898ull);
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4993747694384437515ull);
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9398093975801599543ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 3295642290596430814ull);
    }
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7887401783474235038ull);
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3952533397331571376ull);
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14364006940737111951ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9620047880571187798ull);
    }
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1061042126962159852ull);
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15459909408057858114ull);
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10334035239311378375ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 2014478310974839113ull);
    }
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1008555731803987450ull);
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2667346346080683116ull);
    vlSelf->__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13731849892782810839ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__read_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4966848971040447166ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__write_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18444362659975524472ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6481653377069908056ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7557784454282352826ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8846534695448586305ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2333925364979457104ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386713492645383228ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_srr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9744173394411802838ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7064701322360682901ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7688803819722473898ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10826690211841952683ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4242000524680862005ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1469388038251017385ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6033026800242915635ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13286668974348964779ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 938848882564945208ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9447925454988327823ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2198506166155779959ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14020389246033923396ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5103180800028869391ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_sr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3642073861912685597ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16433561431999046124ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_drr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6244428106921672045ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9434601508870016140ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 807400344887968076ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__data_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11335216767303831529ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__rvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7161244959874624398ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__rd_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12129917005851870922ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__bvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6000301907997477799ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1012182421551437560ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6842984939791787825ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16056790089858001170ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__active_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10195966219989807783ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__bit_count_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10208124072083048209ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1315392534218620839ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__clk_div_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10755678996662796284ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2376917198899284511ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3160902978756915721ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 956061629059936971ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__start_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8567144921053056932ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__miso_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7280662725891045748ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__drive_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5317926127268891948ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12256460964274858434ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__intr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18414039162044317790ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 941163828905843921ull);
    }
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 927384624352076993ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6690200352409309011ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 81313599915199501ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8978839868869214666ull);
    }
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11829847853468947159ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7537208680248421298ull);
    vlSelf->__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14294800098663634044ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__read_hold_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1739316088558736910ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__read_grant_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6894941167823748681ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12161554453377360412ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16214179694085418348ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12192295416157144569ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_grant_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15317127068707081284ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3329473722443361217ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1419988276481798267ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14949924626784444907ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6599364789543603760ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11555083725824315806ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7944265439881337666ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5004842957070930788ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6514569955359040823ull);
    vlSelf->__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7965736121795408238ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8842076131025171248ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__read_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1308075607548135273ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__write_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9439531099232596355ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8584570582708473708ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18301886823904033077ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_input_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 448210176379643105ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8689877958132865926ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17134765791607348192ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2458601257943210367ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9110930772691322617ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18138977547475324964ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1076376544514277943ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18204334539240771779ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_status_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10668065737965413561ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13852603397085340366ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7834443234971897491ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17863160048360180634ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14794619416954393093ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3465404077545211123ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10662751902920630330ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18194281737987573403ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1454628357000693039ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__input_ms = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11618170701621424846ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__input_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17871462475915352508ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__output_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17933319769160901164ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__output_next_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10334637393274855763ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__intr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17774677341404696369ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7944996265691450895ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4131664356652002333ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__input_last_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3322199707812755047ull);
    vlSelf->__PVT__u_soc__DOT__u_gpio__DOT__interrupt_level_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16174650885673787973ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12578087328566552484ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16347104818319186674ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1112741412416428143ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5725279698135265415ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14377671175080540668ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10104155404290478193ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7517645374474242176ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10629423625782604894ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16257739636838683257ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13174157104984569653ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17757681075611426670ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8061555077972310999ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16078488659937305284ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14099532729436374288ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14683394302215070555ull);
    vlSelf->__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10435034810224573103ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__wr_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10177177595711853893ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__read_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15534288713309007141ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__write_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8070168075554966123ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 797309876092404643ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13183240748956778444ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3873068615703532275ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10171964073550271674ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15799207362109760328ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15265143478073345907ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17287200025241348582ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12570364807806805746ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10166847179496644292ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14575957881318996058ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2322285687327813097ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6401220423878037986ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__rvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5232915812030971497ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__rd_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3352434231869663063ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__bvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17978140120371248369ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2246594568332727392ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7682605030509966080ull);
    vlSelf->__PVT__u_soc__DOT__u_timer__DOT__intr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17144541574602572242ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__read_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11239570420056061577ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__write_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1038914351270616600ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9203679686294475215ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11025703315523276537ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__ulite_status_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13716217890725928928ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__ulite_control_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3621267958878081259ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14937643050717418074ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11319959080240959963ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_tx_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7515109755160322573ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10445242618606607397ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rd_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13681308154012632220ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__bvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6756280051323094177ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16932140304991807059ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1897174395414300649ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2851097319388205466ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_count_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3037110142536290803ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8174208457988108452ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__txd_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1581755117009204660ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rxd_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1257520515843822118ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rx_data_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17885265981958422728ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3306691910982878174ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rx_count_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3078330085747565835ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5748654474079535559ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13439850446532320219ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10003802432247645113ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rx_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18195463472915646687ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 704054363061370950ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4123720553399717846ull);
    vlSelf->__PVT__u_soc__DOT__u_uart__DOT__intr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5696785257245774283ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__wr_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8297479580799599089ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__read_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16519959261560235601ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__write_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10090043475496568827ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_isr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17712170952006198892ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7904369856751061855ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15820863462939341526ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_iar_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2675240887954102723ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13366395010208640065ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11816630476798229429ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12863406024798671893ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_ivr_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6814127258340259744ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_mer_wr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13708510218444161471ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1589866308215255380ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14040178307197181559ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__rvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5646238437268003033ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__rd_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8261721973866155124ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__bvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8846176352049238862ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5396011887793395448ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14750799258450968617ull);
    vlSelf->__PVT__u_soc__DOT__u_intc__DOT__intr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18004064081248016747ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_12 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_14 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_22 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_26 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_27 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_30 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_31 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_45 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_46 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_60 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_63 = 0;
}
