// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC_RISCV_CORE_H_
#define VERILATED_VRISCV_SOC_RISCV_CORE_H_  // guard

#include "verilated.h"
class Vriscv_soc_riscv_decode;
class Vriscv_soc_riscv_exec;


class Vriscv_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc_riscv_core final {
  public:
    // CELLS
    Vriscv_soc_riscv_exec* u_exec;
    Vriscv_soc_riscv_decode* u_decode;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__clk_i;
        CData/*0:0*/ __PVT__rst_i;
        CData/*0:0*/ __PVT__mem_d_accept_i;
        CData/*0:0*/ __PVT__mem_d_ack_i;
        CData/*0:0*/ __PVT__mem_d_error_i;
        CData/*0:0*/ __PVT__mem_i_accept_i;
        CData/*0:0*/ __PVT__mem_i_valid_i;
        CData/*0:0*/ __PVT__mem_i_error_i;
        CData/*0:0*/ __PVT__intr_i;
        CData/*0:0*/ __PVT__mem_d_rd_o;
        CData/*3:0*/ __PVT__mem_d_wr_o;
        CData/*0:0*/ __PVT__mem_d_cacheable_o;
        CData/*0:0*/ __PVT__mem_d_invalidate_o;
        CData/*0:0*/ __PVT__mem_d_flush_o;
        CData/*0:0*/ __PVT__mem_i_rd_o;
        CData/*0:0*/ __PVT__mem_i_flush_o;
        CData/*0:0*/ __PVT__mem_i_invalidate_o;
        CData/*0:0*/ __PVT__mmu_flush_w;
        CData/*0:0*/ __PVT__csr_stall_w;
        CData/*0:0*/ __PVT__fetch_accept_w;
        CData/*0:0*/ __PVT__arb_mmu_error_w;
        CData/*0:0*/ __PVT__csr_opcode_valid_w;
        CData/*0:0*/ __PVT__mmu_lsu_error_w;
        CData/*0:0*/ __PVT__mmu_fetch_fault_w;
        CData/*0:0*/ __PVT__branch_request_w;
        CData/*0:0*/ __PVT__muldiv_opcode_valid_w;
        CData/*0:0*/ __PVT__fault_page_store_w;
        CData/*0:0*/ __PVT__muldiv_stall_w;
        CData/*0:0*/ __PVT__lsu_stall_w;
        CData/*4:0*/ __PVT__writeback_csr_idx_w;
        CData/*0:0*/ __PVT__fetch_branch_w;
        CData/*0:0*/ __PVT__arb_mmu_ack_w;
        CData/*0:0*/ __PVT__mmu_lsu_accept_w;
        CData/*0:0*/ __PVT__mmu_ifetch_accept_w;
        CData/*0:0*/ __PVT__mmu_lsu_ack_w;
        CData/*0:0*/ __PVT__mmu_ifetch_rd_w;
        CData/*0:0*/ __PVT__mmu_load_fault_w;
        CData/*0:0*/ __PVT__fetch_valid_w;
        CData/*0:0*/ __PVT__lsu_opcode_valid_w;
        CData/*0:0*/ __PVT__exec_opcode_valid_w;
        CData/*0:0*/ __PVT__u_fetch__DOT__active_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__branch_valid_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__icache_fetch_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__icache_invalidate_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__skid_valid_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__icache_busy_w;
        CData/*0:0*/ __PVT__u_fetch__DOT__stall_w;
        CData/*0:0*/ __PVT__u_fetch__DOT__branch_w;
        CData/*0:0*/ __PVT__u_fetch__DOT__fetch_page_fault_q;
        CData/*4:0*/ __PVT__u_muldiv__DOT__rd_q;
        CData/*4:0*/ __PVT__u_muldiv__DOT__wb_rd_q;
        CData/*0:0*/ __PVT__u_muldiv__DOT__mult_busy_q;
        CData/*0:0*/ __PVT__u_muldiv__DOT__signed_operation_w;
        CData/*0:0*/ __PVT__u_muldiv__DOT__div_inst_q;
        CData/*0:0*/ __PVT__u_muldiv__DOT__div_busy_q;
        CData/*0:0*/ __PVT__u_muldiv__DOT__invert_res_q;
        CData/*0:0*/ __PVT__u_muldiv__DOT__div_start_w;
        CData/*0:0*/ __PVT__u_muldiv__DOT__div_complete_w;
        CData/*1:0*/ __PVT__u_csr__DOT__csr_mpriv_q;
        CData/*0:0*/ __PVT__u_csr__DOT__csr_access_fault_w;
        CData/*0:0*/ __PVT__u_csr__DOT__set_r;
        CData/*0:0*/ __PVT__u_csr__DOT__clr_r;
        CData/*1:0*/ __PVT__u_csr__DOT__csr_mpriv_r;
        CData/*0:0*/ __PVT__u_csr__DOT__take_intr_r;
    };
    struct {
        CData/*0:0*/ __PVT__u_csr__DOT__take_exception_r;
        CData/*0:0*/ __PVT__u_csr__DOT__exception_s_r;
        CData/*0:0*/ __PVT__u_csr__DOT__interrupt_s_r;
        CData/*0:0*/ __PVT__u_csr__DOT__valid_unit_inst_w;
        CData/*0:0*/ __PVT__u_csr__DOT__m_enabled_r;
        CData/*0:0*/ __PVT__u_csr__DOT__writeback_en_q;
        CData/*4:0*/ __PVT__u_csr__DOT__writeback_idx_q;
        CData/*0:0*/ __PVT__u_csr__DOT__writeback_squash_q;
        CData/*0:0*/ __PVT__u_csr__DOT__branch_q;
        CData/*0:0*/ __PVT__u_csr__DOT__reset_q;
        CData/*0:0*/ __PVT__u_csr__DOT__mmu_enable_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_rd_q;
        CData/*3:0*/ __PVT__u_lsu__DOT__mem_wr_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_cacheable_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_invalidate_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_flush_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_unaligned_ld_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_unaligned_st_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_unaligned_r;
        CData/*1:0*/ __PVT__u_lsu__DOT__addr_lsb_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_byte_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_half_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_word_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_signed_r;
        CData/*4:0*/ __PVT__u_lsu__DOT__wb_idx_r;
        CData/*0:0*/ __PVT__u_arb__DOT__read_hold_q;
        CData/*0:0*/ __PVT__u_arb__DOT__src_mmu_q;
        CData/*0:0*/ __PVT__u_arb__DOT__src_mmu_w;
        CData/*1:0*/ __PVT__u_mmu__DOT__state_q;
        CData/*0:0*/ __PVT__u_mmu__DOT__load_q;
        CData/*3:0*/ __PVT__u_mmu__DOT__store_q;
        CData/*0:0*/ __PVT__u_mmu__DOT__load_w;
        CData/*3:0*/ __PVT__u_mmu__DOT__store_w;
        CData/*0:0*/ __PVT__u_mmu__DOT__itlb_hit_w;
        CData/*0:0*/ __PVT__u_mmu__DOT__dtlb_hit_w;
        CData/*0:0*/ __PVT__u_mmu__DOT__dtlb_req_q;
        CData/*0:0*/ __PVT__u_mmu__DOT__itlb_miss_w;
        CData/*0:0*/ __PVT__u_mmu__DOT__dtlb_miss_w;
        CData/*0:0*/ __PVT__u_mmu__DOT__itlb_valid_q;
        CData/*0:0*/ __PVT__u_mmu__DOT__dtlb_valid_q;
        CData/*0:0*/ __PVT__u_mmu__DOT__mem_req_q;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_22;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_53;
        CData/*0:0*/ __Vdly__u_csr__DOT__branch_q;
        CData/*0:0*/ __Vdly__u_csr__DOT__reset_q;
        CData/*0:0*/ __Vdly__u_lsu__DOT__mem_rd_q;
        CData/*3:0*/ __Vdly__u_lsu__DOT__mem_wr_q;
        CData/*0:0*/ __Vdly__u_lsu__DOT__mem_invalidate_q;
        CData/*0:0*/ __Vdly__u_lsu__DOT__mem_flush_q;
        CData/*1:0*/ __Vdly__u_mmu__DOT__state_q;
        SData/*10:0*/ __PVT__mem_d_resp_tag_i;
        SData/*10:0*/ __PVT__mem_d_req_tag_o;
        SData/*10:0*/ __PVT__u_lsu__DOT__mem_req_tag_q;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_44;
        IData/*31:0*/ __PVT__mem_d_data_rd_i;
        IData/*31:0*/ __PVT__mem_i_inst_i;
        IData/*31:0*/ __PVT__reset_vector_i;
        IData/*31:0*/ __PVT__cpu_id_i;
        IData/*31:0*/ __PVT__mem_d_addr_o;
        IData/*31:0*/ __PVT__mem_d_data_wr_o;
        IData/*31:0*/ __PVT__mem_i_pc_o;
        IData/*31:0*/ __PVT__opcode_ra_operand_w;
        IData/*31:0*/ __PVT__branch_pc_w;
        IData/*31:0*/ __PVT__mmu_ifetch_pc_w;
    };
    struct {
        IData/*31:0*/ __PVT__fetch_pc_w;
        IData/*31:0*/ __PVT__opcode_rb_operand_w;
        IData/*31:0*/ __PVT__fetch_instr_w;
        IData/*31:0*/ __PVT__u_fetch__DOT__fetch_pc_q;
        IData/*31:0*/ __PVT__u_fetch__DOT__branch_pc_q;
        IData/*31:0*/ __PVT__u_fetch__DOT__branch_pc_w;
        IData/*31:0*/ __PVT__u_fetch__DOT__pc_d_q;
        IData/*31:0*/ __PVT__u_muldiv__DOT__wb_result_q;
        VlWide<3>/*64:0*/ __PVT__u_muldiv__DOT__mult_result_w;
        IData/*31:0*/ __PVT__u_muldiv__DOT__mult_result_q;
        IData/*31:0*/ __PVT__u_muldiv__DOT__dividend_q;
        IData/*31:0*/ __PVT__u_muldiv__DOT__quotient_q;
        IData/*31:0*/ __PVT__u_muldiv__DOT__q_mask_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mepc_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mcause_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sr_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mtvec_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mip_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mie_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mcycle_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mscratch_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sepc_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_stvec_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_scause_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_stval_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_satp_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sscratch_q;
        IData/*31:0*/ __PVT__u_csr__DOT__pc_m_q;
        IData/*31:0*/ __PVT__u_csr__DOT__imm12_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mepc_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mcause_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sr_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mtvec_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mip_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mie_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mtime_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mtimecmp_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mcycle_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mscratch_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sepc_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_stvec_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_scause_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_stval_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_satp_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sscratch_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_medeleg_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_medeleg_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mideleg_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mideleg_r;
        IData/*31:0*/ __PVT__u_csr__DOT__data_r;
        IData/*31:0*/ __PVT__u_csr__DOT__result_r;
        IData/*31:0*/ __PVT__u_csr__DOT__irq_pending_r;
        IData/*31:0*/ __PVT__u_csr__DOT__irq_masked_r;
        IData/*31:0*/ __PVT__u_csr__DOT__writeback_value_q;
        IData/*31:0*/ __PVT__u_csr__DOT__branch_target_q;
        IData/*31:0*/ __PVT__u_lsu__DOT__mem_addr_q;
        IData/*31:0*/ __PVT__u_lsu__DOT__mem_data_wr_q;
        IData/*31:0*/ __PVT__u_lsu__DOT__mem_addr_r;
        IData/*31:0*/ __PVT__u_lsu__DOT__wb_result_r;
        IData/*31:0*/ __PVT__u_mmu__DOT__lsu_in_addr_q;
        IData/*31:0*/ __PVT__u_mmu__DOT__lsu_addr_w;
        IData/*31:0*/ __PVT__u_mmu__DOT__request_addr_w;
        IData/*31:0*/ __PVT__u_mmu__DOT__pte_addr_q;
        IData/*31:0*/ __PVT__u_mmu__DOT__pte_entry_q;
    };
    struct {
        IData/*31:0*/ __PVT__u_mmu__DOT__virt_addr_q;
        IData/*19:0*/ __PVT__u_mmu__DOT__itlb_va_addr_q;
        IData/*31:0*/ __PVT__u_mmu__DOT__itlb_entry_q;
        IData/*19:0*/ __PVT__u_mmu__DOT__dtlb_va_addr_q;
        IData/*31:0*/ __PVT__u_mmu__DOT__dtlb_entry_q;
        IData/*31:0*/ __VdfgRegularize_hebeb780c_0_34;
        IData/*31:0*/ __VdfgRegularize_hebeb780c_0_54;
        IData/*31:0*/ __Vdly__u_muldiv__DOT__dividend_q;
        IData/*31:0*/ __Vdly__u_muldiv__DOT__quotient_q;
        QData/*63:0*/ __PVT__u_fetch__DOT__skid_buffer_q;
        QData/*62:0*/ __PVT__u_muldiv__DOT__divisor_q;
    };

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vriscv_soc_riscv_core();
    ~Vriscv_soc_riscv_core();
    void ctor(Vriscv_soc__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vriscv_soc_riscv_core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
