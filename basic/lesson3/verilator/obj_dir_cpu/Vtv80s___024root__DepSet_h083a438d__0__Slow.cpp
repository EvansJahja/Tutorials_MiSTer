// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtv80s.h for the primary calling header

#include "Vtv80s__pch.h"
#include "Vtv80s___024root.h"

VL_ATTR_COLD void Vtv80s___024root___eval_static(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtv80s___024root___eval_initial__TOP(Vtv80s___024root* vlSelf);

VL_ATTR_COLD void Vtv80s___024root___eval_initial(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtv80s___024root___eval_initial__TOP(vlSelf);
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
}

VL_ATTR_COLD void Vtv80s___024root___eval_initial__TOP(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tv80s__DOT__cen = 1U;
    vlSelfRef.rfsh_n = 1U;
}

VL_ATTR_COLD void Vtv80s___024root___eval_final(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtv80s___024root___dump_triggers__stl(Vtv80s___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtv80s___024root___eval_phase__stl(Vtv80s___024root* vlSelf);

VL_ATTR_COLD void Vtv80s___024root___eval_settle(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_settle\n"); );
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
            Vtv80s___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../rtl/tv80\\tv80s.v", 26, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtv80s___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtv80s___024root___dump_triggers__stl(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vtv80s___024root___stl_sequent__TOP__0(Vtv80s___024root* vlSelf);

VL_ATTR_COLD void Vtv80s___024root___eval_stl(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtv80s___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtv80s___024root___stl_sequent__TOP__0(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tv80s__DOT__mreq_n = vlSelfRef.mreq_n;
    vlSelfRef.tv80s__DOT__iorq_n = vlSelfRef.iorq_n;
    vlSelfRef.tv80s__DOT__rd_n = vlSelfRef.rd_n;
    vlSelfRef.tv80s__DOT__wr_n = vlSelfRef.wr_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__cen = vlSelfRef.tv80s__DOT__cen;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__di = vlSelfRef.tv80s__DOT__di_reg;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__stop = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_DJNZ;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__WILL_IORQ 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpE;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpXY;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Call 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDSPHL;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Special_LD;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeDH;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeRp;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeAF;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeRS;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_DJNZ;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_CPL;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_CCF;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_SCF;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BT;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BC;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BTR;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RLD;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RRD;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_INRC;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SetDI;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SetEI;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IR 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__F 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16_r;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Z16_r;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__ISet 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__BusA 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__BusB 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__F_In 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__B 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [0U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__C 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [0U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__D 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [1U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__E 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [1U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__H 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [2U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__L 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [2U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__last_mcycle 
        = (1U & ((1U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles))
                  ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle)
                  : ((2U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles))
                      ? ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                         >> 1U) : ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles))
                                    ? ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 2U) : ((4U 
                                                  == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles))
                                                  ? 
                                                 ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles))
                                                   ? 
                                                  ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 4U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles))
                                                    ? 
                                                   ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 5U)
                                                    : 
                                                   ((7U 
                                                     != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles)) 
                                                    || (1U 
                                                        & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                                           >> 6U))))))))));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__IX 
        = ((vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [3U] << 8U) | vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [3U]);
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__IY 
        = ((vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [7U] << 8U) | vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [7U]);
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle) 
         | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle))) {
        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
        }
    }
    vlSelfRef.tv80s__DOT__m1_n = vlSelfRef.m1_n;
    vlSelfRef.tv80s__DOT__rfsh_n = vlSelfRef.rfsh_n;
    vlSelfRef.tv80s__DOT__A = vlSelfRef.A;
    vlSelfRef.tv80s__DOT__dout = vlSelfRef.dout;
    vlSelfRef.tv80s__DOT__reset_n = vlSelfRef.reset_n;
    vlSelfRef.tv80s__DOT__wait_n = vlSelfRef.wait_n;
    vlSelfRef.tv80s__DOT__int_n = vlSelfRef.int_n;
    vlSelfRef.tv80s__DOT__nmi_n = vlSelfRef.nmi_n;
    vlSelfRef.tv80s__DOT__busrq_n = vlSelfRef.busrq_n;
    vlSelfRef.tv80s__DOT__di = vlSelfRef.di;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__no_read 
        = vlSelfRef.tv80s__DOT__no_read;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__write = vlSelfRef.tv80s__DOT__write;
    vlSelfRef.tv80s__DOT__mcycle = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.tv80s__DOT__tstate = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate;
    vlSelfRef.tv80s__DOT__intcycle_n = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle)));
    vlSelfRef.tv80s__DOT__iorq = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__last_tstate 
        = (1U & ((0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates))
                  ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate)
                  : ((1U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates))
                      ? ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                         >> 1U) : ((2U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates))
                                    ? ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                                       >> 2U) : ((3U 
                                                  == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates))
                                                  ? 
                                                 ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                                                  >> 3U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates))
                                                   ? 
                                                  ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates))
                                                    ? 
                                                   ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                                                    >> 5U)
                                                    : 
                                                   ((6U 
                                                     != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates)) 
                                                    || (1U 
                                                        & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                                                           >> 6U))))))))));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ClkEn = 
        ((IData)(vlSelfRef.tv80s__DOT__cen) & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusAck)));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
        = (((0U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State)) 
            & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_Ind))) 
           & (((2U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To)) 
               | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                  & (0xcbU == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) 
              | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                 & (0x36U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))));
    vlSelfRef.tv80s__DOT__clk = vlSelfRef.clk;
    vlSelfRef.halt_n = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt_FF)));
    vlSelfRef.busak_n = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusAck)));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEH = 0U;
    if ((1U & (((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEH 
                            = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEH 
                        = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                }
            }
        }
    }
    if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate)))))) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEH = 1U;
    }
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEL = 0U;
    if ((1U & (((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEL 
                            = (1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEL 
                        = (1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                }
            }
        }
    }
    if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate)))))) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEL = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16) 
                >> 2U) & (((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                             >> 2U) & (IData)(vlSelfRef.wait_n)) 
                           & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) 
                          | (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle)))))) {
        if ((((0U == (3U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16))) 
              || (1U == (3U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16)))) 
             || (2U == (3U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEH = 1U;
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEL = 1U;
        }
    }
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusC 
        = ((vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC] 
            << 8U) | vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC]);
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg 
        = vlSelfRef.tv80s__DOT__di_reg;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrA 
        = (((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
              >> 2U) | ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                          >> 3U) & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle)) 
                        & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16) 
                           >> 2U))) & (0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State)))
            ? (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16)))
            : (((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                  >> 2U) | ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle)) 
                            & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16) 
                               >> 2U))) & (2U == (3U 
                                                  & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16))))
                ? (3U | (4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U))) : (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeDH) 
                                            & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                                               >> 3U))
                                            ? (2U | 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate) 
                                                << 2U))
                                            : (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeDH) 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U))
                                                ? (1U 
                                                   | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate) 
                                                      << 2U))
                                                : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrA_r)))));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR 
        = (0x3fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__m1_n = vlSelfRef.tv80s__DOT__m1_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__rfsh_n 
        = vlSelfRef.tv80s__DOT__rfsh_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__A = vlSelfRef.tv80s__DOT__A;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__dout = vlSelfRef.tv80s__DOT__dout;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__reset_n 
        = vlSelfRef.tv80s__DOT__reset_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__wait_n 
        = vlSelfRef.tv80s__DOT__wait_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__int_n = vlSelfRef.tv80s__DOT__int_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__nmi_n = vlSelfRef.tv80s__DOT__nmi_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__busrq_n 
        = vlSelfRef.tv80s__DOT__busrq_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__dinst = vlSelfRef.tv80s__DOT__di;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__no_read;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Write 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__write;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mc = vlSelfRef.tv80s__DOT__mcycle;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ts = vlSelfRef.tv80s__DOT__tstate;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__intcycle_n 
        = vlSelfRef.tv80s__DOT__intcycle_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq = vlSelfRef.tv80s__DOT__iorq;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__T_Res = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__last_tstate;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__CEN 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ClkEn;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__clk = vlSelfRef.tv80s__DOT__clk;
    vlSelfRef.tv80s__DOT__halt_n = vlSelfRef.halt_n;
    vlSelfRef.tv80s__DOT__busak_n = vlSelfRef.busak_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__WEH 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEH;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__WEL 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEL;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrB 
        = (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeDH) 
            & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
               >> 3U)) ? (1U | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate) 
                                << 2U)) : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrB_r));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrB;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrB];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrB];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusB 
        = ((vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrB] 
            << 8U) | vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrB]);
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC16_B 
        = ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpE)
            ? ((0xff00U & ((- (IData)((1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg))
            : ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BTR_r)
                ? 0xfffeU : 1U));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC16 = 
        (0xffffU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC) 
                    + (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC16_B)));
    if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate))) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP16_A 
            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusC;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP16_B 
            = ((0xff00U & ((- (IData)((1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg));
    } else {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP16_A 
            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP16_B 
            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16))
                ? 0xffffU : 1U);
    }
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP16 = 
        (0xffffU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP16_A) 
                    + (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP16_B)));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrA;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrA];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrA];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusA 
        = ((vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrA] 
            << 8U) | vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrA]);
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__IR 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0xffU;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0x1ffU;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
    if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
        if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xf0U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA)) 
                           | (0xfU & ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))
                                       ? ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                          >> 4U) : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB))));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = (0x9fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xf9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                     >> 3U)) | (2U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                                   >> 2U))));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = ((0x7fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              << 7U));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xf7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                           | (8U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                    >> 4U)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (~ VL_REDXOR_8(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))));
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xf0U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA)) 
                       | (0xfU & ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))
                                   ? ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                      >> 4U) : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB))));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = (0x9fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                 >> 3U)) | (2U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                                  >> 2U))));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x7fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          << 7U));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                >> 4U)));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (~ VL_REDXOR_8(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))));
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xcfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x30U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F)));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA;
                if ((0x40U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))) {
                    if ((1U & ((9U < (0xfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                  >> 5U)))) {
                        if ((5U < (0xfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                                = (0xdfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
                        }
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = ((0x100U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                               | (0xffU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                           - (IData)(6U))));
                    }
                    if ((1U & ((0x99U < (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA)) 
                               | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                         - (IData)(0x160U)));
                    }
                } else {
                    if ((1U & ((9U < (0xfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                  >> 5U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xdfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                               | ((9U < (0xfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                                  << 5U));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(6U) 
                                         + (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                    if ((1U & ((9U < (0x1fU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                               >> 4U))) 
                               | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(0x60U) 
                                         + (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                }
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                 >> 3U)) | (2U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                                  >> 2U))));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xefU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F)) 
                                   | (0xffffff0U & 
                                      ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                       >> 4U)))));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = (0xffU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x7fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0U == (0xffU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                          << 7U));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                >> 4U)));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (~ VL_REDXOR_16(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))));
            }
        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))
                    ? ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                       & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)))
                    : ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)));
        } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                   & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask));
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                            >> 4U)));
            if ((0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = (0x80U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = (1U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = (0x7fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
            }
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = (0x20U | (0x9fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)));
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = (0xf9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
            if ((6U != (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR)))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                 >> 3U)) | (2U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                                  >> 2U))));
            }
        } else {
            if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                    if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (0x7fU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                        >> 1U));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xefU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                               | (0x10U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                           << 4U)));
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = ((0xf0U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                         << 4U)) | 
                               (0xfU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                        >> 4U)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                            = (0xefU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
                    }
                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA)) 
                           | (0x7fU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                       >> 1U)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                       << 4U)));
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = (0xfeU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                    << 1U));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                       >> 3U)));
                }
            } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                     << 3U)) | (0x7fU 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                                   >> 1U)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                       << 4U)));
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xfeU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                     << 1U)) | (1U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                                   >> 4U)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                       >> 3U)));
                }
            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0x80U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                 << 7U)) | (0x7fU & 
                                            ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                             >> 1U)));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xefU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x10U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                   << 4U)));
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xfeU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                                  >> 7U)));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xefU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x10U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                   >> 3U)));
            }
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = (0x9fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((8U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                             >> 4U)) | ((4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                               >> 3U)) 
                                        | (2U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                                 >> 2U)))));
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = ((0x7fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                      << 7U));
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                   | (1U & (~ VL_REDXOR_8(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))));
            if ((0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F)));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F)));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x7fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F)));
            }
        }
    } else {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
            = (0xbfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
            = (0xefU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
        if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = ((0x8fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x40U | ((0x20U & ((~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                                                 << 5U)) 
                                       | (0x10U & (
                                                   (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)) 
                                                   << 4U)))));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v));
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = (0xdfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                       ^ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = (0xdfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                       & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = (0x20U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
            }
        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = ((0x8fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x40U | ((0x20U & ((~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                                         << 5U)) | 
                               (0x10U & ((~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)) 
                                         << 4U)))));
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v));
        } else {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = ((0xcfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                   | (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v) 
                       << 5U) | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v) 
                                 << 4U)));
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v));
        }
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
            = ((0xf9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
               | (((7U == (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r)))
                    ? ((2U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                              >> 4U)) | (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                               >> 3U)))
                    : ((2U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                              >> 4U)) | (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                               >> 3U)))) 
                  << 1U));
        if ((0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = (0x80U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
            if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Z16_r) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x7fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F)));
            }
        } else {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = (0x7fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out));
        }
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
            = ((0xf7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
               | (8U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                        >> 4U)));
        if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (~ VL_REDXOR_8(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))));
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (~ VL_REDXOR_8(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))));
            }
        }
        if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16_r) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F)));
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = ((0x7fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F)));
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)) 
                   | (1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F)));
        }
    }
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Q = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__clk 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__clk;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__halt_n 
        = vlSelfRef.tv80s__DOT__halt_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__busak_n 
        = vlSelfRef.tv80s__DOT__busak_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ID16_B 
        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16))
            ? 0xffffU : 1U);
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ID16 = 
        (0xffffU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusA) 
                    + (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ID16_B)));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Q;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_Mux 
        = ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeRp)
            ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB)
            : ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU_r)
                ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Q)
                : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg)));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIH 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_Mux;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIL 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_Mux;
    if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeDH) 
         & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
            >> 3U))) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusB) 
                        >> 8U));
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusB));
    } else if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeDH) 
                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                   >> 4U))) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusA_r) 
                        >> 8U));
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusA_r));
    } else if ((1U & (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16) 
                       >> 2U) & ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                                   >> 2U) & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                                     >> 3U) & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle)))))) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ID16) 
                        >> 8U));
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ID16));
    }
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DIH 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIH;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DIL 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIL;
}

VL_ATTR_COLD void Vtv80s___024root___eval_triggers__stl(Vtv80s___024root* vlSelf);

VL_ATTR_COLD bool Vtv80s___024root___eval_phase__stl(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtv80s___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtv80s___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtv80s___024root___dump_triggers__ico(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtv80s___024root___dump_triggers__act(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge reset_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] tv80s.i_tv80_core.F)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] tv80s.i_tv80_core.IR)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] tv80s.i_tv80_core.ISet)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] tv80s.i_tv80_core.IntCycle)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] tv80s.i_tv80_core.NMICycle)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] tv80s.i_tv80_core.mcycle)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([changed] tv80s.i_tv80_core.ALU_Op_r)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] tv80s.i_tv80_core.BusA)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([changed] tv80s.i_tv80_core.BusB)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([changed] tv80s.i_tv80_core.__Vcellinp__i_alu__IR)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtv80s___024root___dump_triggers__nba(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge reset_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] tv80s.i_tv80_core.F)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] tv80s.i_tv80_core.IR)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] tv80s.i_tv80_core.ISet)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] tv80s.i_tv80_core.IntCycle)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] tv80s.i_tv80_core.NMICycle)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] tv80s.i_tv80_core.mcycle)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([changed] tv80s.i_tv80_core.ALU_Op_r)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] tv80s.i_tv80_core.BusA)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([changed] tv80s.i_tv80_core.BusB)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([changed] tv80s.i_tv80_core.__Vcellinp__i_alu__IR)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtv80s___024root___ctor_var_reset(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->m1_n = 0;
    vlSelf->mreq_n = 0;
    vlSelf->iorq_n = 0;
    vlSelf->rd_n = 0;
    vlSelf->wr_n = 0;
    vlSelf->rfsh_n = 0;
    vlSelf->halt_n = 0;
    vlSelf->busak_n = 0;
    vlSelf->A = 0;
    vlSelf->dout = 0;
    vlSelf->reset_n = 0;
    vlSelf->clk = 0;
    vlSelf->wait_n = 0;
    vlSelf->int_n = 0;
    vlSelf->nmi_n = 0;
    vlSelf->busrq_n = 0;
    vlSelf->di = 0;
    vlSelf->tv80s__DOT__m1_n = 0;
    vlSelf->tv80s__DOT__mreq_n = 0;
    vlSelf->tv80s__DOT__iorq_n = 0;
    vlSelf->tv80s__DOT__rd_n = 0;
    vlSelf->tv80s__DOT__wr_n = 0;
    vlSelf->tv80s__DOT__rfsh_n = 0;
    vlSelf->tv80s__DOT__halt_n = 0;
    vlSelf->tv80s__DOT__busak_n = 0;
    vlSelf->tv80s__DOT__A = 0;
    vlSelf->tv80s__DOT__dout = 0;
    vlSelf->tv80s__DOT__reset_n = 0;
    vlSelf->tv80s__DOT__clk = 0;
    vlSelf->tv80s__DOT__wait_n = 0;
    vlSelf->tv80s__DOT__int_n = 0;
    vlSelf->tv80s__DOT__nmi_n = 0;
    vlSelf->tv80s__DOT__busrq_n = 0;
    vlSelf->tv80s__DOT__di = 0;
    vlSelf->tv80s__DOT__cen = 0;
    vlSelf->tv80s__DOT__intcycle_n = 0;
    vlSelf->tv80s__DOT__no_read = 0;
    vlSelf->tv80s__DOT__write = 0;
    vlSelf->tv80s__DOT__iorq = 0;
    vlSelf->tv80s__DOT__di_reg = 0;
    vlSelf->tv80s__DOT__mcycle = 0;
    vlSelf->tv80s__DOT__tstate = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__m1_n = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__iorq = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__no_read = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__write = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__rfsh_n = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__halt_n = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__busak_n = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__A = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__dout = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__mc = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ts = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__intcycle_n = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__IntE = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__stop = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__reset_n = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__clk = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__cen = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__wait_n = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__int_n = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__nmi_n = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__busrq_n = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__dinst = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__di = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ACC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__F = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Ap = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Fp = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__SP = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__PC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegDIH = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegDIL = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegBusA = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegBusB = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegBusC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegAddrA_r = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegAddrA = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegAddrB_r = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegAddrB = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegAddrC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegWEH = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegWEL = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Alternate = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__TmpAddr = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__IR = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ISet = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RegBusA_r = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__reset_4x = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ID16 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Save_Mux = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__tstate = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__mcycle = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__last_mcycle = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__last_tstate = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__IntE_FF1 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__IntE_FF2 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Halt_FF = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__BusReq_s = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__BusAck = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ClkEn = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__NMI_s = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__INT_s = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__IStatus = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__DI_Reg = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__T_Res = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__XY_State = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__NextIs_XY_Fetch = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__XY_Ind = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__No_BTR = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__BTR_r = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Auto_Wait = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__IncDecZ = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__BusB = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__BusA = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ALU_Q = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__F_Out = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Arith16_r = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Z16_r = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ALU_Op_r = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Save_ALU_r = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__PreserveC_r = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__mcycles = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__mcycles_d = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__tstates = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__IntCycle = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__NMICycle = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Inc_PC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Prefix = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Save_ALU = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__PreserveC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Arith16 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Jump = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__JumpE = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__JumpXY = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Call = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__RstP = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__LDZ = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__LDW = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__LDSPHL = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__iorq_i = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__will_iorq = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Special_LD = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ExchangeDH = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ExchangeRp = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ExchangeAF = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ExchangeRS = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I_DJNZ = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I_CPL = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I_CCF = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I_SCF = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I_RETN = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I_BT = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I_BC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I_BTR = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I_RLD = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I_RRD = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__I_INRC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__SetDI = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__SetEI = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__IMode = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Halt = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__PC16 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__PC16_B = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__SP16 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__SP16_A = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__SP16_B = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__ID16_B = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__Oldnmi_n = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__WILL_IORQ = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Call = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Write = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IR = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__F = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__IR = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__ISet = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__BusA = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__BusB = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__F_In = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DIH = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DIL = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__clk = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__CEN = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__WEH = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__WEL = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0] = 0;
    }
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__B = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__C = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__D = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__E = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__H = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__L = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__IX = 0;
    vlSelf->tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__IY = 0;
    vlSelf->__Vdly__tv80s__DOT__i_tv80_core__DOT__PC = 0;
    vlSelf->__Vdly__tv80s__DOT__i_tv80_core__DOT__XY_State = 0;
    vlSelf->__Vdly__tv80s__DOT__i_tv80_core__DOT__IR = 0;
    vlSelf->__Vdly__tv80s__DOT__i_tv80_core__DOT__ACC = 0;
    vlSelf->__Vdly__tv80s__DOT__i_tv80_core__DOT__F = 0;
    vlSelf->__Vdly__tv80s__DOT__i_tv80_core__DOT__SP = 0;
    vlSelf->__Vdly__tv80s__DOT__i_tv80_core__DOT__Alternate = 0;
    vlSelf->__Vdly__tv80s__DOT__i_tv80_core__DOT__tstate = 0;
    vlSelf->__Vdly__tv80s__DOT__i_tv80_core__DOT__mcycle = 0;
    vlSelf->__Vdly__tv80s__DOT__i_tv80_core__DOT__IntCycle = 0;
    vlSelf->__Vdly__tv80s__DOT__i_tv80_core__DOT__NMICycle = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__F__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__IR__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__ISet__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__IntCycle__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__NMICycle__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__mcycle__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__ALU_Op_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__BusA__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT__BusB__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR__0 = 0;
    vlSelf->__VactDidInit = 0;
}
