// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_riscv_top.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vriscv_soc_riscv_top) {
    VL_CELL(u_core, Vriscv_soc_riscv_core);
    VL_CELL(u_icache, Vriscv_soc_icache);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_soc_riscv_top::__Vconfigure(Vriscv_soc__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vriscv_soc_riscv_top::~Vriscv_soc_riscv_top() {
}

void Vriscv_soc_riscv_top::_settle__TOP__riscv_soc__u_core__1(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top::_settle__TOP__riscv_soc__u_core__1\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_valid_w 
        = (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_accept_w 
        = (4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__valid_o 
        = (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__res_accept_w 
        = (4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w 
        = ((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)) 
           & (4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_resp_tag_w 
        = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
        [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[0U] 
        = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
        [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][0U];
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[1U] 
        = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
        [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][1U];
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[2U] 
        = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
        [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U];
    vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_error_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_bvalid_w)
            ? (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r))
            : (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r)));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_bvalid_w) 
           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
              & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                 >> 1U)));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_push_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_rd_o) 
            | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_wr_o))) 
           & (4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q)));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__res_push_w 
        = (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_rd_o) 
            | (0U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_d_wr_o))) 
           & (4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_in_progress_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_pending_q) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w)));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_write_w 
        = (((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)) 
            & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_in_progress_w))) 
           & (~ (vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[2U] 
                 >> 4U)));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_read_w 
        = (((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q)) 
            & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_in_progress_w))) 
           & (vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[2U] 
              >> 4U));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_wvalid_o 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_write_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q)));
    vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_awvalid_o 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_write_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q)));
}

void Vriscv_soc_riscv_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc_riscv_top::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__axi_i_awready_i = VL_RAND_RESET_I(1);
    __PVT__axi_i_wready_i = VL_RAND_RESET_I(1);
    __PVT__axi_i_bvalid_i = VL_RAND_RESET_I(1);
    __PVT__axi_i_bresp_i = VL_RAND_RESET_I(2);
    __PVT__axi_i_bid_i = VL_RAND_RESET_I(4);
    __PVT__axi_i_arready_i = VL_RAND_RESET_I(1);
    __PVT__axi_i_rvalid_i = VL_RAND_RESET_I(1);
    __PVT__axi_i_rdata_i = VL_RAND_RESET_I(32);
    __PVT__axi_i_rresp_i = VL_RAND_RESET_I(2);
    __PVT__axi_i_rid_i = VL_RAND_RESET_I(4);
    __PVT__axi_i_rlast_i = VL_RAND_RESET_I(1);
    __PVT__axi_d_awready_i = VL_RAND_RESET_I(1);
    __PVT__axi_d_wready_i = VL_RAND_RESET_I(1);
    __PVT__axi_d_bvalid_i = VL_RAND_RESET_I(1);
    __PVT__axi_d_bresp_i = VL_RAND_RESET_I(2);
    __PVT__axi_d_bid_i = VL_RAND_RESET_I(4);
    __PVT__axi_d_arready_i = VL_RAND_RESET_I(1);
    __PVT__axi_d_rvalid_i = VL_RAND_RESET_I(1);
    __PVT__axi_d_rdata_i = VL_RAND_RESET_I(32);
    __PVT__axi_d_rresp_i = VL_RAND_RESET_I(2);
    __PVT__axi_d_rid_i = VL_RAND_RESET_I(4);
    __PVT__axi_d_rlast_i = VL_RAND_RESET_I(1);
    __PVT__intr_i = VL_RAND_RESET_I(1);
    __PVT__reset_vector_i = VL_RAND_RESET_I(32);
    __PVT__axi_i_awvalid_o = VL_RAND_RESET_I(1);
    __PVT__axi_i_awaddr_o = VL_RAND_RESET_I(32);
    __PVT__axi_i_awid_o = VL_RAND_RESET_I(4);
    __PVT__axi_i_awlen_o = VL_RAND_RESET_I(8);
    __PVT__axi_i_awburst_o = VL_RAND_RESET_I(2);
    __PVT__axi_i_wvalid_o = VL_RAND_RESET_I(1);
    __PVT__axi_i_wdata_o = VL_RAND_RESET_I(32);
    __PVT__axi_i_wstrb_o = VL_RAND_RESET_I(4);
    __PVT__axi_i_wlast_o = VL_RAND_RESET_I(1);
    __PVT__axi_i_bready_o = VL_RAND_RESET_I(1);
    __PVT__axi_i_arvalid_o = VL_RAND_RESET_I(1);
    __PVT__axi_i_araddr_o = VL_RAND_RESET_I(32);
    __PVT__axi_i_arid_o = VL_RAND_RESET_I(4);
    __PVT__axi_i_arlen_o = VL_RAND_RESET_I(8);
    __PVT__axi_i_arburst_o = VL_RAND_RESET_I(2);
    __PVT__axi_i_rready_o = VL_RAND_RESET_I(1);
    __PVT__axi_d_awvalid_o = VL_RAND_RESET_I(1);
    __PVT__axi_d_awaddr_o = VL_RAND_RESET_I(32);
    __PVT__axi_d_awid_o = VL_RAND_RESET_I(4);
    __PVT__axi_d_awlen_o = VL_RAND_RESET_I(8);
    __PVT__axi_d_awburst_o = VL_RAND_RESET_I(2);
    __PVT__axi_d_wvalid_o = VL_RAND_RESET_I(1);
    __PVT__axi_d_wdata_o = VL_RAND_RESET_I(32);
    __PVT__axi_d_wstrb_o = VL_RAND_RESET_I(4);
    __PVT__axi_d_wlast_o = VL_RAND_RESET_I(1);
    __PVT__axi_d_bready_o = VL_RAND_RESET_I(1);
    __PVT__axi_d_arvalid_o = VL_RAND_RESET_I(1);
    __PVT__axi_d_araddr_o = VL_RAND_RESET_I(32);
    __PVT__axi_d_arid_o = VL_RAND_RESET_I(4);
    __PVT__axi_d_arlen_o = VL_RAND_RESET_I(8);
    __PVT__axi_d_arburst_o = VL_RAND_RESET_I(2);
    __PVT__axi_d_rready_o = VL_RAND_RESET_I(1);
    __PVT__dport_bridge_accept_w = VL_RAND_RESET_I(1);
    __PVT__dport_bridge_resp_tag_w = VL_RAND_RESET_I(11);
    __PVT__dport_bridge_error_w = VL_RAND_RESET_I(1);
    __PVT__dport_bridge_ack_w = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__res_accept_w = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__req_accept_w = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__write_complete_w = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__read_complete_w = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__request_pending_q = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__req_pop_w = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__req_valid_w = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(69, __PVT__u_dport_bridge__DOT__req_w);
    __PVT__u_dport_bridge__DOT__req_push_w = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__res_push_w = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__request_in_progress_w = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__req_is_read_w = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__req_is_write_w = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__awvalid_inhibit_q = VL_RAND_RESET_I(1);
    __PVT__u_dport_bridge__DOT__wvalid_inhibit_q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            VL_RAND_RESET_W(69, __PVT__u_dport_bridge__DOT__u_req__DOT__ram_q[__Vi0]);
    }}
    __PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q = VL_RAND_RESET_I(2);
    __PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q = VL_RAND_RESET_I(2);
    __PVT__u_dport_bridge__DOT__u_req__DOT__count_q = VL_RAND_RESET_I(3);
    __PVT__u_dport_bridge__DOT__u_resp__DOT__valid_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(11);
    }}
    __PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q = VL_RAND_RESET_I(2);
    __PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q = VL_RAND_RESET_I(2);
    __PVT__u_dport_bridge__DOT__u_resp__DOT__count_q = VL_RAND_RESET_I(3);
}
