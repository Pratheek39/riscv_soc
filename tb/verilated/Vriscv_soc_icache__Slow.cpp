// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_icache.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vriscv_soc_icache) {
    VL_CELL(u_tag0, Vriscv_soc_icache_tag_ram);
    VL_CELL(u_tag1, Vriscv_soc_icache_tag_ram);
    VL_CELL(u_data0, Vriscv_soc_icache_data_ram);
    VL_CELL(u_data1, Vriscv_soc_icache_data_ram);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_soc_icache::__Vconfigure(Vriscv_soc__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vriscv_soc_icache::~Vriscv_soc_icache() {
}

void Vriscv_soc_icache::_settle__TOP__riscv_soc__u_core__u_icache__1(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache::_settle__TOP__riscv_soc__u_core__u_icache__1\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r = 0U;
    if ((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))) {
        vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r = 0U;
    } else {
        if ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))) {
            vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r 
                = (0x80000U | vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r);
            vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r 
                = ((0x80000U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r) 
                   | (0x7ffffU & (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                                  >> 0xdU)));
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w 
        = ((vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q 
            >> 0x13U) & ((0x7ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q) 
                         == (0x7ffffU & (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                                         >> 0xdU))));
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w 
        = ((vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q 
            >> 0x13U) & ((0x7ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q) 
                         == (0x7ffffU & (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                                         >> 0xdU))));
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_write_r = 0U;
    if ((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))) {
        vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_write_r = 1U;
    } else {
        if ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))) {
            vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_write_r 
                = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r)) 
                   & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)));
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_write_r = 0U;
    if ((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))) {
        vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_write_r = 1U;
    } else {
        if ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))) {
            vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_write_r 
                = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r)) 
                   & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q));
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__inst_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q;
    if (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w) {
        vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__inst_r 
            = vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q;
    } else {
        if (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w) {
            vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__inst_r 
                = vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q;
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_hit_any_w 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w));
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o 
        = ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_valid_q) 
           & ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
              & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_hit_any_w)));
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r 
        = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q;
    if ((2U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))) {
        if ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))) {
            vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r = 1U;
        } else {
            if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r))) {
                vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r = 3U;
            }
        }
    } else {
        if ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))) {
            if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_valid_q) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_hit_any_w)))) {
                vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r = 2U;
            } else {
                if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q) 
                     | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r = 0U;
                }
            }
        } else {
            if (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__invalidate_q) {
                vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r = 1U;
            } else {
                if ((0xffU == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__flush_addr_q))) {
                    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o 
        = ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
           & (2U != (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r)));
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_o 
        = (((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
            & (2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r))) 
           | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_q));
}

void Vriscv_soc_icache::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__req_rd_i = VL_RAND_RESET_I(1);
    __PVT__req_flush_i = VL_RAND_RESET_I(1);
    __PVT__req_invalidate_i = VL_RAND_RESET_I(1);
    __PVT__req_pc_i = VL_RAND_RESET_I(32);
    __PVT__axi_awready_i = VL_RAND_RESET_I(1);
    __PVT__axi_wready_i = VL_RAND_RESET_I(1);
    __PVT__axi_bvalid_i = VL_RAND_RESET_I(1);
    __PVT__axi_bresp_i = VL_RAND_RESET_I(2);
    __PVT__axi_bid_i = VL_RAND_RESET_I(4);
    __PVT__axi_arready_i = VL_RAND_RESET_I(1);
    __PVT__axi_rvalid_i = VL_RAND_RESET_I(1);
    __PVT__axi_rdata_i = VL_RAND_RESET_I(32);
    __PVT__axi_rresp_i = VL_RAND_RESET_I(2);
    __PVT__axi_rid_i = VL_RAND_RESET_I(4);
    __PVT__axi_rlast_i = VL_RAND_RESET_I(1);
    __PVT__req_accept_o = VL_RAND_RESET_I(1);
    __PVT__req_valid_o = VL_RAND_RESET_I(1);
    __PVT__req_error_o = VL_RAND_RESET_I(1);
    __PVT__req_inst_o = VL_RAND_RESET_I(32);
    __PVT__axi_awvalid_o = VL_RAND_RESET_I(1);
    __PVT__axi_awaddr_o = VL_RAND_RESET_I(32);
    __PVT__axi_awid_o = VL_RAND_RESET_I(4);
    __PVT__axi_awlen_o = VL_RAND_RESET_I(8);
    __PVT__axi_awburst_o = VL_RAND_RESET_I(2);
    __PVT__axi_wvalid_o = VL_RAND_RESET_I(1);
    __PVT__axi_wdata_o = VL_RAND_RESET_I(32);
    __PVT__axi_wstrb_o = VL_RAND_RESET_I(4);
    __PVT__axi_wlast_o = VL_RAND_RESET_I(1);
    __PVT__axi_bready_o = VL_RAND_RESET_I(1);
    __PVT__axi_arvalid_o = VL_RAND_RESET_I(1);
    __PVT__axi_araddr_o = VL_RAND_RESET_I(32);
    __PVT__axi_arid_o = VL_RAND_RESET_I(4);
    __PVT__axi_arlen_o = VL_RAND_RESET_I(8);
    __PVT__axi_arburst_o = VL_RAND_RESET_I(2);
    __PVT__axi_rready_o = VL_RAND_RESET_I(1);
    __PVT__next_state_r = VL_RAND_RESET_I(2);
    __PVT__state_q = VL_RAND_RESET_I(2);
    __PVT__invalidate_q = VL_RAND_RESET_I(1);
    __PVT__replace_way_q = VL_RAND_RESET_I(1);
    __PVT__lookup_valid_q = VL_RAND_RESET_I(1);
    __PVT__lookup_addr_q = VL_RAND_RESET_I(32);
    __PVT__tag_addr_r = VL_RAND_RESET_I(8);
    __PVT__tag_data_in_r = VL_RAND_RESET_I(20);
    __PVT__tag0_write_r = VL_RAND_RESET_I(1);
    __PVT__tag0_hit_w = VL_RAND_RESET_I(1);
    __PVT__tag1_write_r = VL_RAND_RESET_I(1);
    __PVT__tag1_hit_w = VL_RAND_RESET_I(1);
    __PVT__tag_hit_any_w = VL_RAND_RESET_I(1);
    __PVT__data_addr_r = VL_RAND_RESET_I(11);
    __PVT__data_write_addr_q = VL_RAND_RESET_I(11);
    __PVT__flush_addr_q = VL_RAND_RESET_I(8);
    __PVT__inst_r = VL_RAND_RESET_I(32);
    __PVT__axi_arvalid_q = VL_RAND_RESET_I(1);
    __PVT__axi_error_q = VL_RAND_RESET_I(1);
}
