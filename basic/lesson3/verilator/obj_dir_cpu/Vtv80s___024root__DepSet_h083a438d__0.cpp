// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtv80s.h for the primary calling header

#include "Vtv80s__pch.h"
#include "Vtv80s___024root.h"

void Vtv80s___024root___ico_sequent__TOP__0(Vtv80s___024root* vlSelf);

void Vtv80s___024root___eval_ico(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtv80s___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtv80s___024root___ico_sequent__TOP__0(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tv80s__DOT__reset_n = vlSelfRef.reset_n;
    vlSelfRef.tv80s__DOT__wait_n = vlSelfRef.wait_n;
    vlSelfRef.tv80s__DOT__int_n = vlSelfRef.int_n;
    vlSelfRef.tv80s__DOT__nmi_n = vlSelfRef.nmi_n;
    vlSelfRef.tv80s__DOT__busrq_n = vlSelfRef.busrq_n;
    vlSelfRef.tv80s__DOT__di = vlSelfRef.di;
    vlSelfRef.tv80s__DOT__clk = vlSelfRef.clk;
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
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__reset_n 
        = vlSelfRef.tv80s__DOT__reset_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__wait_n 
        = vlSelfRef.tv80s__DOT__wait_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__int_n = vlSelfRef.tv80s__DOT__int_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__nmi_n = vlSelfRef.tv80s__DOT__nmi_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__busrq_n 
        = vlSelfRef.tv80s__DOT__busrq_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__dinst = vlSelfRef.tv80s__DOT__di;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__clk = vlSelfRef.tv80s__DOT__clk;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__WEH 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEH;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__WEL 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEL;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__clk 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__clk;
}

void Vtv80s___024root___eval_triggers__ico(Vtv80s___024root* vlSelf);

bool Vtv80s___024root___eval_phase__ico(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtv80s___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtv80s___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtv80s___024root___eval_act(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtv80s___024root___nba_sequent__TOP__0(Vtv80s___024root* vlSelf);
void Vtv80s___024root___nba_sequent__TOP__1(Vtv80s___024root* vlSelf);
void Vtv80s___024root___nba_sequent__TOP__2(Vtv80s___024root* vlSelf);
void Vtv80s___024root___nba_sequent__TOP__3(Vtv80s___024root* vlSelf);
void Vtv80s___024root___nba_sequent__TOP__4(Vtv80s___024root* vlSelf);
void Vtv80s___024root___nba_sequent__TOP__5(Vtv80s___024root* vlSelf);
void Vtv80s___024root___nba_comb__TOP__0(Vtv80s___024root* vlSelf);
void Vtv80s___024root___nba_sequent__TOP__6(Vtv80s___024root* vlSelf);
void Vtv80s___024root___nba_comb__TOP__1(Vtv80s___024root* vlSelf);
void Vtv80s___024root___nba_comb__TOP__2(Vtv80s___024root* vlSelf);
void Vtv80s___024root___nba_comb__TOP__3(Vtv80s___024root* vlSelf);

void Vtv80s___024root___eval_nba(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtv80s___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtv80s___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xf04ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtv80s___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xfcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtv80s___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtv80s___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtv80s___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0xffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtv80s___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtv80s___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0xffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtv80s___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0xf07ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtv80s___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0xfffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtv80s___024root___nba_comb__TOP__3(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtv80s__ConstPool__TABLE_h9dff99f2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtv80s__ConstPool__TABLE_h5fe20f8c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtv80s__ConstPool__TABLE_h40302b6b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtv80s__ConstPool__TABLE_h8f9c8366_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtv80s__ConstPool__TABLE_h109f5268_0;

VL_INLINE_OPT void Vtv80s___024root___nba_sequent__TOP__0(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc = 0;
    CData/*6:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__num;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__num = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*15:0*/ __Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr = 0;
    CData/*0:0*/ __Vdly__tv80s__DOT__i_tv80_core__DOT__reset_4x;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__reset_4x = 0;
    CData/*0:0*/ __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0;
    CData/*0:0*/ __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0;
    CData/*0:0*/ __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF1;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF1 = 0;
    CData/*0:0*/ __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF2;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF2 = 0;
    CData/*2:0*/ __Vdly__tv80s__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0;
    // Body
    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__Alternate 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF2 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE_FF2;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__Pre_XY_F_M 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF1 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__NMICycle 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle;
    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IntCycle 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__mcycle 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__tstate 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__TmpAddr;
    __Vdly__tv80s__DOT__i_tv80_core__DOT__reset_4x 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__reset_4x;
    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__ACC 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC;
    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC;
    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__SP 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP;
    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__XY_State 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State;
    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IR 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR;
    if (vlSelfRef.reset_n) {
        if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ClkEn) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles 
                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d;
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16_r 
                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16;
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Z16_r 
                = ((IData)(((2U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet)) 
                            & (1U == (5U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op))))) 
                   & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                      >> 2U));
            if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0xeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate))))) {
                if ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                      >> 2U) & (IData)(vlSelfRef.wait_n))) {
                    if ((1U & (((((~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump)) 
                                  & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call))) 
                                 & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle))) 
                                & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle))) 
                               & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt_FF) 
                                     | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt)))))) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC16;
                    }
                    if ((0U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix))) {
                        if ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__XY_State 
                                = ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))
                                    ? 2U : 1U);
                        } else if ((2U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__XY_State = 0U;
                        }
                    } else {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__XY_State = 0U;
                    }
                    if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle) 
                         & (1U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IStatus)))) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IR = 0xffU;
                    } else if ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt_FF) 
                                 | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle) 
                                    & (2U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IStatus)))) 
                                | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle))) {
                        __Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr 
                            = ((0xff00U & (IData)(__Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr)) 
                               | (IData)(vlSelfRef.di));
                    } else if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle) 
                                & (0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IStatus)))) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IR = 0xffU;
                        __Vdly__tv80s__DOT__i_tv80_core__DOT__reset_4x = 1U;
                        __Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr 
                            = vlSelfRef.di;
                    } else {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IR 
                            = vlSelfRef.di;
                    }
                }
            } else {
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__T_Res) {
                    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_CPL) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__ACC 
                            = (0xffU & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (4U & ((~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC) 
                                            >> 5U)) 
                                        << 2U)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = (0x20U | (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xfdU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (2U & ((~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC) 
                                            >> 3U)) 
                                        << 1U)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = (0x40U | (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F));
                    }
                    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump) {
                        vlSelfRef.A = (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg) 
                                        << 8U) | (0xffU 
                                                  & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__TmpAddr)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC 
                            = (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg) 
                                << 8U) | (0xffU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__TmpAddr)));
                    } else if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpXY) {
                        vlSelfRef.A = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusC;
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusC;
                    } else if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call) 
                                | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP))) {
                        vlSelfRef.A = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__TmpAddr;
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__TmpAddr;
                    } else if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__last_mcycle) 
                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle))) {
                        vlSelfRef.A = 0x66U;
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC = 0x66U;
                    } else if (((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 2U) & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle)) 
                                & (2U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IStatus)))) {
                        vlSelfRef.A = (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I) 
                                        << 8U) | (0xffU 
                                                  & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__TmpAddr)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC 
                            = (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I) 
                                << 8U) | (0xffU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__TmpAddr)));
                    } else {
                        vlSelfRef.A = (0xffffU & ((4U 
                                                   & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                     ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC)
                                                     : 
                                                    ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__TmpAddr))
                                                      : 
                                                     (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__TmpAddr)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                     ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP)
                                                     : 
                                                    (0xff00U 
                                                     | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                     ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC)
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State))
                                                      ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusC)
                                                      : 
                                                     ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NextIs_XY_Fetch)
                                                       ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC)
                                                       : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__TmpAddr))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                     ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusC)
                                                     : 
                                                    (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i) 
                                                      | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq))
                                                      ? 
                                                     (0xff00U 
                                                      | (0xffU 
                                                         & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusC)))
                                                      : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusC))))));
                    }
                    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_CCF) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xefU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (0x10U & ((~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                               >> 4U)) 
                                           << 4U)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC) 
                                        >> 3U)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xdfU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (0x20U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                           << 1U)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xfdU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (2U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC) 
                                        >> 2U)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = (0xbfU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F));
                    }
                    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_SCF) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = (0x10U | (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC) 
                                        >> 3U)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = (0xdfU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xfdU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (2U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC) 
                                        >> 2U)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = (0xbfU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F));
                    }
                }
                if ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                      >> 2U) & (IData)(vlSelfRef.wait_n))) {
                    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpE) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC16;
                    } else if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC16;
                    }
                    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP) {
                        if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__reset_4x) {
                            __Vdly__tv80s__DOT__i_tv80_core__DOT__reset_4x = 0U;
                        } else {
                            __Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr 
                                = (0x38U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR));
                        }
                    }
                    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BTR_r) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC16;
                    }
                    if (((1U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet)) 
                         & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                            >> 6U))) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IR 
                            = vlSelfRef.di;
                    }
                }
                if ((1U & ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                             >> 2U) & (IData)(vlSelfRef.wait_n)) 
                           | (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                               >> 4U) & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))))) {
                    if ((7U == (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16)))) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__SP 
                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP16;
                    }
                }
                if ((1U & (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                            >> 3U) & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 5U)))) {
                    __Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP16;
                }
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDSPHL) {
                    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__SP 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusC;
                }
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeAF) {
                    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__ACC 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Ap;
                    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Fp;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Ap 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Fp 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                }
            }
            if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate))) {
                if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Special_LD))) {
                    if ((0U == (3U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xfeU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE_FF2));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__ACC 
                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I;
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0x7fU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | ((0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I)) 
                                  << 7U));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xf7U & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (8U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I) 
                                        >> 4U)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = (0x9fU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F));
                    } else if ((1U == (3U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xfeU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE_FF2));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__ACC = 0U;
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0x7fU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | ((0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I)) 
                                  << 7U));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = ((0xf7U & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                               | (8U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I) 
                                        >> 4U)));
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                            = (0x9fU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F));
                    } else if ((2U == (3U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I 
                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC;
                    }
                }
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ) {
                    __Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0xff00U & (IData)(__Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg));
                }
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW) {
                    __Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0xffU & (IData)(__Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg) 
                              << 8U));
                }
            }
            if ((((~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_DJNZ)) 
                  & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU_r)) 
                 | (9U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                    = ((0x1fU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                       | (0xe0U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)));
                if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC_r)))) {
                    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                        = ((0xefU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                           | (0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out)));
                }
            }
            if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__T_Res) 
                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_INRC))) {
                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                    = ((0x1fU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                       | ((0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg)) 
                          << 7U));
                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                    = ((0xf7U & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                       | (8U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg) 
                                >> 4U)));
                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                    = ((0xfeU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                       | (1U & (~ VL_REDXOR_8(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg))));
            }
            if ((1U & (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                        >> 1U) & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1))))) {
                vlSelfRef.dout = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB;
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RLD) {
                    vlSelfRef.dout = ((0xf0U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                                << 4U)) 
                                      | (0xfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA)));
                }
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RRD) {
                    vlSelfRef.dout = ((0xf0U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                                << 4U)) 
                                      | (0xfU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                                 >> 4U)));
                }
            }
            if ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BT))) {
                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                    = ((0xf9U & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                       | ((4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Q) 
                                 << 1U)) | (2U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Q) 
                                                  >> 2U))));
                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                    = (0x9fU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F));
            }
            if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BC) 
                 | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BT))) {
                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                    = ((0xfeU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F)) 
                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDecZ));
            }
            if ((1U & (((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                          >> 1U) & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                        & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
                       | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU_r) 
                          & (7U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
                if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F 
                                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_Mux;
                                }
                            } else {
                                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__SP 
                                    = ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))
                                        ? ((0xffU & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__SP)) 
                                           | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_Mux) 
                                              << 8U))
                                        : ((0xff00U 
                                            & (IData)(vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__SP)) 
                                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_Mux)));
                            }
                        }
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__ACC 
                                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_Mux;
                            } else {
                                vlSelfRef.dout = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_Mux;
                            }
                        }
                    }
                }
            }
            if ((3U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IStatus 
                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode;
            }
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC_r 
                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC;
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
            if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__T_Res) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r 
                    = (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg) 
                        << 4U) | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0x17U;
                }
            }
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0xeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeRS) {
                    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__Alternate 
                        = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate)));
                }
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__T_Res) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU_r 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BTR_r 
                        = ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BT) 
                             | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BC)) 
                            | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BTR)) 
                           & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__No_BTR)));
                }
            }
        }
        vlSelfRef.wr_n = 1U;
        if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__mcycle)))) {
            if (((((IData)(vlSelfRef.tv80s__DOT__tstate) 
                   >> 1U) | (((IData)(vlSelfRef.tv80s__DOT__tstate) 
                              >> 2U) & (~ (IData)(vlSelfRef.wait_n)))) 
                 & (IData)(vlSelfRef.tv80s__DOT__write))) {
                vlSelfRef.wr_n = 0U;
            }
        }
        vlSelfRef.rd_n = 1U;
        vlSelfRef.iorq_n = 1U;
        vlSelfRef.mreq_n = 1U;
        if ((1U & (IData)(vlSelfRef.tv80s__DOT__mcycle))) {
            if ((1U & (((IData)(vlSelfRef.tv80s__DOT__tstate) 
                        >> 1U) | (((IData)(vlSelfRef.tv80s__DOT__tstate) 
                                   >> 2U) & (~ (IData)(vlSelfRef.wait_n)))))) {
                vlSelfRef.rd_n = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__intcycle_n)));
                vlSelfRef.iorq_n = vlSelfRef.tv80s__DOT__intcycle_n;
                vlSelfRef.mreq_n = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__intcycle_n)));
            }
        } else {
            if ((1U & (((((IData)(vlSelfRef.tv80s__DOT__tstate) 
                          >> 1U) | (((IData)(vlSelfRef.tv80s__DOT__tstate) 
                                     >> 2U) & (~ (IData)(vlSelfRef.wait_n)))) 
                        & (~ (IData)(vlSelfRef.tv80s__DOT__no_read))) 
                       & (~ (IData)(vlSelfRef.tv80s__DOT__write))))) {
                vlSelfRef.rd_n = 0U;
                vlSelfRef.iorq_n = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__iorq)));
                vlSelfRef.mreq_n = vlSelfRef.tv80s__DOT__iorq;
            }
            if (((((IData)(vlSelfRef.tv80s__DOT__tstate) 
                   >> 1U) | (((IData)(vlSelfRef.tv80s__DOT__tstate) 
                              >> 2U) & (~ (IData)(vlSelfRef.wait_n)))) 
                 & (IData)(vlSelfRef.tv80s__DOT__write))) {
                vlSelfRef.iorq_n = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__iorq)));
                vlSelfRef.mreq_n = vlSelfRef.tv80s__DOT__iorq;
            }
        }
        if ((((IData)(vlSelfRef.tv80s__DOT__tstate) 
              >> 2U) & (IData)(vlSelfRef.wait_n))) {
            vlSelfRef.tv80s__DOT__di_reg = vlSelfRef.di;
        }
        if (vlSelfRef.tv80s__DOT__cen) {
            __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1 
                = ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__T_Res))) 
                   && ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait) 
                       | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i) 
                          & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t2)))));
            __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t2 
                = ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1) 
                   & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__T_Res)));
            if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate))) {
                if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SetEI) 
                     & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN))) {
                    __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF1 = 1U;
                    __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF2 = 1U;
                } else {
                    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SetEI) {
                        if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle)))) {
                            __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF1 = 1U;
                        }
                        __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF2 = 1U;
                    }
                    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN) {
                        __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF1 
                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE_FF2;
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate))) {
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SetDI) {
                    __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                    __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
                }
            }
            if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle) 
                 | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt_FF = 0U;
            }
            if ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                  & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                     >> 2U)) & (IData)(vlSelfRef.wait_n))) {
                vlSelfRef.m1_n = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusReq_s) 
                          & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusAck))))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusAck = 0U;
                if ((1U & (~ (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                               >> 2U) & (~ (IData)(vlSelfRef.wait_n)))))) {
                    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__T_Res) {
                        if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt_FF = 1U;
                        }
                        if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusReq_s) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusAck = 1U;
                        } else {
                            vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__tstate = 2U;
                            if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NextIs_XY_Fetch) {
                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc 
                                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle;
                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout 
                                    = ((0x40U & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                        ? 7U : ((0x20U 
                                                 & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                 ? 6U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                  ? 5U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                     ? 2U
                                                     : 1U))))));
                                __Vdly__tv80s__DOT__i_tv80_core__DOT__Pre_XY_F_M 
                                    = __Vfunc_tv80s__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout;
                                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__mcycle = 0x20U;
                            } else if ((0x40U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__num 
                                    = (7U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Pre_XY_F_M)));
                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout 
                                    = ((1U == (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                        ? 1U : ((2U 
                                                 == (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                 ? 2U
                                                 : 
                                                ((3U 
                                                  == (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                  ? 4U
                                                  : 
                                                 ((4U 
                                                   == (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                   ? 8U
                                                   : 
                                                  ((5U 
                                                    == (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                    ? 0x10U
                                                    : 
                                                   ((6U 
                                                     == (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                     ? 0x20U
                                                     : 
                                                    ((7U 
                                                      == (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                      ? 0x40U
                                                      : 0x7fU)))))));
                                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__mcycle 
                                    = __Vfunc_tv80s__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout;
                            } else if ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__last_mcycle) 
                                         | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__No_BTR)) 
                                        | ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U) 
                                            & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_DJNZ)) 
                                           & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDecZ)))) {
                                vlSelfRef.m1_n = 0U;
                                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__mcycle = 1U;
                                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IntCycle = 0U;
                                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__NMICycle = 0U;
                                if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMI_s) 
                                     & (0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix)))) {
                                    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__NMICycle = 1U;
                                    __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                                } else if (((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE_FF1) 
                                              & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__INT_s)) 
                                             & (0U 
                                                == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix))) 
                                            & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SetEI)))) {
                                    vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IntCycle = 1U;
                                    __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                                    __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
                                }
                            } else {
                                vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__mcycle 
                                    = ((0x7eU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                                 << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U)));
                            }
                        }
                    } else if ((1U & ((~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait) 
                                          & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t2)))) 
                                      & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i) 
                                            & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1))))))) {
                        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__tstate 
                            = ((0x7eU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                                         << 1U)) | 
                               (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                                      >> 6U)));
                    }
                }
            }
            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate))) {
                vlSelfRef.m1_n = 0U;
            }
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__No_BTR 
                = ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BT) 
                     & ((~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                            >> 4U)) | (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F)))) 
                    | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BC) 
                       & (((~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                               >> 4U)) | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                          >> 7U)) | 
                          (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))))) 
                   | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BTR) 
                      & ((~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                             >> 4U)) | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                        >> 7U))));
        }
    } else {
        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__Alternate = 0U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles = 0U;
        vlSelfRef.wr_n = 1U;
        vlSelfRef.rd_n = 1U;
        vlSelfRef.iorq_n = 1U;
        vlSelfRef.mreq_n = 1U;
        vlSelfRef.tv80s__DOT__di_reg = 0U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16_r = 0U;
        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC = 0U;
        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F = 0xffU;
        vlSelfRef.A = 0U;
        __Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr = 0U;
        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IR = 0U;
        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__XY_State = 0U;
        vlSelfRef.dout = 0U;
        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__ACC = 0xffU;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Ap = 0xffU;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Fp = 0xffU;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I = 0U;
        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__SP = 0xffffU;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Z16_r = 0U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IStatus = 0U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC_r = 0U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BTR_r = 0U;
        __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__mcycle = 1U;
        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__tstate = 1U;
        __Vdly__tv80s__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt_FF = 0U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusAck = 0U;
        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__NMICycle = 0U;
        vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IntCycle = 0U;
        __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
        __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0U;
        __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0U;
        vlSelfRef.m1_n = 1U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__No_BTR = 0U;
    }
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__TmpAddr 
        = __Vdly__tv80s__DOT__i_tv80_core__DOT__TmpAddr;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__reset_4x 
        = __Vdly__tv80s__DOT__i_tv80_core__DOT__reset_4x;
    vlSelfRef.tv80s__DOT__wr_n = vlSelfRef.wr_n;
    vlSelfRef.tv80s__DOT__rd_n = vlSelfRef.rd_n;
    vlSelfRef.tv80s__DOT__iorq_n = vlSelfRef.iorq_n;
    vlSelfRef.tv80s__DOT__mreq_n = vlSelfRef.mreq_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__di = vlSelfRef.tv80s__DOT__di_reg;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16_r;
    vlSelfRef.tv80s__DOT__A = vlSelfRef.A;
    vlSelfRef.tv80s__DOT__dout = vlSelfRef.dout;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Z16_r;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__A = vlSelfRef.tv80s__DOT__A;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__dout = vlSelfRef.tv80s__DOT__dout;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE_FF2 
        = __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF2;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Pre_XY_F_M 
        = __Vdly__tv80s__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE_FF1 
        = __Vdly__tv80s__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1 
        = __Vdly__tv80s__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelfRef.tv80s__DOT__m1_n = vlSelfRef.m1_n;
    vlSelfRef.halt_n = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt_FF)));
    vlSelfRef.busak_n = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusAck)));
    __Vtableidx1 = (((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Oldnmi_n) 
                       << 6U) | ((IData)(vlSelfRef.nmi_n) 
                                 << 5U)) | (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle) 
                                             << 4U) 
                                            | ((IData)(vlSelfRef.int_n) 
                                               << 3U))) 
                    | (((IData)(vlSelfRef.busrq_n) 
                        << 2U) | (((IData)(vlSelfRef.tv80s__DOT__cen) 
                                   << 1U) | (IData)(vlSelfRef.reset_n))));
    if ((1U & Vtv80s__ConstPool__TABLE_h9dff99f2_0[__Vtableidx1])) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusReq_s 
            = Vtv80s__ConstPool__TABLE_h5fe20f8c_0[__Vtableidx1];
    }
    if ((2U & Vtv80s__ConstPool__TABLE_h9dff99f2_0[__Vtableidx1])) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__INT_s 
            = Vtv80s__ConstPool__TABLE_h40302b6b_0[__Vtableidx1];
    }
    if ((4U & Vtv80s__ConstPool__TABLE_h9dff99f2_0[__Vtableidx1])) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMI_s 
            = Vtv80s__ConstPool__TABLE_h8f9c8366_0[__Vtableidx1];
    }
    if ((8U & Vtv80s__ConstPool__TABLE_h9dff99f2_0[__Vtableidx1])) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Oldnmi_n 
            = Vtv80s__ConstPool__TABLE_h109f5268_0[__Vtableidx1];
    }
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__m1_n = vlSelfRef.tv80s__DOT__m1_n;
    vlSelfRef.tv80s__DOT__halt_n = vlSelfRef.halt_n;
    vlSelfRef.tv80s__DOT__busak_n = vlSelfRef.busak_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__halt_n 
        = vlSelfRef.tv80s__DOT__halt_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__busak_n 
        = vlSelfRef.tv80s__DOT__busak_n;
}

VL_INLINE_OPT void Vtv80s___024root___nba_sequent__TOP__1(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    __VdlyVal__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    __VdlyDim0__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0;
    CData/*0:0*/ __VdlySet__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    __VdlySet__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0;
    CData/*7:0*/ __VdlyVal__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    __VdlyVal__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    __VdlyDim0__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0;
    CData/*0:0*/ __VdlySet__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    __VdlySet__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0;
    // Body
    __VdlySet__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0U;
    __VdlySet__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0U;
    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ClkEn) {
        if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEH) {
            __VdlyVal__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIH;
            __VdlyDim0__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrA;
            __VdlySet__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 1U;
        }
        if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEL) {
            __VdlyVal__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegDIL;
            __VdlyDim0__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrA;
            __VdlySet__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 1U;
        }
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusA_r 
            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusA;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC 
            = (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To)));
        if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpXY) 
             | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDSPHL))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC 
                = (2U | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate) 
                         << 2U));
        }
        if ((1U & ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpXY) 
                     | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDSPHL)) 
                    & (0U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State))) 
                   | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                      >> 5U)))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC 
                = (3U | (4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrB_r 
            = (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To) 
                                >> 1U)));
        if ((((~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_Ind)) 
              & (4U == (6U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)))) 
             & (0U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State)))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrB_r 
                = (3U | (4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrA_r 
            = (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To) 
                                >> 1U)));
        if ((((~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_Ind)) 
              & (4U == (6U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)))) 
             & (0U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State)))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrA_r 
                = (3U | (4U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
        if (((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
               >> 2U) | (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                          >> 3U) & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) 
             & (4U == (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDecZ 
                = (0U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ID16));
        }
    }
    if (__VdlySet__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__VdlyDim0__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0] 
            = __VdlyVal__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    }
    if (__VdlySet__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__VdlyDim0__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0] 
            = __VdlyVal__tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    }
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__B 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [0U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__D 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [1U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__H 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [2U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__C 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [0U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__E 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [1U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__L 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [2U];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__IX 
        = ((vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [3U] << 8U) | vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [3U]);
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__IY 
        = ((vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [7U] << 8U) | vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [7U]);
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC];
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusC 
        = ((vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC] 
            << 8U) | vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrC]);
}

VL_INLINE_OPT void Vtv80s___024root___nba_sequent__TOP__2(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A = 0;
    CData/*3:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In = 0;
    CData/*4:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A = 0;
    CData/*3:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In = 0;
    CData/*3:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In = 0;
    CData/*3:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In = 0;
    CData/*1:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In = 0;
    CData/*1:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In = 0;
    // Body
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask 
        = ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
            ? ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                    ? 0x80U : 0x40U) : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                                         ? 0x20U : 0x10U))
            : ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                    ? 8U : 4U) : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                                   ? 2U : 1U)));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry 
        = (IData)((1U == (5U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r))));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v 
        = (1U & (([&]() {
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In 
                        = (1U & (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                  >> 1U) ^ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                                            & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                               >> 4U))));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub 
                        = (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B 
                        = (0xfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A 
                        = (0xfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout 
                        = (0x1fU & (((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A) 
                                     + (0xfU & ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub)
                                                 ? 
                                                (~ (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B))
                                                 : (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B)))) 
                                    + (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In)));
                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout)) 
                 >> 4U));
    VL_ASSIGNSEL_II(8,4,0U, vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v, 
                    (0xfU & ([&]() {
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In 
                        = (1U & (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                  >> 1U) ^ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                                            & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F) 
                                               >> 4U))));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub 
                        = (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B 
                        = (0xfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A 
                        = (0xfU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout 
                        = (0x1fU & (((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A) 
                                     + (0xfU & ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub)
                                                 ? 
                                                (~ (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B))
                                                 : (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B)))) 
                                    + (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In)));
                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout))));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v 
        = (1U & (([&]() {
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub 
                        = (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B 
                        = (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                 >> 4U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A 
                        = (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                 >> 4U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout 
                        = (0xfU & (((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A) 
                                    + (7U & ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub)
                                              ? (~ (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B))
                                              : (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B)))) 
                                   + (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In)));
                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout)) 
                 >> 3U));
    VL_ASSIGNSEL_II(8,3,4U, vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v, 
                    (7U & ([&]() {
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub 
                        = (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B 
                        = (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                 >> 4U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A 
                        = (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                 >> 4U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout 
                        = (0xfU & (((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A) 
                                    + (7U & ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub)
                                              ? (~ (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B))
                                              : (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B)))) 
                                   + (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In)));
                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout))));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v 
        = (1U & (([&]() {
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub 
                        = (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B 
                        = (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                 >> 7U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A 
                        = (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                 >> 7U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout 
                        = (3U & (((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A) 
                                  + (1U & ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub)
                                            ? (~ (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B))
                                            : (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B)))) 
                                 + (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In)));
                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout)) 
                 >> 1U));
    VL_ASSIGNBIT_II(7U, vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v, 
                    (1U & ([&]() {
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub 
                        = (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B 
                        = (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB) 
                                 >> 7U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A 
                        = (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA) 
                                 >> 7U));
                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout 
                        = (3U & (((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A) 
                                  + (1U & ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub)
                                            ? (~ (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B))
                                            : (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B)))) 
                                 + (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In)));
                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout))));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v 
        = ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v) 
           ^ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v));
}

VL_INLINE_OPT void Vtv80s___024root___nba_sequent__TOP__3(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc = 0;
    CData/*0:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF = 0;
    CData/*2:0*/ __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc;
    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc = 0;
    // Body
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD 
        = (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS 
        = (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeDH = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR 
        = (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                 >> 4U));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 1U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates 
        = ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))
            ? 4U : 3U);
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op 
        = (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16 = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpE = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpXY = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDSPHL = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Special_LD = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_CPL = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_CCF = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_SCF = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BT = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BC = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BTR = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RLD = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RRD = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_INRC = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SetDI = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SetEI = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt = 0U;
    vlSelfRef.tv80s__DOT__no_read = 0U;
    vlSelfRef.tv80s__DOT__write = 0U;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode = 0U;
    if ((0U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__write = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__write = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                                = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                                = (7U 
                                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 5U)))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                            if (([&]() {
                                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc 
                                                            = 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                                >> 3U));
                                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF 
                                                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout 
                                                            = 
                                                            ((1U 
                                                              & (~ 
                                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc) 
                                                                  >> 2U))) 
                                                             && (1U 
                                                                 & ((2U 
                                                                     & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                                      ? 
                                                                     ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                                      >> 4U)
                                                                      : 
                                                                     (~ 
                                                                      ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                                       >> 4U)))
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                                      ? 
                                                                     ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                                      >> 7U)
                                                                      : 
                                                                     (~ 
                                                                      ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                                       >> 7U))))));
                                                    }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                            } else {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__write = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__write = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call = 1U;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SetEI = 1U;
                                } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                        if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                            if ((2U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            }
                                        } else {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                            if ((1U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__write = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__write = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        if (([&]() {
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc 
                                                        = 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                            >> 3U));
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF 
                                                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout 
                                                        = 
                                                        ((1U 
                                                          & (~ 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc) 
                                                              >> 2U))) 
                                                         && (1U 
                                                             & ((2U 
                                                                 & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                                  >> 4U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                                   >> 4U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                                  >> 7U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                                   >> 7U))))));
                                                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 6U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDSPHL = 1U;
                            } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                                = (5U 
                                                   | (8U 
                                                      & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                                = (4U 
                                                   | (8U 
                                                      & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__no_read = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                    }
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    if (([&]() {
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF 
                                                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout 
                                                    = 
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc) 
                                                          >> 2U))) 
                                                     && (1U 
                                                         & ((2U 
                                                             & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                              >> 4U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                               >> 4U)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                              >> 7U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                               >> 7U))))));
                                            }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    } else {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                    }
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                            ? 7U : 
                                           ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                            << 1U));
                                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                            ? 0xbU : 
                                           (1U | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                  << 1U)));
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 5U)))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                    if (([&]() {
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF 
                                                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout 
                                                    = 
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc) 
                                                          >> 2U))) 
                                                     && (1U 
                                                         & ((2U 
                                                             & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                              >> 4U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                               >> 4U)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                              >> 7U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                               >> 7U))))));
                                            }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SetDI = 1U;
                            } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    if (([&]() {
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF 
                                                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout 
                                                    = 
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc) 
                                                          >> 2U))) 
                                                     && (1U 
                                                         & ((2U 
                                                             & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                              >> 4U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                               >> 4U)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                              >> 7U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                               >> 7U))))));
                                            }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : ((8U 
                                                   & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                  | (1U 
                                                     | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                        << 1U))));
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((8U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                   << 1U)));
                            }
                        } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (5U | 
                                               (8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (4U | 
                                               (8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__no_read = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                }
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                if (([&]() {
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF 
                                                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout 
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                             >> 7U))))));
                                        }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 5U)))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                        if (([&]() {
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc 
                                                        = 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                            >> 3U));
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF 
                                                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout 
                                                        = 
                                                        ((1U 
                                                          & (~ 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc) 
                                                              >> 2U))) 
                                                         && (1U 
                                                             & ((2U 
                                                                 & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                                  >> 4U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                                   >> 4U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                                  >> 7U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                                   >> 7U))))));
                                                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((0x10U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) {
                                if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                        if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                            if ((2U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            }
                                        } else {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                            if ((1U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__write = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__write = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        if (([&]() {
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc 
                                                        = 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                            >> 3U));
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF 
                                                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout 
                                                        = 
                                                        ((1U 
                                                          & (~ 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc) 
                                                              >> 2U))) 
                                                         && (1U 
                                                             & ((2U 
                                                                 & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                                  >> 4U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                                   >> 4U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                                  >> 7U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                                   >> 7U))))));
                                                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpXY = 1U;
                        } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (5U | 
                                               (8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (4U | 
                                               (8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__no_read = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                }
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                if (([&]() {
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF 
                                                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout 
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                             >> 7U))))));
                                        }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                << 1U));
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : (1U 
                                                  | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                     << 1U)));
                                vlSelfRef.tv80s__DOT__write = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 5U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                if (([&]() {
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF 
                                                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout 
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                             >> 7U))))));
                                        }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) {
                            if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    if (([&]() {
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF 
                                                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout 
                                                    = 
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc) 
                                                          >> 2U))) 
                                                     && (1U 
                                                         & ((2U 
                                                             & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                              >> 4U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                               >> 4U)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                              >> 7U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                               >> 7U))))));
                                            }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                    << 1U))));
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (5U | (8U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (4U | (8U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__no_read = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            if (([&]() {
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF 
                                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout 
                                            = ((1U 
                                                & (~ 
                                                   ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc) 
                                                    >> 2U))) 
                                               && (1U 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                        >> 4U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                         >> 4U)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                        >> 7U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                         >> 7U))))));
                                    }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 5U)))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                        if (([&]() {
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc 
                                                        = 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                            >> 3U));
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF 
                                                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout 
                                                        = 
                                                        ((1U 
                                                          & (~ 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc) 
                                                              >> 2U))) 
                                                         && (1U 
                                                             & ((2U 
                                                                 & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                                  >> 4U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                                   >> 4U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                                  >> 7U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                                   >> 7U))))));
                                                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((0x10U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) {
                                if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                        if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                            if ((2U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            }
                                        } else {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                            if ((1U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__write = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__write = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        if (([&]() {
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc 
                                                        = 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                            >> 3U));
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF 
                                                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout 
                                                        = 
                                                        ((1U 
                                                          & (~ 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc) 
                                                              >> 2U))) 
                                                         && (1U 
                                                             & ((2U 
                                                                 & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                                  >> 4U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                                   >> 4U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                                  >> 7U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                                   >> 7U))))));
                                                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SetEI = 1U;
                            }
                        } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (5U | 
                                               (8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (4U | 
                                               (8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__no_read = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                }
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                if (([&]() {
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF 
                                                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout 
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                             >> 7U))))));
                                        }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                << 1U));
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : (1U 
                                                  | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                     << 1U)));
                                vlSelfRef.tv80s__DOT__write = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 5U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                if (([&]() {
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF 
                                                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout 
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                             >> 7U))))));
                                        }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) {
                            if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__write = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    if (([&]() {
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF 
                                                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout 
                                                    = 
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc) 
                                                          >> 2U))) 
                                                     && (1U 
                                                         & ((2U 
                                                             & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                              >> 4U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                               >> 4U)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                              >> 7U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                               >> 7U))))));
                                            }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                    << 1U))));
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (5U | (8U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (4U | (8U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__no_read = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            if (([&]() {
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF 
                                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout 
                                            = ((1U 
                                                & (~ 
                                                   ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc) 
                                                    >> 2U))) 
                                               && (1U 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                        >> 4U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                         >> 4U)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                        >> 7U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                         >> 7U))))));
                                    }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 5U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                if (([&]() {
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF 
                                                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout 
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                             >> 7U))))));
                                        }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix = 1U;
                        } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                } else {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                if (([&]() {
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF 
                                                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout 
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                             >> 7U))))));
                                        }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (5U | (8U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (4U | (8U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__no_read = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            if (([&]() {
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF 
                                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout 
                                            = ((1U 
                                                & (~ 
                                                   ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc) 
                                                    >> 2U))) 
                                               && (1U 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                        >> 4U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                         >> 4U)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                        >> 7U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                         >> 7U))))));
                                    }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RstP = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                            << 1U));
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : (1U | 
                                              ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                            vlSelfRef.tv80s__DOT__write = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                         >> 5U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                            if (([&]() {
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF 
                                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout 
                                            = ((1U 
                                                & (~ 
                                                   ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc) 
                                                    >> 2U))) 
                                               && (1U 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                        >> 4U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                         >> 4U)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                        >> 7U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                         >> 7U))))));
                                    }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                        } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Call = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                        if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            if (([&]() {
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF 
                                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                        __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout 
                                            = ((1U 
                                                & (~ 
                                                   ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc) 
                                                    >> 2U))) 
                                               && (1U 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                        >> 4U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                         >> 4U)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                        >> 7U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                         >> 7U))))));
                                    }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 0xbU : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                          | (1U | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                   << 1U))));
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 7U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                           << 1U)));
                    }
                } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        if (([&]() {
                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc 
                                        = (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF 
                                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
                                    __Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout 
                                        = ((1U & (~ 
                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc) 
                                                   >> 2U))) 
                                           && (1U & 
                                               ((2U 
                                                 & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                 ? 
                                                ((1U 
                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                  >> 4U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                   >> 4U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                   >> 7U))))));
                                }(), (IData)(__Vfunc_tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                        }
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                }
            } else if ((6U == (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((0x40U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((0x36U == (0x3fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt = 1U;
            } else if ((6U == (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                }
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                }
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__write = 1U;
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_CCF = 1U;
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                                }
                                if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__write = 1U;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 6U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                                = (0xcU | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            }
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xeU;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16 = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16 = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            if ((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                        ? 2U : 3U);
                            } else if ((1U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                        ? 3U : 2U);
                            } else if ((2U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                        ? 2U : 3U);
                            } else if ((3U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                        ? 3U : 2U);
                            }
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpE = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_SCF = 1U;
                        } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                            }
                            if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                            = (4U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xeU;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 8U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (1U | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                 << 1U))));
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 9U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                           << 1U)));
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        if ((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        } else if ((2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_CPL = 1U;
                        } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                            }
                            if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 6U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        if ((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        } else if ((2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0xcU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                        if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 6U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 8U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                             << 1U))));
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 9U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                       << 1U)));
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    if ((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                ? 2U : 3U);
                    } else if ((1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                ? 3U : 2U);
                    } else if ((2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                ? 2U : 3U);
                    } else if ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F))
                                ? 3U : 2U);
                    }
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__no_read = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpE = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                            }
                            if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        }
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                        if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 8U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                             << 1U))));
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 9U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                       << 1U)));
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                        if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                        = (0xcU | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    }
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__no_read = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 4U)))) 
                            || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U))))
                            ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16 = 1U;
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__no_read = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 4U)))) 
                            || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U))))
                            ? ((9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16 = 1U;
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlSelfRef.tv80s__DOT__write = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
                } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__write = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                    }
                    if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                }
            } else if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__write = 1U;
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 6U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                    = (4U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                }
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__write = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                        ? 8U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | (1U | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                         << 1U))));
            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                        ? 9U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                   << 1U)));
            }
        } else if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                vlSelfRef.tv80s__DOT__write = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                vlSelfRef.tv80s__DOT__write = 1U;
            }
        } else if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                vlSelfRef.tv80s__DOT__write = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                vlSelfRef.tv80s__DOT__write = 1U;
            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
            } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet))) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
               | (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)));
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
               | (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)));
        if ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if (((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle)) 
                                 || (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                           >> 6U)))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if (((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle)) 
                             || (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 6U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((0x40U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if (((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle)) 
                             || (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 6U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (7U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 9U;
            }
        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if (((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle)) 
                         || (1U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                                   >> 6U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 8U;
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
        }
    } else if ((0x80U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))
                                        ? 0xaU : 2U);
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BTR = 1U;
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__no_read = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.tv80s__DOT__write = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BTR = 1U;
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__no_read = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_BT = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlSelfRef.tv80s__DOT__write = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))
                                    ? 0xdU : 5U);
                        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                }
                            } else {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 8U : ((8U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (1U 
                                                   | (6U 
                                                      & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                         >> 3U)))));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 9U : ((8U 
                                                 & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (6U 
                                                   & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))));
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__no_read = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         || (1U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U)))) 
                                        || (2U == (3U 
                                                   & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U))))
                                        ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (1U | 
                                              (6U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))))
                                        : 8U);
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__no_read = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         || (1U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U)))) 
                                        || (2U == (3U 
                                                   & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U))))
                                        ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (6U & 
                                              ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))
                                        : 9U);
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                            if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (8U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To));
                            }
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            if ((6U != (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)));
                            }
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_INRC = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode 
                            = ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))
                                ? 2U : 1U);
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : (1U | (6U 
                                                  & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                     >> 3U))));
                        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelfRef.tv80s__DOT__write = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)));
                        } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                        if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__no_read = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (6U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0xdU;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RLD = 1U;
                                vlSelfRef.tv80s__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                        if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (6U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 0xeU;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RRD = 1U;
                            vlSelfRef.tv80s__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))));
                    } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tv80s__DOT__write = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)));
                    } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                    if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__write = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Special_LD = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode = 2U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.tv80s__DOT__no_read = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                        if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Special_LD = 4U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))));
                    } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tv80s__DOT__write = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)));
                    } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                    if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__write = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Special_LD = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                    } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (1U | (6U 
                                                 & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U))));
                    }
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.tv80s__DOT__no_read = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                    if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__write = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Special_LD = 6U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 5U;
                } else {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_RETN = 1U;
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDZ = 1U;
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__LDW = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                         >> 4U))) ? 8U
                            : (1U | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                           >> 3U))));
                } else if ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlSelfRef.tv80s__DOT__write = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((3U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                         >> 4U))) ? 9U
                            : (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)));
                } else if ((0x10U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__write = 1U;
                }
            } else {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__no_read = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 4U)))) 
                            || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U))))
                            ? ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
                } else if ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.tv80s__DOT__no_read = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             || (1U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                              >> 4U)))) 
                            || (2U == (3U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U))))
                            ? ((9U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                >> 3U)));
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                if ((6U == (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = (8U | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To));
                }
            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__write = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
            }
        } else {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq = 1U;
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
            } else if ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i = 1U;
                if ((6U != (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (7U & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                }
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_INRC = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle)))) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates = 4U;
    }
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeAF;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeRS;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycles_d;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_PC;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Inc_WZ;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Acc;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Read_To_Reg;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Save_ALU;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PreserveC;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Arith16;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__WILL_IORQ 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__will_iorq;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Jump;
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
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Halt;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IMode;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__stop = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_DJNZ;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__I_DJNZ;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__no_read 
        = vlSelfRef.tv80s__DOT__no_read;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__write = vlSelfRef.tv80s__DOT__write;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i;
    vlSelfRef.tv80s__DOT__iorq = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq_i;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstates;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__JumpE;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeRp;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeDH;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__no_read;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Write 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__write;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__iorq = vlSelfRef.tv80s__DOT__iorq;
}

VL_INLINE_OPT void Vtv80s___024root___nba_sequent__TOP__4(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State 
        = vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__XY_State;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate 
        = vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__Alternate;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle 
        = vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IntCycle;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle 
        = vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__NMICycle;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR = vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__IR;
    if (vlSelfRef.reset_n) {
        if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ClkEn) {
            if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0xeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate))))) {
                if ((((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
                      >> 2U) & (IData)(vlSelfRef.wait_n))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet = 0U;
                    if ((0U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix))) {
                        if ((3U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix))) {
                            if ((2U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix))) {
                                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_Ind = 0U;
                            }
                            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet 
                                = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix;
                        }
                    } else {
                        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_Ind = 0U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_Ind = 1U;
                if ((1U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Prefix))) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet = 1U;
                }
            }
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0xeU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__T_Res) {
                    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r 
                        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op;
                }
            }
        }
    } else {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_Ind = 0U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet = 0U;
    }
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle;
    vlSelfRef.tv80s__DOT__intcycle_n = (1U & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle)));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__IR 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR 
        = (0x3fU & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle 
        = vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate 
        = vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__tstate;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__intcycle_n 
        = vlSelfRef.tv80s__DOT__intcycle_n;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__IR 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__ISet 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ISet;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle;
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
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IntCycle) 
         | (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NMICycle))) {
        if ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle))) {
            vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
        }
    }
    vlSelfRef.tv80s__DOT__mcycle = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.tv80s__DOT__tstate = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mc = vlSelfRef.tv80s__DOT__mcycle;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ts = vlSelfRef.tv80s__DOT__tstate;
}

VL_INLINE_OPT void Vtv80s___024root___nba_sequent__TOP__5(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___nba_sequent__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ClkEn) {
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA 
            = (0xffU & ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To))
                         ? ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To))
                             ? 0U : ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To))
                                      ? 0U : ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To))
                                               ? ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP) 
                                                  >> 8U)
                                               : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP))))
                         : ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To))
                             ? ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To))
                                 ? ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To))
                                     ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC)
                                     : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg))
                                 : ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To))
                                     ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusA)
                                     : ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusA) 
                                        >> 8U))) : 
                            ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusA_To))
                              ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusA)
                              : ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusA) 
                                 >> 8U)))));
        vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB 
            = (0xffU & ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                         ? ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                             ? ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? 0U : ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                                          ? ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC) 
                                             >> 8U)
                                          : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC)))
                             : ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F)
                                     : 1U) : ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                                               ? ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP) 
                                                  >> 8U)
                                               : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP))))
                         : ((4U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                             ? ((2U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC)
                                     : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg))
                                 : ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusB)
                                     : ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusB) 
                                        >> 8U))) : 
                            ((1U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_BusB_To))
                              ? (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusB)
                              : ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusB) 
                                 >> 8U)))));
    }
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__BusA 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusA;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__BusB 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusB;
}

VL_INLINE_OPT void Vtv80s___024root___nba_comb__TOP__0(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
        = (((0U != (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_State)) 
            & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__XY_Ind))) 
           & (((2U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Set_Addr_To)) 
               | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                  & (0xcbU == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))) 
              | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__mcycle) 
                 & (0x36U == (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IR)))));
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
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrB 
        = (((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ExchangeDH) 
            & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__tstate) 
               >> 3U)) ? (1U | ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__Alternate) 
                                << 2U)) : (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegAddrB_r));
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
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__T_Res = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__last_tstate;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__WEH 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEH;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__WEL 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegWEL;
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
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ID16_B 
        = ((8U & (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__IncDec_16))
            ? 0xffffU : 1U);
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ID16 = 
        (0xffffU & ((IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__RegBusA) 
                    + (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ID16_B)));
}
