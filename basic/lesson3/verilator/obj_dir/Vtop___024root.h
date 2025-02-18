// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_sys,0,0);
    CData/*0:0*/ top__DOT__soc__DOT____Vcellinp__T80x__reset_n;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Alternate;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_tstate;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF1;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt_FF;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_Ind;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BTR_r;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16_r;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Z16_r;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU_r;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpE;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__iorq_i;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeDH;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRp;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_DJNZ;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v;
    VL_OUT8(VGA_R,7,0);
    VL_OUT8(VGA_B,7,0);
    VL_OUT8(VGA_G,7,0);
    VL_OUT8(VGA_HS,0,0);
    VL_OUT8(VGA_VS,0,0);
    VL_OUT8(VGA_HB,0,0);
    VL_OUT8(VGA_VB,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(clk_vid,0,0);
    VL_IN8(ioctl_download,0,0);
    VL_IN8(ioctl_dout,7,0);
    VL_IN8(ioctl_index,7,0);
    VL_OUT8(ioctl_wait,0,0);
    VL_IN8(ioctl_wr,0,0);
    CData/*7:0*/ top__DOT__VGA_R;
    CData/*7:0*/ top__DOT__VGA_B;
    CData/*7:0*/ top__DOT__VGA_G;
    CData/*0:0*/ top__DOT__reset;
    CData/*0:0*/ top__DOT__clk_sys;
    CData/*0:0*/ top__DOT__clk_vid;
    CData/*7:0*/ top__DOT__soc__DOT__cpu_reset_cnt;
    CData/*7:0*/ top__DOT__soc__DOT__cpu_din;
    CData/*7:0*/ top__DOT__soc__DOT__cpu_dout;
    CData/*0:0*/ top__DOT__soc__DOT__cpu_wr_n;
    CData/*7:0*/ top__DOT__soc__DOT__ram_data_out;
    CData/*7:0*/ top__DOT__soc__DOT__rom_data_out;
    CData/*0:0*/ top__DOT__soc__DOT____Vcellinp__ram__wren_a;
    CData/*7:0*/ top__DOT__soc__DOT__vga__DOT__pixel;
    CData/*7:0*/ top__DOT__soc__DOT__vga__DOT____Vlvbound_h3bad9e82__0;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__write;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__di_reg;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Ap;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Fp;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIH;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegDIL;
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA_r;
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrA;
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrB_r;
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegAddrC;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEH;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegWEL;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR;
    CData/*1:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_Mux;
    CData/*6:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate;
    CData/*6:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__last_mcycle;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntE_FF2;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusReq_s;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMI_s;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__INT_s;
    CData/*1:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IStatus;
    CData/*1:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__XY_State;
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NextIs_XY_Fetch;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__No_BTR;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDecZ;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Q;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F_Out;
    CData/*4:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg_r;
    CData/*3:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC_r;
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles;
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycles_d;
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstates;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_PC;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Inc_WZ;
    CData/*3:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IncDec_16;
    CData/*1:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Prefix;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Acc;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Read_To_Reg;
    CData/*3:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusB_To;
    CData/*3:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_BusA_To;
    CData/*3:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Save_ALU;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PreserveC;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Arith16;
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Set_Addr_To;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Jump;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__JumpXY;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Call;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RstP;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDZ;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDW;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__LDSPHL;
    CData/*2:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Special_LD;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeAF;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ExchangeRS;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CPL;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_CCF;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_SCF;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RETN;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BT;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BC;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_BTR;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RLD;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_RRD;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__I_INRC;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetDI;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SetEI;
    CData/*1:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IMode;
    CData/*0:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__Halt;
    CData/*5:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
    CData/*7:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask;
    CData/*7:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR;
    CData/*7:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ACC;
    CData/*7:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F;
    CData/*0:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusAck;
    CData/*6:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__tstate;
    CData/*6:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle;
    CData/*0:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle;
    CData/*0:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_sys__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__soc__DOT____Vcellinp__T80x__reset_n__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__F__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IR__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ISet__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__IntCycle__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__NMICycle__0;
    CData/*6:0*/ __Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__mcycle__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ALU_Op_r__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusA__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__BusB__0;
    CData/*5:0*/ __Vtrigprevexpr___TOP__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT____Vcellinp__i_alu__IR__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ top__DOT__soc__DOT__cpu_addr;
    SData/*9:0*/ top__DOT__soc__DOT__vga__DOT__h_cnt;
    SData/*9:0*/ top__DOT__soc__DOT__vga__DOT__v_cnt;
    SData/*13:0*/ top__DOT__soc__DOT__vga__DOT__video_counter;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusB;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusC;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__TmpAddr;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__RegBusA_r;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__ID16;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC16;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_A;
    SData/*15:0*/ top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP16_B;
    SData/*15:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__PC;
    SData/*15:0*/ __Vdly__top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__SP;
    VL_IN(ioctl_addr,24,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<12> __VactTriggered;
    VlTriggerVec<12> __VnbaTriggered;
    VlUnpacked<CData/*7:0*/, 16000> top__DOT__soc__DOT__vga__DOT__vmem;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__soc__DOT__T80x__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL;
    VlUnpacked<CData/*7:0*/, 4096> top__DOT__soc__DOT__rom__DOT__mem;
    VlUnpacked<CData/*7:0*/, 4096> top__DOT__soc__DOT__ram__DOT__mem;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
