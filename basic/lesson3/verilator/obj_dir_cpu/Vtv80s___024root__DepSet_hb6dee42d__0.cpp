// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtv80s.h for the primary calling header

#include "Vtv80s__pch.h"
#include "Vtv80s__Syms.h"
#include "Vtv80s___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtv80s___024root___dump_triggers__ico(Vtv80s___024root* vlSelf);
#endif  // VL_DEBUG

void Vtv80s___024root___eval_triggers__ico(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtv80s___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtv80s___024root___dump_triggers__act(Vtv80s___024root* vlSelf);
#endif  // VL_DEBUG

void Vtv80s___024root___eval_triggers__act(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.reset_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__F__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__IR__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__ISet__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__IntCycle__0)));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__NMICycle__0)));
    vlSelfRef.__VactTriggered.set(7U, ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__mcycle__0)));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__ALU_Op_r__0)));
    vlSelfRef.__VactTriggered.set(9U, ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__BusA__0)));
    vlSelfRef.__VactTriggered.set(0xaU, ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__BusB__0)));
    vlSelfRef.__VactTriggered.set(0xbU, ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0 = vlSelfRef.reset_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__F__0 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
    vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__IR__0 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR;
    vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__ISet__0 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet;
    vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__IntCycle__0 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle;
    vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__NMICycle__0 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle;
    vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__mcycle__0 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__ALU_Op_r__0 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__BusA__0 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA;
    vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__BusB__0 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB;
    vlSelfRef.__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR__0 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
        vlSelfRef.__VactTriggered.set(8U, 1U);
        vlSelfRef.__VactTriggered.set(9U, 1U);
        vlSelfRef.__VactTriggered.set(0xaU, 1U);
        vlSelfRef.__VactTriggered.set(0xbU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtv80s___024root___dump_triggers__act(vlSelf);
    }
#endif
}
