// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtv80s__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtv80s::Vtv80s(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtv80s__Syms(contextp(), _vcname__, this)}
    , reset_n{vlSymsp->TOP.reset_n}
    , clk{vlSymsp->TOP.clk}
    , wait_n{vlSymsp->TOP.wait_n}
    , m1_n{vlSymsp->TOP.m1_n}
    , mreq_n{vlSymsp->TOP.mreq_n}
    , iorq_n{vlSymsp->TOP.iorq_n}
    , rd_n{vlSymsp->TOP.rd_n}
    , wr_n{vlSymsp->TOP.wr_n}
    , rfsh_n{vlSymsp->TOP.rfsh_n}
    , halt_n{vlSymsp->TOP.halt_n}
    , busak_n{vlSymsp->TOP.busak_n}
    , dout{vlSymsp->TOP.dout}
    , int_n{vlSymsp->TOP.int_n}
    , nmi_n{vlSymsp->TOP.nmi_n}
    , busrq_n{vlSymsp->TOP.busrq_n}
    , di{vlSymsp->TOP.di}
    , A{vlSymsp->TOP.A}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtv80s::Vtv80s(const char* _vcname__)
    : Vtv80s(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtv80s::~Vtv80s() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtv80s___024root___eval_debug_assertions(Vtv80s___024root* vlSelf);
#endif  // VL_DEBUG
void Vtv80s___024root___eval_static(Vtv80s___024root* vlSelf);
void Vtv80s___024root___eval_initial(Vtv80s___024root* vlSelf);
void Vtv80s___024root___eval_settle(Vtv80s___024root* vlSelf);
void Vtv80s___024root___eval(Vtv80s___024root* vlSelf);

void Vtv80s::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtv80s::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtv80s___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtv80s___024root___eval_static(&(vlSymsp->TOP));
        Vtv80s___024root___eval_initial(&(vlSymsp->TOP));
        Vtv80s___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtv80s___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtv80s::eventsPending() { return false; }

uint64_t Vtv80s::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtv80s::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtv80s___024root___eval_final(Vtv80s___024root* vlSelf);

VL_ATTR_COLD void Vtv80s::final() {
    Vtv80s___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtv80s::hierName() const { return vlSymsp->name(); }
const char* Vtv80s::modelName() const { return "Vtv80s"; }
unsigned Vtv80s::threads() const { return 1; }
void Vtv80s::prepareClone() const { contextp()->prepareClone(); }
void Vtv80s::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtv80s::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtv80s___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtv80s___024root__trace_init_top(Vtv80s___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtv80s___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtv80s___024root*>(voidSelf);
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtv80s___024root__trace_decl_types(tracep);
    Vtv80s___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtv80s___024root__trace_register(Vtv80s___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtv80s::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtv80s::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtv80s___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
