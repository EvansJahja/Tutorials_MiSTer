// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ioctl_wait = 0U;
    vlSelfRef.top__DOT__soc__DOT__cpu_reset_cnt = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk_sys__0 = vlSelfRef.clk_sys;
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
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Loading rom.\n32210662065726840\n",0);
    VL_READMEM_N(true, 8, 4096, 0, std::string{"rom.hex"}
                 ,  &(vlSelfRef.top__DOT__soc__DOT__rom__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Loading rom.\n  0\n",0);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x7d0U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lesson3_tb.v", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB = 0;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16_B;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16_B = 0;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B = 0;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0;
    SData/*8:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0;
    // Body
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk_sys = vlSelfRef.clk_sys;
    vlSelfRef.top__DOT__clk_vid = vlSelfRef.clk_vid;
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n 
        = (0xffU == (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_reset_cnt));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_mcycle 
        = (1U & ((1U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles))
                  ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle)
                  : ((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles))
                      ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                         >> 1U) : ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles))
                                    ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 2U) : ((4U 
                                                  == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles))
                                                  ? 
                                                 ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles))
                                                   ? 
                                                  ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 4U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles))
                                                    ? 
                                                   ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 5U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles)) 
                                                    && (1U 
                                                        & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                                           >> 6U))))))))));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate 
        = (1U & ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates))
                  ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate)
                  : ((1U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates))
                      ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                         >> 1U) : ((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates))
                                    ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                       >> 2U) : ((3U 
                                                  == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates))
                                                  ? 
                                                 ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                                  >> 3U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates))
                                                   ? 
                                                  ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates))
                                                    ? 
                                                   ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                                    >> 5U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates)) 
                                                    && (1U 
                                                        & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                                           >> 6U))))))))));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__ram__wren_a 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
              >> 0xfU));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle) 
         | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
        }
    }
    vlSelfRef.top__DOT__soc__DOT__cpu_din = ((0x8000U 
                                              & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))
                                              ? (IData)(vlSelfRef.top__DOT__soc__DOT__ram_data_out)
                                              : (IData)(vlSelfRef.top__DOT__soc__DOT__rom_data_out));
    vlSelfRef.top__DOT__VGA_R = ((0xe0U & (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel)) 
                                 | ((0x1cU & ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel) 
                                              >> 3U)) 
                                    | (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel) 
                                             >> 6U))));
    vlSelfRef.top__DOT__VGA_B = (0xffU & ((0xc0U & 
                                           ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel) 
                                            << 6U)) 
                                          | ((0x30U 
                                              & ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel) 
                                                 << 4U)) 
                                             | ((0xcU 
                                                 & ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel))))));
    vlSelfRef.top__DOT__VGA_G = ((0xe0U & ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel) 
                                           << 3U)) 
                                 | ((0x1cU & (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel)) 
                                    | (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel) 
                                             >> 3U))));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
        = (((0U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State)) 
            & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind))) 
           & (((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To)) 
               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                  & (0xcbU == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) 
              | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                 & (0x36U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))));
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16_B 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE)
            ? ((0xff00U & ((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg))
            : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BTR_r)
                ? 0xfffeU : 1U));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16 
        = (0xffffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC) 
                      + (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16_B)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEH = 0U;
    if ((1U & (((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEH 
                            = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEH 
                        = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                }
            }
        }
    }
    if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate)))))) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEH = 1U;
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEL = 0U;
    if ((1U & (((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEL 
                            = (1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEL 
                        = (1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                }
            }
        }
    }
    if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate)))))) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEL = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16) 
                >> 2U) & ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                            >> 2U) & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) 
                          | (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle)))))) {
        if ((((0U == (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16))) 
              || (1U == (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16)))) 
             || (2U == (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEH = 1U;
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEL = 1U;
        }
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC] 
            << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC]);
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA 
        = (((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
              >> 2U) | ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                          >> 3U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle)) 
                        & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16) 
                           >> 2U))) & (0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State)))
            ? (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16)))
            : (((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                  >> 2U) | ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle)) 
                            & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16) 
                               >> 2U))) & (2U == (3U 
                                                  & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16))))
                ? (3U | (4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U))) : (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH) 
                                            & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                               >> 3U))
                                            ? (2U | 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate) 
                                                << 2U))
                                            : (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH) 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U))
                                                ? (1U 
                                                   | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate) 
                                                      << 2U))
                                                : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA_r)))));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR 
        = (0x3fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR));
    vlSelfRef.VGA_R = vlSelfRef.top__DOT__VGA_R;
    vlSelfRef.VGA_B = vlSelfRef.top__DOT__VGA_B;
    vlSelfRef.VGA_G = vlSelfRef.top__DOT__VGA_G;
    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_A 
            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_B 
            = ((0xff00U & ((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg));
    } else {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_A 
            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_B 
            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16))
                ? 0xffffU : 1U);
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16 
        = (0xffffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_A) 
                      + (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_B)));
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB 
        = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH) 
            & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
               >> 3U)) ? (1U | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate) 
                                << 2U)) : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB_r));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB] 
            << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB]);
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA] 
            << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA]);
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0U;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xf0U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)) 
                           | (0xfU & ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))
                                       ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                          >> 4U) : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB))));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = (0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = (0xfdU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (8U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0x1fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((0x80U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              | (((0U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                  << 6U) | (0x20U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (4U & ((~ VL_REDXOR_8(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                    << 2U)));
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xf0U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)) 
                       | (0xfU & ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))
                                   ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                      >> 4U) : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB))));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfdU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x1fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0x80U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          | (((0U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              << 6U) | (0x20U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_8(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                << 2U)));
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
                top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA;
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))) {
                    if ((1U & ((9U < (0xfU & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        if ((5U < (0xfU & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                                = (0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                        }
                        top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = ((0x100U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                               | (0xffU & ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                           - (IData)(6U))));
                    }
                    if ((1U & ((0x99U < (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)))) {
                        top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                         - (IData)(0x160U)));
                    }
                } else {
                    if ((1U & ((9U < (0xfU & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                               | ((9U < (0xfU & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                                  << 4U));
                        top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(6U) 
                                         + (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                    if ((1U & ((9U < (0x1fU & ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                               >> 4U))) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)))) {
                        top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(0x60U) 
                                         + (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                }
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xdfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x20U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                   >> 8U))));
                top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = (0xffU & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x3fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0x80U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                          | ((0U == (0xffU & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                             << 6U)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_16(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                                << 2U)));
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))
                    ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                       & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)))
                    : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)));
        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                   & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x80U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            if ((0U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0x40U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (4U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0xbfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            }
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0x10U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0xfdU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0xdfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            if ((6U != (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR)))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xdfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB)));
            }
        } else {
            if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                        top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (0x7fU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                        >> 1U));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                               | (1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)));
                    } else {
                        top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (1U | (0xfeU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                              << 1U)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                               | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                        >> 7U)));
                    }
                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)) 
                           | (0x7fU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                       >> 1U)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)));
                } else {
                    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = (0xfeU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                    << 1U));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                     << 7U)) | (0x7fU 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                                   >> 1U)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)));
                } else {
                    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xfeU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                     << 1U)) | (1U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0x80U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                 << 7U)) | (0x7fU & 
                                            ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                             >> 1U)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)));
            } else {
                top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xfeU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                                  >> 7U)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                >> 7U)));
            }
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0xfdU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0x1fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((0x80U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                      | (((0U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          << 6U) | (0x20U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (4U & ((~ VL_REDXOR_8(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                            << 2U)));
            if ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x3fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0xc0U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
            }
        }
    } else {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
            = (0xfcU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfcU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (2U | (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)))));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                                       << 4U)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                              << 2U));
                } else {
                    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = (0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                       ^ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            } else {
                top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                       & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0x10U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfcU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (2U | (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)))));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x10U & ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                               << 4U)));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                      << 2U));
        } else {
            top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v) 
                      << 4U));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                      << 2U));
        }
        if ((7U == (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB)));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xdfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB)));
        } else {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xdfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x20U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
        }
        if ((0U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0x40U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Z16_r) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xbfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
            }
        } else {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0xbfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
        }
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
            = ((0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
               | (0x80U & (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (4U & ((~ VL_REDXOR_8(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                    << 2U)));
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_8(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                << 2U)));
            }
        }
        if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16_r) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0x3fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0xc0U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
        }
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q 
        = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B 
        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16))
            ? 0xffffU : 1U);
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16 
        = (0xffffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA) 
                      + (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp)
            ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB)
            : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r)
                ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q)
                : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIH 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIL 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux;
    if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH) 
         & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
            >> 3U))) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB) 
                        >> 8U));
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB));
    } else if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH) 
                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                   >> 4U))) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA_r) 
                        >> 8U));
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA_r));
    } else if ((1U & (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16) 
                       >> 2U) & ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                   >> 2U) & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                     >> 3U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle)))))) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16) 
                        >> 8U));
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16));
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_sys)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge top.soc.__Vcellinp__T80x__reset_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] top.soc.T80x.i_tv80_core.F)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] top.soc.T80x.i_tv80_core.IR)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] top.soc.T80x.i_tv80_core.ISet)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] top.soc.T80x.i_tv80_core.IntCycle)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] top.soc.T80x.i_tv80_core.NMICycle)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] top.soc.T80x.i_tv80_core.mcycle)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([changed] top.soc.T80x.i_tv80_core.ALU_Op_r)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] top.soc.T80x.i_tv80_core.BusA)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([changed] top.soc.T80x.i_tv80_core.BusB)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([changed] top.soc.T80x.i_tv80_core.__Vcellinp__i_alu__IR)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_sys)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge top.soc.__Vcellinp__T80x__reset_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] top.soc.T80x.i_tv80_core.F)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] top.soc.T80x.i_tv80_core.IR)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] top.soc.T80x.i_tv80_core.ISet)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] top.soc.T80x.i_tv80_core.IntCycle)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] top.soc.T80x.i_tv80_core.NMICycle)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] top.soc.T80x.i_tv80_core.mcycle)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([changed] top.soc.T80x.i_tv80_core.ALU_Op_r)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] top.soc.T80x.i_tv80_core.BusA)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([changed] top.soc.T80x.i_tv80_core.BusB)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([changed] top.soc.T80x.i_tv80_core.__Vcellinp__i_alu__IR)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->VGA_R = VL_RAND_RESET_I(8);
    vlSelf->VGA_B = VL_RAND_RESET_I(8);
    vlSelf->VGA_G = VL_RAND_RESET_I(8);
    vlSelf->VGA_HS = VL_RAND_RESET_I(1);
    vlSelf->VGA_VS = VL_RAND_RESET_I(1);
    vlSelf->VGA_HB = VL_RAND_RESET_I(1);
    vlSelf->VGA_VB = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk_sys = VL_RAND_RESET_I(1);
    vlSelf->clk_vid = VL_RAND_RESET_I(1);
    vlSelf->ioctl_download = VL_RAND_RESET_I(1);
    vlSelf->ioctl_addr = VL_RAND_RESET_I(25);
    vlSelf->ioctl_dout = VL_RAND_RESET_I(8);
    vlSelf->ioctl_index = VL_RAND_RESET_I(8);
    vlSelf->ioctl_wait = VL_RAND_RESET_I(1);
    vlSelf->ioctl_wr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__VGA_R = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__VGA_B = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__VGA_G = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk_sys = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk_vid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__cpu_reset_cnt = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__cpu_addr = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__cpu_din = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__cpu_dout = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__cpu_wr_n = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT____Vcellinp__T80x__reset_n = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__ram_data_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__rom_data_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT____Vcellinp__ram__wren_a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__vga__DOT__h_cnt = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__soc__DOT__vga__DOT__v_cnt = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__soc__DOT__vga__DOT__video_counter = VL_RAND_RESET_I(14);
    vlSelf->top__DOT__soc__DOT__vga__DOT__pixel = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16000; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__vga__DOT__vmem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__soc__DOT__vga__DOT____Vlvbound_h3bad9e82__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__di_reg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Ap = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Fp = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIH = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIL = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEH = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEL = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA_r = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_mcycle = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusReq_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMI_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__INT_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IStatus = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NextIs_XY_Fetch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__No_BTR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BTR_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDecZ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Z16_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpXY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDSPHL = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeAF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRS = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CPL = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CCF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_SCF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BTR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RLD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RRD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetDI = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_A = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_B = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__rom__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_sys__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT____Vcellinp__T80x__reset_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle__0 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR__0 = VL_RAND_RESET_I(6);
    vlSelf->__VactDidInit = 0;
}
