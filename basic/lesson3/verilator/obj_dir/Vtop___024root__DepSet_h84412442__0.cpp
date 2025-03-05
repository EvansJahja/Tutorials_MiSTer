// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_clock) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__cpu_clock__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_mreq_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__cpu_mreq_n__0)));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.clk_sys) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_sys__0))));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.top__DOT__soc__DOT__fb_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__fb_clk__0))));
    vlSelfRef.__VactTriggered.set(5U, ((~ (IData)(vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT____Vcellinp__T80x__reset_n__0)));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F__0)));
    vlSelfRef.__VactTriggered.set(7U, ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR__0)));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet__0)));
    vlSelfRef.__VactTriggered.set(9U, ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle__0)));
    vlSelfRef.__VactTriggered.set(0xaU, ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle__0)));
    vlSelfRef.__VactTriggered.set(0xbU, ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle__0)));
    vlSelfRef.__VactTriggered.set(0xcU, ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r__0)));
    vlSelfRef.__VactTriggered.set(0xdU, ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA__0)));
    vlSelfRef.__VactTriggered.set(0xeU, ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB__0)));
    vlSelfRef.__VactTriggered.set(0xfU, ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR__0)));
    vlSelfRef.__VactTriggered.set(0x10U, ((IData)(vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__clock_b) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram_0__DOT__clock_b__0))));
    vlSelfRef.__VactTriggered.set(0x11U, ((IData)(vlSelfRef.top__DOT__soc__DOT__hram__DOT__clock_b) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__hram__DOT__clock_b__0))));
    vlSelfRef.__VactTriggered.set(0x12U, ((IData)(vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__clock_b) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__clock_b__0))));
    vlSelfRef.__VactTriggered.set(0x13U, ((IData)(vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__clock_b) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__clock_b__0))));
    vlSelfRef.__VactTriggered.set(0x14U, ((IData)(vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__clock_b) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__clock_b__0))));
    vlSelfRef.__VactTriggered.set(0x15U, ((IData)(vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__clock_b) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__clock_b__0))));
    vlSelfRef.__VactTriggered.set(0x16U, ((IData)(vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__clock_b) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__clock_b__0))));
    vlSelfRef.__VactTriggered.set(0x17U, ((IData)(vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__clock_b) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__clock_b__0))));
    vlSelfRef.__VactTriggered.set(0x18U, ((IData)(vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__clock_b) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__clock_b__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__cpu_clock__0 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__cpu_mreq_n__0 
        = vlSelfRef.top__DOT__soc__DOT__cpu_mreq_n;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en__0 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_sys__0 = vlSelfRef.clk_sys;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__fb_clk__0 
        = vlSelfRef.top__DOT__soc__DOT__fb_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT____Vcellinp__T80x__reset_n__0 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F__0 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR__0 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet__0 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle__0 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle__0 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle__0 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r__0 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA__0 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB__0 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR__0 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram_0__DOT__clock_b__0 
        = vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__clock_b;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__hram__DOT__clock_b__0 
        = vlSelfRef.top__DOT__soc__DOT__hram__DOT__clock_b;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__clock_b__0 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__clock_b;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__clock_b__0 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__clock_b;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__clock_b__0 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__clock_b;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__clock_b__0 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__clock_b;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__clock_b__0 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__clock_b;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__clock_b__0 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__clock_b;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__clock_b__0 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__clock_b;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
        vlSelfRef.__VactTriggered.set(8U, 1U);
        vlSelfRef.__VactTriggered.set(9U, 1U);
        vlSelfRef.__VactTriggered.set(0xaU, 1U);
        vlSelfRef.__VactTriggered.set(0xbU, 1U);
        vlSelfRef.__VactTriggered.set(0xcU, 1U);
        vlSelfRef.__VactTriggered.set(0xdU, 1U);
        vlSelfRef.__VactTriggered.set(0xeU, 1U);
        vlSelfRef.__VactTriggered.set(0xfU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
