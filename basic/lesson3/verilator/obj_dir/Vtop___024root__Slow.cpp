// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__vga__DOT__fb__DOT__init_file;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__aNone;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__aBC;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__aDE;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__aXY;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__aIOA;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__aSP;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__aZI;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__aNone;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__aBC;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__aDE;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__aXY;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__aIOA;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__aSP;
constexpr CData/*2:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__aZI;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__wram_0__DOT__init_file;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__vram_0__DOT__init_file;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__vram_1__DOT__init_file;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__hram__DOT__init_file;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__xram__DOT__init_file;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__init_file;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__init_file;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__init_file;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__init_file;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__init_file;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__init_file;
constexpr CData/*7:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__init_file;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vga__DOT__H;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vga__DOT__HFP;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vga__DOT__HS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vga__DOT__HBP;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vga__DOT__V;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vga__DOT__VFP;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vga__DOT__VS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vga__DOT__VBP;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vga__DOT__fb__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vga__DOT__fb__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__Mode;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__T2Write;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__IOWait;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Mode;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IOWait;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Flag_C;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Flag_N;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Flag_P;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Flag_X;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Flag_H;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Flag_Y;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Flag_Z;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Flag_S;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Mode;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_C;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_N;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_P;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_X;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_H;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Y;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Z;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_S;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Mode;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_C;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_N;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_P;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_X;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_H;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Y;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Z;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_S;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__rom__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__rom__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__game_rom__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__game_rom__DOT__widthad_a;
constexpr VlWide<3>/*95:0*/ Vtop___024root::top__DOT__soc__DOT__game_rom__DOT__init_file;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram_0__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram_0__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vram_0__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vram_0__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vram_1__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__vram_1__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__hram__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__hram__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__xram__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__xram__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__1__KET____DOT__wram_N__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__2__KET____DOT__wram_N__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__3__KET____DOT__wram_N__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__4__KET____DOT__wram_N__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__5__KET____DOT__wram_N__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__6__KET____DOT__wram_N__DOT__widthad_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__width_a;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__soc__DOT__wram___BRA__7__KET____DOT__wram_N__DOT__widthad_a;
constexpr QData/*55:0*/ Vtop___024root::top__DOT__soc__DOT__rom__DOT__init_file;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
