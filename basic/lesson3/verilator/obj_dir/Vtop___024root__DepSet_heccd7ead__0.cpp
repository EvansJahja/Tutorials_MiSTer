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
    vlSelfRef.top__DOT__clk_vid = vlSelfRef.clk_vid;
    vlSelfRef.top__DOT__ioctl_download = vlSelfRef.ioctl_download;
    vlSelfRef.top__DOT__ioctl_addr = vlSelfRef.ioctl_addr;
    vlSelfRef.top__DOT__ioctl_dout = vlSelfRef.ioctl_dout;
    vlSelfRef.top__DOT__ioctl_index = vlSelfRef.ioctl_index;
    vlSelfRef.top__DOT__ioctl_wr = vlSelfRef.ioctl_wr;
    vlSelfRef.VGA_R = vlSelfRef.top__DOT__VGA_R;
    vlSelfRef.VGA_B = vlSelfRef.top__DOT__VGA_B;
    vlSelfRef.VGA_G = vlSelfRef.top__DOT__VGA_G;
    vlSelfRef.top__DOT__soc__DOT__VGA_R = vlSelfRef.top__DOT__VGA_R;
    vlSelfRef.top__DOT__soc__DOT__VGA_G = vlSelfRef.top__DOT__VGA_G;
    vlSelfRef.top__DOT__soc__DOT__VGA_B = vlSelfRef.top__DOT__VGA_B;
    vlSelfRef.top__DOT__soc__DOT__fb_clk = vlSelfRef.clk_sys;
    vlSelfRef.top__DOT__clk_sys = vlSelfRef.clk_sys;
    vlSelfRef.top__DOT__soc__DOT__cpu_clock = vlSelfRef.clk_sys;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__r = vlSelfRef.top__DOT__soc__DOT__VGA_R;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__g = vlSelfRef.top__DOT__soc__DOT__VGA_G;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__b = vlSelfRef.top__DOT__soc__DOT__VGA_B;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__fb_clk 
        = vlSelfRef.top__DOT__soc__DOT__fb_clk;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_clk 
        = vlSelfRef.top__DOT__soc__DOT__fb_clk;
    vlSelfRef.top__DOT__soc__DOT__clk_sys = vlSelfRef.top__DOT__clk_sys;
    vlSelfRef.top__DOT__soc__DOT__pixel_clock = vlSelfRef.top__DOT__clk_sys;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__clk = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__rom__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__rom__DOT__clock_b 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__clock_b 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__clock_b 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__clock_b 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__hram__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__xram__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__clk = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__clock_b 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_clk;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__pclk = vlSelfRef.top__DOT__soc__DOT__pixel_clock;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__clk 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__clk;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__pclk;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__clk 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__clk;
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
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0xf040ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0xfc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x23ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((0x27ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0xfe1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0xf061ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0xffe1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
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
    SData/*15:0*/ __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter;
    __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter = 0;
    // Body
    __Vdly__top__DOT__soc__DOT__vga__DOT__h_cnt = vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt;
    __Vdly__top__DOT__soc__DOT__vga__DOT__v_cnt = vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt;
    __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter;
    if ((((0x240U > (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt)) 
          & (0x300U > (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))) 
         & ((0x40U < (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt)) 
            & (0x2c0U > (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))))) {
        if ((3U == (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt)))) {
            __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter)));
        }
        vlSelfRef.top__DOT__soc__DOT__vga__DOT__de = 1U;
    } else if ((0x318U == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))) {
        if ((0x241U == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))) {
            __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter = 0U;
        } else if (((0x240U > (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt)) 
                    & (3U != (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))))) {
            __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter 
                = (0xffffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter) 
                              - (IData)(0xa0U)));
        }
        vlSelfRef.top__DOT__soc__DOT__vga__DOT__de = 0U;
    }
    vlSelfRef.VGA_VB = (0x240U <= (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt));
    vlSelfRef.VGA_HB = (0x300U <= (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt));
    __Vdly__top__DOT__soc__DOT__vga__DOT__h_cnt = (
                                                   (0x3cfU 
                                                    == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))
                                                    ? 0U
                                                    : 
                                                   (0x3ffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))));
    if ((0x318U == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))) {
        vlSelfRef.VGA_HS = 0U;
        __Vdly__top__DOT__soc__DOT__vga__DOT__v_cnt 
            = ((0x254U == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))
                ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))));
        if ((0x241U == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))) {
            vlSelfRef.VGA_VS = 1U;
        }
        if ((0x244U == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt))) {
            vlSelfRef.VGA_VS = 0U;
        }
    }
    if ((0x368U == (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))) {
        vlSelfRef.VGA_HS = 1U;
    }
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel = 
        vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter];
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__show_black 
        = (1U & (~ (((0x240U > (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt)) 
                     & (0x300U > (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))) 
                    & ((0x40U < (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt)) 
                       & (0x2c0U > (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt))))));
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter 
        = __Vdly__top__DOT__soc__DOT__vga__DOT__video_counter;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__v_cnt = __Vdly__top__DOT__soc__DOT__vga__DOT__v_cnt;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__h_cnt = __Vdly__top__DOT__soc__DOT__vga__DOT__h_cnt;
    vlSelfRef.top__DOT__VGA_VB = vlSelfRef.VGA_VB;
    vlSelfRef.top__DOT__VGA_HB = vlSelfRef.VGA_HB;
    vlSelfRef.top__DOT__VGA_HS = vlSelfRef.VGA_HS;
    vlSelfRef.top__DOT__VGA_DE = vlSelfRef.top__DOT__soc__DOT__vga__DOT__de;
    vlSelfRef.top__DOT__VGA_VS = vlSelfRef.VGA_VS;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__address_a 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel;
    if (vlSelfRef.top__DOT__soc__DOT__vga__DOT__show_black) {
        vlSelfRef.top__DOT__VGA_R = 0U;
        vlSelfRef.top__DOT__VGA_B = 0U;
        vlSelfRef.top__DOT__VGA_G = 0U;
    } else {
        vlSelfRef.top__DOT__VGA_R = ((0xe0U & (IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel)) 
                                     | ((0x1cU & ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel) 
                                                  >> 3U)) 
                                        | (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel) 
                                                 >> 6U))));
        vlSelfRef.top__DOT__VGA_B = (0xffU & ((0xc0U 
                                               & ((IData)(vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel) 
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
    }
    vlSelfRef.top__DOT__soc__DOT__VGA_VB = vlSelfRef.top__DOT__VGA_VB;
    vlSelfRef.top__DOT__soc__DOT__VGA_HB = vlSelfRef.top__DOT__VGA_HB;
    vlSelfRef.top__DOT__soc__DOT__VGA_HS = vlSelfRef.top__DOT__VGA_HS;
    vlSelfRef.top__DOT__soc__DOT__VGA_DE = vlSelfRef.top__DOT__VGA_DE;
    vlSelfRef.top__DOT__soc__DOT__VGA_VS = vlSelfRef.top__DOT__VGA_VS;
    vlSelfRef.VGA_R = vlSelfRef.top__DOT__VGA_R;
    vlSelfRef.top__DOT__soc__DOT__VGA_R = vlSelfRef.top__DOT__VGA_R;
    vlSelfRef.VGA_B = vlSelfRef.top__DOT__VGA_B;
    vlSelfRef.top__DOT__soc__DOT__VGA_B = vlSelfRef.top__DOT__VGA_B;
    vlSelfRef.VGA_G = vlSelfRef.top__DOT__VGA_G;
    vlSelfRef.top__DOT__soc__DOT__VGA_G = vlSelfRef.top__DOT__VGA_G;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__VGA_VB 
        = vlSelfRef.top__DOT__soc__DOT__VGA_VB;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__VGA_HB 
        = vlSelfRef.top__DOT__soc__DOT__VGA_HB;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__hs = vlSelfRef.top__DOT__soc__DOT__VGA_HS;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__VGA_DE 
        = vlSelfRef.top__DOT__soc__DOT__VGA_DE;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__vs = vlSelfRef.top__DOT__soc__DOT__VGA_VS;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__r = vlSelfRef.top__DOT__soc__DOT__VGA_R;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__b = vlSelfRef.top__DOT__soc__DOT__VGA_B;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__g = vlSelfRef.top__DOT__soc__DOT__VGA_G;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    // Body
    __VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0U;
    __VdlySet__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram_0__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__vram_0__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__vram_1__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__hram__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__xram__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem__v0 = 0U;
    if ((7U != (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_reset_cnt))) {
        vlSelfRef.top__DOT__soc__DOT__cpu_reset_cnt 
            = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_reset_cnt)));
        vlSelfRef.top__DOT__soc__DOT__rom_bank = 1U;
    }
    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ClkEn) {
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
    vlSelfRef.top__DOT__soc__DOT__rom__DOT__q_b = vlSelfRef.top__DOT__soc__DOT__rom__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__rom__DOT__address_b];
    vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__address_b];
    vlSelfRef.top__DOT__soc__DOT__game_rom_data_out 
        = vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT____Vcellinp__game_rom__address_a];
    vlSelfRef.top__DOT__soc__DOT__rom_data_out = vlSelfRef.top__DOT__soc__DOT__rom__DOT__mem
        [(0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    vlSelfRef.top__DOT__soc__DOT__wram0_data_out = 
        vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__mem
        [(0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram_0__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram_0__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram_0__DOT__mem__v0 
            = (0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram_0__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT__wram0_data_out 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    vlSelfRef.top__DOT__soc__DOT__hram_data_out = vlSelfRef.top__DOT__soc__DOT__hram__DOT__mem
        [(0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__hram__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__hram__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__hram__DOT__mem__v0 
            = (0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__hram__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT__hram_data_out 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    vlSelfRef.top__DOT__soc__DOT__xram_data_out = vlSelfRef.top__DOT__soc__DOT__xram__DOT__mem
        [(0x1fffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__xram__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__xram__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__xram__DOT__mem__v0 
            = (0x1fffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__xram__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT__xram_data_out 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    vlSelfRef.top__DOT__soc__DOT__vram0_data_out = 
        vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__mem
        [(0x1fffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__vram_0__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__vram_0__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__vram_0__DOT__mem__v0 
            = (0x1fffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__vram_0__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT__vram0_data_out 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    vlSelfRef.top__DOT__soc__DOT__vram1_data_out = 
        vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__mem
        [(0x1fffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__vram_1__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__vram_1__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__vram_1__DOT__mem__v0 
            = (0x1fffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__vram_1__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT__vram1_data_out 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__1__KET____DOT__wram_N__q_a 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem
        [(0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__1__KET____DOT__wram_N__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem__v0 
            = (0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__1__KET____DOT__wram_N__q_a 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__2__KET____DOT__wram_N__q_a 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem
        [(0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__2__KET____DOT__wram_N__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem__v0 
            = (0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__2__KET____DOT__wram_N__q_a 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__3__KET____DOT__wram_N__q_a 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem
        [(0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__3__KET____DOT__wram_N__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem__v0 
            = (0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__3__KET____DOT__wram_N__q_a 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__4__KET____DOT__wram_N__q_a 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem
        [(0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__4__KET____DOT__wram_N__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem__v0 
            = (0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__4__KET____DOT__wram_N__q_a 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__5__KET____DOT__wram_N__q_a 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem
        [(0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__5__KET____DOT__wram_N__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem__v0 
            = (0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__5__KET____DOT__wram_N__q_a 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__6__KET____DOT__wram_N__q_a 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem
        [(0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__6__KET____DOT__wram_N__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem__v0 
            = (0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__6__KET____DOT__wram_N__q_a 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    }
    vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__7__KET____DOT__wram_N__q_a 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem
        [(0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))];
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__7__KET____DOT__wram_N__wren_a) {
        vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem__v0 
            = (0xfffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr));
        vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__7__KET____DOT__wram_N__q_a 
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
    vlSelfRef.top__DOT__soc__DOT__cpu_reset = (7U != (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_reset_cnt));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__B 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [0U];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__D 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [1U];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__H 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [2U];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__C 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [0U];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__E 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [1U];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__L 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [2U];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__IX 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [3U] << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [3U]);
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__IY 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [7U] << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [7U]);
    vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT__game_rom_data_out;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC];
    vlSelfRef.top__DOT__soc__DOT__rom__DOT__q_a = vlSelfRef.top__DOT__soc__DOT__rom_data_out;
    vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT__wram0_data_out;
    vlSelfRef.top__DOT__soc__DOT__hram__DOT__q_a = vlSelfRef.top__DOT__soc__DOT__hram_data_out;
    vlSelfRef.top__DOT__soc__DOT__xram__DOT__q_a = vlSelfRef.top__DOT__soc__DOT__xram_data_out;
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT__vram0_data_out;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT__vram1_data_out;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__1__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[0U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__1__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__2__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[1U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__2__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__3__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[2U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__3__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__4__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[3U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__4__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__5__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[4U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__5__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__6__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[5U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__6__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__7__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[6U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__7__KET____DOT__wram_N__q_a;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR;
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n) {
        if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ClkEn) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0xeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRS) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate 
                        = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate)));
                }
            }
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
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind = 0U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind = 1U;
            }
        }
        vlSelfRef.top__DOT__soc__DOT__cpu_mreq_n = 1U;
        vlSelfRef.top__DOT__soc__DOT__cpu_rd_n = 1U;
        vlSelfRef.top__DOT__soc__DOT__cpu_iorq_n = 1U;
        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__mcycle))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__tstate))) {
                vlSelfRef.top__DOT__soc__DOT__cpu_mreq_n 
                    = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__intcycle_n)));
                vlSelfRef.top__DOT__soc__DOT__cpu_rd_n 
                    = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__intcycle_n)));
                vlSelfRef.top__DOT__soc__DOT__cpu_iorq_n 
                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__intcycle_n;
            }
        } else {
            if ((1U & ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__tstate) 
                         >> 1U) & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read))) 
                       & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write))))) {
                vlSelfRef.top__DOT__soc__DOT__cpu_mreq_n 
                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__iorq;
                vlSelfRef.top__DOT__soc__DOT__cpu_rd_n = 0U;
                vlSelfRef.top__DOT__soc__DOT__cpu_iorq_n 
                    = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__iorq)));
            }
            if ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__tstate) 
                  >> 1U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write))) {
                vlSelfRef.top__DOT__soc__DOT__cpu_mreq_n 
                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__iorq;
                vlSelfRef.top__DOT__soc__DOT__cpu_iorq_n 
                    = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__iorq)));
            }
        }
        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__tstate))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg 
                = vlSelfRef.top__DOT__soc__DOT__cpu_din;
        }
    } else {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles = 0U;
        vlSelfRef.top__DOT__soc__DOT__cpu_mreq_n = 1U;
        vlSelfRef.top__DOT__soc__DOT__cpu_rd_n = 1U;
        vlSelfRef.top__DOT__soc__DOT__cpu_iorq_n = 1U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16_r = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind = 0U;
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__mreq_n 
        = vlSelfRef.top__DOT__soc__DOT__cpu_mreq_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__rd_n = vlSelfRef.top__DOT__soc__DOT__cpu_rd_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__iorq_n 
        = vlSelfRef.top__DOT__soc__DOT__cpu_iorq_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__di 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__tile_id 
        = vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_id;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__tile_attr 
        = vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_attr;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__pixel_buf_h 
        = vlSelfRef.top__DOT__soc__DOT__ppu__DOT__pixel_buf_h;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__mode 
        = vlSelfRef.top__DOT__soc__DOT__ppu__DOT__mode;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__step 
        = vlSelfRef.top__DOT__soc__DOT__ppu__DOT__step;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__LX 
        = vlSelfRef.top__DOT__soc__DOT__ppu__DOT__LX;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram0_addr 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram0_addr;
    vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram1_addr 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram1_addr;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0;
    __VdlyVal__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyDim0__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0;
    __VdlyDim0__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0;
    __VdlySet__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0 = 0;
    // Body
    __VdlySet__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0 = 0U;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__fb_addr];
    if (vlSelfRef.top__DOT__soc__DOT__fb_wr) {
        __VdlyVal__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__fb_data;
        __VdlyDim0__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0 
            = vlSelfRef.top__DOT__soc__DOT__fb_addr;
        __VdlySet__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0 = 1U;
        vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__q_b 
            = vlSelfRef.top__DOT__soc__DOT__fb_data;
    }
    if (__VdlySet__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__mem[__VdlyDim0__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0] 
            = __VdlyVal__top__DOT__soc__DOT__vga__DOT__fb__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__address_b];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__hram__DOT__q_b = 
        vlSelfRef.top__DOT__soc__DOT__hram__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__hram__DOT__address_b];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__xram__DOT__q_b = 
        vlSelfRef.top__DOT__soc__DOT__xram__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__xram__DOT__address_b];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__address_b];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__address_b];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__address_b];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__address_b];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__address_b];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__address_b];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem
        [vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__address_b];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry 
        = (IData)((1U == (5U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v 
        = (1U & (([&]() {
                    __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In 
                        = (1U & (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r) 
                                  >> 1U) ^ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                                            & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                               >> 4U))));
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
                                  >> 1U) ^ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                                            & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                               >> 4U))));
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v 
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
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
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
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
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
           ^ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)))) {
        if (vlSelfRef.top__DOT__soc__DOT__mbc3_rom_bank_number) {
            vlSelfRef.top__DOT__soc__DOT____Vstrobe0 = 1U;
            vlSelfRef.top__DOT__soc__DOT__rom_bank 
                = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
        }
        if ((0xffU == (0xffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                                >> 8U)))) {
            if (((((((((0x40U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))) 
                       | (0x42U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                      | (0x43U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                     | (0x47U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                    | (0x4fU == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                   | (0x50U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                  | (0x70U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                 | (0xffU == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))))) {
                if ((0x40U != (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                    if ((0x42U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                        vlSelfRef.top__DOT__soc__DOT__io_scy 
                            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
                    }
                    if ((0x42U != (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                        if ((0x43U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                            vlSelfRef.top__DOT__soc__DOT__io_scx 
                                = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
                        }
                        if ((0x43U != (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                            if ((0x47U != (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                                if ((0x4fU != (0xffU 
                                               & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                                    if ((0x50U != (0xffU 
                                                   & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                                        if ((0x70U 
                                             != (0xffU 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                                            vlSelfRef.top__DOT__soc__DOT__io_IE 
                                                = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
                                        }
                                        if ((0x70U 
                                             == (0xffU 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                                            vlSelfRef.top__DOT__soc__DOT__io_svbk 
                                                = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
                                        }
                                    }
                                    if ((0x50U == (0xffU 
                                                   & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                                        vlSelfRef.top__DOT__soc__DOT__io_bios_disable 
                                            = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
                                    }
                                }
                                if ((0x4fU == (0xffU 
                                               & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                                    vlSelfRef.top__DOT__soc__DOT__io_vbk 
                                        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
                                }
                            }
                            if ((0x47U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                                vlSelfRef.top__DOT__soc__DOT__io_bgp 
                                    = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.top__DOT__soc__DOT__bgp_id3 = (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_bgp) 
                                                   >> 6U));
    vlSelfRef.top__DOT__soc__DOT__bgp_id2 = (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_bgp) 
                                                   >> 4U));
    vlSelfRef.top__DOT__soc__DOT__bgp_id1 = (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_bgp) 
                                                   >> 2U));
    vlSelfRef.top__DOT__soc__DOT__bgp_id0 = (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__io_bgp));
    vlSelfRef.top__DOT__soc__DOT__vram0_sel = (1U & 
                                               (~ (IData)(vlSelfRef.top__DOT__soc__DOT__io_vbk)));
    vlSelfRef.top__DOT__soc__DOT__wram_sel = ((0U == 
                                               (7U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__io_svbk)))
                                               ? 1U
                                               : (7U 
                                                  & (IData)(vlSelfRef.top__DOT__soc__DOT__io_svbk)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD 
        = (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS 
        = (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR 
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 0U;
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 0U;
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
                                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                                = (7U 
                                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                  >> 5U)))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
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
                                                            ((1U 
                                                              & (~ 
                                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc) 
                                                                  >> 2U))) 
                                                             && (1U 
                                                                 & ((2U 
                                                                     & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                                      ? 
                                                                     ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                                      >> 4U)
                                                                      : 
                                                                     (~ 
                                                                      ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                                       >> 4U)))
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                                      ? 
                                                                     ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                                      >> 7U)
                                                                      : 
                                                                     (~ 
                                                                      ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                                       >> 7U))))));
                                                    }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                            } else {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 1U;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI = 1U;
                                } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                        if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                            if ((2U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            }
                                        } else {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                            if ((1U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        }
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
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
                                                        ((1U 
                                                          & (~ 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc) 
                                                              >> 2U))) 
                                                         && (1U 
                                                             & ((2U 
                                                                 & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                                  >> 4U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                                   >> 4U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                                  >> 7U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                                   >> 7U))))));
                                                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDSPHL = 1U;
                            } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                                = (5U 
                                                   | (8U 
                                                      & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                                = (4U 
                                                   | (8U 
                                                      & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    }
                                }
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
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc) 
                                                          >> 2U))) 
                                                     && (1U 
                                                         & ((2U 
                                                             & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                              >> 4U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                               >> 4U)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                              >> 7U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                               >> 7U))))));
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
                                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
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
                                        = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                            ? 7U : 
                                           ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                            << 1U));
                                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                            ? 0xbU : 
                                           (1U | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                  << 1U)));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 5U)))) {
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
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc) 
                                                          >> 2U))) 
                                                     && (1U 
                                                         & ((2U 
                                                             & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                              >> 4U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                               >> 4U)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                              >> 7U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                               >> 7U))))));
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
                            } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        }
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
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
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc) 
                                                          >> 2U))) 
                                                     && (1U 
                                                         & ((2U 
                                                             & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                              >> 4U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                               >> 4U)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                              >> 7U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                               >> 7U))))));
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
                                    = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : ((8U 
                                                   & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                  | (1U 
                                                     | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                        << 1U))));
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((8U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                   << 1U)));
                            }
                        } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (5U | 
                                               (8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (4U | 
                                               (8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                }
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
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                             >> 7U))))));
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
                                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 5U)))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
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
                                                        ((1U 
                                                          & (~ 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc) 
                                                              >> 2U))) 
                                                         && (1U 
                                                             & ((2U 
                                                                 & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                                  >> 4U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                                   >> 4U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                                  >> 7U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                                   >> 7U))))));
                                                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout))) {
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
                            }
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) {
                                if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                        if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                            if ((2U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            }
                                        } else {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                            if ((1U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        }
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
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
                                                        ((1U 
                                                          & (~ 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc) 
                                                              >> 2U))) 
                                                         && (1U 
                                                             & ((2U 
                                                                 & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                                  >> 4U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                                   >> 4U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                                  >> 7U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                                   >> 7U))))));
                                                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpXY = 1U;
                        } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (5U | 
                                               (8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (4U | 
                                               (8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                }
                            }
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
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                             >> 7U))))));
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
                                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
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
                                    = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                << 1U));
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : (1U 
                                                  | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                     << 1U)));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 5U)))) {
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
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                             >> 7U))))));
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
                        if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) {
                            if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        }
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
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
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF 
                                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout 
                                                    = 
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc) 
                                                          >> 2U))) 
                                                     && (1U 
                                                         & ((2U 
                                                             & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                              >> 4U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                               >> 4U)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                              >> 7U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                               >> 7U))))));
                                            }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
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
                                = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                    << 1U))));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
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
                                        = (5U | (8U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (4U | (8U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
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
                                            = ((1U 
                                                & (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc) 
                                                    >> 2U))) 
                                               && (1U 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                        >> 4U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                         >> 4U)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                        >> 7U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                         >> 7U))))));
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
                                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                              >> 5U)))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
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
                                                        ((1U 
                                                          & (~ 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc) 
                                                              >> 2U))) 
                                                         && (1U 
                                                             & ((2U 
                                                                 & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                                  >> 4U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                                   >> 4U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                                  >> 7U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                                   >> 7U))))));
                                                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout))) {
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
                            }
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) {
                                if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                        if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                            if ((2U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            } else if (
                                                       (8U 
                                                        & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            }
                                        } else {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                            if ((1U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                            }
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        }
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
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
                                                        ((1U 
                                                          & (~ 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc) 
                                                              >> 2U))) 
                                                         && (1U 
                                                             & ((2U 
                                                                 & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                                  >> 4U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                                   >> 4U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                                  ? 
                                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                                  >> 7U)
                                                                  : 
                                                                 (~ 
                                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                                   >> 7U))))));
                                                }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
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
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI = 1U;
                            }
                        } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (5U | 
                                               (8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (4U | 
                                               (8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                }
                            }
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
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                             >> 7U))))));
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
                                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
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
                                    = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                << 1U));
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : (1U 
                                                  | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                     << 1U)));
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 5U)))) {
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
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                             >> 7U))))));
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
                        if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) {
                            if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        }
                                    } else {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
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
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF 
                                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
                                                __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout 
                                                    = 
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc) 
                                                          >> 2U))) 
                                                     && (1U 
                                                         & ((2U 
                                                             & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                              >> 4U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                               >> 4U)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                              ? 
                                                             ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                              >> 7U)
                                                              : 
                                                             (~ 
                                                              ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                               >> 7U))))));
                                            }(), (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
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
                                = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                    << 1U))));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
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
                                        = (5U | (8U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (4U | (8U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
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
                                            = ((1U 
                                                & (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc) 
                                                    >> 2U))) 
                                               && (1U 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                        >> 4U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                         >> 4U)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                        >> 7U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                         >> 7U))))));
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
                                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
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
                        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 5U)))) {
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
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                             >> 7U))))));
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
                        } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((8U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                } else {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                    } else if ((2U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
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
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
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
                                                = (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc) 
                                                        >> 2U))) 
                                                   && (1U 
                                                       & ((2U 
                                                           & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                            >> 4U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                             >> 4U)))
                                                           : 
                                                          ((1U 
                                                            & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                            ? 
                                                           ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                            >> 7U)
                                                            : 
                                                           (~ 
                                                            ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                             >> 7U))))));
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
                    } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
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
                                        = (5U | (8U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (4U | (8U 
                                                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
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
                                            = ((1U 
                                                & (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc) 
                                                    >> 2U))) 
                                               && (1U 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                        >> 4U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                         >> 4U)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                        >> 7U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                         >> 7U))))));
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
                                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
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
                                = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                            << 1U));
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : (1U | 
                                              ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                         >> 5U)))) {
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
                                            = ((1U 
                                                & (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc) 
                                                    >> 2U))) 
                                               && (1U 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                        >> 4U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                         >> 4U)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                        >> 7U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                         >> 7U))))));
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
                    } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
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
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
                            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
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
                                            = ((1U 
                                                & (~ 
                                                   ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc) 
                                                    >> 2U))) 
                                               && (1U 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                        >> 4U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                         >> 4U)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                        ? 
                                                       ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                        >> 7U)
                                                        : 
                                                       (~ 
                                                        ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                         >> 7U))))));
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
                            = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 0xbU : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                          | (1U | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                   << 1U))));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 7U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                           << 1U)));
                    }
                } else if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
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
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xeU;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
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
                                        = ((1U & (~ 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc) 
                                                   >> 2U))) 
                                           && (1U & 
                                               ((2U 
                                                 & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                 ? 
                                                ((1U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                  >> 4U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                   >> 4U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                   >> 7U))))));
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
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
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
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((6U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                }
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
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
                                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                                }
                            } else {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                                = (0xcU | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            }
                            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xeU;
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                                    = ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                        ? 2U : 3U);
                            } else if ((1U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                        ? 3U : 2U);
                            } else if ((2U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                        ? 2U : 3U);
                            } else if ((3U == (3U & 
                                               ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                        ? 3U : 2U);
                            }
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
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
                                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                            = (4U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0xeU;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 8U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (1U | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                 << 1U))));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 9U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                           << 1U)));
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        if ((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        } else if ((2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
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
                                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 6U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                                = ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        } else if ((2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
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
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 6U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 8U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                             << 1U))));
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 9U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                       << 1U)));
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    if ((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                ? 2U : 3U);
                    } else if ((1U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                ? 3U : 2U);
                    } else if ((2U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                ? 2U : 3U);
                    } else if ((3U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))
                                ? 3U : 2U);
                    }
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
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
                                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                            }
                        } else {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
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
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
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
                        = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 8U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                             << 1U))));
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 9U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                       << 1U)));
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
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
                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
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
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                        }
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                        = (0xcU | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
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
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 1U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
                } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
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
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
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
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                    }
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
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
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write = 1U;
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 6U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 
                    = (4U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
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
                    = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                        ? 8U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | (1U | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                         << 1U))));
            } else if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                        ? 9U : ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
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
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read = 1U;
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
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 1U;
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
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle)))) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 4U;
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeAF;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRS;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__WILL_IORQ 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpXY;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Call 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDSPHL;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CPL;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CCF;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_SCF;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BTR;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RLD;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RRD;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetDI;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__stop 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__no_read 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__write 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__iorq = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__no_read;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Write 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__write;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__iorq;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en) {
        if ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__mode))) {
            if ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__step))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram0_addr 
                    = (0x3fffU & ((IData)(0x1800U) 
                                  + (((IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__LX) 
                                      >> 3U) + (0x3fe0U 
                                                & VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_LY), 2U)))));
                vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram1_addr 
                    = (0x3fffU & ((IData)(0x1800U) 
                                  + (((IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__LX) 
                                      >> 3U) + (0x3fe0U 
                                                & VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_LY), 2U)))));
            } else if ((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__step))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__tile_id 
                    = vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data;
                vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__tile_attr 
                    = vlSelfRef.top__DOT__soc__DOT__ppu_vram1_data;
                if ((0xffU > (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data))) {
                    if ((0x80U <= (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data))) {
                        if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram1_data))) {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram1_addr 
                                = (0x3fffU & ((IData)(0x800U) 
                                              + (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data), 4U) 
                                                 + 
                                                 VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U))));
                        } else {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram0_addr 
                                = (0x3fffU & ((IData)(0x800U) 
                                              + (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data), 4U) 
                                                 + 
                                                 VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U))));
                        }
                    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__io_lcdc))) {
                        if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram1_data))) {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram1_addr 
                                = (0x3fffU & (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data), 4U) 
                                              + VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U)));
                        } else {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram0_addr 
                                = (0x3fffU & (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data), 4U) 
                                              + VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U)));
                        }
                    } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram1_data))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram1_addr 
                            = (0x3fffU & ((IData)(0x1000U) 
                                          + (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data), 4U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U))));
                    } else {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram0_addr 
                            = (0x3fffU & ((IData)(0x1000U) 
                                          + (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data), 4U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U))));
                    }
                }
            } else if ((4U == (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__step))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__pixel_buf_h 
                    = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_attr))
                        ? (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram1_data)
                        : (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data));
                if ((0xffU > (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_id))) {
                    if ((0x80U <= (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_id))) {
                        if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_attr))) {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram1_addr 
                                = (0x3fffU & ((IData)(0x801U) 
                                              + (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_id), 4U) 
                                                 + 
                                                 VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U))));
                        } else {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram0_addr 
                                = (0x3fffU & ((IData)(0x801U) 
                                              + (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_id), 4U) 
                                                 + 
                                                 VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U))));
                        }
                    } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__io_lcdc))) {
                        if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_attr))) {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram1_addr 
                                = (0x3fffU & ((IData)(0x801U) 
                                              + (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_id), 4U) 
                                                 + 
                                                 VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U))));
                        } else {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram0_addr 
                                = (0x3fffU & ((IData)(0x801U) 
                                              + (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_id), 4U) 
                                                 + 
                                                 VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U))));
                        }
                    } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_attr))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram1_addr 
                            = (0x3fffU & ((IData)(0x1001U) 
                                          + (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_id), 4U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U))));
                    } else {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram0_addr 
                            = (0x3fffU & ((IData)(0x1001U) 
                                          + (VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_id), 4U) 
                                             + VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY), 1U))));
                    }
                }
            } else if ((6U == (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__step))) {
                vlSelfRef.top__DOT__soc__DOT__fb_wr = 1U;
                vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__mode = 1U;
            }
            vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__step 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__step)));
        }
        if ((1U == (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__mode))) {
            if ((8U > (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY))) {
                vlSelfRef.top__DOT__soc__DOT__ppu__DOT__pixel 
                    = ((2U & (((IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__pixel_buf_h) 
                               >> (7U & ((IData)(7U) 
                                         - (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileX)))) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__pixel_buf_l) 
                                               >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileX))))));
                vlSelfRef.top__DOT__soc__DOT__fb_addr 
                    = (0x7fffU & (((IData)(0xa0U) * (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_LY)) 
                                  + (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__LX)));
                vlSelfRef.top__DOT__soc__DOT__fb_data 
                    = ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__pixel))
                        ? ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__pixel))
                            ? 0U : 0x4aU) : ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__pixel))
                                              ? 0xb7U
                                              : 0xffU));
                if ((8U > (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileX))) {
                    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileX 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileX)));
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__LX 
                        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__LX)));
                } else {
                    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileX = 0U;
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__mode = 0U;
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__step = 0U;
                    if ((0xa0U <= (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__LX))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__LX = 0U;
                        vlSelfRef.top__DOT__soc__DOT__ppu_LY 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_LY)));
                        vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY)));
                    } else {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__mode = 2U;
                    }
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY = 0U;
                vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__mode = 0U;
            }
        }
        if ((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__mode))) {
            if ((0xffU == (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__step))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__mode = 0U;
                vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__step = 0U;
            } else {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__step 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__soc__DOT__ppu__DOT__step)));
            }
        }
    } else {
        vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__LX = 0U;
        vlSelfRef.top__DOT__soc__DOT__ppu_LY = 0U;
        vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileX = 0U;
        vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tileY = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__step = 0U;
        vlSelfRef.top__DOT__soc__DOT__fb_wr = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__mode = 0U;
    }
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_id 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__tile_id;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__tile_attr 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__tile_attr;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__pixel_buf_h 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__pixel_buf_h;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__mode = vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__mode;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__step = vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__step;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__LX = vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu__DOT__LX;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__fb_wr = vlSelfRef.top__DOT__soc__DOT__fb_wr;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_wr = vlSelfRef.top__DOT__soc__DOT__fb_wr;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__fb_addr 
        = vlSelfRef.top__DOT__soc__DOT__fb_addr;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_addr 
        = vlSelfRef.top__DOT__soc__DOT__fb_addr;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__address_b 
        = vlSelfRef.top__DOT__soc__DOT__fb_addr;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__fb_data 
        = vlSelfRef.top__DOT__soc__DOT__fb_data;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_data 
        = vlSelfRef.top__DOT__soc__DOT__fb_data;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__LY = vlSelfRef.top__DOT__soc__DOT__ppu_LY;
    vlSelfRef.top__DOT__soc__DOT__io_IF = 0U;
    if ((0xa0U < (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_LY))) {
        vlSelfRef.top__DOT__soc__DOT__io_IF = 1U;
    }
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__wren_b 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_wr;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__data_b 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_data;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram_0__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram_0__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram_0__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__hram__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__hram__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__hram__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__hram__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__xram__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__xram__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__xram__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__xram__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem__v0;
    }
    vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data = 
        vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__mem
        [(0x1fffU & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_addr))];
    vlSelfRef.top__DOT__soc__DOT__ppu_vram1_data = 
        vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__mem
        [(0x1fffU & (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram1_addr))];
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__vram_0__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__vram_0__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__vram_0__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__top__DOT__soc__DOT__vram_1__DOT__mem__v0) {
        vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__mem[vlSelfRef.__VdlyDim0__top__DOT__soc__DOT__vram_1__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__top__DOT__soc__DOT__vram_1__DOT__mem__v0;
    }
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__vram0_data 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data;
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__vram1_data 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram1_data;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram1_data;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__vram_data_out = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__io_vbk))
                                                    ? (IData)(vlSelfRef.top__DOT__soc__DOT__vram1_data_out)
                                                    : (IData)(vlSelfRef.top__DOT__soc__DOT__vram0_data_out));
    vlSelfRef.top__DOT__soc__DOT__wramN_data_out = 
        ((6U >= (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel) 
                       - (IData)(1U)))) ? vlSelfRef.top__DOT__soc__DOT__wramN_q_a
         [(7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel) 
                 - (IData)(1U)))] : 0xffU);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)))) {
        if ((0xffU == (0xffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                                >> 8U)))) {
            if (((((((((0x40U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))) 
                       | (0x42U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                      | (0x43U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                     | (0x47U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                    | (0x4fU == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                   | (0x50U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                  | (0x70U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) 
                 | (0xffU == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))))) {
                if ((0x40U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
                    vlSelfRef.top__DOT__soc__DOT__io_lcdc 
                        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
                }
            }
        }
    }
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__window_tile_map 
        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_lcdc) 
                 >> 6U));
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__window_en 
        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_lcdc) 
                 >> 5U));
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__bg_char_data_sel 
        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_lcdc) 
                 >> 4U));
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__bg_code_area_sel 
        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_lcdc) 
                 >> 3U));
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__obj_size 
        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_lcdc) 
                 >> 2U));
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__obj_en 
        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_lcdc) 
                 >> 1U));
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__bg_win_prio 
        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_lcdc) 
                 >> 0U));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en 
        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_lcdc) 
                 >> 7U));
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__lcd_ppu_en 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__ppu_vram0_addr = vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram0_addr;
    vlSelfRef.top__DOT__soc__DOT__ppu_vram1_addr = vlSelfRef.__Vdly__top__DOT__soc__DOT__ppu_vram1_addr;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__vram0_addr 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram0_addr;
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__address_b 
        = (0x1fffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_addr) 
                      >> 0U));
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__vram1_addr 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram1_addr;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__address_b 
        = (0x1fffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram1_addr) 
                      >> 0U));
}

extern const VlUnpacked<CData/*3:0*/, 32> Vtop__ConstPool__TABLE_h2021f8bd_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h752762e2_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_he8172e5c_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h85882738_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
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
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n) {
        vlSelfRef.top__DOT__soc__DOT__cpu_wr_n = 1U;
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__mcycle)))) {
            if ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__tstate) 
                  >> 1U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write))) {
                vlSelfRef.top__DOT__soc__DOT__cpu_wr_n = 0U;
            }
        }
        if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ClkEn) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Z16_r 
                = ((IData)(((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet)) 
                            & (1U == (5U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op))))) 
                   & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                      >> 2U));
            if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0xeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
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
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
                            = ((0xff00U & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_din));
                    } else {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR 
                            = vlSelfRef.top__DOT__soc__DOT__cpu_din;
                    }
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet = 0U;
                    if ((0U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                        if ((3U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State 
                                = ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR))
                                    ? 2U : 1U);
                        } else if ((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State = 0U;
                        }
                        if ((3U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet 
                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix;
                        }
                    } else {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State = 0U;
                    }
                }
            } else {
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__T_Res) {
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CPL) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC 
                            = (0xffU & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (4U & ((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC) 
                                            >> 5U)) 
                                        << 2U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0x20U | (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xfdU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (2U & ((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC) 
                                            >> 3U)) 
                                        << 1U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0x40U | (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                    }
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump) {
                        vlSelfRef.top__DOT__soc__DOT__cpu_addr 
                            = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg) 
                                << 8U) | (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
                            = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg) 
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
                                                   (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)))))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP)
                                                   : 
                                                  (0xff00U 
                                                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg))))
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
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC)
                                                   : 
                                                  (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i) 
                                                    | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq))
                                                    ? 
                                                   (0xff00U 
                                                    | (0xffU 
                                                       & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC)))
                                                    : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC))))));
                    }
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CCF) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xefU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (0x10U & ((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                               >> 4U)) 
                                           << 4U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC) 
                                        >> 3U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xdfU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (0x20U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                           << 1U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xfdU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (2U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC) 
                                        >> 2U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0xbfU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                    }
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_SCF) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0x10U | (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC) 
                                        >> 3U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0xdfU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xfdU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (2U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC) 
                                        >> 2U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0xbfU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
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
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
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
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
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
                if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                    if ((1U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet = 1U;
                    }
                }
            }
            if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD))) {
                    if ((0U == (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xfeU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I;
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0x7fU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I)) 
                                  << 7U));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xf7U & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (8U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I) 
                                        >> 4U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0x9fU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                    } else if ((1U == (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xfeU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC = 0U;
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0x7fU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I)) 
                                  << 7U));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = ((0xf7U & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                               | (8U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I) 
                                        >> 4U)));
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                            = (0x9fU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
                    } else if ((2U == (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I 
                            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC;
                    }
                }
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ) {
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0xff00U & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg));
                }
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW) {
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0xffU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg) 
                              << 8U));
                }
            }
            if ((((~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ)) 
                  & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r)) 
                 | (9U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = ((0x1fU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                       | (0xe0U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)));
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC_r)))) {
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                        = ((0xefU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                           | (0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)));
                }
            }
            if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__T_Res) 
                 & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = ((0x1fU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                       | ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg)) 
                          << 7U));
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = ((0xf7U & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                       | (8U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg) 
                                >> 4U)));
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = ((0xfeU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                       | (1U & (~ VL_REDXOR_8(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg))));
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
                    = ((0xf9U & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                       | ((4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q) 
                                 << 1U)) | (2U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q) 
                                                  >> 2U))));
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = (0x9fU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F));
            }
            if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC) 
                 | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT))) {
                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
                    = ((0xfeU & (IData)(vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDecZ));
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
            if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__T_Res) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r 
                    = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg) 
                        << 4U) | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To));
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0x17U;
                }
            }
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0xeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__T_Res) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BTR_r 
                        = ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT) 
                             | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC)) 
                            | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BTR)) 
                           & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__No_BTR)));
                }
            }
        }
        if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__cen) {
            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 
                = ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__T_Res))) 
                   && ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait) 
                       | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i) 
                          & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2)))));
            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 
                = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1) 
                   & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__T_Res)));
            if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI) {
                    if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle)))) {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 1U;
                    }
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = 1U;
                }
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN) {
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2;
                }
            }
            if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetDI) {
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
                }
            }
            if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle) 
                 | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF = 0U;
            }
            if ((1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                       & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                          >> 2U)))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__m1_n = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusReq_s) 
                          & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck))))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck = 0U;
                if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__T_Res) {
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF = 1U;
                    }
                    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusReq_s) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck = 1U;
                    } else {
                        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate = 2U;
                        if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NextIs_XY_Fetch) {
                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc 
                                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout 
                                = ((0x40U & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                    ? 7U : ((0x20U 
                                             & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                             ? 6U : 
                                            ((0x10U 
                                              & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                              ? 5U : 
                                             ((8U & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                               ? 4U
                                               : ((4U 
                                                   & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                   ? 3U
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                    ? 2U
                                                    : 1U))))));
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M 
                                = __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout;
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle = 0x20U;
                        } else if ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M)));
                            __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout 
                                = ((1U == (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                    ? 1U : ((2U == (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                             ? 2U : 
                                            ((3U == (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                              ? 4U : 
                                             ((4U == (IData)(__Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                               ? 8U
                                               : ((5U 
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
                                                     : 0x7fU)))))));
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle 
                                = __Vfunc_top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout;
                        } else if ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_mcycle) 
                                     | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__No_BTR)) 
                                    | ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 1U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ)) 
                                       & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDecZ)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__m1_n = 0U;
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle = 1U;
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle = 0U;
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle = 0U;
                            if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMI_s) 
                                 & (0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix)))) {
                                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle = 1U;
                                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                            } else if (((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1) 
                                          & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__INT_s)) 
                                         & (0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix))) 
                                        & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI)))) {
                                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle = 1U;
                                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                                vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
                            }
                        } else {
                            vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle 
                                = ((0x7eU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                             << 1U)) 
                                   | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U)));
                        }
                    }
                } else if ((1U & ((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait) 
                                      & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2)))) 
                                  & (~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i) 
                                        & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1))))))) {
                    vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate 
                        = ((0x7eU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                     << 1U)) | (1U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 6U)));
                }
            }
            if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__m1_n = 0U;
            }
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__No_BTR 
                = ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT) 
                     & ((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                            >> 4U)) | (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)))) 
                    | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC) 
                       & (((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                               >> 4U)) | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                          >> 7U)) | 
                          (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))))) 
                   | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BTR) 
                      & ((~ ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR) 
                             >> 4U)) | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                        >> 7U))));
        }
    } else {
        vlSelfRef.top__DOT__soc__DOT__cpu_wr_n = 1U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F = 0xffU;
        vlSelfRef.top__DOT__soc__DOT__cpu_addr = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State = 0U;
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
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BTR_r = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle = 1U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate = 1U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0U;
        vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__m1_n = 1U;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__No_BTR = 0U;
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__wr_n = vlSelfRef.top__DOT__soc__DOT__cpu_wr_n;
    vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__hram__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__xram__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__dout = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Z16_r;
    vlSelfRef.top__DOT__soc__DOT__rom__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__address_a 
        = (0x1fffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                      >> 0U));
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__address_a 
        = (0x1fffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                      >> 0U));
    vlSelfRef.top__DOT__soc__DOT__hram__DOT__address_a 
        = (0x7fU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                    >> 0U));
    vlSelfRef.top__DOT__soc__DOT__xram__DOT__address_a 
        = (0x1fffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                      >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__mbc3_rom_bank_number 
        = (1U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                        >> 0xdU)));
    vlSelfRef.top__DOT__soc__DOT__mbc3_ram_and_timer_en 
        = (0U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                        >> 0xdU)));
    vlSelfRef.top__DOT__soc__DOT__mbc3_ram_bank_number_or_rtc 
        = (2U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                        >> 0xdU)));
    vlSelfRef.top__DOT__soc__DOT__mbc3_latch_clock_data 
        = (3U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                        >> 0xdU)));
    vlSelfRef.top__DOT__soc__DOT__mbc3_rtc_register 
        = (5U == (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                        >> 0xdU)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__A = vlSelfRef.top__DOT__soc__DOT__cpu_addr;
    vlSelfRef.top__DOT__soc__DOT__io_sel = ((0xff00U 
                                             <= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                            & (0xff7fU 
                                               >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)));
    vlSelfRef.top__DOT__soc__DOT__game_rom_sel = ((0x3fffU 
                                                   >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                                  | ((0x4000U 
                                                      <= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                                     & (0x7fffU 
                                                        >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr))));
    vlSelfRef.top__DOT__soc__DOT__hram_sel = ((0xff80U 
                                               <= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                              & (0xfffeU 
                                                 >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)));
    vlSelfRef.top__DOT__soc__DOT__xram_sel = ((0xa000U 
                                               <= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                              & (0xbfffU 
                                                 >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)));
    vlSelfRef.top__DOT__soc__DOT__wram_0_sel = ((0xc000U 
                                                 <= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                                & (0xcfffU 
                                                   >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)));
    vlSelfRef.top__DOT__soc__DOT__vram_sel = ((0x8000U 
                                               <= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                              & (0x9fffU 
                                                 >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)));
    vlSelfRef.top__DOT__soc__DOT__wram_n_group_sel 
        = ((0xd000U <= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
           & (0xdfffU >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__dout 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__dout;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__A 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__A;
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__hram__wren_a 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT__hram_sel));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__xram__wren_a 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT__xram_sel));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram_0__wren_a 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT__wram_0_sel));
    vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_7 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT__vram_sel));
    vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_8 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT__wram_n_group_sel));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlSelfRef.top__DOT__soc__DOT__hram__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__hram__wren_a;
    vlSelfRef.top__DOT__soc__DOT__xram__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__xram__wren_a;
    vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram_0__wren_a;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__ISet 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__m1_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__m1_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__halt_n 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__busak_n 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__intcycle_n 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle)));
    __Vtableidx1 = ((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Oldnmi_n) 
                      << 4U) | (((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_int_n) 
                                 << 3U) | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__cen) 
                        << 1U) | (IData)(vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n)));
    if ((1U & Vtop__ConstPool__TABLE_h2021f8bd_0[__Vtableidx1])) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusReq_s 
            = Vtop__ConstPool__TABLE_h752762e2_0[__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_h2021f8bd_0[__Vtableidx1])) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__INT_s 
            = Vtop__ConstPool__TABLE_h752762e2_0[__Vtableidx1];
    }
    if ((4U & Vtop__ConstPool__TABLE_h2021f8bd_0[__Vtableidx1])) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMI_s 
            = Vtop__ConstPool__TABLE_he8172e5c_0[__Vtableidx1];
    }
    if ((8U & Vtop__ConstPool__TABLE_h2021f8bd_0[__Vtableidx1])) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Oldnmi_n 
            = Vtop__ConstPool__TABLE_h85882738_0[__Vtableidx1];
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__halt_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__halt_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__busak_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__busak_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__intcycle_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__intcycle_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IR 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR 
        = (0x3fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__IR 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR;
}
