// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk_sys = vlSelfRef.clk_sys;
    vlSelfRef.top__DOT__clk_vid = vlSelfRef.clk_vid;
    vlSelfRef.VGA_R = vlSelfRef.top__DOT__VGA_R;
    vlSelfRef.VGA_B = vlSelfRef.top__DOT__VGA_B;
    vlSelfRef.VGA_G = vlSelfRef.top__DOT__VGA_G;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xf04ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xfcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0xf07ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0xffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0xfffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__top__DOT__soc__DOT__vga__DOT__h_cnt;
    __Vdly__top__DOT__soc__DOT__vga__DOT__h_cnt = 0;
    SData/*9:0*/ __Vdly__top__DOT__soc__DOT__vga__DOT__v_cnt;
    __Vdly__top__DOT__soc__DOT__vga__DOT__v_cnt = 0;
    SData/*13:0*/ __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter;
    __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__soc__DOT__vga__DOT__vmem__v0;
    __VdlyVal__top__DOT__soc__DOT__vga__DOT__vmem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__top__DOT__soc__DOT__vga__DOT__vmem__v0;
    __VdlyDim0__top__DOT__soc__DOT__vga__DOT__vmem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__soc__DOT__vga__DOT__vmem__v0;
    __VdlySet__top__DOT__soc__DOT__vga__DOT__vmem__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    __VdlyVal__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0;
    CData/*2:0*/ __VdlyDim0__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    __VdlyDim0__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    __VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    __VdlyVal__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0;
    CData/*2:0*/ __VdlyDim0__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    __VdlyDim0__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    __VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__soc__DOT__ram__DOT__mem__v0;
    __VdlyVal__top__DOT__soc__DOT__ram__DOT__mem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__top__DOT__soc__DOT__ram__DOT__mem__v0;
    __VdlyDim0__top__DOT__soc__DOT__ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__soc__DOT__ram__DOT__mem__v0;
    __VdlySet__top__DOT__soc__DOT__ram__DOT__mem__v0 = 0;
    // Body
    __Vdly__top__DOT__soc__DOT__vga__DOT__h_cnt = vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt;
    __Vdly__top__DOT__soc__DOT__vga__DOT__v_cnt = vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt;
    __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter;
    __VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0U;
    __VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0U;
    __VdlySet__top__DOT__soc__DOT__ram__DOT__mem__v0 = 0U;
    __VdlySet__top__DOT__soc__DOT__vga__DOT__vmem__v0 = 0U;
    if ((0xffU != (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_reset_cnt))) {
        vlSelfRef.top__DOT__soc__DOT__cpu_reset_cnt 
            = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_reset_cnt)));
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck)))) {
        if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEH) {
            __VdlyVal__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIH;
            __VdlyDim0__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA;
            __VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 1U;
        }
        if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEL) {
            __VdlyVal__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIL;
            __VdlyDim0__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA;
            __VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 1U;
        }
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA_r 
            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC 
            = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To)));
        if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpXY) 
             | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDSPHL))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC 
                = (2U | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate) 
                         << 2U));
        }
        if ((1U & ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpXY) 
                     | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDSPHL)) 
                    & (0U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State))) 
                   | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                      >> 5U)))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC 
                = (3U | (4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB_r 
            = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To) 
                                >> 1U)));
        if ((((~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind)) 
              & (4U == (6U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)))) 
             & (0U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State)))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB_r 
                = (3U | (4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA_r 
            = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To) 
                                >> 1U)));
        if ((((~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind)) 
              & (4U == (6U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)))) 
             & (0U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State)))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA_r 
                = (3U | (4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
               & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0xfU))))) {
        vlSelfRef.top__DOT__soc__DOT__vga__DOT____Vlvbound_h3bad9e82__0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        if ((0x3e7fU >= (0x3fffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
            __VdlyVal__top__DOT__soc__DOT__vga__DOT__vmem__v0 
                = vlSelfRef.top__DOT__soc__DOT__vga__DOT____Vlvbound_h3bad9e82__0;
            __VdlyDim0__top__DOT__soc__DOT__vga__DOT__vmem__v0 
                = (0x3fffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
            __VdlySet__top__DOT__soc__DOT__vga__DOT__vmem__v0 = 1U;
        }
    }
    vlSelfRef.VGA_VB = (0x190U <= (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt));
    vlSelfRef.VGA_HB = (0x280U <= (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt));
    __Vdly__top__DOT__soc__DOT__vga__DOT__h_cnt = (
                                                   (0x31fU 
                                                    == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))));
    if ((0x290U == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))) {
        vlSelfRef.VGA_HS = 0U;
        __Vdly__top__DOT__soc__DOT__vga__DOT__v_cnt 
            = ((0x1c0U == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))
                ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))));
        if ((0x19cU == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))) {
            vlSelfRef.VGA_VS = 1U;
        }
        if ((0x19eU == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))) {
            vlSelfRef.VGA_VS = 0U;
        }
    }
    if ((0x2f0U == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))) {
        vlSelfRef.VGA_HS = 1U;
    }
    if (((0x190U > (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt)) 
         & (0x280U > (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt)))) {
        if ((3U == (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt)))) {
            __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter 
                = (0x3fffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter)));
        }
        vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel 
            = ((0x3e7fU >= (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter))
                ? vlSelfRef.top__DOT__soc__DOT__vga__DOT__vmem
               [vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter]
                : 0U);
    } else {
        if ((0x290U == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))) {
            if ((0x19cU == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))) {
                __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter = 0U;
            } else if (((0x190U > (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt)) 
                        & (3U != (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))))) {
                __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter 
                    = (0x3fffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter) 
                                  - (IData)(0xa0U)));
            }
        }
        vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel = 0U;
    }
    vlSelfRef.top__DOT__soc__DOT__rom_data_out = vlSelfRef.top__DOT__soc__DOT__rom__DOT__mem
        [(0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    vlSelfRef.top__DOT__soc__DOT__ram_data_out = vlSelfRef.top__DOT__soc__DOT__ram__DOT__mem
        [(0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__ram__wren_a) {
        __VdlyVal__top__DOT__soc__DOT__ram__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        __VdlyDim0__top__DOT__soc__DOT__ram__DOT__mem__v0 
            = (0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        __VdlySet__top__DOT__soc__DOT__ram__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT__ram_data_out 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    if (__VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__VdlyDim0__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0] 
            = __VdlyVal__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    }
    if (__VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__VdlyDim0__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0] 
            = __VdlyVal__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    }
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter 
        = __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt = __Vdly__top__DOT__soc__DOT__vga__DOT__v_cnt;
    if (__VdlySet__top__DOT__soc__DOT__vga__DOT__vmem__v0) {
        vlSelfRef.top__DOT__soc__DOT__vga__DOT__vmem[__VdlyDim0__top__DOT__soc__DOT__vga__DOT__vmem__v0] 
            = __VdlyVal__top__DOT__soc__DOT__vga__DOT__vmem__v0;
    }
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt = __Vdly__top__DOT__soc__DOT__vga__DOT__h_cnt;
    if (__VdlySet__top__DOT__soc__DOT__ram__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__ram__DOT__mem[__VdlyDim0__top__DOT__soc__DOT__ram__DOT__mem__v0] 
            = __VdlyVal__top__DOT__soc__DOT__ram__DOT__mem__v0;
    }
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
    vlSelfRef.VGA_R = vlSelfRef.top__DOT__VGA_R;
    vlSelfRef.VGA_B = vlSelfRef.top__DOT__VGA_B;
    vlSelfRef.VGA_G = vlSelfRef.top__DOT__VGA_G;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc = 0;
    CData/*6:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num = 0;
    CData/*1:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State = 0;
    SData/*15:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr = 0;
    CData/*0:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0;
    CData/*0:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0;
    CData/*0:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 0;
    CData/*0:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = 0;
    CData/*2:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0;
    // Body
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP;
    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR;
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck)))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles 
                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d;
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16_r 
                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16;
            if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0xeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
                    if ((0U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                        if ((3U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                            if ((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind = 0U;
                            }
                        }
                        if ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                            __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State 
                                = ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))
                                    ? 2U : 1U);
                        } else if ((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                            __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State = 0U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind = 0U;
                        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State = 0U;
                    }
                    if ((1U & (((((~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump)) 
                                  & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call))) 
                                 & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle))) 
                                & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle))) 
                               & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF) 
                                     | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt)))))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16;
                    }
                    if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle) 
                         & (1U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IStatus)))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR = 0xffU;
                    } else if ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF) 
                                 | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle) 
                                    & (2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IStatus)))) 
                                | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR = 0U;
                        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
                            = ((0xff00U & (IData)(__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_din));
                    } else {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR 
                            = vlSelfRef.top__DOT__soc__DOT__cpu_din;
                    }
                }
            } else {
                if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind = 1U;
                }
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate) {
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump) {
                        vlSelfRef.top__DOT__soc__DOT__cpu_addr 
                            = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg) 
                                << 8U) | (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
                            = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg) 
                                << 8U) | (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)));
                    } else if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpXY) {
                        vlSelfRef.top__DOT__soc__DOT__cpu_addr 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC;
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC;
                    } else if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call) 
                                | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP))) {
                        vlSelfRef.top__DOT__soc__DOT__cpu_addr 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr;
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr;
                    } else if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_mcycle) 
                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle))) {
                        vlSelfRef.top__DOT__soc__DOT__cpu_addr = 0x66U;
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC = 0x66U;
                    } else if (((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 2U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle)) 
                                & (2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IStatus)))) {
                        vlSelfRef.top__DOT__soc__DOT__cpu_addr 
                            = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I) 
                                << 8U) | (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
                            = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I) 
                                << 8U) | (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)));
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__cpu_addr 
                            = (0xffffU & ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC)
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr))
                                                    : 
                                                   (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)))))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP)
                                                   : 
                                                  (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg))))
                                           : ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC)
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State))
                                                    ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC)
                                                    : 
                                                   ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NextIs_XY_Fetch)
                                                     ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC)
                                                     : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr))))
                                               : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC))));
                    }
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CPL) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC 
                            = (0xffU & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xcfU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (0x10U | (0x20U & 
                                           ((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC) 
                                                >> 5U)) 
                                            << 5U))));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xf7U & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (8U & ((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC) 
                                            >> 3U)) 
                                        << 3U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (2U | (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                    }
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CCF) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xfeU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xc7U & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC)) 
                                  | ((0x10U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                               << 4U)) 
                                     | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC)))));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                    }
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_SCF) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (1U | (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xc7U & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (0x28U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                    }
                }
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16;
                    } else if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16;
                    }
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP) {
                        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
                            = (0x38U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR));
                    }
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BTR_r) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16;
                    }
                    if (((1U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet)) 
                         & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                            >> 6U))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR 
                            = vlSelfRef.top__DOT__soc__DOT__cpu_din;
                    }
                }
                if ((1U & (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                            >> 2U) | (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                       >> 4U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))))) {
                    if ((7U == (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16)))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16;
                    }
                }
                if ((1U & (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                            >> 3U) & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 5U)))) {
                    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16;
                }
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDSPHL) {
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC;
                }
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeAF) {
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Ap;
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Fp;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Ap 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Fp 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0xeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRS) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate 
                        = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate)));
                }
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BTR_r 
                        = ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT) 
                             | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC)) 
                            | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BTR)) 
                           & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__No_BTR)));
                }
            }
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Z16_r 
                = ((IData)(((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet)) 
                            & (1U == (5U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op))))) 
                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                      >> 2U));
            if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD))) {
                    if ((0U == (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2) 
                                  << 2U));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I;
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0x3fU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I)) 
                                  | ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I)) 
                                     << 6U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0xefU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                    } else if ((1U == (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2) 
                                  << 2U));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC = 0U;
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0x3fU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I)) 
                                  | ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I)) 
                                     << 6U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0xefU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                    } else if ((2U == (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC;
                    }
                }
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ) {
                    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0xff00U & (IData)(__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg));
                }
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW) {
                    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0xffU & (IData)(__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg) 
                              << 8U));
                }
            }
            if ((((~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ)) 
                  & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r)) 
                 | (9U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = ((1U & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                       | (0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)));
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC_r)))) {
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                        = ((0xfeU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                           | (1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)));
                }
            }
            if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate) 
                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = (0xefU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = (0xfdU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = ((0x3fU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                       | ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg)) 
                          | ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg)) 
                             << 6U)));
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = ((0xfbU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                       | (4U & ((~ VL_REDXOR_8(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg)) 
                                << 2U)));
            }
            if ((1U & (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                        >> 1U) & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1))))) {
                vlSelfRef.top__DOT__soc__DOT__cpu_dout 
                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB;
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RLD) {
                    vlSelfRef.top__DOT__soc__DOT__cpu_dout 
                        = ((0xf0U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                     << 4U)) | (0xfU 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)));
                }
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RRD) {
                    vlSelfRef.top__DOT__soc__DOT__cpu_dout 
                        = ((0xf0U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                     << 4U)) | (0xfU 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                                   >> 4U)));
                }
            }
            if ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = ((0xc7U & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                       | ((0x20U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q) 
                                    << 4U)) | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q))));
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = (0xfdU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
            }
            if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC) 
                 | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = ((0xfbU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                       | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDecZ) 
                          << 2U));
            }
            if ((1U & (((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                          >> 1U) & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                        & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
                       | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r) 
                          & (7U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
                if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux;
                                }
                            } else {
                                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP 
                                    = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))
                                        ? ((0xffU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP)) 
                                           | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux) 
                                              << 8U))
                                        : ((0xff00U 
                                            & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP)) 
                                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux)));
                            }
                        }
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC 
                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux;
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__cpu_dout 
                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux;
                            }
                        }
                    }
                }
            }
            if ((3U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IStatus 
                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode;
            }
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC_r 
                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC;
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
            if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r 
                    = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg) 
                        << 4U) | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0x17U;
                }
            }
        }
        vlSelfRef.top__DOT__soc__DOT__cpu_wr_n = 1U;
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle)))) {
            if ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write))) {
                vlSelfRef.top__DOT__soc__DOT__cpu_wr_n = 0U;
            }
        }
        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 
            = ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate))) 
               && ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait) 
                   | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i) 
                      & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2)))));
        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 
            = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1) 
               & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate)));
        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
            if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI) {
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle)))) {
                    __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 1U;
                }
                __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = 1U;
            }
            if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN) {
                __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 
                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2;
            }
        }
        if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
            if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetDI) {
                __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
            }
        }
        if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle) 
             | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusReq_s) 
                      & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck))))) {
            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck = 0U;
            if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate) {
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF = 1U;
                }
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusReq_s) {
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck = 1U;
                } else {
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate = 2U;
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NextIs_XY_Fetch) {
                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout 
                            = ((0x40U & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                ? 7U : ((0x20U & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                         ? 6U : ((0x10U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                  ? 5U
                                                  : 
                                                 ((8U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                     ? 2U
                                                     : 1U))))));
                        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M 
                            = __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout;
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle = 0x20U;
                        if ((0x36U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M = 2U;
                        }
                    } else if ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M)));
                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout 
                            = ((1U == (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                ? 1U : ((2U == (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                         ? 2U : ((3U 
                                                  == (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                  ? 4U
                                                  : 
                                                 ((4U 
                                                   == (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                   ? 8U
                                                   : 
                                                  ((5U 
                                                    == (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                    ? 0x10U
                                                    : 
                                                   ((6U 
                                                     == (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                     ? 0x20U
                                                     : 
                                                    ((7U 
                                                      == (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                      ? 0x40U
                                                      : 0U)))))));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle 
                            = __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout;
                    } else if ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_mcycle) 
                                 | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__No_BTR)) 
                                | ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                     >> 1U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ)) 
                                   & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDecZ)))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle = 1U;
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle = 0U;
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle = 0U;
                        if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMI_s) 
                             & (0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix)))) {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle = 1U;
                            __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                        } else if (((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1) 
                                      & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__INT_s)) 
                                     & (0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) 
                                    & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI)))) {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle = 1U;
                            __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                            __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
                        }
                    } else {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle 
                            = ((0x7eU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                         << 1U)) | 
                               (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 6U)));
                    }
                }
            } else if ((1U & ((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait) 
                                  & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2)))) 
                              & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i) 
                                    & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1))))))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate 
                    = ((0x7eU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                                  >> 6U)));
            }
        }
        if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMI_s = 0U;
        }
    } else {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16_r = 0U;
        vlSelfRef.top__DOT__soc__DOT__cpu_wr_n = 1U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F = 0xffU;
        vlSelfRef.top__DOT__soc__DOT__cpu_addr = 0U;
        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR = 0U;
        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State = 0U;
        vlSelfRef.top__DOT__soc__DOT__cpu_dout = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC = 0xffU;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Ap = 0xffU;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Fp = 0xffU;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP = 0xffffU;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Z16_r = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IStatus = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC_r = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BTR_r = 0U;
        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle = 1U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate = 1U;
        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle = 0U;
        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0U;
        __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMI_s = 0U;
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
        = __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State 
        = __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State;
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__ram__wren_a 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
              >> 0xfU));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 
        = __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 
        = __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M 
        = __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 
        = __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusReq_s = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__INT_s = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__No_BTR 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n) 
           && ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT) 
                 & ((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                        >> 4U)) | (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                      >> 2U)))) | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                        >> 4U)) 
                                                      | (4U 
                                                         != 
                                                         (0x44U 
                                                          & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)))))) 
               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BTR) 
                  & ((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                         >> 4U)) | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                    >> 6U)))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry = 0;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v = 0;
    CData/*4:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A = 0;
    CData/*3:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In = 0;
    CData/*4:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A = 0;
    CData/*3:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In = 0;
    CData/*3:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In = 0;
    CData/*3:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In = 0;
    CData/*1:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In = 0;
    CData/*1:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In = 0;
    // Body
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask 
        = ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
            ? ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                    ? 0x80U : 0x40U) : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                                         ? 0x20U : 0x10U))
            : ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                    ? 8U : 4U) : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))
                                   ? 2U : 1U)));
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry 
        = (IData)((1U == (5U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v 
        = (1U & (([&]() {
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In 
                        = (1U & (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                  >> 1U) ^ ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                                            & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub 
                        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B 
                        = (0xfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A 
                        = (0xfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout 
                        = (0x1fU & (((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A) 
                                     + (0xfU & ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub)
                                                 ? 
                                                (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B))
                                                 : (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B)))) 
                                    + (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In)));
                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout)) 
                 >> 4U));
    VL_ASSIGNSEL_II(8,4,0U, vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v, 
                    (0xfU & ([&]() {
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In 
                        = (1U & (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                  >> 1U) ^ ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                                            & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub 
                        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B 
                        = (0xfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A 
                        = (0xfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout 
                        = (0x1fU & (((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A) 
                                     + (0xfU & ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub)
                                                 ? 
                                                (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B))
                                                 : (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B)))) 
                                    + (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In)));
                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout))));
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v 
        = (1U & (([&]() {
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub 
                        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B 
                        = (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                 >> 4U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A 
                        = (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                 >> 4U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout 
                        = (0xfU & (((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A) 
                                    + (7U & ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub)
                                              ? (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B))
                                              : (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B)))) 
                                   + (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In)));
                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout)) 
                 >> 3U));
    VL_ASSIGNSEL_II(8,3,4U, vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v, 
                    (7U & ([&]() {
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub 
                        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B 
                        = (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                 >> 4U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A 
                        = (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                 >> 4U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout 
                        = (0xfU & (((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A) 
                                    + (7U & ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub)
                                              ? (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B))
                                              : (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B)))) 
                                   + (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In)));
                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout))));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v 
        = (1U & (([&]() {
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In 
                        = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub 
                        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B 
                        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                 >> 7U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A 
                        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                 >> 7U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout 
                        = (3U & (((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A) 
                                  + (1U & ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub)
                                            ? (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B))
                                            : (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B)))) 
                                 + (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In)));
                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout)) 
                 >> 1U));
    VL_ASSIGNBIT_II(7U, vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v, 
                    (1U & ([&]() {
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In 
                        = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub 
                        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                 >> 1U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B 
                        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                 >> 7U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A 
                        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                 >> 7U));
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout 
                        = (3U & (((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A) 
                                  + (1U & ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub)
                                            ? (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B))
                                            : (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B)))) 
                                 + (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In)));
                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout))));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v) 
           ^ (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD = 0;
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS = 0;
    CData/*1:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc = 0;
    CData/*0:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF = 0;
    CData/*2:0*/ __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc;
    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc = 0;
    // Body
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD 
        = (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS 
        = (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR));
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR 
        = (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                 >> 4U));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 1U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates 
        = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))
            ? 4U : 3U);
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op 
        = (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16 = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpXY = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDSPHL = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CPL = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CCF = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_SCF = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BTR = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RLD = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RRD = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetDI = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode = 3U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 0U;
    if ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                                = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                                = (7U 
                                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                                        }
                                    }
                                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix = 3U;
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                        if (([&]() {
                                                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc 
                                                        = 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                            >> 3U));
                                                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF 
                                                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout 
                                                        = 
                                                        (1U 
                                                         & ((4U 
                                                             & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                             ? 
                                                            ((2U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                              ? 
                                                             ((1U 
                                                               & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                               ? 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                               >> 7U)
                                                               : 
                                                              (~ 
                                                               ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                                >> 7U)))
                                                              : 
                                                             ((1U 
                                                               & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                               ? 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                               >> 2U)
                                                               : 
                                                              (~ 
                                                               ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                                >> 2U))))
                                                             : 
                                                            ((2U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                              ? 
                                                             ((1U 
                                                               & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                               ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF)
                                                               : 
                                                              (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF)))
                                                              : 
                                                             ((1U 
                                                               & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                               ? 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                               >> 6U)
                                                               : 
                                                              (~ 
                                                               ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                                >> 6U))))));
                                                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((0x10U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI = 1U;
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        if (([&]() {
                                                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc 
                                                        = 
                                                        (7U 
                                                         & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                            >> 3U));
                                                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF 
                                                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout 
                                                        = 
                                                        (1U 
                                                         & ((4U 
                                                             & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                             ? 
                                                            ((2U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                              ? 
                                                             ((1U 
                                                               & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                               ? 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                               >> 7U)
                                                               : 
                                                              (~ 
                                                               ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                                >> 7U)))
                                                              : 
                                                             ((1U 
                                                               & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                               ? 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                               >> 2U)
                                                               : 
                                                              (~ 
                                                               ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                                >> 2U))))
                                                             : 
                                                            ((2U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                              ? 
                                                             ((1U 
                                                               & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                               ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)
                                                               : 
                                                              (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)))
                                                              : 
                                                             ((1U 
                                                               & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                               ? 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                               >> 6U)
                                                               : 
                                                              (~ 
                                                               ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                                >> 6U))))));
                                                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDSPHL = 1U;
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    if (([&]() {
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF 
                                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                           ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF)
                                                           : 
                                                          (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                            >> 6U))))));
                                            }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                    }
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                            ? 7U : 
                                           ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                            << 1U));
                                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                            ? 0xbU : 
                                           (1U | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                  << 1U)));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                    if (([&]() {
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF 
                                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                           ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF)
                                                           : 
                                                          (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                            >> 6U))))));
                                            }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetDI = 1U;
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    if (([&]() {
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF 
                                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                           ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)
                                                           : 
                                                          (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                            >> 6U))))));
                                            }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : ((8U 
                                                   & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                  | (1U 
                                                     | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                        << 1U))));
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((8U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                   << 1U)));
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                if (([&]() {
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF 
                                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                         ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF)
                                                         : 
                                                        (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                          >> 6U))))));
                                        }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix = 2U;
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                    if (([&]() {
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF 
                                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                           ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF)
                                                           : 
                                                          (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                            >> 6U))))));
                                            }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH = 1U;
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    if (([&]() {
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF 
                                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                           ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)
                                                           : 
                                                          (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                            >> 6U))))));
                                            }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpXY = 1U;
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                if (([&]() {
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF 
                                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                         ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF)
                                                         : 
                                                        (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                          >> 6U))))));
                                        }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                << 1U));
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : (1U 
                                                  | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                     << 1U)));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                if (([&]() {
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF 
                                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                         ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF)
                                                         : 
                                                        (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                          >> 6U))))));
                                        }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                if (([&]() {
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF 
                                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                         ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)
                                                         : 
                                                        (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                          >> 6U))))));
                                        }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                    << 1U))));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            if (([&]() {
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF 
                                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                   ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF)
                                                   : 
                                                  (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                    >> 6U))))));
                                    }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix = 3U;
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                    if (([&]() {
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF 
                                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                           ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF)
                                                           : 
                                                          (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                            >> 6U))))));
                                            }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    if (([&]() {
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF 
                                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                           ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)
                                                           : 
                                                          (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                           ? 
                                                          ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                            >> 6U))))));
                                            }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRS = 1U;
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                if (([&]() {
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF 
                                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                         ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF)
                                                         : 
                                                        (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                          >> 6U))))));
                                        }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                << 1U));
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : (1U 
                                                  | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                     << 1U)));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                if (([&]() {
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF 
                                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                         ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF)
                                                         : 
                                                        (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                          >> 6U))))));
                                        }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                if (([&]() {
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF 
                                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                         ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)
                                                         : 
                                                        (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                          >> 6U))))));
                                        }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                    << 1U))));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            if (([&]() {
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF 
                                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                   ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF)
                                                   : 
                                                  (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                    >> 6U))))));
                                    }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                if (([&]() {
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF 
                                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                         ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF)
                                                         : 
                                                        (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                          >> 6U))))));
                                        }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix = 1U;
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                if (([&]() {
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF 
                                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                         ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)
                                                         : 
                                                        (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                         ? 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                          >> 6U))))));
                                        }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            if (([&]() {
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF 
                                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                   ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF)
                                                   : 
                                                  (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                    >> 6U))))));
                                    }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                            << 1U));
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : (1U | 
                                              ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                            if (([&]() {
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF 
                                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF)
                                                   : 
                                                  (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                    >> 6U))))));
                                    }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            }
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            if (([&]() {
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF 
                                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                        __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)
                                                   : 
                                                  (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 6U))))));
                                    }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 0xbU : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                          | (1U | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                   << 1U))));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 7U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                           << 1U)));
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        if (([&]() {
                                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc 
                                        = (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF 
                                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                    ? (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF)
                                                    : 
                                                   (~ (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                     >> 6U))))));
                                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                        }
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                }
            } else if ((6U == (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((0x36U == (0x3fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt = 1U;
            } else if ((6U == (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                }
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                }
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CCF = 1U;
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                                }
                                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                                = (0xcU | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                            if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                            if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16 = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16 = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            if ((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                        ? 2U : 3U);
                            } else if ((1U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                        ? 3U : 2U);
                            } else if ((2U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                        ? 2U : 3U);
                            } else if ((3U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                        ? 3U : 2U);
                            }
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_SCF = 1U;
                        } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                            }
                            if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                            = (4U | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 8U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (1U | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                 << 1U))));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 9U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                           << 1U)));
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        if ((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        } else if ((2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CPL = 1U;
                        } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                            }
                            if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        if ((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        } else if ((2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0xcU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
                    } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
                    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 8U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                             << 1U))));
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 9U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                       << 1U)));
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    if ((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                ? 2U : 3U);
                    } else if ((1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                ? 3U : 2U);
                    } else if ((2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                ? 2U : 3U);
                    } else if ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                ? 3U : 2U);
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                            }
                            if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        }
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16 = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 8U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                             << 1U))));
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 9U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                       << 1U)));
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                }
            }
        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                        = (0xcU | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    }
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 4U)))) 
                            || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U))))
                            ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16 = 1U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 4U)))) 
                            || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U))))
                            ? ((9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16 = 1U;
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeAF = 1U;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                    }
                    if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                }
            } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                    = (4U | (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                }
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                        ? 8U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | (1U | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                         << 1U))));
            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                        ? 9U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | ((IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                   << 1U)));
            }
        } else if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
            }
        } else if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
            } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet))) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
               | (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)));
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
               | (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)));
        if ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if (((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle)) 
                                 || (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                           >> 6U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if (((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle)) 
                             || (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 6U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if (((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle)) 
                             || (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 6U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 9U;
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if (((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle)) 
                         || (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                   >> 6U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 8U;
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
        }
    } else if ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))
                                        ? 0xaU : 2U);
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BTR = 1U;
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BTR = 1U;
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))
                                    ? 0xdU : 5U);
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 8U : ((8U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (1U 
                                                   | (6U 
                                                      & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                         >> 3U)))));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 9U : ((8U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (6U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))));
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         || (1U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U)))) 
                                        || (2U == (3U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U))))
                                        ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (1U | 
                                              (6U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))))
                                        : 8U);
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         || (1U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U)))) 
                                        || (2U == (3U 
                                                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U))))
                                        ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (6U & 
                                              ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))
                                        : 9U);
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                            if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (8U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To));
                            }
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            if ((6U != (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)));
                            }
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode 
                            = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))
                                ? 2U : 1U);
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : (1U | (6U 
                                                  & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                     >> 3U))));
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)));
                        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (6U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0xdU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RLD = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode = 0U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (6U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0xeU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RRD = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))));
                    } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)));
                    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode = 2U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     || (1U == (3U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U)))) 
                                    || (2U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                    ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        if ((6U != (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC = 1U;
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD = 4U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))));
                    } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)));
                    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                    } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (1U | (6U 
                                                 & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U))));
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 4U)))) 
                                || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U))))
                                ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                    if ((6U != (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD = 6U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = 1U;
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                         >> 4U))) ? 8U
                            : (1U | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                           >> 3U))));
                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                         >> 4U))) ? 9U
                            : (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)));
                } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 4U)))) 
                            || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U))))
                            ? ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             || (1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 4U)))) 
                            || (2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U))))
                            ? ((9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                }
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                >> 3U)));
                if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = (8U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To));
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
            }
        } else {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                if ((6U != (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                }
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC = 1U;
            }
        }
    }
    if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
        if (((0x36U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)) 
             | (0xcbU == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
        }
    }
    if ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
        if ((1U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
        }
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
            = top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
        if (((0x36U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)) 
             | (1U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet)))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC] 
            << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC]);
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck)))) {
        if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ) 
             & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDecZ 
                = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out) 
                         >> 6U));
        }
        if (((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
               >> 2U) | (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                          >> 3U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) 
             & (4U == (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDecZ 
                = (0U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16));
        }
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA 
            = (0xffU & ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To))
                         ? ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To))
                             ? 0U : ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To))
                                      ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To))
                                               ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP) 
                                                  >> 8U)
                                               : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP))))
                         : ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To))
                             ? ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To))
                                 ? ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To))
                                     ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC)
                                     : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg))
                                 : ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To))
                                     ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA)
                                     : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA) 
                                        >> 8U))) : 
                            ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To))
                              ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA)
                              : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA) 
                                 >> 8U)))));
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB 
            = (0xffU & ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                         ? ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                             ? ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                                          ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC) 
                                             >> 8U)
                                          : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC)))
                             : ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)
                                     : 1U) : ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                                               ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP) 
                                                  >> 8U)
                                               : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP))))
                         : ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                             ? ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC)
                                     : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg))
                                 : ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB)
                                     : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB) 
                                        >> 8U))) : 
                            ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                              ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB)
                              : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB) 
                                 >> 8U)))));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck)))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
            if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0xeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet = 0U;
                    if ((0U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                        if ((3U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet 
                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix;
                        }
                    }
                }
            } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                if ((1U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet = 1U;
                }
            }
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0xeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg 
                = vlSelfRef.top__DOT__soc__DOT__cpu_din;
        }
    } else {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg = 0U;
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR 
        = (0x3fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate;
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle) 
         | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__cpu_din = ((0x8000U 
                                              & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))
                                              ? (IData)(vlSelfRef.top__DOT__soc__DOT__ram_data_out)
                                              : (IData)(vlSelfRef.top__DOT__soc__DOT__rom_data_out));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n 
        = (0xffU == (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_reset_cnt));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0;
    SData/*8:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0;
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB = 0;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16_B;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16_B = 0;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B;
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B = 0;
    // Body
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
    top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B 
        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16))
            ? 0xffffU : 1U);
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16 
        = (0xffffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA) 
                      + (IData)(top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<12> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lesson3_tb.v", 10, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x7d0U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lesson3_tb.v", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x7d0U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lesson3_tb.v", 10, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelfRef.clk_sys & 0xfeU))) {
        Verilated::overWidthError("clk_sys");}
    if (VL_UNLIKELY((vlSelfRef.clk_vid & 0xfeU))) {
        Verilated::overWidthError("clk_vid");}
    if (VL_UNLIKELY((vlSelfRef.ioctl_download & 0xfeU))) {
        Verilated::overWidthError("ioctl_download");}
    if (VL_UNLIKELY((vlSelfRef.ioctl_addr & 0xfe000000U))) {
        Verilated::overWidthError("ioctl_addr");}
    if (VL_UNLIKELY((vlSelfRef.ioctl_wr & 0xfeU))) {
        Verilated::overWidthError("ioctl_wr");}
}
#endif  // VL_DEBUG
