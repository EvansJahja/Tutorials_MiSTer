// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtv80s.h for the primary calling header

#include "Vtv80s__pch.h"
#include "Vtv80s___024root.h"

VL_INLINE_OPT void Vtv80s___024root___nba_sequent__TOP__6(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___nba_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ACC = vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__ACC;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__PC = vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__PC;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__SP = vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__SP;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__DI_Reg 
        = vlSelfRef.tv80s__DOT__di_reg;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ClkEn = 
        ((IData)(vlSelfRef.tv80s__DOT__cen) & (~ (IData)(vlSelfRef.tv80s__DOT__i_tv80_core__DOT__BusAck)));
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F = vlSelfRef.__Vdly__tv80s__DOT__i_tv80_core__DOT__F;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_reg__DOT__CEN 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ClkEn;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__F 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__F_In 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F;
}

VL_INLINE_OPT void Vtv80s___024root___nba_comb__TOP__1(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___nba_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void Vtv80s___024root___nba_comb__TOP__2(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___nba_comb__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__F_Out;
    vlSelfRef.tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Q 
        = vlSelfRef.tv80s__DOT__i_tv80_core__DOT__ALU_Q;
}

VL_INLINE_OPT void Vtv80s___024root___nba_comb__TOP__3(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___nba_comb__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vtv80s___024root___eval_triggers__act(Vtv80s___024root* vlSelf);
void Vtv80s___024root___eval_act(Vtv80s___024root* vlSelf);

bool Vtv80s___024root___eval_phase__act(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<12> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtv80s___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtv80s___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtv80s___024root___eval_nba(Vtv80s___024root* vlSelf);

bool Vtv80s___024root___eval_phase__nba(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtv80s___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtv80s___024root___dump_triggers__ico(Vtv80s___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtv80s___024root___eval_phase__ico(Vtv80s___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtv80s___024root___dump_triggers__nba(Vtv80s___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtv80s___024root___dump_triggers__act(Vtv80s___024root* vlSelf);
#endif  // VL_DEBUG

void Vtv80s___024root___eval(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x7d0U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtv80s___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../rtl/tv80\\tv80s.v", 26, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtv80s___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x7d0U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtv80s___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtl/tv80\\tv80s.v", 26, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x7d0U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtv80s___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtl/tv80\\tv80s.v", 26, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtv80s___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtv80s___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtv80s___024root___eval_debug_assertions(Vtv80s___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtv80s__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtv80s___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.wait_n & 0xfeU))) {
        Verilated::overWidthError("wait_n");}
    if (VL_UNLIKELY((vlSelfRef.int_n & 0xfeU))) {
        Verilated::overWidthError("int_n");}
    if (VL_UNLIKELY((vlSelfRef.nmi_n & 0xfeU))) {
        Verilated::overWidthError("nmi_n");}
    if (VL_UNLIKELY((vlSelfRef.busrq_n & 0xfeU))) {
        Verilated::overWidthError("busrq_n");}
}
#endif  // VL_DEBUG
