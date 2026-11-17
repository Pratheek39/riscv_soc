// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_riscv_soc.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vriscv_soc_riscv_soc::_combo__TOP__riscv_soc__3(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc::_combo__TOP__riscv_soc__3\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w)) 
           | (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_bready_i));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w)) 
           | (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_rready_i));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w)) 
           | (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_awvalid_i));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w)) 
           | (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_arvalid_i));
}

VL_INLINE_OPT void Vriscv_soc_riscv_soc::_sequent__TOP__riscv_soc__4(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc::_sequent__TOP__riscv_soc__4\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q;
    CData/*7:0*/ __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q;
    CData/*3:0*/ __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q;
    CData/*7:0*/ __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q;
    CData/*3:0*/ __Vdly__u_soc__DOT__u_uart__DOT__tx_bits_q;
    CData/*3:0*/ __Vdly__u_soc__DOT__u_accel__DOT__state_q;
    CData/*2:0*/ __Vdlyvdim0__u_soc__DOT__u_accel__DOT__b_mem__v0;
    CData/*2:0*/ __Vdlyvdim1__u_soc__DOT__u_accel__DOT__b_mem__v0;
    CData/*0:0*/ __Vdlyvset__u_soc__DOT__u_accel__DOT__b_mem__v0;
    CData/*2:0*/ __Vdlyvdim0__u_soc__DOT__u_accel__DOT__a_mem__v0;
    CData/*2:0*/ __Vdlyvdim1__u_soc__DOT__u_accel__DOT__a_mem__v0;
    CData/*0:0*/ __Vdlyvset__u_soc__DOT__u_accel__DOT__a_mem__v0;
    CData/*7:0*/ __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q;
    CData/*5:0*/ __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_spi__DOT__active_q;
    CData/*2:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q;
    CData/*1:0*/ __Vdlyvdim0__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0;
    CData/*7:0*/ __Vdlyvval__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0;
    CData/*2:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q;
    CData/*1:0*/ __Vdlyvdim0__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0;
    CData/*7:0*/ __Vdlyvval__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q;
    CData/*0:0*/ __Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q;
    CData/*0:0*/ __Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q;
    CData/*0:0*/ __Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0;
    CData/*5:0*/ __Vdlyvval__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q;
    CData/*0:0*/ __Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0;
    CData/*1:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q;
    CData/*0:0*/ __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q;
    CData/*0:0*/ __Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0;
    SData/*15:0*/ __Vdly__u_soc__DOT__u_accel__DOT__row_q;
    SData/*15:0*/ __Vdly__u_soc__DOT__u_accel__DOT__col_q;
    SData/*15:0*/ __Vdly__u_soc__DOT__u_accel__DOT__compute_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__addr_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__cycle_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__mac_cycle_q;
    IData/*31:0*/ __Vdlyvval__u_soc__DOT__u_accel__DOT__b_mem__v0;
    IData/*31:0*/ __Vdlyvval__u_soc__DOT__u_accel__DOT__a_mem__v0;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    IData/*31:0*/ __Vdly__u_soc__DOT__u_spi__DOT__clk_div_q;
    QData/*45:0*/ __Vdlyvval__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0;
    QData/*36:0*/ __Vdlyvval__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0;
    QData/*45:0*/ __Vdlyvval__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0;
    QData/*38:0*/ __Vdlyvval__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0;
    // Body
    __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q;
    __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q;
    __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q;
    __Vdly__u_soc__DOT__u_uart__DOT__tx_bits_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q;
    __Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0 = 0U;
    __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q;
    __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q;
    __Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0 = 0U;
    __Vdly__u_soc__DOT__u_spi__DOT__clk_div_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q;
    __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q;
    __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q;
    __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q;
    __Vdly__u_soc__DOT__u_spi__DOT__active_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q;
    __Vdlyvset__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0 = 0U;
    __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q;
    __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q;
    __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q;
    __Vdlyvset__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0 = 0U;
    __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q;
    __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q;
    __Vdlyvset__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0 = 0U;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    __Vdly__u_soc__DOT__u_accel__DOT__mac_cycle_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__mac_cycle_q;
    __Vdly__u_soc__DOT__u_accel__DOT__cycle_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cycle_q;
    __Vdlyvset__u_soc__DOT__u_accel__DOT__a_mem__v0 = 0U;
    __Vdlyvset__u_soc__DOT__u_accel__DOT__b_mem__v0 = 0U;
    __Vdly__u_soc__DOT__u_accel__DOT__compute_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_q;
    __Vdly__u_soc__DOT__u_accel__DOT__col_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q;
    __Vdly__u_soc__DOT__u_accel__DOT__row_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q;
    __Vdly__u_soc__DOT__u_accel__DOT__addr_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addr_q;
    __Vdly__u_soc__DOT__u_accel__DOT__state_q = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q;
    __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q;
    __Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0 = 0U;
    __Vdlyvset__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0 = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i) 
           | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_r));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q = 0U;
    } else {
        if (((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q))) {
            __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q 
                = ((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))));
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q)))) {
                __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) {
            if ((0U != vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q)) {
                __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q 
                    = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q 
                       - (IData)(1U));
            } else {
                if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_sample_w) {
                    __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q = 0x18U;
                }
            }
        } else {
            __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q = 0x18U;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q) {
            if ((0U != vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q)) {
                __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q 
                    = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q 
                       - (IData)(1U));
            } else {
                if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_sample_w) {
                    __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q 
                        = ((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))
                            ? 0U : 0x18U);
                }
            }
        } else {
            __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q = 0xcU;
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
            ? 0U : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r);
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_uart__DOT__tx_bits_q = 0U;
    } else {
        if (((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q))) {
            __Vdly__u_soc__DOT__u_uart__DOT__tx_bits_q 
                = ((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q))));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w) {
            __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w) 
                 & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)))) {
                __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q 
                    = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q)));
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q = 0U;
    } else {
        if (((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_arready_i) 
             & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q)));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q = 0U;
    } else {
        if (((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_wready_i) 
             & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q)));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q = 0U;
    } else {
        if (((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_awready_i) 
             & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q)));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arvalid_w) 
              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arready_w)) 
             & (~ ((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_arready_i) 
                   & (IData)(vlSymsp->TOP__riscv_soc.mem_arvalid_o))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)));
        } else {
            if (((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arvalid_w) 
                     & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arready_w))) 
                 & ((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_arready_i) 
                    & (IData)(vlSymsp->TOP__riscv_soc.mem_arvalid_o)))) {
                __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q 
                    = (3U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q) 
                             - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wvalid_w) 
             & (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))) {
            __Vdlyvval__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0 
                = (((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r)) 
                    << 0x24U) | (((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r))));
            __Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0 = 1U;
            __Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q;
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q)));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q = 0U;
        __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q) 
             & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q))) {
            if ((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))) {
                __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q = 0U;
            } else {
                if ((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))) {
                    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q) {
                        __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q = 0U;
                    }
                } else {
                    __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q 
                        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q) 
                            << 7U) | (0x7fU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q) 
                                               >> 1U)));
                }
            }
        } else {
            if ((1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q)) 
                       & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q))))) {
                __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q = 0U;
                __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q = 1U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q) 
             & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q))) {
            if ((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q 
                    = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q)
                        ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q)
                        : 0U);
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
            ? 0U : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q);
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wvalid_w) 
              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wready_w)) 
             & (~ ((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_wready_i) 
                   & (IData)(vlSymsp->TOP__riscv_soc.mem_wvalid_o))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)));
        } else {
            if (((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wvalid_w) 
                     & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wready_w))) 
                 & ((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_wready_i) 
                    & (IData)(vlSymsp->TOP__riscv_soc.mem_wvalid_o)))) {
                __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q 
                    = (3U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q) 
                             - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awvalid_w) 
              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awready_w)) 
             & (~ ((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_awready_i) 
                   & (IData)(vlSymsp->TOP__riscv_soc.mem_awvalid_o))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)));
        } else {
            if (((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awvalid_w) 
                     & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awready_w))) 
                 & ((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_awready_i) 
                    & (IData)(vlSymsp->TOP__riscv_soc.mem_awvalid_o)))) {
                __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q 
                    = (3U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q) 
                             - (IData)(1U)));
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
            ? 0U : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
              & (0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_status_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
              & (8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
              & (0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ivr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0x18U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (4U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_isr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (0x18U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (0x14U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x28U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x24U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_status_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x20U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x14U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_input_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (4U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x70U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x6cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_sr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x64U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x40U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x28U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x10U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
              & (0x18U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_tx_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
               & (0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) 
              & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
             & (0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 4U));
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
               & (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) 
              & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                 >> 6U)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
               & (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) 
              & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                 >> 5U)));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 7U));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q = 1U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x70U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q 
                = (1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r);
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 0x1fU));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 4U));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 8U));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 2U));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 1U));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w) {
            if ((8U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                if ((0xcU != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                    if ((0x10U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                        if ((0x14U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                            if ((0x18U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                                if ((0x1cU == (0xffU 
                                               & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q 
                                        = (0xffffU 
                                           & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awvalid_w) 
             & (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))) {
            __Vdlyvval__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0 
                = (((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)) 
                    << 0xeU) | (QData)((IData)((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r) 
                                                 << 0xaU) 
                                                | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awlen_r) 
                                                    << 2U) 
                                                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r))))));
            __Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0 = 1U;
            __Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q;
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q)));
        }
    }
    __Vdly__u_soc__DOT__u_spi__DOT__clk_div_q = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
                                                  ? 0U
                                                  : 
                                                 ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w) 
                                                    | (0xaU 
                                                       == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q)) 
                                                   | (0U 
                                                      == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))
                                                   ? 2U
                                                   : 
                                                  (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q 
                                                   - (IData)(1U))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & (0U != (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q 
                     & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
            ? 0U : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w) 
                    | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q) 
                       & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q)))));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w) {
            __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q) 
                 & (4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)))) {
                __Vdlyvval__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0 
                    = (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q);
                __Vdlyvset__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0 = 1U;
                __Vdlyvdim0__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q;
                __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q 
                    = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q)));
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w) 
             | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q = 0U;
        }
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q) 
             & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q))) {
            if ((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q)))) {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q = 1U;
                }
            } else {
                if (((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q)) 
                     & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q))) {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q = 1U;
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w) {
            __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_accept_w)) 
                 & (~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w) 
                       & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_ready_w))))) {
                __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q 
                    = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)));
            } else {
                if (((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                         & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_accept_w))) 
                     & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w) 
                        & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_ready_w)))) {
                    __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q 
                        = (7U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w) {
            __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                 & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)))) {
                __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q 
                    = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q)));
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__intr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q) 
              & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w))));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q = 0U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q = 0U;
    } else {
        if (((0xaU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q) 
             | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q) 
                & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w))))) {
            __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q = 0U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w) {
                if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r) {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q 
                        = (1U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_w) 
                                 >> 7U));
                    __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q 
                        = (0xfeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_w) 
                                    << 1U));
                } else {
                    __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q 
                        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_w;
                }
            } else {
                if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
                     & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
                    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r) {
                        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q 
                            = (1U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                     >> 7U));
                        __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q 
                            = (0xfeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                        << 1U));
                    } else {
                        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__sample_r) {
                            __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q 
                                = ((0xfeU & (IData)(__Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q)) 
                                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__miso_w));
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q) {
            __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) {
                __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q 
                    = ((IData)(1U) + vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q);
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q) {
            __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) {
                __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q 
                    = ((IData)(1U) + vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q);
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w) {
            __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q) 
                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_accept_w)) 
                 & (~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                       & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_ready_w))))) {
                __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q 
                    = (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)));
            } else {
                if (((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q) 
                         & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_accept_w))) 
                     & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                        & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_ready_w)))) {
                    __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q 
                        = (7U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w) {
            __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q) 
                 & (4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)))) {
                __Vdlyvval__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0 
                    = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q)
                        ? ((0x80U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                     << 7U)) | ((0x40U 
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
                        : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q));
                __Vdlyvset__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0 = 1U;
                __Vdlyvdim0__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q;
                __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q 
                    = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q)));
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q) 
              | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q)));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q) {
            __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q 
                = (0xfU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q);
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q) {
                __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q 
                    = (0xfU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q) 
                               | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q));
            } else {
                if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q) {
                    __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q 
                        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q) 
                           & (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q) 
              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q)) 
             & (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q = 1U;
        } else {
            if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q) 
                 & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                    >> 2U))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q = 0U;
    } else {
        if (((0xaU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q) 
             | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q) 
                & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w))))) {
            __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w) {
                __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q;
            } else {
                if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
                     & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)))) {
                        __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q 
                            = (1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q)));
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q 
                 == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q) 
                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q)) 
               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q)) 
              | (((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q 
                   == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q) 
                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q)) 
                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q))));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q = 0U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q = 0U;
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r;
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arvalid_w) 
             & (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)))) {
            __Vdlyvval__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0 
                = (((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) 
                    << 0xeU) | (QData)((IData)((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r) 
                                                 << 0xaU) 
                                                | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r) 
                                                    << 2U) 
                                                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r))))));
            __Vdlyvset__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0 = 1U;
            __Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q;
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q)));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q = 0xfU;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q 
                = (0xeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                           << 1U));
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
            ? 0U : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rd_data_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__read_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rd_data_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q = 0xfU;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q 
                = (0xeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                           << 1U));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                    [4U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                    [3U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                    [2U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                    [1U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                    [4U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                    [3U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                    [2U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                    [1U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                    [0U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                    [0U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [0x13U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0x17U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [0x12U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0x16U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [0x11U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0x15U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [0x10U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0x14U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [0xfU];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [0xeU];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0x12U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [0xdU];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0x11U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [0xcU];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0x10U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [0xbU];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0xfU];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [0xaU];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [9U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0xdU];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [8U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0xcU];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [7U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0xbU];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [6U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0xaU];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [5U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [4U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [8U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [3U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [7U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [2U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [6U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [1U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [5U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                    [0U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [3U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [2U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [1U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                    [0U];
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                                         [0U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                                         [0U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                                         [4U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [0xfU]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                                         [3U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [0xaU]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                                         [2U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [5U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed
                                         [1U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [0U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [3U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                                         [4U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [2U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                                         [3U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [1U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                                         [2U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((0U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed
                                         [1U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0x17U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [0x13U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0x16U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [0x12U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0x15U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [0x11U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0x14U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [0x10U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0x12U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [0xeU]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0x11U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [0xdU]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0x10U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [0xcU]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0xfU], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [0xbU]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0xdU], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [9U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0xcU], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [8U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0xbU], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [7U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [0xaU], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [6U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (4U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [8U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [4U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (3U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [7U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [3U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (2U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [6U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [2U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w) {
            __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q = 0U;
        } else {
            if ((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if (((1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                     & (1U < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))) {
                    __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
                        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
                           + VL_MULS_III(32,32,32, 
                                         vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w
                                         [5U], vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w
                                         [1U]));
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_accel__DOT__state_q = 0U;
        __Vdly__u_soc__DOT__u_accel__DOT__addr_q = 0U;
        __Vdly__u_soc__DOT__u_accel__DOT__row_q = 0U;
        __Vdly__u_soc__DOT__u_accel__DOT__col_q = 0U;
        __Vdly__u_soc__DOT__u_accel__DOT__compute_q = 0U;
        __Vdly__u_soc__DOT__u_accel__DOT__cycle_q = 0U;
        __Vdly__u_soc__DOT__u_accel__DOT__mac_cycle_q = 0U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__start_w) {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__start_ok_w) {
                __Vdly__u_soc__DOT__u_accel__DOT__state_q = 1U;
                __Vdly__u_soc__DOT__u_accel__DOT__addr_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q;
                __Vdly__u_soc__DOT__u_accel__DOT__row_q = 0U;
                __Vdly__u_soc__DOT__u_accel__DOT__col_q = 0U;
                __Vdly__u_soc__DOT__u_accel__DOT__compute_q = 0U;
                __Vdly__u_soc__DOT__u_accel__DOT__cycle_q = 0U;
                __Vdly__u_soc__DOT__u_accel__DOT__mac_cycle_q = 0U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q = 0U;
            } else {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q 
                    = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w)
                        ? 2U : 1U);
            }
        }
        if (((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
             & (8U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)))) {
            __Vdly__u_soc__DOT__u_accel__DOT__cycle_q 
                = ((IData)(1U) + vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cycle_q);
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                if ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                    if ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
                             & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                                >> 3U))) {
                            __Vdly__u_soc__DOT__u_accel__DOT__addr_q 
                                = ((IData)(4U) + vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addr_q);
                            if ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r))) {
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q = 4U;
                            }
                            __Vdly__u_soc__DOT__u_accel__DOT__state_q = 6U;
                            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_col_last_w) {
                                __Vdly__u_soc__DOT__u_accel__DOT__row_q 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q)));
                                __Vdly__u_soc__DOT__u_accel__DOT__col_q = 0U;
                                if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_row_last_w) {
                                    __Vdly__u_soc__DOT__u_accel__DOT__state_q = 8U;
                                }
                            } else {
                                __Vdly__u_soc__DOT__u_accel__DOT__col_q 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q)));
                            }
                        }
                    } else {
                        if (((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                               >> 3U) & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) 
                                         & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)))) 
                             & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                 >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w)))) {
                            __Vdly__u_soc__DOT__u_accel__DOT__state_q = 7U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                        __Vdly__u_soc__DOT__u_accel__DOT__mac_cycle_q 
                            = ((IData)(1U) + vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__mac_cycle_q);
                        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_last_w) {
                            __Vdly__u_soc__DOT__u_accel__DOT__row_q = 0U;
                            __Vdly__u_soc__DOT__u_accel__DOT__col_q = 0U;
                            __Vdly__u_soc__DOT__u_accel__DOT__addr_q 
                                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q;
                            __Vdly__u_soc__DOT__u_accel__DOT__state_q = 6U;
                        } else {
                            __Vdly__u_soc__DOT__u_accel__DOT__compute_q 
                                = (0xffffU & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_q)));
                        }
                    } else {
                        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_rvalid_w) {
                            vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound6 
                                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r;
                            __Vdly__u_soc__DOT__u_accel__DOT__addr_q 
                                = ((IData)(4U) + vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addr_q);
                            if ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r))) {
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q = 4U;
                            }
                            if (((4U >= (7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q))) 
                                 & (4U >= (7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q))))) {
                                __Vdlyvval__u_soc__DOT__u_accel__DOT__b_mem__v0 
                                    = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound6;
                                __Vdlyvset__u_soc__DOT__u_accel__DOT__b_mem__v0 = 1U;
                                __Vdlyvdim1__u_soc__DOT__u_accel__DOT__b_mem__v0 
                                    = (7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q));
                                __Vdlyvdim0__u_soc__DOT__u_accel__DOT__b_mem__v0 
                                    = (7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q));
                            }
                            __Vdly__u_soc__DOT__u_accel__DOT__state_q = 3U;
                            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_col_last_w) {
                                __Vdly__u_soc__DOT__u_accel__DOT__row_q 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q)));
                                __Vdly__u_soc__DOT__u_accel__DOT__col_q = 0U;
                                if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_row_last_w) {
                                    __Vdly__u_soc__DOT__u_accel__DOT__row_q = 0U;
                                    __Vdly__u_soc__DOT__u_accel__DOT__compute_q = 0U;
                                    __Vdly__u_soc__DOT__u_accel__DOT__state_q = 5U;
                                }
                            } else {
                                __Vdly__u_soc__DOT__u_accel__DOT__col_q 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q)));
                            }
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                    if ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arready_w) {
                            __Vdly__u_soc__DOT__u_accel__DOT__state_q = 4U;
                        }
                    } else {
                        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_rvalid_w) {
                            vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound5 
                                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r;
                            if ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r))) {
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q = 4U;
                            }
                            if (((4U >= (7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q))) 
                                 & (4U >= (7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q))))) {
                                __Vdlyvval__u_soc__DOT__u_accel__DOT__a_mem__v0 
                                    = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound5;
                                __Vdlyvset__u_soc__DOT__u_accel__DOT__a_mem__v0 = 1U;
                                __Vdlyvdim1__u_soc__DOT__u_accel__DOT__a_mem__v0 
                                    = (7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q));
                                __Vdlyvdim0__u_soc__DOT__u_accel__DOT__a_mem__v0 
                                    = (7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q));
                            }
                            __Vdly__u_soc__DOT__u_accel__DOT__addr_q 
                                = ((IData)(4U) + vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addr_q);
                            __Vdly__u_soc__DOT__u_accel__DOT__state_q = 1U;
                            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_col_last_w) {
                                __Vdly__u_soc__DOT__u_accel__DOT__row_q 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q)));
                                __Vdly__u_soc__DOT__u_accel__DOT__col_q = 0U;
                                if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_row_last_w) {
                                    __Vdly__u_soc__DOT__u_accel__DOT__row_q = 0U;
                                    __Vdly__u_soc__DOT__u_accel__DOT__addr_q 
                                        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q;
                                    __Vdly__u_soc__DOT__u_accel__DOT__state_q = 3U;
                                }
                            } else {
                                __Vdly__u_soc__DOT__u_accel__DOT__col_q 
                                    = (0xffffU & ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q)));
                            }
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) {
                        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arready_w) {
                            __Vdly__u_soc__DOT__u_accel__DOT__state_q = 2U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__read_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)) 
                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q 
                = ((0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                    ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q
                    : ((4U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                        ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q
                        : ((8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                            ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w
                            : ((0x14U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q
                                : ((0x20U == (0xffU 
                                              & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                    ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q
                                    : ((0x24U == (0xffU 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                        ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q
                                        : ((0x28U == 
                                            (0xffU 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                            ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q
                                            : 0U)))))));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__bvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__bvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__bvalid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q = 0U;
    } else {
        if ((((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rvalid_i) 
              & (IData)(vlSymsp->TOP__riscv_soc.mem_rready_o)) 
             & (~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w) 
                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_rvalid_w))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)));
        } else {
            if (((~ ((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rvalid_i) 
                     & (IData)(vlSymsp->TOP__riscv_soc.mem_rready_o))) 
                 & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w) 
                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_rvalid_w)))) {
                __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q 
                    = (3U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q) 
                             - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q = 0U;
    } else {
        if ((((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_bvalid_i) 
              & (IData)(vlSymsp->TOP__riscv_soc.mem_bready_o)) 
             & (~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w) 
                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_bvalid_w))))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)));
        } else {
            if (((~ ((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_bvalid_i) 
                     & (IData)(vlSymsp->TOP__riscv_soc.mem_bready_o))) 
                 & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w) 
                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_bvalid_w)))) {
                __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q 
                    = (3U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q) 
                             - (IData)(1U)));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)))) {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)))) {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w) 
             & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q)));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w) 
             & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)))) {
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q)));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q = 0U;
    } else {
        if (((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_bvalid_i) 
             & (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)))) {
            __Vdlyvval__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0 
                = (((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_bresp_i) 
                    << 4U) | (IData)(vlTOPp->__Vcellinp__riscv_soc__mem_bid_i));
            __Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0 = 1U;
            __Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q;
            __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q)));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q = 0U;
    } else {
        if (((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rvalid_i) 
             & (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)))) {
            __Vdlyvval__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0 
                = (((QData)((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rdata_i)) 
                    << 7U) | (QData)((IData)((((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rresp_i) 
                                               << 5U) 
                                              | (((IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rid_i) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->__Vcellinp__riscv_soc__mem_rlast_i))))));
            __Vdlyvset__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0 = 1U;
            __Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q;
            __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q)));
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q;
    if (__Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q[__Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0] 
            = __Vdlyvval__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q__v0;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__rx_shift_reg_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q;
    if (__Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q[__Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0] 
            = __Vdlyvval__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q__v0;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q;
    if (__Vdlyvset__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[__Vdlyvdim0__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0] 
            = __Vdlyvval__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q__v0;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__shift_reg_q;
    if (__Vdlyvset__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[__Vdlyvdim0__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0] 
            = __Vdlyvval__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q__v0;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q 
        = __Vdly__u_soc__DOT__u_intc__DOT__irq_enable_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__spi_clk_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q 
        = __Vdly__u_soc__DOT__u_timer__DOT__timer0_value_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q 
        = __Vdly__u_soc__DOT__u_timer__DOT__timer1_value_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q;
    if (__Vdlyvset__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q[__Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0] 
            = __Vdlyvval__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q__v0;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cycle_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__cycle_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__mac_cycle_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__mac_cycle_q;
    if (__Vdlyvset__u_soc__DOT__u_accel__DOT__b_mem__v0) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem[__Vdlyvdim0__u_soc__DOT__u_accel__DOT__b_mem__v0][__Vdlyvdim1__u_soc__DOT__u_accel__DOT__b_mem__v0] 
            = __Vdlyvval__u_soc__DOT__u_accel__DOT__b_mem__v0;
    }
    if (__Vdlyvset__u_soc__DOT__u_accel__DOT__a_mem__v0) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem[__Vdlyvdim0__u_soc__DOT__u_accel__DOT__a_mem__v0][__Vdlyvdim1__u_soc__DOT__u_accel__DOT__a_mem__v0] 
            = __Vdlyvval__u_soc__DOT__u_accel__DOT__a_mem__v0;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__compute_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__row_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__col_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addr_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__addr_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q 
        = __Vdly__u_soc__DOT__u_accel__DOT__state_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q;
    if (__Vdlyvset__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q[__Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0] 
            = __Vdlyvval__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q__v0;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q 
        = __Vdly__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q;
    if (__Vdlyvset__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q[__Vdlyvdim0__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0] 
            = __Vdlyvval__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q__v0;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc.mem_wvalid_o = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wready_w 
        = (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc.mem_awvalid_o = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awready_w 
        = (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q) 
              << 3U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
            ? 0U : (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
                     & (0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))
                     ? (0xfU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r)
                     : 0U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q];
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
             & (0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q 
                = (1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r);
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
            ? 0U : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r);
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
              & (0x10U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x68U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_ready_w 
        = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_accept_w 
        = (4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 9U));
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q) 
              << 1U));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q = 0U;
        __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q = 0U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) {
            if (((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                 & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q))) {
                __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q 
                    = (0x7fU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q) 
                                >> 1U));
            }
            if (((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                 & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q))) {
                __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q = 0U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q = 1U;
            }
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q) {
                __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q 
                    = (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q);
                __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q = 1U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q = 0U;
            } else {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w) 
             | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q = 0U;
        }
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q) 
             & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q))) {
            if ((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q;
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
            ? 0U : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r);
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0x10U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w) 
              & (0x14U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w)) 
           | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q)) 
              << 2U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_ready_w 
        = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_accept_w 
        = (4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x20U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x28U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 2U));
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
              & (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 3U));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
             & (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q 
                = (1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r);
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w)) 
           | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
             & (0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
             & (8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 1U));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
             & (0x18U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
             & (0x14U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 1U));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
             & (8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 2U));
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w) 
             & (0x14U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q 
                = (1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                         >> 2U));
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc.mem_arvalid_o = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arready_w 
        = (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q = 0U;
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0x14U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0xfU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0xaU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[5U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[4U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[3U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[2U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[1U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0x18U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0x18U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0x17U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0x17U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0x16U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0x16U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0x15U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0x15U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0x14U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0x13U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0x13U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0x12U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0x12U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0x11U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0x11U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0x10U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0x10U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0xfU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0xeU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0xeU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0xdU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0xdU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0xcU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0xcU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0xbU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[0xbU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[0xaU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[9U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[9U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[8U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[8U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[7U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[7U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[6U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[6U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_b_w[5U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[4U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[3U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[2U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_a_w[1U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0x14U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0xfU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0xaU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[5U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[4U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[3U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[2U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[1U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0x18U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0x17U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0x16U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0x15U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0x13U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0x12U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0x11U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0x10U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0xeU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0xdU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0xcU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[0xbU] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[9U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[8U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[7U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[6U] 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w) {
            if ((8U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                if ((0xcU != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                    if ((0x10U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                        if ((0x14U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q 
                                = (0xffffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w) {
            if ((8U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                if ((0xcU != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                    if ((0x10U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                        if ((0x14U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                            if ((0x18U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q 
                                    = (0xffffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_last_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_q) 
           == (0xffffU & ((IData)(7U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[0U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[0U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[1U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[1U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[2U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[2U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[3U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[3U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[4U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[4U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx;
    if ((VL_LTES_III(1,32,32, 0U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound3 
            = ((4U >= (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx))
                ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
               [0U][(7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx)]
                : 0U);
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[0U] 
            = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound3;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
           - (IData)(1U));
    if ((VL_LTES_III(1,32,32, 1U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound3 
            = ((4U >= (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx))
                ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
               [1U][(7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx)]
                : 0U);
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[1U] 
            = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound3;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
           - (IData)(2U));
    if ((VL_LTES_III(1,32,32, 2U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound3 
            = ((4U >= (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx))
                ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
               [2U][(7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx)]
                : 0U);
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[2U] 
            = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound3;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
           - (IData)(3U));
    if ((VL_LTES_III(1,32,32, 3U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound3 
            = ((4U >= (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx))
                ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
               [3U][(7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx)]
                : 0U);
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[3U] 
            = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound3;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
           - (IData)(4U));
    if ((VL_LTES_III(1,32,32, 4U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound3 
            = ((4U >= (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx))
                ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
               [4U][(7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx)]
                : 0U);
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[4U] 
            = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound3;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx;
    if ((VL_LTES_III(1,32,32, 0U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound4 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
            [((4U >= (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx))
               ? (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx)
               : 0U)][0U];
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[0U] 
            = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound4;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
           - (IData)(1U));
    if ((VL_LTES_III(1,32,32, 1U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound4 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
            [((4U >= (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx))
               ? (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx)
               : 0U)][1U];
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[1U] 
            = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound4;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
           - (IData)(2U));
    if ((VL_LTES_III(1,32,32, 2U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound4 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
            [((4U >= (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx))
               ? (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx)
               : 0U)][2U];
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[2U] 
            = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound4;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
           - (IData)(3U));
    if ((VL_LTES_III(1,32,32, 3U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound4 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
            [((4U >= (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx))
               ? (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx)
               : 0U)][3U];
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[3U] 
            = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound4;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
        = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
           - (IData)(4U));
    if ((VL_LTES_III(1,32,32, 4U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound4 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
            [((4U >= (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx))
               ? (7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_idx)
               : 0U)][4U];
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[4U] 
            = vlSymsp->TOP__riscv_soc.u_soc__DOT__u_accel__DOT____Vlvbound4;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_row_last_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q) 
           == (0xffffU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q) 
                          - (IData)(1U))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_col_last_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q) 
           == (0xffffU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q) 
                          - (IData)(1U))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_sel_w 
        = (0xffffU & (((IData)(5U) * (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q)) 
                      + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w) {
            if ((8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w) {
            if ((8U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                if ((0xcU != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                    if ((0x10U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q 
                            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r;
                    }
                }
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w) {
            if ((8U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                if ((0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q 
                        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r;
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w)) 
           | ((7U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
              << 3U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w)) 
           | (((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
               | (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) 
              << 3U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w)) 
           | ((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
              << 3U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arvalid_w 
        = ((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
           | (3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__read_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__read_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__read_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q = 0U;
            }
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q = 0U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q = 0U;
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_ms;
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
             & (0x14U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
             & (0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
             & (0x24U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w) 
             & (0x28U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r;
        }
    }
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q = 0U;
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__read_en_w) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q = 1U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q = 0U;
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_bvalid_w 
        = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q));
    vlSymsp->TOP__riscv_soc.mem_bready_o = (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r 
        = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
            ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__bvalid_q))
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q)
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q)))
            : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q)
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q))
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q)
                    : (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_rvalid_w 
        = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q));
    vlSymsp->TOP__riscv_soc.mem_rready_o = (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__tx_count_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__tx_shift_reg_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__tx_bits_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__tx_busy_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__rx_busy_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__rx_bits_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q 
        = __Vdly__u_soc__DOT__u_uart__DOT__rx_count_q;
    vlSymsp->TOP__riscv_soc.__Vtableidx1 = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r 
        = vlSymsp->TOP__riscv_soc.__Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r
        [vlSymsp->TOP__riscv_soc.__Vtableidx1];
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arvalid_w) 
              << 3U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r 
        = (3U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                  ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                      ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                          ? ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w) 
                             >> 4U) : 0U) : 0U) : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w) 
                                                     >> 4U)))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r 
        = ((8U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                   ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)
                           : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                       : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                   : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                       : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                           : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)))))
            ? ((4U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)
                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                           : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                       : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                           : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)))))
                ? (8U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r))
                : (4U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r)))
            : ((4U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)
                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                           : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                       : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                           : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)))))
                ? (2U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r))
                : (1U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r))));
    if ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r 
            = (3U & ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                      ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                          ? (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                     >> 5U)) : 0U) : 0U));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
            = ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                               >> 7U)) : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rd_data_q)
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q
                    : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r 
            = (1U & ((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
                         >> 1U)) | ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q)) 
                                    | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w))));
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r 
            = (3U & ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                      ? 0U : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                               ? 0U : (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                               >> 5U)))));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
            = ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q
                    : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q)
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q
                    : (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                               >> 7U))));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r 
            = (1U & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
                      >> 1U) | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
                                | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w))));
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r 
        = ((8U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                   ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                       ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                           ? (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                      >> 1U)) : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                       : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                   : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                       : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                           : (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                      >> 1U)))))) ? 
           ((4U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                        ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                            ? (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                       >> 1U)) : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                        : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                    : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                        ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                        : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                            : (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                       >> 1U)))))) ? 
            (8U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r))
             : (4U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r)))
            : ((4U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                       ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                           ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                               ? (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                          >> 1U)) : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                           : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                       : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                           : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                               : (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                          >> 1U))))))
                ? (2U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r))
                : (1U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q)
            ? ((0x80U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                         << 7U)) | ((0x40U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                              << 5U)) 
                                    | ((0x20U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                 << 3U)) 
                                       | ((0x10U & 
                                           ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                            << 1U)) 
                                          | ((8U & 
                                              ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                               >> 1U)) 
                                             | ((4U 
                                                 & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                    >> 3U)) 
                                                | ((2U 
                                                    & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                         >> 7U)))))))))
            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_sample_w 
        = (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q);
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_r = 1U;
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_r 
            = ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
               & (((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                   | (0xaU == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q))) 
                  | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q)));
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
            ? 0U : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r);
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
              & (4U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_sample_w 
        = (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q);
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i) 
           | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q 
        = ((~ (IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)) 
           & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w) 
               & (0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) 
              & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
                 >> 1U)));
    if (vlTOPp->__Vcellinp__riscv_soc__rst_i) {
        __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q = 0U;
        __Vdly__u_soc__DOT__u_spi__DOT__active_q = 0U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q = 0U;
    } else {
        if ((0xaU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q)) {
            __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q = 0U;
            __Vdly__u_soc__DOT__u_spi__DOT__active_q = 0U;
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q = 0U;
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w) {
                __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q = 0U;
                __Vdly__u_soc__DOT__u_spi__DOT__active_q = 1U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q = 0U;
            } else {
                if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
                     & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
                    if ((0xfU == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q))) {
                        __Vdly__u_soc__DOT__u_spi__DOT__active_q = 0U;
                        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q = 1U;
                    } else {
                        __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)));
                    }
                } else {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_row_last_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row_q) 
           == (0xffffU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q) 
                          - (IData)(1U))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_col_last_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col_q) 
           == (0xffffU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q) 
                          - (IData)(1U))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w 
        = (0U == (3U & ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q 
                         | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q) 
                        | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_ms 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
            ? 0U : vlTOPp->__Vcellinp__riscv_soc__gpio_input_i);
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r 
        = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
            ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q))
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)))
            : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q))
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)
                    : (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)))));
    vlSymsp->TOP__riscv_soc.__PVT__axi4_d_bvalid_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
              >> 1U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__bit_count_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__clk_div_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q 
        = __Vdly__u_soc__DOT__u_spi__DOT__active_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__start_ok_w 
        = ((((((((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                 & (5U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q))) 
                & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))) 
               & (5U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))) 
              & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))) 
             & (5U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w)) 
           & ((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
              | (8U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_rvalid_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
              >> 3U));
    vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
              >> 2U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q;
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
            = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q 
               | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q);
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
                = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q 
                   & (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q));
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q;
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q;
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
            = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
               & (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q));
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
        = ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
            | ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                ^ (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q)) 
               & (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q))) 
           | (((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q 
                ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q) 
               & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                  ^ (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q))) 
              & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q));
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
            = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
               | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q);
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i) 
           | (IData)(vlTOPp->__Vcellinp__riscv_soc__uart_txd_i));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w 
        = ((((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q)) 
              & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q))) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q))) 
            & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q))) 
           & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q 
        = ((IData)(vlTOPp->__Vcellinp__riscv_soc__rst_i)
            ? 0U : (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w) 
                     & (0x40U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r)))
                     ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r
                     : 0U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__sample_r = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w)))) {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
             & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
            if (((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)) 
                 == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__sample_r = 1U;
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r = 0U;
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r 
            = (1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q)));
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
             & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
            if (((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)) 
                 != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r 
                    = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q) 
                       | ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)) 
                          & (0xfU != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q))));
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w 
        = ((0xaU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q) 
           | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w 
        = ((0xaU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q) 
           | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q));
}

VL_INLINE_OPT void Vriscv_soc_riscv_soc::_combo__TOP__riscv_soc__5(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc::_combo__TOP__riscv_soc__5\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__miso_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
            : (IData)(vlTOPp->__Vcellinp__riscv_soc__spi_miso_i));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w 
        = (0U != ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w) 
                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w 
        = (0U != ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w) 
                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r)) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w));
}

VL_INLINE_OPT void Vriscv_soc_riscv_soc::_multiclk__TOP__riscv_soc__6(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc::_multiclk__TOP__riscv_soc__6\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_o) 
              << 2U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_read_w) 
              << 1U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_awvalid_o) 
              << 1U));
}

VL_INLINE_OPT void Vriscv_soc_riscv_soc::_combo__TOP__riscv_soc__7(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc::_combo__TOP__riscv_soc__7\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w;
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (1U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request)));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (2U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request)))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_unmasked_w 
        = vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout;
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (1U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request)));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (2U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request)))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w 
        = vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout;
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w;
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (1U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request)));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (2U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request)))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_unmasked_w 
        = vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout;
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (1U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request)));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (2U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request)))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w 
        = vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w 
        = ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w))
            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w)
            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_unmasked_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w 
        = ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w))
            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w)
            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_unmasked_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q)
            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q)
            : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
               ^ (0xeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                          << 1U))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q)
            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q)
            : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
               ^ (0xeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                          << 1U))));
    if ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r = 4U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r = 0U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_read_w;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r 
            = (0xfffffffcU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[0U]);
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                ? 8U : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                         ? 0xcU : 0U));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                ? 7U : 0U);
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_o)
                : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arvalid_w)
                    : (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_arvalid_i)));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                ? (0xffffffe0U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q)
                : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                    ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addr_q
                    : vlTOPp->__Vcellinp__riscv_soc__inport_araddr_i));
    }
    if ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r = 4U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r = 1U;
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                ? 0U : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                         ? 0xcU : 0U));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                ? 0U : 1U);
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r 
        = (1U & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                  >> 1U) | (~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                               >> 2U))));
    if ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r 
            = (0xfU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[2U]);
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[1U];
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_wvalid_o;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_awvalid_o;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r 
            = (0xfffffffcU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[0U]);
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r 
            = (0xfU & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                        ? 0U : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                 ? 0xfU : (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_wstrb_i))));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                ? 0U : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                         ? ((0x18U >= (0x1fU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_sel_w)))
                             ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_acc_w
                            [(0x1fU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_sel_w))]
                             : 0U) : vlTOPp->__Vcellinp__riscv_soc__inport_wdata_i));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r 
            = ((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                   >> 2U)) & ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                               ? (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))
                               : (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_wvalid_i)));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r 
            = ((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                   >> 2U)) & ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                               ? (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))
                               : (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_awvalid_i)));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                ? 0U : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                         ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addr_q
                         : vlTOPp->__Vcellinp__riscv_soc__inport_awaddr_i));
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r = 0U;
    if ((0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
            = ((0xffffff00U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
               | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q));
    } else {
        if ((8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xffffffefU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                      << 4U));
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xfffffff7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) 
                      << 3U));
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                   | (4U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)) 
                            << 2U)));
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xfffffffdU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q) 
                      << 1U));
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xfffffffeU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q));
        } else {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                    ? ((0xffffffefU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                       | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                          << 4U)) : 0U);
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r 
        = ((0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
            ? ((0xfffffff0U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r) 
               | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q))
            : ((4U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                ? ((0xfffffff0U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r) 
                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w))
                : ((8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                    ? ((0xfffffff0U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r) 
                       | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q))
                    : ((0x18U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                        ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r
                        : ((0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                            ? ((0xfffffffeU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r) 
                               | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q))
                            : 0U)))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r = 0U;
    if ((8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
            = ((0xfffffffdU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r) 
               | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                  << 1U));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
            = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r) 
               | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                  << 2U));
    } else {
        if ((0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q;
        } else {
            if ((0x10U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q;
            } else {
                if ((0x14U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
                        = ((0xfffffffdU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r) 
                           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                              << 1U));
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
                        = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r) 
                           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                              << 2U));
                } else {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
                        = ((0x18U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                            ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q
                            : ((0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q
                                : 0U));
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
    if ((0x80U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
        } else {
            if ((0x20U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                    = ((0x10U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                        ? 0U : ((8U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                 ? ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                     ? ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                         ? 0U : ((1U 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                                  ? 0U
                                                  : 0x50005U))
                                     : ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                         ? 0U : ((1U 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                                  ? 0U
                                                  : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q)))
                                 : ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                     ? ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                         ? 0U : ((1U 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                                  ? 0U
                                                  : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__mac_cycle_q))
                                     : ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                         ? 0U : ((1U 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                                  ? 0U
                                                  : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cycle_q)))));
            } else {
                if ((0x10U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                        = ((8U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                            ? ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                ? ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))
                                : ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))))
                            : ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                ? ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)))
                                : ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q))));
                } else {
                    if ((8U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                            = ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                ? ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q))
                                : ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q)));
                    } else {
                        if ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                            if ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
                            } else {
                                if ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
                                } else {
                                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                                        = ((0xfffffffeU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r) 
                                           | ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                              & (8U 
                                                 != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
                                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                                        = ((0xfffffffdU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r) 
                                           | ((8U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                              << 1U));
                                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                                        = ((0xfffffffbU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r) 
                                           | ((0U != vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q) 
                                              << 2U));
                                }
                            }
                        } else {
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r = 0U;
    if (((((((((0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) 
               | (0x20U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
              | (0x28U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
             | (0x40U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
            | (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
           | (0x64U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
          | (0x6cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
         | (0x70U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)))) {
        if ((0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                = ((0x7fffffffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                      << 0x1fU));
        } else {
            if ((0x20U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                    = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                       | ((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                          << 2U));
            } else {
                if ((0x28U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                        = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q) 
                              << 2U));
                } else {
                    if ((0x40U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                        if ((0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffffeU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffffdU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
                                      << 1U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q) 
                                      << 2U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffff7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q) 
                                      << 3U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xffffffefU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q) 
                                      << 4U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xffffff7fU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q) 
                                      << 7U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffeffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q) 
                                      << 8U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffdffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q) 
                                      << 9U));
                        } else {
                            if ((0x64U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                    = ((0xfffffffeU 
                                        & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                       | (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)));
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                    = ((0xfffffffdU 
                                        & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                       | ((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)) 
                                          << 1U));
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                    = ((0xfffffffbU 
                                        & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                       | ((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                                          << 2U));
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                    = ((0xfffffff7U 
                                        & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                       | ((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                                          << 3U));
                            } else {
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                    = ((0x6cU == (0xffU 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                        ? ((0xffffff00U 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                           | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                                           [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q])
                                        : ((0xfffffffeU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                           | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r = 0U;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 0U;
    if ((0x90000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 1U;
    }
    if ((0x91000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 2U;
    }
    if ((0x92000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 3U;
    }
    if ((0x93000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 4U;
    }
    if ((0x94000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 5U;
    }
    if ((0x95000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 6U;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 0U;
    if ((0x90000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 1U;
    }
    if ((0x91000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 2U;
    }
    if ((0x92000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 3U;
    }
    if ((0x93000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 4U;
    }
    if ((0x94000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 5U;
    }
    if ((0x95000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 6U;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
             == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
            & (0xfU != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))) 
           | (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q) 
             == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
            & (0xfU != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))) 
           | (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w) 
           & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                       ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))
                       : (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)))
                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                       ? (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q))
                       : (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q))))
               : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                       ? (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q))
                       : (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))
                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                       ? (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q))
                       : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
           & (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
           & (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arready_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
            >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q;
    if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w) 
         & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r)));
    } else {
        if (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w)) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
                = (0xfU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r) 
                           - (IData)(1U)));
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__read_en_w) 
           & (0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w) 
           & (0x6cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))
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
                       : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))
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
                       : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__start_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w) 
             & (0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r)) 
           & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r);
    vlSymsp->TOP__riscv_soc.__PVT__axi4_d_wready_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
            >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q;
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) {
            if ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w)) 
                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 0U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
            } else {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 1U;
            }
        } else {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
        }
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r) {
            if ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w)) 
                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 0U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
            } else {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 1U;
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awready_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
            >> 1U) & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__pe_clear_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__start_w) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__start_ok_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q;
    if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w) 
         & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r)));
    } else {
        if (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w)) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
                = (0xfU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r) 
                           - (IData)(1U)));
        }
    }
}
