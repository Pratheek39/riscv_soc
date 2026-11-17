// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vriscv_soc__Syms.h"


void Vriscv_soc::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vriscv_soc__Syms* __restrict vlSymsp = static_cast<Vriscv_soc__Syms*>(userp);
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vriscv_soc::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_soc__Syms* __restrict vlSymsp = static_cast<Vriscv_soc__Syms*>(userp);
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp4[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awlen_r),8);
            tracep->chgCData(oldp+1,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+2,(vlTOPp->__Vcellinp__riscv_soc__clk_i));
            tracep->chgBit(oldp+3,(vlTOPp->__Vcellinp__riscv_soc__rst_i));
            tracep->chgIData(oldp+4,(vlTOPp->__Vcellinp__riscv_soc__reset_vector_i),32);
            tracep->chgBit(oldp+5,(vlTOPp->__Vcellinp__riscv_soc__inport_awvalid_i));
            tracep->chgIData(oldp+6,(vlTOPp->__Vcellinp__riscv_soc__inport_awaddr_i),32);
            tracep->chgBit(oldp+7,(vlTOPp->__Vcellinp__riscv_soc__inport_wvalid_i));
            tracep->chgIData(oldp+8,(vlTOPp->__Vcellinp__riscv_soc__inport_wdata_i),32);
            tracep->chgCData(oldp+9,(vlTOPp->__Vcellinp__riscv_soc__inport_wstrb_i),4);
            tracep->chgBit(oldp+10,(vlTOPp->__Vcellinp__riscv_soc__inport_bready_i));
            tracep->chgBit(oldp+11,(vlTOPp->__Vcellinp__riscv_soc__inport_arvalid_i));
            tracep->chgIData(oldp+12,(vlTOPp->__Vcellinp__riscv_soc__inport_araddr_i),32);
            tracep->chgBit(oldp+13,(vlTOPp->__Vcellinp__riscv_soc__inport_rready_i));
            tracep->chgBit(oldp+14,(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i));
            tracep->chgBit(oldp+15,(vlTOPp->__Vcellinp__riscv_soc__spi_miso_i));
            tracep->chgBit(oldp+16,(vlTOPp->__Vcellinp__riscv_soc__uart_txd_i));
            tracep->chgIData(oldp+17,(vlTOPp->__Vcellinp__riscv_soc__gpio_input_i),32);
            tracep->chgBit(oldp+18,(vlTOPp->__Vcellinp__riscv_soc__mem_awready_i));
            tracep->chgBit(oldp+19,(vlTOPp->__Vcellinp__riscv_soc__mem_wready_i));
            tracep->chgBit(oldp+20,(vlTOPp->__Vcellinp__riscv_soc__mem_bvalid_i));
            tracep->chgCData(oldp+21,(vlTOPp->__Vcellinp__riscv_soc__mem_bresp_i),2);
            tracep->chgCData(oldp+22,(vlTOPp->__Vcellinp__riscv_soc__mem_bid_i),4);
            tracep->chgBit(oldp+23,(vlTOPp->__Vcellinp__riscv_soc__mem_arready_i));
            tracep->chgBit(oldp+24,(vlTOPp->__Vcellinp__riscv_soc__mem_rvalid_i));
            tracep->chgIData(oldp+25,(vlTOPp->__Vcellinp__riscv_soc__mem_rdata_i),32);
            tracep->chgCData(oldp+26,(vlTOPp->__Vcellinp__riscv_soc__mem_rresp_i),2);
            tracep->chgCData(oldp+27,(vlTOPp->__Vcellinp__riscv_soc__mem_rid_i),4);
            tracep->chgBit(oldp+28,(vlTOPp->__Vcellinp__riscv_soc__mem_rlast_i));
            tracep->chgBit(oldp+29,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                     & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w))));
            tracep->chgBit(oldp+30,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                     & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awready_w));
            tracep->chgBit(oldp+32,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                      >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w))));
            tracep->chgBit(oldp+33,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                      >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))));
            tracep->chgBit(oldp+34,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                      >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_wready_w));
            tracep->chgCData(oldp+36,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r),4);
            tracep->chgBit(oldp+37,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arvalid_w));
            tracep->chgBit(oldp+39,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w));
            tracep->chgIData(oldp+43,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r),32);
            tracep->chgBit(oldp+44,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w));
            tracep->chgCData(oldp+45,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r),4);
            tracep->chgBit(oldp+46,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w));
            tracep->chgIData(oldp+47,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r),32);
            tracep->chgBit(oldp+48,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w));
            tracep->chgBit(oldp+49,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgBit(oldp+50,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w));
            tracep->chgBit(oldp+52,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w));
            tracep->chgBit(oldp+54,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r));
            tracep->chgIData(oldp+55,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r),32);
            tracep->chgBit(oldp+56,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w));
            tracep->chgBit(oldp+57,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w));
            tracep->chgBit(oldp+58,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awvalid_w));
            tracep->chgBit(oldp+59,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgCData(oldp+60,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r),2);
            tracep->chgBit(oldp+61,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w));
            tracep->chgBit(oldp+62,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgBit(oldp+63,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w));
            tracep->chgBit(oldp+64,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w));
            tracep->chgBit(oldp+65,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgBit(oldp+66,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgBit(oldp+67,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgBit(oldp+68,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgBit(oldp+69,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w));
            tracep->chgBit(oldp+70,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w));
            tracep->chgBit(oldp+71,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w));
            tracep->chgCData(oldp+72,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r),4);
            tracep->chgBit(oldp+73,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wvalid_w));
            tracep->chgCData(oldp+74,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r),8);
            tracep->chgBit(oldp+75,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgBit(oldp+76,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgBit(oldp+77,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
                                     & (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)))));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_arvalid_w));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w));
            tracep->chgBit(oldp+80,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                      >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w))));
            tracep->chgBit(oldp+81,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arready_w));
            tracep->chgBit(oldp+82,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w));
            tracep->chgIData(oldp+83,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r),32);
            tracep->chgBit(oldp+84,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__read_en_w));
            tracep->chgBit(oldp+85,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w));
            tracep->chgIData(oldp+86,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r),32);
            tracep->chgBit(oldp+87,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w));
            tracep->chgIData(oldp+89,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r),32);
            tracep->chgCData(oldp+90,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r),4);
            tracep->chgCData(oldp+91,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r),3);
            tracep->chgBit(oldp+92,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w));
            tracep->chgCData(oldp+95,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r),4);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r),3);
            tracep->chgBit(oldp+97,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w));
            tracep->chgBit(oldp+98,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w));
            tracep->chgBit(oldp+99,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w));
            tracep->chgIData(oldp+100,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r),32);
            tracep->chgBit(oldp+101,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__read_en_w));
            tracep->chgBit(oldp+102,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w));
            tracep->chgBit(oldp+103,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__start_w));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w));
            tracep->chgCData(oldp+105,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w),4);
            tracep->chgCData(oldp+106,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w),4);
            tracep->chgBit(oldp+107,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r));
            tracep->chgBit(oldp+108,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r));
            tracep->chgCData(oldp+110,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w),4);
            tracep->chgCData(oldp+111,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_unmasked_w),4);
            tracep->chgCData(oldp+112,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w),4);
            tracep->chgCData(oldp+113,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                        ^ (0xeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                                   << 1U)))),4);
            tracep->chgCData(oldp+114,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w),4);
            tracep->chgCData(oldp+115,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_unmasked_w),4);
            tracep->chgCData(oldp+116,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w),4);
            tracep->chgCData(oldp+117,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                        ^ (0xeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                                   << 1U)))),4);
            tracep->chgBit(oldp+118,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w));
            tracep->chgIData(oldp+120,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r),32);
            tracep->chgBit(oldp+121,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w) 
                                      & (0x60U == (0xffU 
                                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)))));
            tracep->chgBit(oldp+122,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w));
            tracep->chgQData(oldp+123,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)) 
                                         << 0xeU) | (QData)((IData)(
                                                                    (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r) 
                                                                      << 0xaU) 
                                                                     | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awlen_r) 
                                                                         << 2U) 
                                                                        | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r))))))),46);
            tracep->chgQData(oldp+125,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r)) 
                                         << 0x24U) 
                                        | (((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r))))),37);
            tracep->chgCData(oldp+127,((((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_bresp_i) 
                                         << 4U) | (IData)(vlTOPp->__Vcellinp__riscv_soc__mem_bid_i))),6);
            tracep->chgQData(oldp+128,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) 
                                         << 0xeU) | (QData)((IData)(
                                                                    (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r) 
                                                                      << 0xaU) 
                                                                     | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r) 
                                                                         << 2U) 
                                                                        | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r))))))),46);
            tracep->chgQData(oldp+130,((((QData)((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rdata_i)) 
                                         << 7U) | (QData)((IData)(
                                                                  (((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rresp_i) 
                                                                    << 5U) 
                                                                   | (((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rid_i) 
                                                                       << 1U) 
                                                                      | (IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rlast_i))))))),39);
            tracep->chgBit(oldp+132,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__read_en_w));
            tracep->chgBit(oldp+133,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w));
            tracep->chgBit(oldp+134,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__read_en_w) 
                                      & (8U == (0xffU 
                                                & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)))));
            tracep->chgBit(oldp+135,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__write_complete_w));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__read_complete_w));
            tracep->chgBit(oldp+137,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_pop_w));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [4U]))) {
            tracep->chgBit(oldp+138,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                      & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) 
                                         & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q))))));
            tracep->chgBit(oldp+139,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                       >> 2U) & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) 
                                                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q))))));
            tracep->chgBit(oldp+140,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                       >> 3U) & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) 
                                                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q))))));
            tracep->chgBit(oldp+141,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w) 
                                      & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)))));
            tracep->chgBit(oldp+142,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w) 
                                      & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))));
            tracep->chgBit(oldp+143,((1U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                             ? ((2U 
                                                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                                  ? 
                                                 (2U 
                                                  != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))
                                                  : 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                                  ? 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q))
                                                  : 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q))))
                                             : ((2U 
                                                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                                  ? 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q))
                                                  : 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                                                  ? 
                                                 (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q))
                                                  : 
                                                 (2U 
                                                  != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))))))));
            tracep->chgBit(oldp+144,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                       ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                           ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                               ? (2U 
                                                  != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))
                                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w))
                                           : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w)
                                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w)))
                                       : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                           ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w)
                                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w))
                                           : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w)
                                               : (2U 
                                                  != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))))));
            tracep->chgBit(oldp+145,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                       ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                           ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                               ? (2U 
                                                  != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))
                                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w))
                                           : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w)
                                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w)))
                                       : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                           ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w)
                                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w))
                                           : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w)
                                               : (2U 
                                                  != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))))));
            tracep->chgCData(oldp+146,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w),4);
            tracep->chgCData(oldp+147,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w),4);
            tracep->chgBit(oldp+148,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
                                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
                                       : (IData)(vlTOPp->__Vcellinp__riscv_soc__spi_miso_i))));
            tracep->chgIData(oldp+149,(((0U == (0xffU 
                                                & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                         ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q
                                         : ((4U == 
                                             (0xffU 
                                              & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                             ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q
                                             : ((8U 
                                                 == 
                                                 (0xffU 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                 ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w
                                                 : 
                                                ((0x14U 
                                                  == 
                                                  (0xffU 
                                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                  ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (0xffU 
                                                    & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                   ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q
                                                   : 
                                                  ((0x24U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                    ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q
                                                    : 
                                                   ((0x28U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                                     ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q
                                                     : 0U)))))))),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+150,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q),20);
            tracep->chgBit(oldp+151,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q 
                                            >> 0x13U))));
            tracep->chgIData(oldp+152,((0x7ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q)),19);
            tracep->chgIData(oldp+153,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q),20);
            tracep->chgBit(oldp+154,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q 
                                            >> 0x13U))));
            tracep->chgIData(oldp+155,((0x7ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q)),19);
            tracep->chgIData(oldp+156,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q),32);
            tracep->chgIData(oldp+157,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+158,((0xfffffffcU 
                                        & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[0U])),32);
            tracep->chgIData(oldp+159,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[1U]),32);
            tracep->chgCData(oldp+160,((0xfU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[2U])),4);
            tracep->chgIData(oldp+161,((0xffffffe0U 
                                        & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q)),32);
            tracep->chgBit(oldp+162,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w));
            tracep->chgBit(oldp+163,(((0x80000000U 
                                       <= vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o) 
                                      & (0x8fffffffU 
                                         >= vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o))));
            tracep->chgIData(oldp+164,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__inst_r),32);
            tracep->chgSData(oldp+165,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w),11);
            tracep->chgBit(oldp+166,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                                      & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
            tracep->chgIData(oldp+167,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o),32);
            tracep->chgBit(oldp+168,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q) 
                                      | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q))));
            tracep->chgSData(oldp+169,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                         ? 0x380U : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q))),11);
            tracep->chgIData(oldp+170,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                         ? 0U : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)),32);
            tracep->chgBit(oldp+171,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_rd_o));
            tracep->chgBit(oldp+172,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o));
            tracep->chgBit(oldp+173,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q));
            tracep->chgCData(oldp+174,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_wr_o),4);
            tracep->chgBit(oldp+175,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                                      & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
            tracep->chgBit(oldp+176,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
            tracep->chgBit(oldp+177,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
            tracep->chgBit(oldp+178,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_pending_q));
            tracep->chgBit(oldp+179,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
            tracep->chgWData(oldp+180,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w),69);
            tracep->chgBit(oldp+183,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_push_w));
            tracep->chgBit(oldp+184,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__res_push_w));
            tracep->chgBit(oldp+185,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q));
            tracep->chgBit(oldp+186,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q));
            __Vtemp4[0U] = (IData)((((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                       ? 0U
                                                       : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))) 
                                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o))));
            __Vtemp4[1U] = (IData)(((((QData)((IData)(
                                                      ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                        ? 0U
                                                        : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))) 
                                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_addr_o))) 
                                    >> 0x20U));
            __Vtemp4[2U] = ((0xfffffff0U & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_rd_o) 
                                            << 4U)) 
                            | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_wr_o));
            tracep->chgWData(oldp+187,(__Vtemp4),69);
            tracep->chgWData(oldp+190,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[0]),69);
            tracep->chgWData(oldp+193,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[1]),69);
            tracep->chgWData(oldp+196,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[2]),69);
            tracep->chgWData(oldp+199,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[3]),69);
            tracep->chgCData(oldp+202,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q),2);
            tracep->chgCData(oldp+203,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q),2);
            tracep->chgCData(oldp+204,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q),3);
            tracep->chgBit(oldp+205,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
            tracep->chgSData(oldp+206,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[0]),11);
            tracep->chgSData(oldp+207,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[1]),11);
            tracep->chgSData(oldp+208,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[2]),11);
            tracep->chgSData(oldp+209,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[3]),11);
            tracep->chgCData(oldp+210,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q),2);
            tracep->chgCData(oldp+211,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q),2);
            tracep->chgCData(oldp+212,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q),3);
            tracep->chgCData(oldp+213,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q),2);
            tracep->chgBit(oldp+214,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__invalidate_q));
            tracep->chgBit(oldp+215,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q));
            tracep->chgBit(oldp+216,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_valid_q));
            tracep->chgIData(oldp+217,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q),32);
            tracep->chgIData(oldp+218,((0x7ffffU & 
                                        (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                                         >> 0xdU))),19);
            tracep->chgIData(oldp+219,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r),20);
            tracep->chgBit(oldp+220,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w));
            tracep->chgBit(oldp+221,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w));
            tracep->chgBit(oldp+222,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_hit_any_w));
            tracep->chgSData(oldp+223,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_write_addr_q),11);
            tracep->chgCData(oldp+224,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__flush_addr_q),8);
            tracep->chgBit(oldp+225,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_q));
            tracep->chgBit(oldp+226,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w));
            tracep->chgQData(oldp+227,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q),58);
            tracep->chgBit(oldp+229,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w) 
                                      & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w))));
            tracep->chgBit(oldp+230,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q));
            tracep->chgIData(oldp+231,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q),32);
            tracep->chgBit(oldp+232,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q));
            tracep->chgBit(oldp+233,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
            tracep->chgIData(oldp+234,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q),32);
            tracep->chgBit(oldp+235,(((0x80000000U 
                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w)
                                       ? (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
                                           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)) 
                                          & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r)))
                                       : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q))));
            tracep->chgBit(oldp+236,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q));
            tracep->chgIData(oldp+237,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q),32);
            tracep->chgCData(oldp+238,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
            tracep->chgBit(oldp+239,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q));
            tracep->chgIData(oldp+240,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
            tracep->chgSData(oldp+241,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q),11);
            tracep->chgCData(oldp+242,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q),5);
            tracep->chgBit(oldp+243,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r));
            tracep->chgBit(oldp+244,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w));
            tracep->chgBit(oldp+245,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w));
            tracep->chgCData(oldp+246,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w),5);
            tracep->chgIData(oldp+247,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q),32);
            tracep->chgCData(oldp+248,((0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0x14U))),5);
            tracep->chgBit(oldp+249,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q));
            tracep->chgBit(oldp+250,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q));
            tracep->chgBit(oldp+251,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w));
            tracep->chgIData(oldp+252,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
            tracep->chgIData(oldp+253,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__fault_addr_r),32);
            tracep->chgIData(oldp+254,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_pc_w),32);
            tracep->chgCData(oldp+255,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q),5);
            tracep->chgBit(oldp+256,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q));
            tracep->chgIData(oldp+257,(((0x80000000U 
                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w)
                                         ? ((0xfffff000U 
                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q) 
                                            | (0xfffU 
                                               & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w))
                                         : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)),32);
            tracep->chgBit(oldp+258,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q));
            tracep->chgBit(oldp+259,((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))));
            tracep->chgBit(oldp+260,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
            tracep->chgIData(oldp+261,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q),32);
            tracep->chgCData(oldp+262,((0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+263,(((0x80000000U 
                                         & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w)
                                         ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w) 
                                            & (- (IData)(
                                                         ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w) 
                                                          & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_fault_r))))))
                                         : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))),4);
            tracep->chgIData(oldp+264,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q),32);
            tracep->chgBit(oldp+265,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                                      & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w))));
            tracep->chgBit(oldp+266,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_fault_r));
            tracep->chgIData(oldp+267,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w),32);
            tracep->chgCData(oldp+268,((0x1fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 7U))),5);
            tracep->chgIData(oldp+269,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w),32);
            tracep->chgBit(oldp+270,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                            >> 0x12U))));
            tracep->chgIData(oldp+271,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q),32);
            tracep->chgIData(oldp+272,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q),32);
            tracep->chgCData(oldp+273,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q),2);
            tracep->chgBit(oldp+274,((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q))));
            tracep->chgBit(oldp+275,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_q));
            tracep->chgCData(oldp+276,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_q),4);
            tracep->chgBit(oldp+277,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w));
            tracep->chgCData(oldp+278,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w),4);
            tracep->chgIData(oldp+279,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w),32);
            tracep->chgBit(oldp+280,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w));
            tracep->chgBit(oldp+281,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q));
            tracep->chgBit(oldp+282,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                                            >> 0x1fU))));
            tracep->chgIData(oldp+283,((0xfffff000U 
                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_satp_w 
                                           << 0xcU))),32);
            tracep->chgBit(oldp+284,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_miss_w));
            tracep->chgIData(oldp+285,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q),32);
            tracep->chgIData(oldp+286,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__virt_addr_q),32);
            tracep->chgBit(oldp+287,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_valid_q));
            tracep->chgIData(oldp+288,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_va_addr_q),20);
            tracep->chgIData(oldp+289,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q),32);
            tracep->chgBit(oldp+290,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_valid_q));
            tracep->chgIData(oldp+291,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_va_addr_q),20);
            tracep->chgIData(oldp+292,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q),32);
            tracep->chgBit(oldp+293,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__read_hold_q));
            tracep->chgBit(oldp+294,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_q));
            tracep->chgBit(oldp+295,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w));
            tracep->chgBit(oldp+296,((7U == (7U & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                                   >> 7U)))));
            tracep->chgBit(oldp+297,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_inst_w));
            tracep->chgBit(oldp+298,((1U & (((IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x1dU)) 
                                             | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x1eU))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x1fU))))));
            tracep->chgBit(oldp+299,((1U & (((IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x23U)) 
                                             | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x24U))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x25U))))));
            tracep->chgBit(oldp+300,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0x29U)) 
                                      & (0x3a0U == 
                                         (0xfffU & 
                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 0x14U))))));
            tracep->chgBit(oldp+301,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0x29U)) 
                                      & (0x3a1U == 
                                         (0xfffU & 
                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 0x14U))))));
            tracep->chgBit(oldp+302,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                               >> 0x29U)) 
                                      & (0x3a2U == 
                                         (0xfffU & 
                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                           >> 0x14U))))));
            tracep->chgIData(oldp+303,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q),32);
            tracep->chgIData(oldp+304,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_q),32);
            tracep->chgIData(oldp+305,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q),32);
            tracep->chgIData(oldp+306,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q),32);
            tracep->chgIData(oldp+307,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_q),32);
            tracep->chgIData(oldp+308,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q),32);
            tracep->chgCData(oldp+309,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q),2);
            tracep->chgIData(oldp+310,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q),32);
            tracep->chgIData(oldp+311,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_q),32);
            tracep->chgIData(oldp+312,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q),32);
            tracep->chgIData(oldp+313,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q),32);
            tracep->chgIData(oldp+314,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_q),32);
            tracep->chgIData(oldp+315,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_q),32);
            tracep->chgIData(oldp+316,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q),32);
            tracep->chgIData(oldp+317,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_q),32);
            tracep->chgIData(oldp+318,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__pc_m_q),32);
            tracep->chgIData(oldp+319,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r),32);
            tracep->chgCData(oldp+320,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__priv_r),2);
            tracep->chgBit(oldp+321,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__readonly_r));
            tracep->chgBit(oldp+322,((1U & (((0U != 
                                              (0x1fU 
                                               & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 0xfU))) 
                                             | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x29U))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x2cU))))));
            tracep->chgBit(oldp+323,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r));
            tracep->chgBit(oldp+324,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r));
            tracep->chgIData(oldp+325,(((IData)(1U) 
                                        + vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q)),32);
            tracep->chgIData(oldp+326,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q),32);
            tracep->chgIData(oldp+327,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q),32);
            tracep->chgBit(oldp+328,((1U & ((((((IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x1dU)) 
                                                | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x1eU))) 
                                               | (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x1fU))) 
                                              | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x20U))) 
                                             | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x21U))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x22U))))));
            tracep->chgIData(oldp+329,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r),32);
            tracep->chgBit(oldp+330,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r));
            tracep->chgIData(oldp+331,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_interrupts_r),32);
            tracep->chgBit(oldp+332,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__s_enabled_r));
            tracep->chgIData(oldp+333,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__s_interrupts_r),32);
            tracep->chgIData(oldp+334,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r),32);
            tracep->chgBit(oldp+335,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_en_q));
            tracep->chgCData(oldp+336,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_idx_q),5);
            tracep->chgBit(oldp+337,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__reset_q));
            tracep->chgBit(oldp+338,(((3U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                      & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q 
                                         >> 0x1fU))));
            tracep->chgCData(oldp+339,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__rd_q),5);
            tracep->chgIData(oldp+340,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_q),32);
            tracep->chgBit(oldp+341,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_busy_q));
            tracep->chgBit(oldp+342,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_inst_w));
            tracep->chgBit(oldp+343,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_rem_inst_w));
            tracep->chgBit(oldp+344,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__signed_operation_w));
            tracep->chgBit(oldp+345,((1U & ((IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x33U)) 
                                            | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x34U))))));
            tracep->chgIData(oldp+346,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q),32);
            tracep->chgQData(oldp+347,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__divisor_q),63);
            tracep->chgIData(oldp+349,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q),32);
            tracep->chgIData(oldp+350,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q),32);
            tracep->chgBit(oldp+351,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q));
            tracep->chgBit(oldp+352,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q));
            tracep->chgBit(oldp+353,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q));
            tracep->chgBit(oldp+354,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w));
            tracep->chgIData(oldp+355,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q)
                                         ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                             ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                             : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                         : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                             ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q)
                                             : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q))),32);
            tracep->chgBit(oldp+356,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__active_q));
            tracep->chgIData(oldp+357,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_pc_q),32);
            tracep->chgIData(oldp+358,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_q),32);
            tracep->chgBit(oldp+359,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_valid_q));
            tracep->chgBit(oldp+360,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_fetch_q));
            tracep->chgBit(oldp+361,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q));
            tracep->chgQData(oldp+362,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_buffer_q),64);
            tracep->chgBit(oldp+364,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q));
            tracep->chgBit(oldp+365,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_busy_w));
            tracep->chgIData(oldp+366,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__pc_d_q),32);
            tracep->chgBit(oldp+367,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q));
            tracep->chgIData(oldp+368,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q)
                                         ? 0x8000053U
                                         : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q)
                                             ? 0x53U
                                             : vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__inst_r))),32);
            tracep->chgBit(oldp+369,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__valid_q));
            tracep->chgIData(oldp+370,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_q),32);
            tracep->chgIData(oldp+371,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__ra_value_r),32);
            tracep->chgIData(oldp+372,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__rb_value_r),32);
            tracep->chgCData(oldp+373,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w),5);
            tracep->chgBit(oldp+374,((1U & ((((((((
                                                   ((((((((((((IData)(
                                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                       >> 0x1dU)) 
                                                              | (IData)(
                                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                         >> 0x1eU))) 
                                                             | (IData)(
                                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                        >> 0x1fU))) 
                                                            | (IData)(
                                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                       >> 0x20U))) 
                                                           | (IData)(
                                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                      >> 0x21U))) 
                                                          | (IData)(
                                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                     >> 0x22U))) 
                                                         | (IData)(
                                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                    >> 0x29U))) 
                                                        | (IData)(
                                                                  (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                   >> 0x2aU))) 
                                                       | (IData)(
                                                                 (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                  >> 0x2bU))) 
                                                      | (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x2cU))) 
                                                     | (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x2dU))) 
                                                    | (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x2eU))) 
                                                   | (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x2fU))) 
                                                  | (IData)(
                                                            (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                             >> 0x30U))) 
                                                 | (IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x31U))) 
                                                | (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x32U))) 
                                               | (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x33U))) 
                                              | (IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x34U))) 
                                             | (IData)(
                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                        >> 0x35U))) 
                                            | (IData)(
                                                      (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                       >> 0x36U))))));
            tracep->chgQData(oldp+375,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w),58);
            tracep->chgBit(oldp+377,(((((0x10500073U 
                                         == (0xffff8fffU 
                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                        | (0xfU == 
                                           (0x707fU 
                                            & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
                                       | (0x12000073U 
                                          == (0xfe007fffU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
                                      | (0x100fU == 
                                         (0x707fU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))));
            tracep->chgBit(oldp+378,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1ffffffffffffffULL 
                                                         & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w)))) 
                                            & (~ ((
                                                   ((0x10500073U 
                                                     == 
                                                     (0xffff8fffU 
                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                                    | (0xfU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
                                                   | (0x12000073U 
                                                      == 
                                                      (0xfe007fffU 
                                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))) 
                                                  | (0x100fU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w))))))));
            tracep->chgIData(oldp+379,((0xfffff000U 
                                        & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)),32);
            tracep->chgIData(oldp+380,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r),32);
            tracep->chgIData(oldp+381,(((0xffffe000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                           >> 0x1fU)))) 
                                            << 0xdU)) 
                                        | ((0x1000U 
                                            & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                       >> 7U))))))),32);
            tracep->chgIData(oldp+382,(((0xfff00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                           >> 0x1fU)))) 
                                            << 0x14U)) 
                                        | ((0xff000U 
                                            & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q) 
                                           | ((0x800U 
                                               & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                  >> 9U)) 
                                              | ((0x7e0U 
                                                  & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                       >> 0x14U))))))),32);
            tracep->chgIData(oldp+383,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | ((0xfe0U 
                                            & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                 >> 7U))))),32);
            tracep->chgCData(oldp+384,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r),4);
            tracep->chgBit(oldp+385,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__write_rd_r));
            tracep->chgBit(oldp+386,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_valid_q));
            tracep->chgIData(oldp+387,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_pc_q),32);
            tracep->chgIData(oldp+388,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r1_q),32);
            tracep->chgIData(oldp+389,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r2_q),32);
            tracep->chgIData(oldp+390,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r3_q),32);
            tracep->chgIData(oldp+391,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r4_q),32);
            tracep->chgIData(oldp+392,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r5_q),32);
            tracep->chgIData(oldp+393,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r6_q),32);
            tracep->chgIData(oldp+394,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r7_q),32);
            tracep->chgIData(oldp+395,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r8_q),32);
            tracep->chgIData(oldp+396,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r9_q),32);
            tracep->chgIData(oldp+397,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r10_q),32);
            tracep->chgIData(oldp+398,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r11_q),32);
            tracep->chgIData(oldp+399,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r12_q),32);
            tracep->chgIData(oldp+400,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r13_q),32);
            tracep->chgIData(oldp+401,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r14_q),32);
            tracep->chgIData(oldp+402,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r15_q),32);
            tracep->chgIData(oldp+403,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r16_q),32);
            tracep->chgIData(oldp+404,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r17_q),32);
            tracep->chgIData(oldp+405,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r18_q),32);
            tracep->chgIData(oldp+406,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r19_q),32);
            tracep->chgIData(oldp+407,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r20_q),32);
            tracep->chgIData(oldp+408,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r21_q),32);
            tracep->chgIData(oldp+409,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r22_q),32);
            tracep->chgIData(oldp+410,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r23_q),32);
            tracep->chgIData(oldp+411,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r24_q),32);
            tracep->chgIData(oldp+412,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r25_q),32);
            tracep->chgIData(oldp+413,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r26_q),32);
            tracep->chgIData(oldp+414,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r27_q),32);
            tracep->chgIData(oldp+415,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r28_q),32);
            tracep->chgIData(oldp+416,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r29_q),32);
            tracep->chgIData(oldp+417,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r30_q),32);
            tracep->chgIData(oldp+418,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r31_q),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [3U] | vlTOPp->__Vm_traceActivity
                         [5U]))) {
            tracep->chgBit(oldp+419,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_ack_w) 
                                      & ((0U == (7U 
                                                 & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                                    >> 7U))) 
                                         & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_error_w)))));
            tracep->chgBit(oldp+420,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_ack_w) 
                                      & ((0U != (7U 
                                                 & ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w) 
                                                    >> 7U))) 
                                         & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_error_w)))));
            tracep->chgIData(oldp+421,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                                         ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                                         : vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r)),32);
            tracep->chgIData(oldp+422,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w),32);
            tracep->chgBit(oldp+423,((0U != (0xa050U 
                                             & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exc_src_w))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+424,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r))));
            tracep->chgCData(oldp+425,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r),2);
            tracep->chgBit(oldp+426,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r))));
            tracep->chgIData(oldp+427,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r),32);
            tracep->chgCData(oldp+428,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r),2);
            tracep->chgBit(oldp+429,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q));
            tracep->chgBit(oldp+430,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q));
            tracep->chgBit(oldp+431,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q));
            tracep->chgBit(oldp+432,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q));
            tracep->chgIData(oldp+433,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q),32);
            tracep->chgIData(oldp+434,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q),32);
            tracep->chgBit(oldp+435,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
            tracep->chgIData(oldp+436,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                                >> 0xeU))),32);
            tracep->chgCData(oldp+437,((0xfU & (IData)(
                                                       (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                                        >> 0xaU)))),4);
            tracep->chgCData(oldp+438,((0xffU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
                                                         >> 2U)))),8);
            tracep->chgCData(oldp+439,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w))),2);
            tracep->chgBit(oldp+440,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
            tracep->chgIData(oldp+441,((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w)),32);
            tracep->chgCData(oldp+442,((0xfU & (IData)(
                                                       (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w 
                                                        >> 0x20U)))),4);
            tracep->chgBit(oldp+443,((1U & (IData)(
                                                   (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+444,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
            tracep->chgBit(oldp+445,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
            tracep->chgIData(oldp+446,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                                >> 0xeU))),32);
            tracep->chgCData(oldp+447,((0xfU & (IData)(
                                                       (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                                        >> 0xaU)))),4);
            tracep->chgCData(oldp+448,((0xffU & (IData)(
                                                        (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
                                                         >> 2U)))),8);
            tracep->chgCData(oldp+449,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w))),2);
            tracep->chgBit(oldp+450,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
            tracep->chgIData(oldp+451,((((0U != vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q) 
                                         << 2U) | (
                                                   ((8U 
                                                     == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                                    << 1U) 
                                                   | ((0U 
                                                       != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                                      & (8U 
                                                         != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)))))),32);
            tracep->chgCData(oldp+452,((0xfU & ((4U 
                                                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                   ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)
                                                   : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                                                  : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                  ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                   ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                                                   : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)))))),4);
            tracep->chgBit(oldp+453,(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w));
            tracep->chgBit(oldp+454,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_bvalid_w));
            tracep->chgBit(oldp+455,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
                                      & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                         >> 2U))));
            tracep->chgBit(oldp+456,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__intr_q));
            tracep->chgBit(oldp+457,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r));
            tracep->chgCData(oldp+458,((0xfU & ((4U 
                                                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                                                   ? (IData)(
                                                             (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                                              >> 1U))
                                                   : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                                                  : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                                                  ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                                                   ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                                                   : (IData)(
                                                             (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                                              >> 1U))))))),4);
            tracep->chgBit(oldp+459,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
                                      & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                                         >> 1U))));
            tracep->chgBit(oldp+460,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q));
            tracep->chgBit(oldp+461,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
            tracep->chgBit(oldp+462,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)))));
            tracep->chgBit(oldp+463,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)))));
            tracep->chgBit(oldp+464,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q));
            tracep->chgIData(oldp+465,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                                >> 7U))),32);
            tracep->chgBit(oldp+466,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)))));
            tracep->chgIData(oldp+467,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q),32);
            tracep->chgBit(oldp+468,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))));
            tracep->chgBit(oldp+469,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
            tracep->chgBit(oldp+470,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
            tracep->chgBit(oldp+471,((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w))));
            tracep->chgCData(oldp+472,((0xfU & (IData)(
                                                       (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                                        >> 1U)))),4);
            tracep->chgBit(oldp+473,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
            tracep->chgCData(oldp+474,((3U & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                                      >> 5U)))),2);
            tracep->chgCData(oldp+475,((0xfU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w))),4);
            tracep->chgBit(oldp+476,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q));
            tracep->chgBit(oldp+477,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q));
            tracep->chgBit(oldp+478,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r));
            tracep->chgBit(oldp+479,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q));
            tracep->chgBit(oldp+480,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q));
            tracep->chgBit(oldp+481,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q));
            tracep->chgBit(oldp+482,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q))));
            tracep->chgBit(oldp+483,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q));
            tracep->chgIData(oldp+484,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q),32);
            tracep->chgBit(oldp+485,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q));
            tracep->chgIData(oldp+486,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q),32);
            tracep->chgBit(oldp+487,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q));
            tracep->chgBit(oldp+488,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q));
            tracep->chgBit(oldp+489,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
            tracep->chgIData(oldp+490,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q),32);
            tracep->chgBit(oldp+491,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r));
            tracep->chgCData(oldp+492,((3U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w) 
                                              >> 4U))),2);
            tracep->chgIData(oldp+493,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q),32);
            tracep->chgBit(oldp+494,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))));
            tracep->chgBit(oldp+495,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__bvalid_q));
            tracep->chgBit(oldp+496,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)))));
            tracep->chgBit(oldp+497,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q));
            tracep->chgIData(oldp+498,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rd_data_q),32);
            tracep->chgBit(oldp+499,((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
            tracep->chgIData(oldp+500,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addr_q),32);
            tracep->chgIData(oldp+501,(((0x18U >= (0x1fU 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_sel_w)))
                                         ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w
                                        [(0x1fU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_sel_w))]
                                         : 0U)),32);
            tracep->chgBit(oldp+502,((7U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
            tracep->chgBit(oldp+503,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arvalid_w));
            tracep->chgBit(oldp+504,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                      | (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)))));
            tracep->chgBit(oldp+505,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
                                      & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                         >> 3U))));
            tracep->chgBit(oldp+506,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_rvalid_w));
            tracep->chgBit(oldp+507,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q));
            tracep->chgBit(oldp+508,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q));
            tracep->chgIData(oldp+509,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q),32);
            tracep->chgBit(oldp+510,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_isr_wr_q));
            tracep->chgCData(oldp+511,((0xfU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q)),4);
            tracep->chgBit(oldp+512,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_wr_q));
            tracep->chgBit(oldp+513,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q));
            tracep->chgBit(oldp+514,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_wr_q));
            tracep->chgCData(oldp+515,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q),4);
            tracep->chgBit(oldp+516,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q));
            tracep->chgBit(oldp+517,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q));
            tracep->chgBit(oldp+518,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ivr_wr_q));
            tracep->chgBit(oldp+519,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_wr_q));
            tracep->chgBit(oldp+520,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q));
            tracep->chgCData(oldp+521,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q),4);
            tracep->chgCData(oldp+522,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w),4);
            tracep->chgCData(oldp+523,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q),4);
            tracep->chgIData(oldp+524,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r),32);
            tracep->chgCData(oldp+525,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w),4);
            tracep->chgIData(oldp+526,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q),32);
            tracep->chgBit(oldp+527,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_wr_q));
            tracep->chgBit(oldp+528,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q));
            tracep->chgCData(oldp+529,((0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q)),8);
            tracep->chgBit(oldp+530,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_status_wr_q));
            tracep->chgBit(oldp+531,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_wr_q));
            tracep->chgBit(oldp+532,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q));
            tracep->chgBit(oldp+533,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q));
            tracep->chgBit(oldp+534,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_tx_q));
            tracep->chgCData(oldp+535,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q),8);
            tracep->chgBit(oldp+536,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q));
            tracep->chgBit(oldp+537,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)))));
            tracep->chgBit(oldp+538,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q));
            tracep->chgCData(oldp+539,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q),4);
            tracep->chgIData(oldp+540,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q),32);
            tracep->chgCData(oldp+541,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q),8);
            tracep->chgBit(oldp+542,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q));
            tracep->chgCData(oldp+543,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q),4);
            tracep->chgIData(oldp+544,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q),32);
            tracep->chgCData(oldp+545,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q),8);
            tracep->chgBit(oldp+546,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q));
            tracep->chgBit(oldp+547,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q));
            tracep->chgBit(oldp+548,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q));
            tracep->chgBit(oldp+549,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q)));
            tracep->chgBit(oldp+550,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q)));
            tracep->chgBit(oldp+551,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q));
            tracep->chgBit(oldp+552,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_r));
            tracep->chgIData(oldp+553,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q),32);
            tracep->chgBit(oldp+554,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_wr_q));
            tracep->chgBit(oldp+555,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q));
            tracep->chgBit(oldp+556,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q));
            tracep->chgBit(oldp+557,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_wr_q));
            tracep->chgIData(oldp+558,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q),32);
            tracep->chgBit(oldp+559,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q));
            tracep->chgBit(oldp+560,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_wr_q));
            tracep->chgBit(oldp+561,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q));
            tracep->chgBit(oldp+562,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q));
            tracep->chgBit(oldp+563,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_wr_q));
            tracep->chgIData(oldp+564,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q),32);
            tracep->chgBit(oldp+565,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q));
            tracep->chgIData(oldp+566,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q),32);
            tracep->chgIData(oldp+567,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q),32);
            tracep->chgBit(oldp+568,((((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q 
                                        == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q) 
                                       & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q)) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q))));
            tracep->chgBit(oldp+569,((((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q 
                                        == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q) 
                                       & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q)) 
                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q))));
            tracep->chgCData(oldp+570,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q),4);
            tracep->chgCData(oldp+571,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q),4);
            tracep->chgCData(oldp+572,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q),3);
            tracep->chgCData(oldp+573,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q),4);
            tracep->chgCData(oldp+574,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q),4);
            tracep->chgCData(oldp+575,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q),3);
            tracep->chgCData(oldp+576,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q),4);
            tracep->chgIData(oldp+577,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q),32);
            tracep->chgIData(oldp+578,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q),32);
            tracep->chgIData(oldp+579,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q),32);
            tracep->chgIData(oldp+580,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cycle_q),32);
            tracep->chgIData(oldp+581,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__mac_cycle_q),32);
            tracep->chgIData(oldp+582,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q),32);
            tracep->chgSData(oldp+583,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q),16);
            tracep->chgSData(oldp+584,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q),16);
            tracep->chgSData(oldp+585,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q),16);
            tracep->chgSData(oldp+586,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q),16);
            tracep->chgSData(oldp+587,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q),16);
            tracep->chgSData(oldp+588,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_q),16);
            tracep->chgIData(oldp+589,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [0U][0U]),32);
            tracep->chgIData(oldp+590,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [0U][1U]),32);
            tracep->chgIData(oldp+591,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [0U][2U]),32);
            tracep->chgIData(oldp+592,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [0U][3U]),32);
            tracep->chgIData(oldp+593,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [0U][4U]),32);
            tracep->chgIData(oldp+594,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [1U][0U]),32);
            tracep->chgIData(oldp+595,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [1U][1U]),32);
            tracep->chgIData(oldp+596,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [1U][2U]),32);
            tracep->chgIData(oldp+597,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [1U][3U]),32);
            tracep->chgIData(oldp+598,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [1U][4U]),32);
            tracep->chgIData(oldp+599,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [2U][0U]),32);
            tracep->chgIData(oldp+600,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [2U][1U]),32);
            tracep->chgIData(oldp+601,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [2U][2U]),32);
            tracep->chgIData(oldp+602,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [2U][3U]),32);
            tracep->chgIData(oldp+603,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [2U][4U]),32);
            tracep->chgIData(oldp+604,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [3U][0U]),32);
            tracep->chgIData(oldp+605,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [3U][1U]),32);
            tracep->chgIData(oldp+606,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [3U][2U]),32);
            tracep->chgIData(oldp+607,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [3U][3U]),32);
            tracep->chgIData(oldp+608,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [3U][4U]),32);
            tracep->chgIData(oldp+609,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [4U][0U]),32);
            tracep->chgIData(oldp+610,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [4U][1U]),32);
            tracep->chgIData(oldp+611,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [4U][2U]),32);
            tracep->chgIData(oldp+612,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [4U][3U]),32);
            tracep->chgIData(oldp+613,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
                                       [4U][4U]),32);
            tracep->chgIData(oldp+614,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [0U][0U]),32);
            tracep->chgIData(oldp+615,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [0U][1U]),32);
            tracep->chgIData(oldp+616,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [0U][2U]),32);
            tracep->chgIData(oldp+617,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [0U][3U]),32);
            tracep->chgIData(oldp+618,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [0U][4U]),32);
            tracep->chgIData(oldp+619,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [1U][0U]),32);
            tracep->chgIData(oldp+620,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [1U][1U]),32);
            tracep->chgIData(oldp+621,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [1U][2U]),32);
            tracep->chgIData(oldp+622,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [1U][3U]),32);
            tracep->chgIData(oldp+623,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [1U][4U]),32);
            tracep->chgIData(oldp+624,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [2U][0U]),32);
            tracep->chgIData(oldp+625,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [2U][1U]),32);
            tracep->chgIData(oldp+626,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [2U][2U]),32);
            tracep->chgIData(oldp+627,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [2U][3U]),32);
            tracep->chgIData(oldp+628,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [2U][4U]),32);
            tracep->chgIData(oldp+629,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [3U][0U]),32);
            tracep->chgIData(oldp+630,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [3U][1U]),32);
            tracep->chgIData(oldp+631,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [3U][2U]),32);
            tracep->chgIData(oldp+632,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [3U][3U]),32);
            tracep->chgIData(oldp+633,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [3U][4U]),32);
            tracep->chgIData(oldp+634,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [4U][0U]),32);
            tracep->chgIData(oldp+635,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [4U][1U]),32);
            tracep->chgIData(oldp+636,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [4U][2U]),32);
            tracep->chgIData(oldp+637,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [4U][3U]),32);
            tracep->chgIData(oldp+638,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
                                       [4U][4U]),32);
            tracep->chgIData(oldp+639,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[0]),32);
            tracep->chgIData(oldp+640,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[1]),32);
            tracep->chgIData(oldp+641,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[2]),32);
            tracep->chgIData(oldp+642,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[3]),32);
            tracep->chgIData(oldp+643,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[4]),32);
            tracep->chgIData(oldp+644,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[0]),32);
            tracep->chgIData(oldp+645,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[1]),32);
            tracep->chgIData(oldp+646,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[2]),32);
            tracep->chgIData(oldp+647,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[3]),32);
            tracep->chgIData(oldp+648,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[4]),32);
            tracep->chgIData(oldp+649,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0]),32);
            tracep->chgIData(oldp+650,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[1]),32);
            tracep->chgIData(oldp+651,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[2]),32);
            tracep->chgIData(oldp+652,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[3]),32);
            tracep->chgIData(oldp+653,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[4]),32);
            tracep->chgIData(oldp+654,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[5]),32);
            tracep->chgIData(oldp+655,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[6]),32);
            tracep->chgIData(oldp+656,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[7]),32);
            tracep->chgIData(oldp+657,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[8]),32);
            tracep->chgIData(oldp+658,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[9]),32);
            tracep->chgIData(oldp+659,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[10]),32);
            tracep->chgIData(oldp+660,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[11]),32);
            tracep->chgIData(oldp+661,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[12]),32);
            tracep->chgIData(oldp+662,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[13]),32);
            tracep->chgIData(oldp+663,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[14]),32);
            tracep->chgIData(oldp+664,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[15]),32);
            tracep->chgIData(oldp+665,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[16]),32);
            tracep->chgIData(oldp+666,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[17]),32);
            tracep->chgIData(oldp+667,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[18]),32);
            tracep->chgIData(oldp+668,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[19]),32);
            tracep->chgIData(oldp+669,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[20]),32);
            tracep->chgIData(oldp+670,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[21]),32);
            tracep->chgIData(oldp+671,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[22]),32);
            tracep->chgIData(oldp+672,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[23]),32);
            tracep->chgIData(oldp+673,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[24]),32);
            tracep->chgIData(oldp+674,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0]),32);
            tracep->chgIData(oldp+675,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[1]),32);
            tracep->chgIData(oldp+676,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[2]),32);
            tracep->chgIData(oldp+677,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[3]),32);
            tracep->chgIData(oldp+678,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[4]),32);
            tracep->chgIData(oldp+679,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[5]),32);
            tracep->chgIData(oldp+680,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[6]),32);
            tracep->chgIData(oldp+681,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[7]),32);
            tracep->chgIData(oldp+682,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[8]),32);
            tracep->chgIData(oldp+683,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[9]),32);
            tracep->chgIData(oldp+684,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[10]),32);
            tracep->chgIData(oldp+685,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[11]),32);
            tracep->chgIData(oldp+686,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[12]),32);
            tracep->chgIData(oldp+687,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[13]),32);
            tracep->chgIData(oldp+688,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[14]),32);
            tracep->chgIData(oldp+689,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[15]),32);
            tracep->chgIData(oldp+690,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[16]),32);
            tracep->chgIData(oldp+691,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[17]),32);
            tracep->chgIData(oldp+692,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[18]),32);
            tracep->chgIData(oldp+693,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[19]),32);
            tracep->chgIData(oldp+694,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[20]),32);
            tracep->chgIData(oldp+695,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[21]),32);
            tracep->chgIData(oldp+696,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[22]),32);
            tracep->chgIData(oldp+697,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[23]),32);
            tracep->chgIData(oldp+698,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[24]),32);
            tracep->chgIData(oldp+699,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0]),32);
            tracep->chgIData(oldp+700,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[1]),32);
            tracep->chgIData(oldp+701,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[2]),32);
            tracep->chgIData(oldp+702,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[3]),32);
            tracep->chgIData(oldp+703,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[4]),32);
            tracep->chgIData(oldp+704,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[5]),32);
            tracep->chgIData(oldp+705,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[6]),32);
            tracep->chgIData(oldp+706,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[7]),32);
            tracep->chgIData(oldp+707,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[8]),32);
            tracep->chgIData(oldp+708,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[9]),32);
            tracep->chgIData(oldp+709,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[10]),32);
            tracep->chgIData(oldp+710,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[11]),32);
            tracep->chgIData(oldp+711,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[12]),32);
            tracep->chgIData(oldp+712,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[13]),32);
            tracep->chgIData(oldp+713,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[14]),32);
            tracep->chgIData(oldp+714,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[15]),32);
            tracep->chgIData(oldp+715,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[16]),32);
            tracep->chgIData(oldp+716,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[17]),32);
            tracep->chgIData(oldp+717,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[18]),32);
            tracep->chgIData(oldp+718,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[19]),32);
            tracep->chgIData(oldp+719,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[20]),32);
            tracep->chgIData(oldp+720,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[21]),32);
            tracep->chgIData(oldp+721,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[22]),32);
            tracep->chgIData(oldp+722,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[23]),32);
            tracep->chgIData(oldp+723,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[24]),32);
            tracep->chgIData(oldp+724,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx),32);
            tracep->chgIData(oldp+725,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx),32);
            tracep->chgBit(oldp+726,(((((((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                          & (5U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q))) 
                                         & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))) 
                                        & (5U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))) 
                                       & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))) 
                                      & (5U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))));
            tracep->chgBit(oldp+727,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w));
            tracep->chgBit(oldp+728,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__start_ok_w));
            tracep->chgBit(oldp+729,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q) 
                                      == (0xffffU & 
                                          ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q) 
                                           - (IData)(1U))))));
            tracep->chgBit(oldp+730,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q) 
                                      == (0xffffU & 
                                          ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q) 
                                           - (IData)(1U))))));
            tracep->chgBit(oldp+731,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q) 
                                      == (0xffffU & 
                                          ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q) 
                                           - (IData)(1U))))));
            tracep->chgBit(oldp+732,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q) 
                                      == (0xffffU & 
                                          ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q) 
                                           - (IData)(1U))))));
            tracep->chgBit(oldp+733,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_q) 
                                      == (0xffffU & 
                                          ((IData)(7U) 
                                           + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))))));
            tracep->chgBit(oldp+734,((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
            tracep->chgSData(oldp+735,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_sel_w),16);
            tracep->chgIData(oldp+736,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                                       [0U]),32);
            tracep->chgIData(oldp+737,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                                       [0U]),32);
            tracep->chgIData(oldp+738,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0U]),32);
            tracep->chgIData(oldp+739,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                                       [1U]),32);
            tracep->chgIData(oldp+740,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [1U]),32);
            tracep->chgIData(oldp+741,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                                       [2U]),32);
            tracep->chgIData(oldp+742,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [2U]),32);
            tracep->chgIData(oldp+743,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                                       [3U]),32);
            tracep->chgIData(oldp+744,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [3U]),32);
            tracep->chgIData(oldp+745,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                                       [4U]),32);
            tracep->chgIData(oldp+746,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                                       [1U]),32);
            tracep->chgIData(oldp+747,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [0U]),32);
            tracep->chgIData(oldp+748,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [5U]),32);
            tracep->chgIData(oldp+749,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [1U]),32);
            tracep->chgIData(oldp+750,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [6U]),32);
            tracep->chgIData(oldp+751,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [2U]),32);
            tracep->chgIData(oldp+752,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [7U]),32);
            tracep->chgIData(oldp+753,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [3U]),32);
            tracep->chgIData(oldp+754,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [8U]),32);
            tracep->chgIData(oldp+755,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [4U]),32);
            tracep->chgIData(oldp+756,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                                       [2U]),32);
            tracep->chgIData(oldp+757,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [5U]),32);
            tracep->chgIData(oldp+758,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0xaU]),32);
            tracep->chgIData(oldp+759,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [6U]),32);
            tracep->chgIData(oldp+760,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0xbU]),32);
            tracep->chgIData(oldp+761,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [7U]),32);
            tracep->chgIData(oldp+762,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0xcU]),32);
            tracep->chgIData(oldp+763,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [8U]),32);
            tracep->chgIData(oldp+764,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0xdU]),32);
            tracep->chgIData(oldp+765,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [9U]),32);
            tracep->chgIData(oldp+766,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                                       [3U]),32);
            tracep->chgIData(oldp+767,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [0xaU]),32);
            tracep->chgIData(oldp+768,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0xfU]),32);
            tracep->chgIData(oldp+769,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [0xbU]),32);
            tracep->chgIData(oldp+770,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0x10U]),32);
            tracep->chgIData(oldp+771,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [0xcU]),32);
            tracep->chgIData(oldp+772,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0x11U]),32);
            tracep->chgIData(oldp+773,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [0xdU]),32);
            tracep->chgIData(oldp+774,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0x12U]),32);
            tracep->chgIData(oldp+775,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [0xeU]),32);
            tracep->chgIData(oldp+776,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                                       [4U]),32);
            tracep->chgIData(oldp+777,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [0xfU]),32);
            tracep->chgIData(oldp+778,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0x14U]),32);
            tracep->chgIData(oldp+779,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [0x10U]),32);
            tracep->chgIData(oldp+780,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0x15U]),32);
            tracep->chgIData(oldp+781,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [0x11U]),32);
            tracep->chgIData(oldp+782,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0x16U]),32);
            tracep->chgIData(oldp+783,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [0x12U]),32);
            tracep->chgIData(oldp+784,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                       [0x17U]),32);
            tracep->chgIData(oldp+785,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                       [0x13U]),32);
            tracep->chgBit(oldp+786,(((0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+787,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+788,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+789,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+790,(((0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+791,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+792,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+793,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+794,(((0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+795,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+796,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+797,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+798,(((0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+799,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+800,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+801,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+802,(((0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+803,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+804,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+805,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+806,(((1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+807,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+808,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+809,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+810,(((1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+811,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+812,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+813,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+814,(((1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+815,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+816,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+817,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+818,(((1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+819,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+820,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+821,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+822,(((1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+823,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+824,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+825,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+826,(((2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+827,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+828,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+829,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+830,(((2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+831,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+832,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+833,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+834,(((2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+835,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+836,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+837,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+838,(((2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+839,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+840,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+841,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+842,(((2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+843,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+844,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+845,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+846,(((3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+847,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+848,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+849,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+850,(((3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+851,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+852,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+853,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+854,(((3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+855,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+856,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+857,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+858,(((3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+859,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+860,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+861,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+862,(((3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+863,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+864,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+865,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+866,(((4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+867,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+868,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+869,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+870,(((4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+871,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+872,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+873,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+874,(((4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+875,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+876,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+877,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+878,(((4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+879,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+880,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+881,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+882,(((4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                      & (4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))));
            tracep->chgIData(oldp+883,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q),32);
            tracep->chgIData(oldp+884,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q),32);
            tracep->chgIData(oldp+885,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q),32);
            tracep->chgBit(oldp+886,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q));
            tracep->chgCData(oldp+887,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r),4);
            tracep->chgBit(oldp+888,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q));
            tracep->chgBit(oldp+889,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q));
            tracep->chgCData(oldp+890,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r),4);
            tracep->chgCData(oldp+891,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q),4);
            tracep->chgCData(oldp+892,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q),4);
            tracep->chgCData(oldp+893,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q),4);
            tracep->chgCData(oldp+894,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q),4);
            tracep->chgBit(oldp+895,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_wr_q));
            tracep->chgBit(oldp+896,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q));
            tracep->chgBit(oldp+897,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q));
            tracep->chgBit(oldp+898,((1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                            >> 2U))));
            tracep->chgBit(oldp+899,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_wr_q));
            tracep->chgBit(oldp+900,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q));
            tracep->chgBit(oldp+901,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_wr_q));
            tracep->chgIData(oldp+902,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q),32);
            tracep->chgBit(oldp+903,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q));
            tracep->chgBit(oldp+904,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q));
            tracep->chgBit(oldp+905,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q));
            tracep->chgBit(oldp+906,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q));
            tracep->chgBit(oldp+907,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q));
            tracep->chgBit(oldp+908,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q));
            tracep->chgBit(oldp+909,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q));
            tracep->chgBit(oldp+910,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q));
            tracep->chgBit(oldp+911,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q));
            tracep->chgBit(oldp+912,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q));
            tracep->chgBit(oldp+913,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q));
            tracep->chgBit(oldp+914,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_sr_wr_q));
            tracep->chgBit(oldp+915,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q));
            tracep->chgBit(oldp+916,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_wr_q));
            tracep->chgBit(oldp+917,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_wr_q));
            tracep->chgBit(oldp+918,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
            tracep->chgBit(oldp+919,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
            tracep->chgBit(oldp+920,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
            tracep->chgBit(oldp+921,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
            tracep->chgCData(oldp+922,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                                       [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q]),8);
            tracep->chgBit(oldp+923,((0xaU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q)));
            tracep->chgBit(oldp+924,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w));
            tracep->chgBit(oldp+925,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w));
            tracep->chgBit(oldp+926,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
            tracep->chgBit(oldp+927,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
            tracep->chgCData(oldp+928,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w),8);
            tracep->chgBit(oldp+929,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q));
            tracep->chgCData(oldp+930,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_w),8);
            tracep->chgBit(oldp+931,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
            tracep->chgBit(oldp+932,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
            tracep->chgCData(oldp+933,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q)
                                         ? ((0x80U 
                                             & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                << 7U)) 
                                            | ((0x40U 
                                                & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                   << 5U)) 
                                               | ((0x20U 
                                                   & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                      << 3U)) 
                                                  | ((0x10U 
                                                      & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                         << 1U)) 
                                                     | ((8U 
                                                         & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                            >> 1U)) 
                                                        | ((4U 
                                                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                               >> 3U)) 
                                                           | ((2U 
                                                               & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                                  >> 5U)) 
                                                              | (1U 
                                                                 & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                                                    >> 7U)))))))))
                                         : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q))),8);
            tracep->chgBit(oldp+934,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q));
            tracep->chgCData(oldp+935,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q),6);
            tracep->chgCData(oldp+936,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q),8);
            tracep->chgIData(oldp+937,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q),32);
            tracep->chgBit(oldp+938,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
                                       & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q)) 
                                      & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q)))));
            tracep->chgBit(oldp+939,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w));
            tracep->chgBit(oldp+940,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q)));
            tracep->chgBit(oldp+941,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__sample_r));
            tracep->chgBit(oldp+942,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r));
            tracep->chgBit(oldp+943,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q));
            tracep->chgBit(oldp+944,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q));
            tracep->chgCData(oldp+945,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[0]),8);
            tracep->chgCData(oldp+946,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[1]),8);
            tracep->chgCData(oldp+947,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[2]),8);
            tracep->chgCData(oldp+948,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[3]),8);
            tracep->chgCData(oldp+949,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q),2);
            tracep->chgCData(oldp+950,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q),2);
            tracep->chgCData(oldp+951,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q),3);
            tracep->chgCData(oldp+952,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[0]),8);
            tracep->chgCData(oldp+953,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[1]),8);
            tracep->chgCData(oldp+954,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[2]),8);
            tracep->chgCData(oldp+955,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[3]),8);
            tracep->chgCData(oldp+956,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q),2);
            tracep->chgCData(oldp+957,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q),2);
            tracep->chgCData(oldp+958,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q),3);
            tracep->chgQData(oldp+959,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w),46);
            tracep->chgQData(oldp+961,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w),37);
            tracep->chgCData(oldp+963,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w),6);
            tracep->chgQData(oldp+964,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w),46);
            tracep->chgQData(oldp+966,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w),39);
            tracep->chgQData(oldp+968,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q[0]),46);
            tracep->chgQData(oldp+970,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q[1]),46);
            tracep->chgBit(oldp+972,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q));
            tracep->chgBit(oldp+973,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q));
            tracep->chgCData(oldp+974,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q),2);
            tracep->chgQData(oldp+975,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q[0]),37);
            tracep->chgQData(oldp+977,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q[1]),37);
            tracep->chgBit(oldp+979,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q));
            tracep->chgBit(oldp+980,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q));
            tracep->chgCData(oldp+981,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q),2);
            tracep->chgCData(oldp+982,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q[0]),6);
            tracep->chgCData(oldp+983,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q[1]),6);
            tracep->chgBit(oldp+984,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q));
            tracep->chgBit(oldp+985,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q));
            tracep->chgCData(oldp+986,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q),2);
            tracep->chgQData(oldp+987,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q[0]),46);
            tracep->chgQData(oldp+989,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q[1]),46);
            tracep->chgBit(oldp+991,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q));
            tracep->chgBit(oldp+992,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q));
            tracep->chgCData(oldp+993,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q),2);
            tracep->chgQData(oldp+994,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q[0]),39);
            tracep->chgQData(oldp+996,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q[1]),39);
            tracep->chgBit(oldp+998,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q));
            tracep->chgBit(oldp+999,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q));
            tracep->chgCData(oldp+1000,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q),2);
            tracep->chgBit(oldp+1001,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_wr_q));
            tracep->chgBit(oldp+1002,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_input_wr_q));
            tracep->chgBit(oldp+1003,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q));
            tracep->chgBit(oldp+1004,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q));
            tracep->chgBit(oldp+1005,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q));
            tracep->chgBit(oldp+1006,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_wr_q));
            tracep->chgIData(oldp+1007,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q),32);
            tracep->chgBit(oldp+1008,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q));
            tracep->chgBit(oldp+1009,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q));
            tracep->chgBit(oldp+1010,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_status_wr_q));
            tracep->chgBit(oldp+1011,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_wr_q));
            tracep->chgIData(oldp+1012,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q),32);
            tracep->chgBit(oldp+1013,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_wr_q));
            tracep->chgIData(oldp+1014,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q),32);
            tracep->chgIData(oldp+1015,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q),32);
            tracep->chgIData(oldp+1016,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q),32);
            tracep->chgIData(oldp+1017,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_ms),32);
            tracep->chgIData(oldp+1018,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r),32);
            tracep->chgIData(oldp+1019,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r),32);
            tracep->chgIData(oldp+1020,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q),32);
            tracep->chgIData(oldp+1021,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q)),32);
            tracep->chgIData(oldp+1022,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q)),32);
            tracep->chgIData(oldp+1023,(((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                          ^ (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q)) 
                                         & (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q))),32);
            tracep->chgIData(oldp+1024,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q 
                                         ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q)),32);
            tracep->chgIData(oldp+1025,((((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q 
                                           ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q) 
                                          & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                             ^ (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q))) 
                                         & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q)),32);
            tracep->chgBit(oldp+1026,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_error_w));
            tracep->chgBit(oldp+1027,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w));
            tracep->chgIData(oldp+1028,((0x3fffffU 
                                         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
                                            >> 0xaU))),32);
            tracep->chgSData(oldp+1029,((0x3ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r)),10);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+1030,(vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_awvalid_o));
            tracep->chgBit(oldp+1031,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_o));
            tracep->chgBit(oldp+1032,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_read_w));
            tracep->chgBit(oldp+1033,(vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_wvalid_o));
            tracep->chgIData(oldp+1034,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_pc_o),32);
            tracep->chgBit(oldp+1035,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_rd_o));
            tracep->chgBit(oldp+1036,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o));
            tracep->chgBit(oldp+1037,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_in_progress_w));
            tracep->chgBit(oldp+1038,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_write_w));
            tracep->chgCData(oldp+1039,((0xffU & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_pc_o 
                                                  >> 5U))),8);
            tracep->chgSData(oldp+1040,((0x7ffU & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_pc_o 
                                                   >> 2U))),11);
            tracep->chgCData(oldp+1041,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r),2);
            tracep->chgCData(oldp+1042,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r),8);
            tracep->chgBit(oldp+1043,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_write_r));
            tracep->chgBit(oldp+1044,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_write_r));
            tracep->chgSData(oldp+1045,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r),11);
            tracep->chgBit(oldp+1046,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_flush_w));
            tracep->chgBit(oldp+1047,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_accept_o));
            tracep->chgBit(oldp+1048,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_error_w));
            tracep->chgBit(oldp+1049,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__csr_opcode_valid_o));
            tracep->chgBit(oldp+1050,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_error_w));
            tracep->chgBit(oldp+1051,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pc_fault_r));
            tracep->chgBit(oldp+1052,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_request_o));
            tracep->chgIData(oldp+1053,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_ra_operand_r),32);
            tracep->chgBit(oldp+1054,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__muldiv_opcode_valid_o));
            tracep->chgIData(oldp+1055,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_target_r),32);
            tracep->chgBit(oldp+1056,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fetch_branch_o));
            tracep->chgIData(oldp+1057,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w),32);
            tracep->chgCData(oldp+1058,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r),5);
            tracep->chgBit(oldp+1059,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_ack_w));
            tracep->chgBit(oldp+1060,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_accept_w));
            tracep->chgBit(oldp+1061,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_cpu_ack_w));
            tracep->chgIData(oldp+1062,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
            tracep->chgBit(oldp+1063,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w));
            tracep->chgIData(oldp+1064,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_rb_operand_r),32);
            tracep->chgBit(oldp+1065,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_valid_w));
            tracep->chgBit(oldp+1066,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__lsu_opcode_valid_o));
            tracep->chgBit(oldp+1067,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__exec_opcode_valid_o));
            tracep->chgBit(oldp+1068,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w));
            tracep->chgBit(oldp+1069,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_miss_w));
            tracep->chgIData(oldp+1070,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__request_addr_w),32);
            tracep->chgIData(oldp+1071,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
            tracep->chgBit(oldp+1072,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
            tracep->chgCData(oldp+1073,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
            tracep->chgBit(oldp+1074,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_byte_r));
            tracep->chgBit(oldp+1075,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_half_r));
            tracep->chgBit(oldp+1076,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_word_r));
            tracep->chgBit(oldp+1077,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_signed_r));
            tracep->chgBit(oldp+1078,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_access_fault_w));
            tracep->chgIData(oldp+1079,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r),32);
            tracep->chgIData(oldp+1080,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r),32);
            tracep->chgIData(oldp+1081,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r),32);
            tracep->chgIData(oldp+1082,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r),32);
            tracep->chgIData(oldp+1083,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r),32);
            tracep->chgIData(oldp+1084,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r),32);
            tracep->chgCData(oldp+1085,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r),2);
            tracep->chgIData(oldp+1086,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r),32);
            tracep->chgIData(oldp+1087,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r),32);
            tracep->chgIData(oldp+1088,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r),32);
            tracep->chgIData(oldp+1089,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r),32);
            tracep->chgIData(oldp+1090,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r),32);
            tracep->chgIData(oldp+1091,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r),32);
            tracep->chgIData(oldp+1092,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r),32);
            tracep->chgIData(oldp+1093,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r),32);
            tracep->chgIData(oldp+1094,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r),32);
            tracep->chgBit(oldp+1095,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r));
            tracep->chgBit(oldp+1096,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r));
            tracep->chgBit(oldp+1097,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exception_s_r));
            tracep->chgBit(oldp+1098,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__interrupt_s_r));
            tracep->chgIData(oldp+1099,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r),32);
            tracep->chgIData(oldp+1100,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r),32);
            tracep->chgBit(oldp+1101,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w));
            tracep->chgBit(oldp+1102,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_r));
            tracep->chgIData(oldp+1103,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_r),32);
            tracep->chgWData(oldp+1104,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w),65);
            tracep->chgQData(oldp+1107,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_b_r),33);
            tracep->chgQData(oldp+1109,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__operand_a_r),33);
            tracep->chgIData(oldp+1111,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__result_r),32);
            tracep->chgBit(oldp+1112,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_start_w));
            tracep->chgBit(oldp+1113,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__stall_w));
            tracep->chgBit(oldp+1114,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_w));
            tracep->chgIData(oldp+1115,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_w),32);
            tracep->chgBit(oldp+1116,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_scoreboard_r));
            tracep->chgBit(oldp+1117,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_input_w));
            tracep->chgIData(oldp+1118,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r),32);
            tracep->chgBit(oldp+1119,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r));
            tracep->chgIData(oldp+1120,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r),32);
            tracep->chgWData(oldp+1121,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_str),80);
            tracep->chgWData(oldp+1124,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_ra),80);
            tracep->chgWData(oldp+1127,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rb),80);
            tracep->chgWData(oldp+1130,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_rd),80);
            tracep->chgIData(oldp+1133,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_imm),32);
            tracep->chgIData(oldp+1134,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_pc),32);
            tracep->chgIData(oldp+1135,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r),32);
            tracep->chgIData(oldp+1136,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r),32);
            tracep->chgBit(oldp+1137,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r));
            tracep->chgIData(oldp+1138,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r),32);
            tracep->chgSData(oldp+1139,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r),16);
            tracep->chgIData(oldp+1140,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_1_r),32);
            tracep->chgIData(oldp+1141,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_2_r),32);
            tracep->chgIData(oldp+1142,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_4_r),32);
            tracep->chgIData(oldp+1143,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_8_r),32);
            tracep->chgIData(oldp+1144,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_1_r),32);
            tracep->chgIData(oldp+1145,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_2_r),32);
            tracep->chgIData(oldp+1146,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_4_r),32);
            tracep->chgIData(oldp+1147,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_8_r),32);
            tracep->chgIData(oldp+1148,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__sub_res_w),32);
        }
        tracep->chgCData(oldp+1149,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w),4);
        tracep->chgCData(oldp+1150,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w),4);
        tracep->chgBit(oldp+1151,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
                                   & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)))));
        tracep->chgBit(oldp+1152,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
                                   & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q))));
    }
}

void Vriscv_soc::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vriscv_soc__Syms* __restrict vlSymsp = static_cast<Vriscv_soc__Syms*>(userp);
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
    }
}
