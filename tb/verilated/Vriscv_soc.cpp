// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv_soc__pch.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

Vriscv_soc::Vriscv_soc(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vriscv_soc__Syms(contextp(), name(), this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , rst_cpu_i{vlSymsp->TOP.rst_cpu_i}
    , inport_awvalid_i{vlSymsp->TOP.inport_awvalid_i}
    , inport_wvalid_i{vlSymsp->TOP.inport_wvalid_i}
    , inport_wstrb_i{vlSymsp->TOP.inport_wstrb_i}
    , inport_bready_i{vlSymsp->TOP.inport_bready_i}
    , inport_arvalid_i{vlSymsp->TOP.inport_arvalid_i}
    , inport_rready_i{vlSymsp->TOP.inport_rready_i}
    , spi_miso_i{vlSymsp->TOP.spi_miso_i}
    , uart_txd_i{vlSymsp->TOP.uart_txd_i}
    , mem_awready_i{vlSymsp->TOP.mem_awready_i}
    , mem_wready_i{vlSymsp->TOP.mem_wready_i}
    , mem_bvalid_i{vlSymsp->TOP.mem_bvalid_i}
    , mem_bresp_i{vlSymsp->TOP.mem_bresp_i}
    , mem_bid_i{vlSymsp->TOP.mem_bid_i}
    , mem_arready_i{vlSymsp->TOP.mem_arready_i}
    , mem_rvalid_i{vlSymsp->TOP.mem_rvalid_i}
    , mem_rresp_i{vlSymsp->TOP.mem_rresp_i}
    , mem_rid_i{vlSymsp->TOP.mem_rid_i}
    , mem_rlast_i{vlSymsp->TOP.mem_rlast_i}
    , inport_awready_o{vlSymsp->TOP.inport_awready_o}
    , inport_wready_o{vlSymsp->TOP.inport_wready_o}
    , inport_bvalid_o{vlSymsp->TOP.inport_bvalid_o}
    , inport_bresp_o{vlSymsp->TOP.inport_bresp_o}
    , inport_arready_o{vlSymsp->TOP.inport_arready_o}
    , inport_rvalid_o{vlSymsp->TOP.inport_rvalid_o}
    , inport_rresp_o{vlSymsp->TOP.inport_rresp_o}
    , spi_clk_o{vlSymsp->TOP.spi_clk_o}
    , spi_mosi_o{vlSymsp->TOP.spi_mosi_o}
    , spi_cs_o{vlSymsp->TOP.spi_cs_o}
    , uart_rxd_o{vlSymsp->TOP.uart_rxd_o}
    , mem_awvalid_o{vlSymsp->TOP.mem_awvalid_o}
    , mem_awid_o{vlSymsp->TOP.mem_awid_o}
    , mem_awlen_o{vlSymsp->TOP.mem_awlen_o}
    , mem_awburst_o{vlSymsp->TOP.mem_awburst_o}
    , mem_wvalid_o{vlSymsp->TOP.mem_wvalid_o}
    , mem_wstrb_o{vlSymsp->TOP.mem_wstrb_o}
    , mem_wlast_o{vlSymsp->TOP.mem_wlast_o}
    , mem_bready_o{vlSymsp->TOP.mem_bready_o}
    , mem_arvalid_o{vlSymsp->TOP.mem_arvalid_o}
    , mem_arid_o{vlSymsp->TOP.mem_arid_o}
    , mem_arlen_o{vlSymsp->TOP.mem_arlen_o}
    , mem_arburst_o{vlSymsp->TOP.mem_arburst_o}
    , mem_rready_o{vlSymsp->TOP.mem_rready_o}
    , reset_vector_i{vlSymsp->TOP.reset_vector_i}
    , inport_awaddr_i{vlSymsp->TOP.inport_awaddr_i}
    , inport_wdata_i{vlSymsp->TOP.inport_wdata_i}
    , inport_araddr_i{vlSymsp->TOP.inport_araddr_i}
    , gpio_input_i{vlSymsp->TOP.gpio_input_i}
    , mem_rdata_i{vlSymsp->TOP.mem_rdata_i}
    , inport_rdata_o{vlSymsp->TOP.inport_rdata_o}
    , gpio_output_o{vlSymsp->TOP.gpio_output_o}
    , gpio_output_enable_o{vlSymsp->TOP.gpio_output_enable_o}
    , mem_awaddr_o{vlSymsp->TOP.mem_awaddr_o}
    , mem_wdata_o{vlSymsp->TOP.mem_wdata_o}
    , mem_araddr_o{vlSymsp->TOP.mem_araddr_o}
    , accel_status_o{vlSymsp->TOP.accel_status_o}
    , riscv_soc{vlSymsp->TOP.riscv_soc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk_i;
    sensitive << rst_i;
    sensitive << rst_cpu_i;
    sensitive << inport_awvalid_i;
    sensitive << inport_wvalid_i;
    sensitive << inport_wstrb_i;
    sensitive << inport_bready_i;
    sensitive << inport_arvalid_i;
    sensitive << inport_rready_i;
    sensitive << spi_miso_i;
    sensitive << uart_txd_i;
    sensitive << mem_awready_i;
    sensitive << mem_wready_i;
    sensitive << mem_bvalid_i;
    sensitive << mem_bresp_i;
    sensitive << mem_bid_i;
    sensitive << mem_arready_i;
    sensitive << mem_rvalid_i;
    sensitive << mem_rresp_i;
    sensitive << mem_rid_i;
    sensitive << mem_rlast_i;
    sensitive << reset_vector_i;
    sensitive << inport_awaddr_i;
    sensitive << inport_wdata_i;
    sensitive << inport_araddr_i;
    sensitive << gpio_input_i;
    sensitive << mem_rdata_i;

}

//============================================================
// Destructor

Vriscv_soc::~Vriscv_soc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vriscv_soc___024root___eval_debug_assertions(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___eval_static(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD void Vriscv_soc___024root___eval_initial(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD bool Vriscv_soc___024root___eval_stl(Vriscv_soc___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vriscv_soc___024root___eval_sample(Vriscv_soc___024root* vlSelf);
bool Vriscv_soc___024root___eval_ico(Vriscv_soc___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vriscv_soc___024root___eval_act(Vriscv_soc___024root* vlSelf);
bool Vriscv_soc___024root___eval_inact(Vriscv_soc___024root* vlSelf);
bool Vriscv_soc___024root___eval_nba(Vriscv_soc___024root* vlSelf);
bool Vriscv_soc___024root___eval_obs(Vriscv_soc___024root* vlSelf);
bool Vriscv_soc___024root___eval_react(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___eval_postponed(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD void Vriscv_soc___024root___eval_final(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__stl(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__ico(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__act(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__nba(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__obs(Vriscv_soc___024root* vlSelf);
VL_ATTR_COLD void Vriscv_soc___024root___eval_dump_triggers__react(Vriscv_soc___024root* vlSelf);

void Vriscv_soc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_soc::eval_step\n"); );
    m_evalLoop.eval();
}

void Vriscv_soc::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv_soc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vriscv_soc::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vriscv_soc::evalStatic() {
    Vriscv_soc___024root___eval_static(&(vlSymsp->TOP));
}

void Vriscv_soc::evalInitial() {
    Vriscv_soc___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vriscv_soc::evalStl(bool firstIteration) {
    return Vriscv_soc___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vriscv_soc::evalSample() {
    Vriscv_soc___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vriscv_soc::evalIco(bool firstIteration) {
    return Vriscv_soc___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vriscv_soc::evalAct() {
    return Vriscv_soc___024root___eval_act(&(vlSymsp->TOP));
}

bool Vriscv_soc::evalInact() {
    return Vriscv_soc___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vriscv_soc::evalNba() {
    return Vriscv_soc___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vriscv_soc::evalObs() {
    return Vriscv_soc___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vriscv_soc::evalReact() {
    return Vriscv_soc___024root___eval_react(&(vlSymsp->TOP));
}

void Vriscv_soc::evalPostponed() {
    Vriscv_soc___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vriscv_soc::evalFinal() {
    Vriscv_soc___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vriscv_soc::dumpTriggersStl() {
    Vriscv_soc___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vriscv_soc::dumpTriggersIco() {
    Vriscv_soc___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vriscv_soc::dumpTriggersAct() {
    Vriscv_soc___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vriscv_soc::dumpTriggersNba() {
    Vriscv_soc___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vriscv_soc::dumpTriggersObs() {
    Vriscv_soc___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vriscv_soc::dumpTriggersReact() {
    Vriscv_soc___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vriscv_soc::eventsPending() { return false; }

uint64_t Vriscv_soc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vriscv_soc::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vriscv_soc::hierName() const { return vlSymsp->name(); }
const char* Vriscv_soc::modelName() const { return "Vriscv_soc"; }
unsigned Vriscv_soc::threads() const { return 1; }
void Vriscv_soc::prepareClone() const { contextp()->prepareClone(); }
void Vriscv_soc::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vriscv_soc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vriscv_soc___024root__trace_decl_types(VerilatedVcd* tracep);

void Vriscv_soc___024root__trace_init_top(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_soc___024root__trace_decl_types(tracep);
    Vriscv_soc___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_register(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_soc::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vriscv_soc::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }(void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vriscv_soc::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 1003);
    Vriscv_soc___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
