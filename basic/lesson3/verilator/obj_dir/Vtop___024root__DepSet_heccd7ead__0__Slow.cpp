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
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__cpu_clock__0 
        = vlSelfRef.top__DOT__soc__DOT__cpu_clock;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_sys__0 = vlSelfRef.clk_sys;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__cpu_mreq_n__0 
        = vlSelfRef.top__DOT__soc__DOT__cpu_mreq_n;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en__0 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en;
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
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__soc__DOT__xram__DOT__clock_b__0 
        = vlSelfRef.top__DOT__soc__DOT__xram__DOT__clock_b;
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
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__cen = 1U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__rfsh_n = 1U;
    VL_WRITEF_NX("Loading rom.\n29100100721075576\n",0);
    VL_READMEM_N(true, 8, 4096, 0, std::string{"gbc.hex"}
                 ,  &(vlSelfRef.top__DOT__soc__DOT__rom__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("Loading rom.\n 8111420100208337163640692565368\n",0);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6c616b65U;
    __Vtemp_1[2U] = 0x61697279U;
    __Vtemp_1[3U] = 0x66U;
    VL_READMEM_N(true, 8, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__wren_a = 0U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__wait_n = 1U;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__busrq_n = 1U;
    vlSelfRef.top__DOT__soc__DOT__rom__DOT__wren_a = 0U;
    vlSelfRef.top__DOT__soc__DOT__rom__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__rom__DOT__byteena_a = 1U;
    vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__wren_a = 0U;
    vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__hram__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__xram__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__wren_b = 0U;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__wren_b = 0U;
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
    // Body
    vlSelfRef.top__DOT__reset = vlSelfRef.reset;
    vlSelfRef.top__DOT__clk_vid = vlSelfRef.clk_vid;
    vlSelfRef.top__DOT__ioctl_download = vlSelfRef.ioctl_download;
    vlSelfRef.top__DOT__ioctl_addr = vlSelfRef.ioctl_addr;
    vlSelfRef.top__DOT__ioctl_dout = vlSelfRef.ioctl_dout;
    vlSelfRef.top__DOT__ioctl_index = vlSelfRef.ioctl_index;
    vlSelfRef.top__DOT__ioctl_wait = vlSelfRef.ioctl_wait;
    vlSelfRef.top__DOT__ioctl_wr = vlSelfRef.ioctl_wr;
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
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__fb_wr = vlSelfRef.top__DOT__soc__DOT__fb_wr;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__fb_addr 
        = vlSelfRef.top__DOT__soc__DOT__fb_addr;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__fb_data 
        = vlSelfRef.top__DOT__soc__DOT__fb_data;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__vram0_addr 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram0_addr;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__vram0_data 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__vram1_addr 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram1_addr;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__vram1_data 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram1_data;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__LY = vlSelfRef.top__DOT__soc__DOT__ppu_LY;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_addr 
        = vlSelfRef.top__DOT__soc__DOT__fb_addr;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__address_a 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__video_counter;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__pixel;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__address_b 
        = vlSelfRef.top__DOT__soc__DOT__fb_addr;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__mreq_n 
        = vlSelfRef.top__DOT__soc__DOT__cpu_mreq_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__iorq_n 
        = vlSelfRef.top__DOT__soc__DOT__cpu_iorq_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__rd_n = vlSelfRef.top__DOT__soc__DOT__cpu_rd_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__wr_n = vlSelfRef.top__DOT__soc__DOT__cpu_wr_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__m1_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__m1_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__rfsh_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__rfsh_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__cen 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__cen;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__wait_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__wait_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__nmi_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__nmi_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__busrq_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__busrq_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__di 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__stop 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__WILL_IORQ 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE;
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeAF;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRS;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ;
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IR 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__F 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16_r;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Z16_r;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__ISet 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BusA 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BusB 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__F_In 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC;
    vlSelfRef.top__DOT__soc__DOT__rom__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__rom__DOT__q_a = vlSelfRef.top__DOT__soc__DOT__rom_data_out;
    vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT__game_rom_data_out;
    vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT__wram0_data_out;
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__address_a 
        = (0x1fffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                      >> 0U));
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT__vram0_data_out;
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__address_b 
        = (0x1fffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram0_addr) 
                      >> 0U));
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram0_data;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__address_a 
        = (0x1fffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                      >> 0U));
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT__vram1_data_out;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__address_b 
        = (0x1fffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__ppu_vram1_addr) 
                      >> 0U));
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__q_b 
        = vlSelfRef.top__DOT__soc__DOT__ppu_vram1_data;
    vlSelfRef.top__DOT__soc__DOT__hram__DOT__address_a 
        = (0x7fU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                    >> 0U));
    vlSelfRef.top__DOT__soc__DOT__hram__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__hram__DOT__q_a = vlSelfRef.top__DOT__soc__DOT__hram_data_out;
    vlSelfRef.top__DOT__soc__DOT__xram__DOT__address_a 
        = (0x1fffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                      >> 0U));
    vlSelfRef.top__DOT__soc__DOT__xram__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__xram__DOT__q_a = vlSelfRef.top__DOT__soc__DOT__xram_data_out;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__1__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__2__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__3__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__4__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__5__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__6__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__address_a 
        = (0xfffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                     >> 0U));
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__data_a 
        = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__q_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__7__KET____DOT__wram_N__q_a;
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
    vlSelfRef.top__DOT__soc__DOT__bgp_id3 = (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_bgp) 
                                                   >> 6U));
    vlSelfRef.top__DOT__soc__DOT__bgp_id2 = (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_bgp) 
                                                   >> 4U));
    vlSelfRef.top__DOT__soc__DOT__bgp_id1 = (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_bgp) 
                                                   >> 2U));
    vlSelfRef.top__DOT__soc__DOT__bgp_id0 = (3U & (IData)(vlSelfRef.top__DOT__soc__DOT__io_bgp));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__B 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [0U];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__C 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [0U];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__D 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [1U];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__E 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [1U];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__H 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [2U];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__L 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [2U];
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
                                                     != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles)) 
                                                    || (1U 
                                                        & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                                                           >> 6U))))))))));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC];
    vlSelfRef.top__DOT__soc__DOT__game_rom_addr = (
                                                   (((0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                                                          >> 0xeU)))
                                                      ? 0U
                                                      : 
                                                     (0x1ffU 
                                                      & (IData)(vlSelfRef.top__DOT__soc__DOT__rom_bank))) 
                                                    << 0xeU) 
                                                   | (0x3fffU 
                                                      & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__IX 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [3U] << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [3U]);
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__IY 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [7U] << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [7U]);
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle) 
         | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
        }
    }
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_wr = vlSelfRef.top__DOT__soc__DOT__fb_wr;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_data 
        = vlSelfRef.top__DOT__soc__DOT__fb_data;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__A = vlSelfRef.top__DOT__soc__DOT__cpu_addr;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__dout = vlSelfRef.top__DOT__soc__DOT__cpu_dout;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__int_n 
        = vlSelfRef.top__DOT__soc__DOT__cpu_int_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__no_read 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__no_read;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__write 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__write;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__mcycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__tstate 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__halt_n 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__busak_n 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__intcycle_n 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__iorq = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i;
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en 
        = (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__io_lcdc) 
                 >> 7U));
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
                                                     != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates)) 
                                                    || (1U 
                                                        & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                                                           >> 6U))))))))));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ClkEn 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__cen) 
           & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
        = (((0U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State)) 
            & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind))) 
           & (((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To)) 
               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                  & (0xcbU == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) 
              | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                 & (0x36U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__game_rom__address_a 
        = ((((0U == (3U & ((IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr) 
                           >> 0xeU))) ? 0U : (0xffU 
                                              & (IData)(vlSelfRef.top__DOT__soc__DOT__rom_bank))) 
            << 0xeU) | (0x3fffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)));
    vlSelfRef.top__DOT__VGA_HS = vlSelfRef.VGA_HS;
    vlSelfRef.top__DOT__VGA_VS = vlSelfRef.VGA_VS;
    vlSelfRef.top__DOT__VGA_HB = vlSelfRef.VGA_HB;
    vlSelfRef.top__DOT__VGA_VB = vlSelfRef.VGA_VB;
    vlSelfRef.top__DOT__VGA_DE = vlSelfRef.top__DOT__soc__DOT__vga__DOT__de;
    vlSelfRef.top__DOT__soc__DOT__vram0_sel = (1U & 
                                               (~ (IData)(vlSelfRef.top__DOT__soc__DOT__io_vbk)));
    vlSelfRef.top__DOT__soc__DOT__fb_clk = vlSelfRef.clk_sys;
    vlSelfRef.top__DOT__soc__DOT__cpu_reset = (7U != (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_reset_cnt));
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
    vlSelfRef.top__DOT__clk_sys = vlSelfRef.clk_sys;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC] 
            << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC]);
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
    vlSelfRef.top__DOT__soc__DOT__bios_rom_sel = ((0U 
                                                   == (IData)(vlSelfRef.top__DOT__soc__DOT__io_bios_disable)) 
                                                  & ((0xffU 
                                                      >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                                     | ((0x200U 
                                                         <= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                                        & (0x8ffU 
                                                           >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))));
    vlSelfRef.top__DOT__soc__DOT__vram_data_out = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__soc__DOT__io_vbk))
                                                    ? (IData)(vlSelfRef.top__DOT__soc__DOT__vram1_data_out)
                                                    : (IData)(vlSelfRef.top__DOT__soc__DOT__vram0_data_out));
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
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[0U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__1__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[1U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__2__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[2U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__3__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[3U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__4__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[4U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__5__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[5U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__6__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__wramN_q_a[6U] = vlSelfRef.top__DOT__soc__DOT____Vcellout__wram___BRA__7__KET____DOT__wram_N__q_a;
    vlSelfRef.top__DOT__soc__DOT__vram_sel = ((0x8000U 
                                               <= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                              & (0x9fffU 
                                                 >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg;
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
    vlSelfRef.top__DOT__soc__DOT__cpu_clock = vlSelfRef.clk_sys;
    vlSelfRef.top__DOT__soc__DOT__wram_n_group_sel 
        = ((0xd000U <= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
           & (0xdfffU >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)));
    vlSelfRef.top__DOT__soc__DOT__wram_sel = ((0U == 
                                               (7U 
                                                & (IData)(vlSelfRef.top__DOT__soc__DOT__io_svbk)))
                                               ? 1U
                                               : (7U 
                                                  & (IData)(vlSelfRef.top__DOT__soc__DOT__io_svbk)));
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__wren_b 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_wr;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__data_b 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_data;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__A 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__A;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__dout 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__dout;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__int_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__int_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__no_read;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Write 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__write;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mc 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__mcycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ts 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__tstate;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__halt_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__halt_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__busak_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__busak_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__intcycle_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__intcycle_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__iorq;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__lcd_ppu_en 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__T_Res 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__CEN 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ClkEn;
    vlSelfRef.top__DOT__soc__DOT__game_rom__DOT__address_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__game_rom__address_a;
    vlSelfRef.top__DOT__soc__DOT__VGA_HS = vlSelfRef.top__DOT__VGA_HS;
    vlSelfRef.top__DOT__soc__DOT__VGA_VS = vlSelfRef.top__DOT__VGA_VS;
    vlSelfRef.top__DOT__soc__DOT__VGA_HB = vlSelfRef.top__DOT__VGA_HB;
    vlSelfRef.top__DOT__soc__DOT__VGA_VB = vlSelfRef.top__DOT__VGA_VB;
    vlSelfRef.top__DOT__soc__DOT__VGA_DE = vlSelfRef.top__DOT__VGA_DE;
    vlSelfRef.top__DOT__soc__DOT__ppu__DOT__fb_clk 
        = vlSelfRef.top__DOT__soc__DOT__fb_clk;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_clk 
        = vlSelfRef.top__DOT__soc__DOT__fb_clk;
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_reset)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__WEH 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEH;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__WEL 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEL;
    vlSelfRef.VGA_R = vlSelfRef.top__DOT__VGA_R;
    vlSelfRef.top__DOT__soc__DOT__VGA_R = vlSelfRef.top__DOT__VGA_R;
    vlSelfRef.VGA_B = vlSelfRef.top__DOT__VGA_B;
    vlSelfRef.top__DOT__soc__DOT__VGA_B = vlSelfRef.top__DOT__VGA_B;
    vlSelfRef.VGA_G = vlSelfRef.top__DOT__VGA_G;
    vlSelfRef.top__DOT__soc__DOT__VGA_G = vlSelfRef.top__DOT__VGA_G;
    vlSelfRef.top__DOT__soc__DOT__clk_sys = vlSelfRef.top__DOT__clk_sys;
    vlSelfRef.top__DOT__soc__DOT__pixel_clock = vlSelfRef.top__DOT__clk_sys;
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__hram__wren_a 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT__hram_sel));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__xram__wren_a 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT__xram_sel));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram_0__wren_a 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT__wram_0_sel));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB 
        = (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH) 
            & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
               >> 3U)) ? (1U | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate) 
                                << 2U)) : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB_r));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB] 
            << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB]);
    vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_7 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT__vram_sel));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16_B 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE)
            ? ((0xff00U & ((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg))
            : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BTR_r)
                ? 0xfffeU : 1U));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16 
        = (0xffffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC) 
                      + (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16_B)));
    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate))) {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_A 
            = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC;
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_B 
            = ((0xff00U & ((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg));
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
        [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
        [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA];
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA] 
            << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA]);
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__IR 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0xffU;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0x1ffU;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xf0U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)) 
                           | (0xfU & ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))
                                       ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                          >> 4U) : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB))));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = (0x9fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xf9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                     >> 3U)) | (2U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                                   >> 2U))));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              << 7U));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (8U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                    >> 4U)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (~ VL_REDXOR_8(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))));
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xf0U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)) 
                       | (0xfU & ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))
                                   ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                      >> 4U) : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB))));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0x9fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                 >> 3U)) | (2U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                                  >> 2U))));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          << 7U));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                >> 4U)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (~ VL_REDXOR_8(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))));
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xcfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x30U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                    = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA;
                if ((0x40U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F))) {
                    if ((1U & ((9U < (0xfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                  >> 5U)))) {
                        if ((5U < (0xfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))) {
                            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                                = (0xdfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                        }
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = ((0x100U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                               | (0xffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                           - (IData)(6U))));
                    }
                    if ((1U & ((0x99U < (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)) 
                               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                         - (IData)(0x160U)));
                    }
                } else {
                    if ((1U & ((9U < (0xfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                  >> 5U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xdfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                               | ((9U < (0xfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                                  << 5U));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(6U) 
                                         + (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                    if ((1U & ((9U < (0x1fU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                               >> 4U))) 
                               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(0x60U) 
                                         + (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                }
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                 >> 3U)) | (2U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                                  >> 2U))));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x10U & ((0xfffffff0U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)) 
                                   | (0xffffff0U & 
                                      ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                       >> 4U)))));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                          << 7U));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                >> 4U)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (~ VL_REDXOR_16(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))));
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))
                    ? ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                       & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)))
                    : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                       | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)));
        } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                   & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                            >> 4U)));
            if ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0x80U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (1U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            }
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0x20U | (0x9fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0xf9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            if ((6U != (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR)))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                 >> 3U)) | (2U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                                  >> 2U))));
            }
        } else {
            if ((0x20U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                    if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (0x7fU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                        >> 1U));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                               | (0x10U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                           << 4U)));
                    } else {
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = ((0xf0U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                         << 4U)) | 
                               (0xfU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                        >> 4U)));
                        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                            = (0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                    }
                } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA)) 
                           | (0x7fU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                       >> 1U)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                       << 4U)));
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = (0xfeU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                    << 1U));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                       >> 3U)));
                }
            } else if ((0x10U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                     << 3U)) | (0x7fU 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                                   >> 1U)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                       << 4U)));
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xfeU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                     << 1U)) | (1U 
                                                & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F) 
                                                   >> 4U)));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                       >> 3U)));
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0x80U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                 << 7U)) | (0x7fU & 
                                            ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                             >> 1U)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x10U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                   << 4U)));
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xfeU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                                  >> 7U)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x10U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                                   >> 3U)));
            }
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0x9fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((8U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                             >> 4U)) | ((4U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                               >> 3U)) 
                                        | (2U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                                 >> 2U)))));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                      << 7U));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (1U & (~ VL_REDXOR_8(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))));
            if ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
            }
        }
    } else {
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
            = (0xbfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
            = (0xefU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0x8fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x40U | ((0x20U & ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                                                 << 5U)) 
                                       | (0x10U & (
                                                   (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)) 
                                                   << 4U)))));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v));
                } else {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                           | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB));
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = (0xdfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                       ^ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0xdfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA) 
                       & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB));
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = (0x20U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0x8fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x40U | ((0x20U & ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                                         << 5U)) | 
                               (0x10U & ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)) 
                                         << 4U)))));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v));
        } else {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xcfU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v) 
                       << 5U) | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v) 
                                 << 4U)));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v));
        }
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
            = ((0xf9U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
               | (((7U == (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r)))
                    ? ((2U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                              >> 4U)) | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB) 
                                               >> 3U)))
                    : ((2U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                              >> 4U)) | (1U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                                               >> 3U)))) 
                  << 1U));
        if ((0U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0x80U | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
            if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Z16_r) {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
            }
        } else {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = (0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out));
        }
        vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
            = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
               | (8U & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t) 
                        >> 4U)));
        if ((4U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (~ VL_REDXOR_8(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))));
                }
            } else {
                vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (~ VL_REDXOR_8(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))));
            }
        }
        if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16_r) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0x7fU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x80U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out)) 
                   | (1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F)));
        }
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
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
    vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_8 
        = ((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_wr_n)) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT__wram_n_group_sel));
    vlSelfRef.top__DOT__soc__DOT__wramN_data_out = 
        ((6U >= (7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel) 
                       - (IData)(1U)))) ? vlSelfRef.top__DOT__soc__DOT__wramN_q_a
         [(7U & ((IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel) 
                 - (IData)(1U)))] : 0xffU);
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__hs = vlSelfRef.top__DOT__soc__DOT__VGA_HS;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__vs = vlSelfRef.top__DOT__soc__DOT__VGA_VS;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__VGA_HB 
        = vlSelfRef.top__DOT__soc__DOT__VGA_HB;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__VGA_VB 
        = vlSelfRef.top__DOT__soc__DOT__VGA_VB;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__VGA_DE 
        = vlSelfRef.top__DOT__soc__DOT__VGA_DE;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__clock_b 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb_clk;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__reset_n 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__r = vlSelfRef.top__DOT__soc__DOT__VGA_R;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__b = vlSelfRef.top__DOT__soc__DOT__VGA_B;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__g = vlSelfRef.top__DOT__soc__DOT__VGA_G;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__pclk = vlSelfRef.top__DOT__soc__DOT__pixel_clock;
    vlSelfRef.top__DOT__soc__DOT__hram__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__hram__wren_a;
    vlSelfRef.top__DOT__soc__DOT__xram__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__xram__wren_a;
    vlSelfRef.top__DOT__soc__DOT__wram_0__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram_0__wren_a;
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__vram_0__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__vram0_sel) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_7));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__vram_1__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__io_vbk) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_7));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B 
        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16))
            ? 0xffffU : 1U);
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16 
        = (0xffffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA) 
                      + (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp)
            ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB)
            : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r)
                ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q)
                : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__clk 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__clk;
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__1__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_8) 
           & (1U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__2__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_8) 
           & (2U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__3__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_8) 
           & (3U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__4__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_8) 
           & (4U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__5__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_8) 
           & (5U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__6__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_8) 
           & (6U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__7__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_8) 
           & (7U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    if (((~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_iorq_n)) 
         & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_rd_n))) {
        vlSelfRef.top__DOT__soc__DOT__cpu_din = 0x40U;
    } else if (vlSelfRef.top__DOT__soc__DOT__cpu_rd_n) {
        vlSelfRef.top__DOT__soc__DOT__cpu_din = 0x76U;
    } else if (vlSelfRef.top__DOT__soc__DOT__io_sel) {
        if ((0x70U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
            vlSelfRef.top__DOT__soc__DOT__cpu_din = vlSelfRef.top__DOT__soc__DOT__io_svbk;
        } else if ((0x47U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
            vlSelfRef.top__DOT__soc__DOT__cpu_din = vlSelfRef.top__DOT__soc__DOT__io_bgp;
        } else if ((0xfU == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
            vlSelfRef.top__DOT__soc__DOT__cpu_din = 
                ((0x90U <= (IData)(vlSelfRef.top__DOT__soc__DOT__ppu_LY))
                  ? 1U : 0U);
        } else if ((0x44U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
            vlSelfRef.top__DOT__soc__DOT__cpu_din = vlSelfRef.top__DOT__soc__DOT__ppu_LY;
        } else if ((0xf0U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
            vlSelfRef.top__DOT__soc__DOT__cpu_din = vlSelfRef.top__DOT__soc__DOT__io_IF;
        } else if ((0xffU == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
            vlSelfRef.top__DOT__soc__DOT__cpu_din = vlSelfRef.top__DOT__soc__DOT__io_IE;
        }
    } else {
        vlSelfRef.top__DOT__soc__DOT__cpu_din = ((IData)(vlSelfRef.top__DOT__soc__DOT__hram_sel)
                                                  ? (IData)(vlSelfRef.top__DOT__soc__DOT__hram_data_out)
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__soc__DOT__vram_sel)
                                                   ? (IData)(vlSelfRef.top__DOT__soc__DOT__vram_data_out)
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__soc__DOT__xram_sel)
                                                    ? (IData)(vlSelfRef.top__DOT__soc__DOT__xram_data_out)
                                                    : 
                                                   ((IData)(vlSelfRef.top__DOT__soc__DOT__wram_0_sel)
                                                     ? (IData)(vlSelfRef.top__DOT__soc__DOT__wram0_data_out)
                                                     : 
                                                    ((IData)(vlSelfRef.top__DOT__soc__DOT__wram_n_group_sel)
                                                      ? (IData)(vlSelfRef.top__DOT__soc__DOT__wramN_data_out)
                                                      : 
                                                     ((IData)(vlSelfRef.top__DOT__soc__DOT__bios_rom_sel)
                                                       ? (IData)(vlSelfRef.top__DOT__soc__DOT__rom_data_out)
                                                       : 
                                                      ((IData)(vlSelfRef.top__DOT__soc__DOT__game_rom_sel)
                                                        ? (IData)(vlSelfRef.top__DOT__soc__DOT__game_rom_data_out)
                                                        : 0x76U)))))));
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__reset_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__reset_n;
    vlSelfRef.top__DOT__soc__DOT__vga__DOT__fb__DOT__clock_a 
        = vlSelfRef.top__DOT__soc__DOT__vga__DOT__pclk;
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__vram_0__wren_a;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__vram_1__wren_a;
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__clk 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__clk;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__1__KET____DOT__wram_N__wren_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__2__KET____DOT__wram_N__wren_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__3__KET____DOT__wram_N__wren_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__4__KET____DOT__wram_N__wren_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__5__KET____DOT__wram_N__wren_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__6__KET____DOT__wram_N__wren_a;
    vlSelfRef.top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__7__KET____DOT__wram_N__wren_a;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di = vlSelfRef.top__DOT__soc__DOT__cpu_din;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DIH 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIH;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DIL 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIL;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__dinst 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top.soc.cpu_clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk_sys)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge top.soc.cpu_mreq_n)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge top.soc.__Vcellinp__ppu__lcd_ppu_en)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge top.soc.fb_clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge top.soc.__Vcellinp__T80x__reset_n)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] top.soc.T80x.i_tv80_core.F)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] top.soc.T80x.i_tv80_core.IR)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([changed] top.soc.T80x.i_tv80_core.ISet)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] top.soc.T80x.i_tv80_core.IntCycle)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([changed] top.soc.T80x.i_tv80_core.NMICycle)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([changed] top.soc.T80x.i_tv80_core.mcycle)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([changed] top.soc.T80x.i_tv80_core.ALU_Op_r)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([changed] top.soc.T80x.i_tv80_core.BusA)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([changed] top.soc.T80x.i_tv80_core.BusB)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([changed] top.soc.T80x.i_tv80_core.__Vcellinp__i_alu__IR)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(posedge top.soc.wram_0.clock_b)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge top.soc.hram.clock_b)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(posedge top.soc.xram.clock_b)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(posedge top.soc.wram_[1].wram_N.clock_b)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(posedge top.soc.wram_[2].wram_N.clock_b)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @(posedge top.soc.wram_[3].wram_N.clock_b)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @(posedge top.soc.wram_[4].wram_N.clock_b)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @(posedge top.soc.wram_[5].wram_N.clock_b)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @(posedge top.soc.wram_[6].wram_N.clock_b)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @(posedge top.soc.wram_[7].wram_N.clock_b)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top.soc.cpu_clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk_sys)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge top.soc.cpu_mreq_n)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge top.soc.__Vcellinp__ppu__lcd_ppu_en)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge top.soc.fb_clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge top.soc.__Vcellinp__T80x__reset_n)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] top.soc.T80x.i_tv80_core.F)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] top.soc.T80x.i_tv80_core.IR)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([changed] top.soc.T80x.i_tv80_core.ISet)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] top.soc.T80x.i_tv80_core.IntCycle)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([changed] top.soc.T80x.i_tv80_core.NMICycle)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([changed] top.soc.T80x.i_tv80_core.mcycle)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([changed] top.soc.T80x.i_tv80_core.ALU_Op_r)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([changed] top.soc.T80x.i_tv80_core.BusA)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([changed] top.soc.T80x.i_tv80_core.BusB)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([changed] top.soc.T80x.i_tv80_core.__Vcellinp__i_alu__IR)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(posedge top.soc.wram_0.clock_b)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge top.soc.hram.clock_b)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(posedge top.soc.xram.clock_b)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(posedge top.soc.wram_[1].wram_N.clock_b)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(posedge top.soc.wram_[2].wram_N.clock_b)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @(posedge top.soc.wram_[3].wram_N.clock_b)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @(posedge top.soc.wram_[4].wram_N.clock_b)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @(posedge top.soc.wram_[5].wram_N.clock_b)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @(posedge top.soc.wram_[6].wram_N.clock_b)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @(posedge top.soc.wram_[7].wram_N.clock_b)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_postponed__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_postponed(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_postponed\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_postponed__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->VGA_R = 0;
    vlSelf->VGA_B = 0;
    vlSelf->VGA_G = 0;
    vlSelf->VGA_HS = 0;
    vlSelf->VGA_VS = 0;
    vlSelf->VGA_HB = 0;
    vlSelf->VGA_VB = 0;
    vlSelf->reset = 0;
    vlSelf->clk_sys = 0;
    vlSelf->clk_vid = 0;
    vlSelf->ioctl_download = 0;
    vlSelf->ioctl_addr = 0;
    vlSelf->ioctl_dout = 0;
    vlSelf->ioctl_index = 0;
    vlSelf->ioctl_wait = 0;
    vlSelf->ioctl_wr = 0;
    vlSelf->top__DOT__VGA_R = 0;
    vlSelf->top__DOT__VGA_B = 0;
    vlSelf->top__DOT__VGA_G = 0;
    vlSelf->top__DOT__VGA_HS = 0;
    vlSelf->top__DOT__VGA_VS = 0;
    vlSelf->top__DOT__VGA_HB = 0;
    vlSelf->top__DOT__VGA_VB = 0;
    vlSelf->top__DOT__reset = 0;
    vlSelf->top__DOT__clk_sys = 0;
    vlSelf->top__DOT__clk_vid = 0;
    vlSelf->top__DOT__ioctl_download = 0;
    vlSelf->top__DOT__ioctl_addr = 0;
    vlSelf->top__DOT__ioctl_dout = 0;
    vlSelf->top__DOT__ioctl_index = 0;
    vlSelf->top__DOT__ioctl_wait = 0;
    vlSelf->top__DOT__ioctl_wr = 0;
    vlSelf->top__DOT__VGA_DE = 0;
    vlSelf->top__DOT__soc__DOT__clk_sys = 0;
    vlSelf->top__DOT__soc__DOT__pixel_clock = 0;
    vlSelf->top__DOT__soc__DOT__VGA_HS = 0;
    vlSelf->top__DOT__soc__DOT__VGA_VS = 0;
    vlSelf->top__DOT__soc__DOT__VGA_R = 0;
    vlSelf->top__DOT__soc__DOT__VGA_G = 0;
    vlSelf->top__DOT__soc__DOT__VGA_B = 0;
    vlSelf->top__DOT__soc__DOT__VGA_HB = 0;
    vlSelf->top__DOT__soc__DOT__VGA_VB = 0;
    vlSelf->top__DOT__soc__DOT__VGA_DE = 0;
    vlSelf->top__DOT__soc__DOT__r = 0;
    vlSelf->top__DOT__soc__DOT__g = 0;
    vlSelf->top__DOT__soc__DOT__b = 0;
    vlSelf->top__DOT__soc__DOT__vs = 0;
    vlSelf->top__DOT__soc__DOT__hs = 0;
    vlSelf->top__DOT__soc__DOT__ce_pix = 0;
    vlSelf->top__DOT__soc__DOT__hblank = 0;
    vlSelf->top__DOT__soc__DOT__vblank = 0;
    vlSelf->top__DOT__soc__DOT__interlace = 0;
    vlSelf->top__DOT__soc__DOT__ppu_LY = 0;
    vlSelf->top__DOT__soc__DOT__fb_clk = 0;
    vlSelf->top__DOT__soc__DOT__fb_wr = 0;
    vlSelf->top__DOT__soc__DOT__fb_addr = 0;
    vlSelf->top__DOT__soc__DOT__fb_data = 0;
    vlSelf->top__DOT__soc__DOT__ppu_vram0_addr = 0;
    vlSelf->top__DOT__soc__DOT__ppu_vram0_data = 0;
    vlSelf->top__DOT__soc__DOT__ppu_vram1_addr = 0;
    vlSelf->top__DOT__soc__DOT__ppu_vram1_data = 0;
    vlSelf->top__DOT__soc__DOT__rom_bank = 0;
    vlSelf->top__DOT__soc__DOT__game_rom_addr = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en = 0;
    vlSelf->top__DOT__soc__DOT__cpu_reset_cnt = 0;
    vlSelf->top__DOT__soc__DOT__cpu_reset = 0;
    vlSelf->top__DOT__soc__DOT__cpu_clock = 0;
    vlSelf->top__DOT__soc__DOT__cpu_addr = 0;
    vlSelf->top__DOT__soc__DOT__cpu_din = 0;
    vlSelf->top__DOT__soc__DOT__cpu_dout = 0;
    vlSelf->top__DOT__soc__DOT__cpu_rd_n = 0;
    vlSelf->top__DOT__soc__DOT__cpu_wr_n = 0;
    vlSelf->top__DOT__soc__DOT__cpu_mreq_n = 0;
    vlSelf->top__DOT__soc__DOT__cpu_iorq_n = 0;
    vlSelf->top__DOT__soc__DOT__cpu_int_n = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__T80x__reset_n = 0;
    vlSelf->top__DOT__soc__DOT__rom_data_out = 0;
    vlSelf->top__DOT__soc__DOT__game_rom_data_out = 0;
    vlSelf->top__DOT__soc__DOT__vram_data_out = 0;
    vlSelf->top__DOT__soc__DOT__vram0_data_out = 0;
    vlSelf->top__DOT__soc__DOT__vram1_data_out = 0;
    vlSelf->top__DOT__soc__DOT__vram0_sel = 0;
    vlSelf->top__DOT__soc__DOT__wram0_data_out = 0;
    vlSelf->top__DOT__soc__DOT__wramN_data_out = 0;
    vlSelf->top__DOT__soc__DOT__hram_data_out = 0;
    vlSelf->top__DOT__soc__DOT__xram_data_out = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__wramN_q_a[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__io_vbk = 0;
    vlSelf->top__DOT__soc__DOT__io_lcdc = 0;
    vlSelf->top__DOT__soc__DOT__io_svbk = 0;
    vlSelf->top__DOT__soc__DOT__io_scx = 0;
    vlSelf->top__DOT__soc__DOT__io_scy = 0;
    vlSelf->top__DOT__soc__DOT__io_bios_disable = 0;
    vlSelf->top__DOT__soc__DOT__io_IF = 0;
    vlSelf->top__DOT__soc__DOT__io_IE = 0;
    vlSelf->top__DOT__soc__DOT__wram_sel = 0;
    vlSelf->top__DOT__soc__DOT__io_bgp = 0;
    vlSelf->top__DOT__soc__DOT__bgp_id3 = 0;
    vlSelf->top__DOT__soc__DOT__bgp_id2 = 0;
    vlSelf->top__DOT__soc__DOT__bgp_id1 = 0;
    vlSelf->top__DOT__soc__DOT__bgp_id0 = 0;
    vlSelf->top__DOT__soc__DOT__hram_sel = 0;
    vlSelf->top__DOT__soc__DOT__vram_sel = 0;
    vlSelf->top__DOT__soc__DOT__io_sel = 0;
    vlSelf->top__DOT__soc__DOT__wram_0_sel = 0;
    vlSelf->top__DOT__soc__DOT__bios_rom_sel = 0;
    vlSelf->top__DOT__soc__DOT__game_rom_sel = 0;
    vlSelf->top__DOT__soc__DOT__wram_n_group_sel = 0;
    vlSelf->top__DOT__soc__DOT__xram_sel = 0;
    vlSelf->top__DOT__soc__DOT__mbc3_ram_and_timer_en = 0;
    vlSelf->top__DOT__soc__DOT__mbc3_rom_bank_number = 0;
    vlSelf->top__DOT__soc__DOT__mbc3_ram_bank_number_or_rtc = 0;
    vlSelf->top__DOT__soc__DOT__mbc3_latch_clock_data = 0;
    vlSelf->top__DOT__soc__DOT__mbc3_rtc_register = 0;
    vlSelf->top__DOT__soc__DOT__vblank_FF = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__game_rom__address_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__wram_0__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__vram_0__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__vram_1__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__hram__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__xram__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____Vstrobe0 = 0;
    vlSelf->top__DOT__soc__DOT____Vcellout__wram___BRA__1__KET____DOT__wram_N__q_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__wram___BRA__1__KET____DOT__wram_N__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellout__wram___BRA__2__KET____DOT__wram_N__q_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__wram___BRA__2__KET____DOT__wram_N__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellout__wram___BRA__3__KET____DOT__wram_N__q_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__wram___BRA__3__KET____DOT__wram_N__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellout__wram___BRA__4__KET____DOT__wram_N__q_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__wram___BRA__4__KET____DOT__wram_N__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellout__wram___BRA__5__KET____DOT__wram_N__q_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__wram___BRA__5__KET____DOT__wram_N__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellout__wram___BRA__6__KET____DOT__wram_N__q_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__wram___BRA__6__KET____DOT__wram_N__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellout__wram___BRA__7__KET____DOT__wram_N__q_a = 0;
    vlSelf->top__DOT__soc__DOT____Vcellinp__wram___BRA__7__KET____DOT__wram_N__wren_a = 0;
    vlSelf->top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_7 = 0;
    vlSelf->top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_0_8 = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__clk = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__lcd_ppu_en = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__window_tile_map = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__window_en = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__bg_char_data_sel = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__bg_code_area_sel = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__obj_size = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__obj_en = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__bg_win_prio = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__fb_clk = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__fb_wr = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__fb_addr = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__fb_data = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__vram0_addr = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__vram0_data = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__vram1_addr = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__vram1_data = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__LY = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__LX = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__mode = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__step = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__pixel_buf_h = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__pixel_buf_l = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__tile_id = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__tile_attr = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__tick = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__tileX = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__tileY = 0;
    vlSelf->top__DOT__soc__DOT__ppu__DOT__pixel = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__pclk = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb_clk = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb_wr = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb_addr = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb_data = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__hs = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__vs = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__r = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__g = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__b = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__VGA_HB = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__VGA_VB = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__VGA_DE = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__h_cnt = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__v_cnt = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__hblank = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__vblank = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__video_counter = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__pixel = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__de = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__show_black = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__vga__DOT__fb__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__T80x__DOT__m1_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__mreq_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__iorq_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__rd_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__wr_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__rfsh_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__halt_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__busak_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__A = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__dout = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__reset_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__clk = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__wait_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__int_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__nmi_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__busrq_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__di = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__cen = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__intcycle_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__no_read = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__write = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__iorq = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__di_reg = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__mcycle = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__tstate = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__m1_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__no_read = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__write = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__rfsh_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__halt_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__busak_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__A = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__dout = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mc = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ts = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__intcycle_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__stop = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__reset_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__clk = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__cen = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__wait_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__int_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__nmi_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__busrq_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__dinst = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__di = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Ap = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Fp = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIH = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIL = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA_r = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB_r = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEH = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEL = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA_r = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__reset_4x = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_mcycle = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusReq_s = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ClkEn = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMI_s = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__INT_s = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IStatus = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__T_Res = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NextIs_XY_Fetch = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__No_BTR = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BTR_r = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDecZ = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16_r = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Z16_r = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC_r = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpXY = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDSPHL = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__will_iorq = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeAF = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRS = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CPL = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CCF = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_SCF = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BTR = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RLD = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RRD = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetDI = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16_B = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_A = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_B = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Oldnmi_n = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycles = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__TStates = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Prefix = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_PC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Inc_WZ = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IncDec_16 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Reg = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Read_To_Acc = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusA_To = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_BusB_To = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ALU_Op = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Save_ALU = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__PreserveC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Arith16 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Set_Addr_To = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IORQ = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__WILL_IORQ = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Jump = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpE = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__JumpXY = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Call = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__RstP = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__LDZ = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__LDW = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__LDSPHL = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Special_LD = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeDH = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRp = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeAF = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ExchangeRS = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_DJNZ = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CPL = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_CCF = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_SCF = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RETN = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BT = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_BTR = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RLD = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_RRD = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__I_INRC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SetDI = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SetEI = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IMode = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Halt = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__NoRead = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Write = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IR = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__ISet = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__F = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__NMICycle = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__IntCycle = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Arith16 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Z16 = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__ALU_Op = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__IR = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__ISet = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BusA = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BusB = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__F_In = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOBH = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOAL = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOCL = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOBL = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOCH = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DOAH = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__AddrC = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__AddrA = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__AddrB = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DIH = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DIL = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__clk = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__CEN = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__WEH = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__WEL = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__B = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__C = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__D = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__E = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__H = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__L = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__IX = 0;
    vlSelf->top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__IY = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__rom__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__rom__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__game_rom__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__game_rom__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__wram_0__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__wram_0__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_0__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__vram_0__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__vram_1__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__vram_1__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__hram__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__hram__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__hram__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__hram__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__hram__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__hram__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__hram__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__hram__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__hram__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__hram__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__hram__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__hram__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__hram__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__xram__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__xram__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__xram__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__xram__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__xram__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__xram__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__xram__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__xram__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__xram__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__xram__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__xram__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__xram__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__xram__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__clock_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__wren_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__address_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__data_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__q_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__clock_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__wren_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__address_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__data_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__q_b = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__byteena_a = 0;
    vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__byteena_b = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__Vdly__top__DOT__soc__DOT__vblank_FF = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__ppu_vram0_addr = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__ppu_vram1_addr = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__ppu__DOT__tile_id = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__ppu__DOT__tile_attr = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__ppu__DOT__pixel_buf_h = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__ppu__DOT__pixel_buf_l = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__ppu__DOT__mode = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__ppu__DOT__step = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__ppu__DOT__LX = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__ppu_LY = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__reset_4x = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1 = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2 = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle = 0;
    vlSelf->__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__wram_0__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__wram_0__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__wram_0__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__vram_0__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__vram_0__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__vram_0__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__vram_1__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__vram_1__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__vram_1__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__hram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__hram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__hram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__xram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__xram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__xram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__cpu_clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_sys__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__cpu_mreq_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT____Vcellinp__ppu__lcd_ppu_en__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__fb_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT____Vcellinp__T80x__reset_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram_0__DOT__clock_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__hram__DOT__clock_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__xram__DOT__clock_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__clock_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__clock_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__clock_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__clock_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__clock_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__clock_b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__clock_b__0 = 0;
    vlSelf->__VactDidInit = 0;
}
