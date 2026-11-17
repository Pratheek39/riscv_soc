// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_icache.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vriscv_soc_icache::_settle__TOP__riscv_soc__u_core__u_icache__2(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache::_settle__TOP__riscv_soc__u_core__u_icache__2\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r 
        = (0xffU & ((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))
                     ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__flush_addr_q)
                     : (((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                         | (3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)))
                         ? (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                            >> 5U) : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_pc_o 
                                      >> 5U))));
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r 
        = (0x7ffU & ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))
                      ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_write_addr_q)
                      : ((3U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))
                          ? (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                             >> 2U) : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_pc_o 
                                       >> 2U))));
}

VL_INLINE_OPT void Vriscv_soc_icache::_sequent__TOP__riscv_soc__u_core__u_icache__3(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache::_sequent__TOP__riscv_soc__u_core__u_icache__3\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__replace_way_q;
    SData/*10:0*/ __Vdly__data_write_addr_q;
    // Body
    __Vdly__replace_way_q = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q;
    __Vdly__data_write_addr_q = vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_write_addr_q;
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
             & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r)))) {
            vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o) {
                vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q = 0U;
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_o) 
              & (~ (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                     >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w)))));
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__invalidate_q = 0U;
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_valid_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_rd_o) 
             & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o))) {
            vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_valid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o) {
                vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_valid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        __Vdly__replace_way_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r))) {
            __Vdly__replace_way_q = (1U & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)));
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__flush_addr_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)
            ? 0U : ((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q))
                     ? (0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__flush_addr_q)))
                     : 0U));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        __Vdly__data_write_addr_q = 0U;
    } else {
        if (((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
             & (2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r)))) {
            __Vdly__data_write_addr_q = (0x7f8U & (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                                                   >> 2U));
        } else {
            if (((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w))) {
                __Vdly__data_write_addr_q = (0x7ffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_write_addr_q)));
            }
        }
    }
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q 
        = __Vdly__replace_way_q;
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_write_addr_q 
        = __Vdly__data_write_addr_q;
    vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i)
            ? 0U : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_cpu_i) {
        vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_rd_o) 
             & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o))) {
            vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                = vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mem_i_pc_o;
        }
    }
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
}

VL_INLINE_OPT void Vriscv_soc_icache::_multiclk__TOP__riscv_soc__u_core__u_icache__4(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_soc_icache::_multiclk__TOP__riscv_soc__u_core__u_icache__4\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
