// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC 
        = ((vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
            [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC] 
            << 8U) | vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
           [vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC]);
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_reset)));
    if (vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ClkEn) {
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
                                     : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg))
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
                                     : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg))
                                 : ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB)
                                     : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB) 
                                        >> 8U))) : 
                            ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To))
                              ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB)
                              : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB) 
                                 >> 8U)))));
        if (((((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
               >> 2U) | (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate) 
                          >> 3U) & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) 
             & (4U == (7U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDecZ 
                = (0U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16));
        }
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__reset_n 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__T80x__reset_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__reset_n 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__reset_n;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BusA 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BusB 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__bios_rom_sel = ((0U 
                                                   == (IData)(vlSelfRef.top__DOT__soc__DOT__io_bios_disable)) 
                                                  & ((0xffU 
                                                      >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                                     | ((0x200U 
                                                         <= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)) 
                                                        & (0x8ffU 
                                                           >= (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__vram_0__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__vram0_sel) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_4_3));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__vram_1__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__io_vbk) 
           & (IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_4_3));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__1__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_4_4) 
           & (1U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__2__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_4_4) 
           & (2U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__3__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_4_4) 
           & (3U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__4__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_4_4) 
           & (4U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__5__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_4_4) 
           & (5U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__6__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_4_4) 
           & (6U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT____Vcellinp__wram___BRA__7__KET____DOT__wram_N__wren_a 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT____VdfgRegularize_hc3a4b302_4_4) 
           & (7U == (IData)(vlSelfRef.top__DOT__soc__DOT__wram_sel)));
    vlSelfRef.top__DOT__soc__DOT__vram_0__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__vram_0__wren_a;
    vlSelfRef.top__DOT__soc__DOT__vram_1__DOT__wren_a 
        = vlSelfRef.top__DOT__soc__DOT____Vcellinp__vram_1__wren_a;
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
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di_reg;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ClkEn 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__cen) 
           & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck)));
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate 
        = vlSelfRef.__Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__F 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__F_In 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__CEN 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ClkEn;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__MCycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle) 
         | (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle))) {
            vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
        }
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__mcycle 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__tstate 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mc 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__mcycle;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ts 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__tstate;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top__DOT__soc__DOT__cpu_rd_n) {
        vlSelfRef.top__DOT__soc__DOT__cpu_din = 0x76U;
    } else if (vlSelfRef.top__DOT__soc__DOT__io_sel) {
        if ((0x70U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
            vlSelfRef.top__DOT__soc__DOT__cpu_din = vlSelfRef.top__DOT__soc__DOT__io_svbk;
        } else if ((0x47U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
            vlSelfRef.top__DOT__soc__DOT__cpu_din = vlSelfRef.top__DOT__soc__DOT__io_bgp;
        } else if ((0xfU == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
            vlSelfRef.top__DOT__soc__DOT__cpu_din = 1U;
        } else if ((0x44U == (0xffU & (IData)(vlSelfRef.top__DOT__soc__DOT__cpu_addr)))) {
            vlSelfRef.top__DOT__soc__DOT__cpu_din = vlSelfRef.top__DOT__soc__DOT__ppu_LY;
        }
    } else {
        vlSelfRef.top__DOT__soc__DOT__cpu_din = ((IData)(vlSelfRef.top__DOT__soc__DOT__hram_sel)
                                                  ? (IData)(vlSelfRef.top__DOT__soc__DOT__hram_data_out)
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__soc__DOT__vram_sel)
                                                   ? (IData)(vlSelfRef.top__DOT__soc__DOT__vram_data_out)
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
                                                       : 0x76U))))));
    }
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di = vlSelfRef.top__DOT__soc__DOT__cpu_din;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__dinst 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__di;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
        = (((0U != (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State)) 
            & (~ (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind))) 
           & (((2U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To)) 
               | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                  & (0xcbU == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))) 
              | ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle) 
                 & (0x36U == (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR)))));
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB 
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__T_Res 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__WEH 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEH;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__WEL 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEL;
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B 
        = ((8U & (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16))
            ? 0xffffU : 1U);
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16 
        = (0xffffU & ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA) 
                      + (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16_B)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__F_Out 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux 
        = ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp)
            ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB)
            : ((IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r)
                ? (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q)
                : (IData)(vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__DI_Reg)));
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
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DIH 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIH;
    vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__DIL 
        = vlSelfRef.top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIL;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___eval_act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<25> __VpreTriggered;
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

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
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);
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
