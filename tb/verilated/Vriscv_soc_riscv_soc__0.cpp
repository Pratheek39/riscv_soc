// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

extern const VlUnpacked<CData/*0:0*/, 512> Vriscv_soc__ConstPool__TABLE_h73ab2485_0;

void Vriscv_soc_riscv_soc___ico_sequent__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc___ico_sequent__TOP__riscv_soc__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__miso_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
            ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
            : (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__spi_miso_i));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o 
        = (0U != ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                  & (2U | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_bready_i))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o 
        = (0U != ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                  & (6U | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_rready_i))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i) 
                                                 | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q) 
                                                 & (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q) 
                                                 & (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_45 = ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i) 
                                                 | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o) 
              & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rlast_i)));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_46 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45) 
                                                 | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q)
                           ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q)
                           : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                              ^ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                 << 1U))));
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
    if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
            [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][1U];
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_wvalid_i;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awaddr_i;
    } else {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
            = (vlSymsp->TOP.__Vcellinp__riscv_soc__inport_wdata_i 
               & ((- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                       >> 2U))))) & 
                  (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                       >> 3U)))))));
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o 
            = (IData)(((0U == (0x0cU & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) 
                       & (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_wvalid_i)));
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o 
            = ((- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                    >> 3U))))) & (vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awaddr_i 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                    >> 2U)))))));
    }
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o 
        = ((1U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                  >> 1U)) || (IData)((0U == (0x0cU 
                                             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w)))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)) 
           & ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
               ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i)
               : (IData)(((0U == (0x0cU & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) 
                          & (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i)))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q)
                           ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q)
                           : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                              ^ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                 << 1U))));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r 
        = ((0x95000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))
            ? 6U : ((0x94000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))
                     ? 5U : ((0x93000000U == (0xff000000U 
                                              & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))
                              ? 4U : ((0x92000000U 
                                       == (0xff000000U 
                                           & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))
                                       ? 3U : ((0x91000000U 
                                                == 
                                                (0xff000000U 
                                                 & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))
                                                ? 2U
                                                : (1U 
                                                   & (- (IData)(
                                                                (0x90000000U 
                                                                 == 
                                                                 (0xff000000U 
                                                                  & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))))))))));
    if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))) {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o = 4U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awaddr_i;
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))) {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o = 8U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o 
            = (0xffffffe0U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q);
    } else {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o 
            = ((~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                   >> 3U)) & (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i));
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o 
            = (vlSymsp->TOP.__Vcellinp__riscv_soc__inport_araddr_i 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                      >> 3U))))));
    }
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w 
        = ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q) 
             == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
            & (0x0fU != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))) 
           | (0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q)));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__data_r 
        = (((0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
             ? ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                << 0x0000001fU) : ((0x20U == (0x000000ffU 
                                              & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                    ? ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                                       << 2U) : ((0x28U 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q) 
                                                  << 2U)
                                                  : 
                                                 ((- (IData)(
                                                             (0x40U 
                                                              != 
                                                              (0x000000ffU 
                                                               & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)))) 
                                                  & ((0x60U 
                                                      == 
                                                      (0x000000ffU 
                                                       & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
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
                                                        & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
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
                                                         & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                        ? vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                                                       [vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q]
                                                        : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q)))))))) 
           & (- (IData)(((0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                         | ((0x20U == (0x000000ffU 
                                       & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                            | ((0x28U == (0x000000ffU 
                                          & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                               | ((0x40U == (0x000000ffU 
                                             & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                                  | ((0x60U == (0x000000ffU 
                                                & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                                     | ((0x64U == (0x000000ffU 
                                                   & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                                        | ((0x6cU == 
                                            (0x000000ffU 
                                             & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                                           | (0x70U 
                                              == (0x000000ffU 
                                                  & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))))))))))));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r 
        = ((0x95000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
            ? 6U : ((0x94000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                     ? 5U : ((0x93000000U == (0xff000000U 
                                              & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                              ? 4U : ((0x92000000U 
                                       == (0xff000000U 
                                           & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                       ? 3U : ((0x91000000U 
                                                == 
                                                (0xff000000U 
                                                 & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                ? 2U
                                                : (1U 
                                                   & (- (IData)(
                                                                (0x90000000U 
                                                                 == 
                                                                 (0xff000000U 
                                                                  & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))))))))));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_wvalid_o 
        = ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
              & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
                                                & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w 
        = ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
             == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
            & (0x0fU != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))) 
           | (0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q)));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_awvalid_o 
        = ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w) 
           & Vriscv_soc__ConstPool__TABLE_h73ab2485_0
           [(((((4U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                       << 2U)) | ((2U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                                         << 1U)) | 
                                  (1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q))))) 
               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
                                 << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))) 
                         << 4U)) | (((2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)) 
                                     << 3U) | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)))]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o) 
                                                & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_arvalid_o 
        = ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o 
        = ((1U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o 
        = ((2U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o 
        = ((5U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_arvalid_o 
        = ((3U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_arvalid_o 
        = ((4U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
        = (0x0000000fU & (((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)) 
                           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))
                           : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q) 
                              - ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w)) 
                                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_awready_i 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_awready_i 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_arvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_awready_i 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_arvalid_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_arvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_awready_i 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_arvalid_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i) 
           & ((1U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_awready_i) 
           & ((2U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_awready_i) 
           & ((5U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w 
        = ((0U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__read_en_w));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_awready_i) 
           & ((3U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
    if ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_awready_i;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_awready_i;
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_awready_i;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_awready_i;
    }
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w 
        = ((0x6cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__read_en_w));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_awready_i) 
           & ((4U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
               ? ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? ((2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)) 
                      & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31))
               : ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)
                   : ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i)
                       : (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awready_i 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
               ? ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? ((2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)) 
                      & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31))
               : ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)
                   : ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i)
                       : (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_wready_o 
        = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
            >> 1U) & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i));
    if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_o) {
        if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awready_i) {
            vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w = 1U;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q;
            if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                  & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i)) 
                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o))) {
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
            if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                  & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i)) 
                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o))) {
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 0U;
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
            } else {
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 1U;
            }
        }
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)) 
                                                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awready_i));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
        = (0x0000000fU & (((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)) 
                           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))
                           : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q) 
                              - ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w)) 
                                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awready_o 
        = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
            >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14));
}

extern const VlUnpacked<CData/*7:0*/, 512> Vriscv_soc__ConstPool__TABLE_h2582090b_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vriscv_soc__ConstPool__TABLE_haa28ef1b_0;

void Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q = 0;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_spi__DOT__clk_div_q;
    __Vdly__u_soc__DOT__u_spi__DOT__clk_div_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q;
    __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q = 0;
    CData/*7:0*/ __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q;
    __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q = 0;
    CData/*5:0*/ __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q;
    __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_spi__DOT__active_q;
    __Vdly__u_soc__DOT__u_spi__DOT__active_q = 0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q = 0;
    CData/*2:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q = 0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q = 0;
    CData/*2:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q = 0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q = 0;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q;
    __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q = 0;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q;
    __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q = 0;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q;
    __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q = 0;
    CData/*7:0*/ __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q;
    __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q;
    __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q = 0;
    CData/*3:0*/ __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q;
    __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q = 0;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q;
    __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q = 0;
    CData/*7:0*/ __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q;
    __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q = 0;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q;
    __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q = 0;
    CData/*3:0*/ __Vdly__u_soc__DOT__u_uart__DOT__tx_bits_q;
    __Vdly__u_soc__DOT__u_uart__DOT__tx_bits_q = 0;
    CData/*3:0*/ __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q;
    __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q = 0;
    CData/*3:0*/ __Vdly__u_soc__DOT__u_intc__DOT__irq_pending_q;
    __Vdly__u_soc__DOT__u_intc__DOT__irq_pending_q = 0;
    QData/*45:0*/ __VdlyVal__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0;
    __VdlyVal__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlyDim0__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0;
    __VdlyDim0__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0;
    __VdlySet__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0 = 0;
    QData/*45:0*/ __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0;
    __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0;
    __VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0;
    __VdlySet__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0 = 0;
    QData/*38:0*/ __VdlyVal__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0;
    __VdlyVal__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlyDim0__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0;
    __VdlyDim0__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0;
    __VdlySet__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0 = 0;
    CData/*5:0*/ __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0;
    __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0;
    __VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0;
    __VdlySet__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0 = 0;
    QData/*36:0*/ __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0;
    __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0;
    __VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0;
    __VdlySet__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0 = 0;
    CData/*7:0*/ __VdlyVal__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0;
    __VdlyVal__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0 = 0;
    CData/*1:0*/ __VdlyDim0__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0;
    __VdlyDim0__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0;
    __VdlySet__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0 = 0;
    CData/*7:0*/ __VdlyVal__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0;
    __VdlyVal__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0 = 0;
    CData/*1:0*/ __VdlyDim0__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0;
    __VdlyDim0__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0;
    __VdlySet__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0 = 0;
    // Body
    __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q = vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q;
    __Vdly__u_soc__DOT__u_uart__DOT__tx_bits_q = vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q;
    __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q = vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q;
    __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q = vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q;
    __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q;
    __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q = vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q;
    __Vdly__u_soc__DOT__u_spi__DOT__clk_div_q = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q;
    __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q;
    __Vdly__u_soc__DOT__u_spi__DOT__active_q = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__active_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q;
    __VdlySet__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0 = 0U;
    __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q;
    __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q = vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q;
    __VdlySet__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0 = 0U;
    __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q;
    __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q;
    __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q;
    __VdlySet__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0 = 0U;
    __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q = vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q;
    __VdlySet__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0 = 0U;
    __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q;
    __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q;
    __Vdly__u_soc__DOT__u_intc__DOT__irq_pending_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q;
    __VdlySet__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0 = 0U;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q;
    __VdlySet__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0 = 0U;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q;
    __VdlySet__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0 = 0U;
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__txd_q 
        = (1U & ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) 
                 | ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)) 
                    | ((0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                       & ((9U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                          | ((0x0aU == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                             | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q)))))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i))) 
           && (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
              & (0U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_status_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
              & (8U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
              & (0x0cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_isr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (4U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0x0cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_ivr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0x18U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (8U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (0x0cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (0x14U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (0x18U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_input_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (4U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x14U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_status_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x20U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x24U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x28U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (8U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x0cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x10U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x28U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x40U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_sr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x64U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x6cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x70U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x18U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_tx_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
               & (0x0cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))) 
              & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
               & (0x60U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))) 
              & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                 >> 5U)));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
               & (0x60U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))) 
              & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                 >> 6U)));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__intr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q) 
              & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w))));
    if ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)))) {
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_o) 
             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awready_i))) {
            vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r;
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o) 
             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))) {
            vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r;
        }
    }
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q = 0U;
        __Vdly__u_soc__DOT__u_uart__DOT__tx_bits_q = 0U;
        __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q = 0U;
        __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q = 0U;
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q;
        __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q;
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q;
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q;
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q = 0U;
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q = 0U;
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q = 0U;
        __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q = 0U;
        __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q = 0U;
        __Vdly__u_soc__DOT__u_spi__DOT__clk_div_q = 0U;
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q = 0U;
    } else {
        if (vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) {
            if ((0U != vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q)) {
                __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q 
                    = (vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q 
                       - (IData)(1U));
            } else if ((0U == vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q)) {
                __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q = 0x00000018U;
            }
        } else {
            __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q = 0x00000018U;
        }
        if (((0U == vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q) 
             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q))) {
            __Vdly__u_soc__DOT__u_uart__DOT__tx_bits_q 
                = ((9U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q))));
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q) {
            if ((0U != vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q)) {
                __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q 
                    = (vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q 
                       - (IData)(1U));
            } else if ((0U == vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q)) {
                __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q 
                    = ((9U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))
                        ? 0U : 0x00000018U);
            }
        } else {
            __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q = 0x0000000cU;
        }
        if (((0U == vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q) 
             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q))) {
            __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q 
                = ((9U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))));
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q)))) {
            __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q = 0U;
        }
        if (((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_wready_i) 
             & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q)));
        }
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q;
        if (vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w) {
            __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q = 0U;
        } else if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w) 
                    & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)))) {
            __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q)));
        }
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q;
        if (((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_arready_i) 
             & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q)));
        }
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q;
        if (((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_awready_i) 
             & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q)));
        }
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q;
        if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_arvalid_o) 
              & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))) 
             & (~ ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_arready_i) 
                   & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_arvalid_o) 
                        & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)))) 
                    & ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_arready_i) 
                       & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q) 
                         - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_wvalid_o) 
              & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))) 
             & (~ ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_wready_i) 
                   & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_wvalid_o) 
                        & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))) 
                    & ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_wready_i) 
                       & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q) 
                         - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_awvalid_o) 
              & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))) 
             & (~ ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_awready_i) 
                   & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_awvalid_o) 
                        & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))) 
                    & ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_awready_i) 
                       & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q) 
             & (0U == vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q))) {
            if ((9U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))) {
                __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q = 0U;
            } else if ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))) {
                if (vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rxd_q) {
                    __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q = 0U;
                }
            } else {
                __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q 
                    = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rxd_q) 
                        << 7U) | (0x0000007fU & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q) 
                                                 >> 1U)));
            }
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q)) 
                          & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rxd_q))))) {
            __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q = 0U;
            __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q = 1U;
        }
        __Vdly__u_soc__DOT__u_spi__DOT__clk_div_q = 
            ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__start_w) 
               | (0x0000000aU == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q)) 
              | (0U == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))
              ? 2U : (vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q 
                      - (IData)(1U)));
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_awvalid_o) 
             & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))) {
            __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0 
                = (((QData)((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)) 
                    << 0x0000000eU) | (QData)((IData)(
                                                      ((((2U 
                                                          & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                          ? 4U
                                                          : 0U) 
                                                        << 0x0000000aU) 
                                                       | ((2U 
                                                           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                           ? 1U
                                                           : 
                                                          (1U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                              >> 2U))))) 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                                >> 3U))))))))))));
            __VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q;
            __VdlySet__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0 = 1U;
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q)));
        }
    }
    vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q;
    if (__VdlySet__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q[__VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0] 
            = __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0;
    }
    vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q;
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q 
            = __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q;
        __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q = 0U;
        __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q = 0U;
        __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q = 0U;
        __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q = 0U;
        __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q = 0U;
        __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q = 0U;
    } else {
        if (vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w) {
            __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q = 0U;
            __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q = 0U;
            __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q = 0U;
        } else {
            if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q) 
                 & (4U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)))) {
                __VdlyVal__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0 
                    = (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q);
                __VdlyDim0__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0 
                    = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q;
                __VdlySet__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0 = 1U;
                __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q)));
            }
            if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                 & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)))) {
                __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q)));
            }
            if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q) 
                  & (4U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))) 
                 & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                       & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)))))) {
                __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)));
            } else if (((~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q) 
                            & (4U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)))) 
                        & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                           & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))))) {
                __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q 
                    = (7U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q) 
                             - (IData)(1U)));
            }
        }
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q 
            = __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q;
        if (vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w) {
            __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q = 0U;
            __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q = 0U;
        } else {
            if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                  & (4U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))) 
                 & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w) 
                       & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)))))) {
                __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)));
            } else if (((~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                            & (4U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)))) 
                        & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w) 
                           & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))))) {
                __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q 
                    = (7U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q) 
                             - (IData)(1U)));
            }
            if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                 & (4U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)))) {
                __VdlyVal__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0 
                    = Vriscv_soc__ConstPool__TABLE_h2582090b_0
                    [(((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                       << 1U) | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))];
                __VdlyDim0__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0 
                    = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q;
                __VdlySet__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0 = 1U;
                __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q)));
            }
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q) {
            __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) {
            __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q 
                = ((IData)(1U) + vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q);
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q) {
            __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) {
            __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q 
                = ((IData)(1U) + vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q);
        }
    }
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q;
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q;
    if (__VdlySet__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[__VdlyDim0__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0] 
            = __VdlyVal__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0;
    }
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q = 0U;
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q = 0U;
    } else {
        if (vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q) {
            __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q 
                = (0x0000000fU & vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q);
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q) {
            __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q) 
                                  | vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q));
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q) {
            __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q 
                = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q) 
                   & (~ vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q));
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_arvalid_o) 
             & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)))) {
            __VdlyVal__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0 
                = (((QData)((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                    << 0x0000000eU) | (QData)((IData)(
                                                      (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o) 
                                                        << 0x0000000aU) 
                                                       | ((((2U 
                                                             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                             ? 0U
                                                             : 
                                                            ((4U 
                                                              & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                              ? 7U
                                                              : 0U)) 
                                                           << 2U) 
                                                          | ((2U 
                                                              & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                              ? 1U
                                                              : 
                                                             ((4U 
                                                               & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                               ? 1U
                                                               : 
                                                              (1U 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                                                                >> 3U)))))))))))));
            __VdlyDim0__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q;
            __VdlySet__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0 = 1U;
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q)));
        }
    }
    vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q;
    if (__VdlySet__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q[__VdlyDim0__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0] 
            = __VdlyVal__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0;
    }
    vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q;
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q 
            = __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q;
        __Vdly__u_soc__DOT__u_intc__DOT__irq_pending_q = 0U;
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q = 0U;
    } else {
        if (((0x0000000aU == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q) 
             | ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q) 
                & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__start_w))))) {
            __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__start_w) {
            __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q;
        } else if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
                    & (0U == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)))) {
                __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q)));
            }
        }
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q 
            = __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q;
        __Vdly__u_soc__DOT__u_intc__DOT__irq_pending_q 
            = (((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__intr_q) 
                  << 3U) | (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__intr_q)) 
                            << 2U)) | (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__intr_q) 
                                        << 1U) | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__intr_q))) 
               | ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q) 
                  & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q))));
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_wvalid_o) 
             & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))) {
            __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0 
                = (((QData)((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o)) 
                    << 0x00000024U) | (((QData)((IData)(
                                                        (0x0000000fU 
                                                         & ((2U 
                                                             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                             ? vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                                            [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U]
                                                             : 
                                                            ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_wstrb_i) 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                                >> 2U))))) 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (~ 
                                                                                ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                                >> 3U))))))))))) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o))));
            __VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q;
            __VdlySet__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0 = 1U;
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q)));
        }
    }
    vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q;
    if (__VdlySet__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q[__VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0] 
            = __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0;
    }
    vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q;
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q = 0U;
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q;
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q = 0U;
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_bvalid_i) 
              & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))) 
             & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o) 
                   & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)));
        } else if (((~ ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_bvalid_i) 
                        & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)))) 
                    & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o) 
                       & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o) 
             & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q)));
        }
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q;
        if ((((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_rvalid_i) 
              & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))) 
             & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o) 
                   & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)));
        } else if (((~ ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_rvalid_i) 
                        & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)))) 
                    & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o) 
                       & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_bvalid_i) 
             & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)))) {
            __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0 
                = (((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_bresp_i) 
                    << 4U) | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_bid_i));
            __VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q;
            __VdlySet__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0 = 1U;
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q)));
        }
    }
    vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q;
    vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q;
    if (__VdlySet__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q[__VdlyDim0__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0] 
            = __VdlyVal__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0;
    }
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q;
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o) 
             & (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q)));
        }
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q 
            = __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q;
        if (((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_rvalid_i) 
             & (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)))) {
            __VdlyVal__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0 
                = (((QData)((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_rdata_i)) 
                    << 7U) | (QData)((IData)((((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_rresp_i) 
                                               << 5U) 
                                              | (((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_rid_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__mem_rlast_i))))));
            __VdlyDim0__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q;
            __VdlySet__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0 = 1U;
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q)));
        }
    }
    vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q;
    vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q;
    if (__VdlySet__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q[__VdlyDim0__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0] 
            = __VdlyVal__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0;
    }
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) {
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__output_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q = 1U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q = 0U;
        __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q = 0U;
    } else {
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__output_q 
            = vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r;
        vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q 
            = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q 
            = vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_q;
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x60U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 7U));
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 1U));
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 2U));
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 8U));
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 4U));
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x70U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q 
                = (1U & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o);
        }
        vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q 
            = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r;
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w) 
             | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q))) {
            vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q) 
             & (0U == vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q))) {
            if ((9U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rxd_q)))) {
                    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q = 1U;
                }
            } else if (((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q)) 
                        & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rxd_q))) {
                vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q = 1U;
            }
        }
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w;
        if (((0x0000000aU == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q) 
             | ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q) 
                & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__start_w))))) {
            __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q = 0U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__start_w) {
            if (vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__drive_r) {
                vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q 
                    = (1U & (Vriscv_soc__ConstPool__TABLE_h2582090b_0
                             [(((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
                                        [vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q]) 
                                << 1U) | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))] 
                             >> 7U));
                __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q 
                    = (0x000000feU & (Vriscv_soc__ConstPool__TABLE_h2582090b_0
                                      [(((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
                                                 [vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q]) 
                                         << 1U) | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))] 
                                      << 1U));
            } else {
                __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q 
                    = Vriscv_soc__ConstPool__TABLE_h2582090b_0
                    [(((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
                               [vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q]) 
                       << 1U) | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))];
            }
        } else if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
                    & (0U == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
            if (vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__drive_r) {
                vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q 
                    = (1U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                             >> 7U));
                __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                      << 1U));
            } else if (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27) 
                        & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__start_w)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_63)))) {
                __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q 
                    = ((0xfeU & (IData)(__Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q)) 
                       | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__miso_w));
            }
        }
    }
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q;
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q;
    if (__VdlySet__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[__VdlyDim0__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0] 
            = __VdlyVal__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0;
    }
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q = 0x0fU;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q = 0x0fU;
        vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q 
                = (0x0000000eU & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                  << 1U));
        }
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q 
                = (0x0000000eU & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                  << 1U));
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) {
            vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q = 1U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o) {
            vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q = 0U;
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) {
            vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q = 1U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o) {
            vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q = 0U;
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) {
            vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q = 1U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o) {
            vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q = 0U;
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) {
            vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q = 1U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o) {
            vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q = 0U;
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q = 1U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_o) 
             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awready_i))) {
            vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q 
                = ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                    ? 4U : 0U);
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o) 
             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))) {
            vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o;
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
                   | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__data_r;
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                   | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q 
                = ((0U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                    ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q)
                    : ((4U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                        ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w)
                        : ((8U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                            ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q)
                            : ((0x18U == (0x000000ffU 
                                          & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                ? Vriscv_soc__ConstPool__TABLE_haa28ef1b_0
                               [vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w]
                                : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q) 
                                   & (- (IData)((0x1cU 
                                                 == 
                                                 (0x000000ffU 
                                                  & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)))))))));
        }
    }
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q 
        = __Vdly__u_soc__DOT__u_intc__DOT__irq_pending_q;
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q 
        = __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q;
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (0x10U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x68U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (8U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0x10U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0x14U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__intr_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i))) 
           && (0U != (vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q 
                      & vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q)));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__intr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q) 
              | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q)));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__intr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
               & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                  & (vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q 
                     == vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q))) 
              | ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                 & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                    & (vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q 
                       == vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q)))));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_i 
        = (3U & (vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q
                 [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q] 
                 >> 4U));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bid_i 
        = (0x0000000fU & vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q
           [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q]);
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_i 
        = (3U & (IData)((vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                         [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q] 
                         >> 5U)));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_i 
        = (IData)((vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                   [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q] 
                   >> 7U));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_i 
        = (1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                        [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q]));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rid_i 
        = (0x0000000fU & (IData)((vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                                  [vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q] 
                                  >> 1U)));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x60U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i))) 
           && (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r));
    if ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i 
                = ((0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)) 
                   & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q));
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bresp_i 
                = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_i) 
                   & (- (IData)((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q)))));
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bid_i 
                = ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bid_i)
                    : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q));
        } else {
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i 
                = ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q)
                    : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q));
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bresp_i = 0U;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bid_i 
                = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i 
            = ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q)
                : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q));
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bresp_i = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bid_i 
            = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q;
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))) {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i 
            = vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bresp_i = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bid_i 
            = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q;
    } else {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i 
            = (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q));
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bresp_i 
            = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_i;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bid_i 
            = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bid_i;
    }
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q));
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) {
        vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__intr_q = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)) 
                   | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q 
                = ((0U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                    ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q)
                    : ((8U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                        ? (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                            << 4U) | (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) 
                                       << 3U) | ((4U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (- (IData)((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q)))))))
                        : (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                            << 4U) & (- (IData)((0x0cU 
                                                 == 
                                                 (0x000000ffU 
                                                  & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)))))));
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
                   | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q 
                = ((0U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                    ? vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q
                    : ((4U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                        ? vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_q
                        : ((8U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                            ? vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w
                            : ((0x14U == (0x000000ffU 
                                          & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                ? vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q
                                : ((0x20U == (0x000000ffU 
                                              & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                    ? vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q
                                    : ((0x24U == (0x000000ffU 
                                                  & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                        ? vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q
                                        : (vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                           & (- (IData)(
                                                        (0x28U 
                                                         == 
                                                         (0x000000ffU 
                                                          & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)))))))))));
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                   | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q 
                = ((8U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                    ? (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                        << 2U) | ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                                  << 1U)) : ((0x0cU 
                                              == (0x000000ffU 
                                                  & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                              ? vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q
                                              : ((0x10U 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                  ? vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q
                                                  : 
                                                 ((0x14U 
                                                   == 
                                                   (0x000000ffU 
                                                    & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                   ? 
                                                  (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                                                    << 2U) 
                                                   | ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                                                      << 1U))
                                                   : 
                                                  ((0x18U 
                                                    == 
                                                    (0x000000ffU 
                                                     & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                    ? vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q
                                                    : 
                                                   (vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q 
                                                    & (- (IData)(
                                                                 (0x1cU 
                                                                  == 
                                                                  (0x000000ffU 
                                                                   & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))))))))));
        }
        vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o;
        vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o;
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x60U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 3U));
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q 
                = (1U & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o);
        }
        vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q 
            = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
                & (0x0cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))
                ? (0x0000000fU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o)
                : 0U);
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q 
                = (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                   >> 0x1fU);
        }
        if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q) 
              & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q)) 
             & (0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__intr_q = 1U;
        } else if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q) 
                    & (vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                       >> 2U))) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__intr_q = 0U;
        }
    }
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q;
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q 
        = __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q;
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q 
        = __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q;
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rid_i 
        = ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
            ? ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rid_i)
                    : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
            : ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                : ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                    : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rid_i))));
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) {
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x60U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 9U));
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o) 
             & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q = 1U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i) {
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q = 0U;
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__read_en_w) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q = 1U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
             & (0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q 
                = (1U & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o);
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__read_en_w) {
            vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q = 1U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o) {
            vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
             & (0x0cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 4U));
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q) 
             & (0U == vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q))) {
            if ((9U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))) {
                vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q 
                    = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rxd_q)
                        ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q)
                        : 0U);
            }
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__read_en_w) {
            vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q = 1U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o) {
            vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q = 0U;
        }
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
            = vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_ms;
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
             & (0U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o;
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
             & (0x28U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o;
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
             & (0x24U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o;
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__read_en_w) {
            vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q = 1U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o) {
            vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q = 0U;
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__read_en_w) {
            vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q = 1U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o) {
            vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q = 0U;
        }
    }
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i 
        = ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
            ? ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? ((0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)) 
                   & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                : ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)
                    : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)))
            : ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)
                    : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q))
                : ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)
                    : (0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)))));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q;
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__miso_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
            ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
            : (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__spi_miso_i));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x20U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q));
    if (vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) {
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q = 0U;
        __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q = 0U;
        __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_ms = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q = 0U;
        __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q = 0U;
        __Vdly__u_soc__DOT__u_spi__DOT__active_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q = 0U;
    } else {
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q 
            = vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r;
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
             & (0x14U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o;
        }
        if (vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) {
            if (((0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                 & (0U == vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q))) {
                __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q 
                    = (0x0000007fU & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q) 
                                      >> 1U));
            }
            if (((9U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                 & (0U == vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q))) {
                __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q = 0U;
                vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q = 1U;
            }
        } else {
            if (vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q) {
                __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q 
                    = (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q);
                __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q = 1U;
            }
            vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w) 
             | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q))) {
            vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q) 
             & (0U == vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q))) {
            if ((9U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))) {
                vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q 
                    = vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rxd_q;
            }
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x28U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 2U));
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
             & (8U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 1U));
            vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 2U));
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
             & (0x0cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o;
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
             & (0x14U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 1U));
            vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q 
                = (1U & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                         >> 2U));
        }
        if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
             & (0x18U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))) {
            vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o;
        }
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_ms 
            = vlSymsp->TOP.__Vcellinp__riscv_soc__gpio_input_i;
        vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o;
        if ((0x0000000aU == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q)) {
            __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q = 0U;
            __Vdly__u_soc__DOT__u_spi__DOT__active_q = 0U;
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q = 0U;
        } else if (vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__start_w) {
            __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q = 0U;
            __Vdly__u_soc__DOT__u_spi__DOT__active_q = 1U;
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q = 0U;
        } else if (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
                    & (0U == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
            if ((0x0fU == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q))) {
                __Vdly__u_soc__DOT__u_spi__DOT__active_q = 0U;
                vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q = 1U;
            } else {
                __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)));
            }
        } else {
            vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q = 0U;
        }
        vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q 
            = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
                & (0x40U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o)))
                ? vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o
                : 0U);
    }
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r 
        = ((8U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bid_i))
            ? (((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bid_i))
                 ? 2U : 1U) << 2U) : ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bid_i))
                                       ? 2U : 1U));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r 
        = ((8U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rid_i))
            ? (((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rid_i))
                 ? 2U : 1U) << 2U) : ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rid_i))
                                       ? 2U : 1U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_60 = ((~ vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q) 
                                                 ^ vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__input_q);
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q;
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__tx_bits_q;
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q;
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q;
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q;
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q;
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q;
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o 
        = (0U != ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                  & (2U | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_bready_i))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_bvalid_o 
        = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
            >> 1U) & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o 
        = (0U != ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                  & (6U | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_rready_i))));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
              & (4U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rxd_q 
        = ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) 
           || (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i)) 
           & (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
               & (0x0cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))) 
              & (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
                 >> 1U)));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bready_o) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__clk_div_q;
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q;
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__active_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__active_q;
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
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q 
        = ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__rst_i) 
           || (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__uart_txd_i));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_63 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q) 
                                                 == 
                                                 (1U 
                                                  & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
                                                 & (0U 
                                                    == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__start_w 
        = ((~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
               | ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                  | (0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))))) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
              & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q)) 
                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__drive_r 
        = (1U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__start_w)
                  ? (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q))
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_63)) 
                     & (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q) 
                         | ((0U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)) 
                            & (0x0fU != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)))) 
                        & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27)))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q) 
           | (0x0000000aU == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q) 
           | (0x0000000aU == vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q));
}

void Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__1(Vriscv_soc_riscv_soc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awaddr_i 
        = (0xfffffffcU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
           [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][0U]);
}

void Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__2(Vriscv_soc_riscv_soc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc___nba_sequent__TOP__riscv_soc__2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rlast_i 
            = (1U & (IData)(((3U != (3U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) 
                             | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_i))));
        if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rresp_i 
                = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_i) 
                   & (- (IData)((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q)))));
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i 
                = (vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_i 
                   & (- (IData)((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q)))));
        } else {
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rresp_i = 0U;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i 
                = ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q
                    : vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q);
        }
    } else {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rlast_i 
            = (1U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_i) 
                     | (0U != (3U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q)))));
        if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rresp_i = 0U;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i 
                = ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q
                    : vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q);
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rresp_i = 0U;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i 
                = vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q;
        } else {
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rresp_i 
                = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_i;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rdata_i 
                = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_i;
        }
    }
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o 
        = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
            >> 2U) & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rready_o) 
              & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rlast_i)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_24 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_rlast_i) 
                                                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o));
}

void Vriscv_soc_riscv_soc___nba_comb__TOP__riscv_soc__0(Vriscv_soc_riscv_soc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc___nba_comb__TOP__riscv_soc__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i 
        = ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_58)) 
           & (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_32));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_wvalid_i 
        = (1U & (~ ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q) 
                    | (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_25))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i 
        = (1U & (~ ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q) 
                    | (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_25))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_q) 
           | ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
              & (2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_45 = ((IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i) 
                                                 | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i) 
                                                 | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q) 
                                                 & (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q) 
                                                 & (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_46 = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45) 
                                                 | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i));
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
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
            [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][1U];
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_wvalid_i;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awaddr_i;
    } else {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_o 
            = (vlSymsp->TOP.__Vcellinp__riscv_soc__inport_wdata_i 
               & ((- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                       >> 2U))))) & 
                  (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                       >> 3U)))))));
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o 
            = (IData)(((0U == (0x0cU & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) 
                       & (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_wvalid_i)));
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o 
            = ((- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                    >> 3U))))) & (vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awaddr_i 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                    >> 2U)))))));
    }
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o 
        = ((1U & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                  >> 1U)) || (IData)((0U == (0x0cU 
                                             & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w)))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)) 
           & ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
               ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i)
               : (IData)(((0U == (0x0cU & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) 
                          & (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_awvalid_i)))));
    if ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))) {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o = 4U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awaddr_i;
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))) {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o = 8U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o 
            = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o 
            = (0xffffffe0U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q);
    } else {
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o = 0U;
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o 
            = ((~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                   >> 3U)) & (IData)(vlSymsp->TOP.__Vcellinp__riscv_soc__inport_arvalid_i));
        vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o 
            = (vlSymsp->TOP.__Vcellinp__riscv_soc__inport_araddr_i 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                      >> 3U))))));
    }
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r 
        = ((0x95000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))
            ? 6U : ((0x94000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))
                     ? 5U : ((0x93000000U == (0xff000000U 
                                              & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))
                              ? 4U : ((0x92000000U 
                                       == (0xff000000U 
                                           & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))
                                       ? 3U : ((0x91000000U 
                                                == 
                                                (0xff000000U 
                                                 & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))
                                                ? 2U
                                                : (1U 
                                                   & (- (IData)(
                                                                (0x90000000U 
                                                                 == 
                                                                 (0xff000000U 
                                                                  & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_o))))))))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__data_r 
        = (((0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
             ? ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                << 0x0000001fU) : ((0x20U == (0x000000ffU 
                                              & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                    ? ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                                       << 2U) : ((0x28U 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                  ? 
                                                 ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q) 
                                                  << 2U)
                                                  : 
                                                 ((- (IData)(
                                                             (0x40U 
                                                              != 
                                                              (0x000000ffU 
                                                               & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)))) 
                                                  & ((0x60U 
                                                      == 
                                                      (0x000000ffU 
                                                       & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
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
                                                        & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
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
                                                         & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                        ? vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                                                       [vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q]
                                                        : (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q)))))))) 
           & (- (IData)(((0x1cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                         | ((0x20U == (0x000000ffU 
                                       & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                            | ((0x28U == (0x000000ffU 
                                          & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                               | ((0x40U == (0x000000ffU 
                                             & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                                  | ((0x60U == (0x000000ffU 
                                                & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                                     | ((0x64U == (0x000000ffU 
                                                   & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                                        | ((0x6cU == 
                                            (0x000000ffU 
                                             & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
                                           | (0x70U 
                                              == (0x000000ffU 
                                                  & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))))))))))));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r 
        = ((0x95000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
            ? 6U : ((0x94000000U == (0xff000000U & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                     ? 5U : ((0x93000000U == (0xff000000U 
                                              & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                              ? 4U : ((0x92000000U 
                                       == (0xff000000U 
                                           & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                       ? 3U : ((0x91000000U 
                                                == 
                                                (0xff000000U 
                                                 & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))
                                                ? 2U
                                                : (1U 
                                                   & (- (IData)(
                                                                (0x90000000U 
                                                                 == 
                                                                 (0xff000000U 
                                                                  & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o))))))))));
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
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_wvalid_o 
        = ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
           & ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
              & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
                                                & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w) 
           & Vriscv_soc__ConstPool__TABLE_h73ab2485_0
           [(((((4U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                       << 2U)) | ((2U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                                         << 1U)) | 
                                  (1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q))))) 
               << 6U) | (((2U & ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
                                 << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))) 
                         << 4U)) | (((2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)) 
                                     << 3U) | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)))]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o) 
                                                & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_awvalid_o 
        = ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_arvalid_o 
        = ((0U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o 
        = ((1U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o 
        = ((2U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o 
        = ((5U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_arvalid_o 
        = ((3U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_arvalid_o 
        = ((4U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
        = (0x0000000fU & (((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)) 
                           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))
                           : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q) 
                              - ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w)) 
                                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_awready_i 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_awready_i 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_arvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_awready_i 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_arvalid_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__read_en_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_arvalid_o));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_awready_i 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q) 
                    | (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_arvalid_o))));
    vlSelfRef.__PVT__u_soc__DOT__u_intc__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i) 
           & ((1U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
    vlSelfRef.__PVT__u_soc__DOT__u_timer__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_awready_i) 
           & ((2U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
    vlSelfRef.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_awready_i) 
           & ((5U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w 
        = ((0U == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__read_en_w));
    vlSelfRef.__PVT__u_soc__DOT__u_uart__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_awready_i) 
           & ((3U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
    if ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_awready_i;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_awready_i;
    } else {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_awready_i;
        vlSelfRef.__VdfgRegularize_hebeb780c_0_31 = vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_awready_i;
    }
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w 
        = ((0x6cU == (0x000000ffU & vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_o)) 
           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__read_en_w));
    vlSelfRef.__PVT__u_soc__DOT__u_spi__DOT__write_en_w 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_awready_i) 
           & ((4U == (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
               ? ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? ((2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)) 
                      & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31))
               : ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)
                   : ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i)
                       : (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awready_i 
        = ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & ((4U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
               ? ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? ((2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)) 
                      & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_31))
               : ((2U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)
                   : ((1U & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i)
                       : (2U != (IData)(vlSelfRef.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_wready_o 
        = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
            >> 1U) & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i));
    if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_o) {
        if (vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awready_i) {
            vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w = 1U;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q;
            vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r 
                = vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q;
            if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                  & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i)) 
                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o))) {
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
            if ((((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                  & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i)) 
                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o))) {
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 0U;
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
            } else {
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
                vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 1U;
            }
        }
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)) 
                                                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__outport_awready_i));
    vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
        = (0x0000000fU & (((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)) 
                           & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w))
                           ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))
                           : ((IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q) 
                              - ((~ (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w)) 
                                 & (IData)(vlSelfRef.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)))));
    vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__inport1_awready_o 
        = (((IData)(vlSelfRef.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
            >> 1U) & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14));
}
