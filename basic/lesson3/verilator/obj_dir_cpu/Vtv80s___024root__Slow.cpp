// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtv80s.h for the primary calling header

#include "Vtv80s__pch.h"
#include "Vtv80s__Syms.h"
#include "Vtv80s___024root.h"

// Parameter definitions for Vtv80s___024root
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__aNone;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__aBC;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__aDE;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__aXY;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__aIOA;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__aSP;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__aZI;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__aNone;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__aBC;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__aDE;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__aXY;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__aIOA;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__aSP;
constexpr CData/*2:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__aZI;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__Mode;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__T2Write;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__IOWait;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__Mode;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__IOWait;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__Flag_C;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__Flag_N;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__Flag_P;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__Flag_X;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__Flag_H;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__Flag_Y;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__Flag_Z;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__Flag_S;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Mode;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_C;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_N;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_P;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_X;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_H;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Y;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_Z;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_mcode__DOT__Flag_S;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Mode;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_C;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_N;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_P;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_X;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_H;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Y;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_Z;
constexpr IData/*31:0*/ Vtv80s___024root::tv80s__DOT__i_tv80_core__DOT__i_alu__DOT__Flag_S;


void Vtv80s___024root___ctor_var_reset(Vtv80s___024root* vlSelf);

Vtv80s___024root::Vtv80s___024root(Vtv80s__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtv80s___024root___ctor_var_reset(this);
}

void Vtv80s___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtv80s___024root::~Vtv80s___024root() {
}
