// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_DRIVER__VCLPKG_H_
#define VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_DRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_top___024unit__03a__03afifo_tx;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024unit__03a__03afifo_driver__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top___024unit__03a__03afifo_driver__Vclpkg(Vtb_top__Syms* symsp, const char* v__name);
    ~Vtb_top___024unit__03a__03afifo_driver__Vclpkg();
    VL_UNCOPYABLE(Vtb_top___024unit__03a__03afifo_driver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_top__Syms;

class Vtb_top___024unit__03a__03afifo_driver : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vtb_top_fifo_if* __PVT__vif;
    VlCoroutine __VnoInFunc_drive(Vtb_top__Syms* __restrict vlSymsp, VlClassRef<Vtb_top___024unit__03a__03afifo_tx> tx);
  private:
    VlCoroutine __VnoInFunc_drive____Vfork_10__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hbd88153a__1);
    VlCoroutine __VnoInFunc_drive____Vfork_6__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h1591504d__0);
    VlCoroutine __VnoInFunc_drive____Vfork_7__1(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_hd79684f8__0);
    VlCoroutine __VnoInFunc_drive____Vfork_8__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h15922ab0__1);
    VlCoroutine __VnoInFunc_drive____Vfork_9__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hbd96a93f__0);
  public:
    VlCoroutine __VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_reset____Vfork_1__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h15922ab0__0);
    VlCoroutine __VnoInFunc_reset____Vfork_2__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hbd88153a__0);
    VlCoroutine __VnoInFunc_reset____Vfork_3__1(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_haf49e8de__0);
    VlCoroutine __VnoInFunc_reset____Vfork_4__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4a54021d__0);
    VlCoroutine __VnoInFunc_reset____Vfork_5__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4a534b9a__0);
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top___024unit__03a__03afifo_driver(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_fifo_if* vif_in);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_top___024unit__03a__03afifo_driver();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_top___024unit__03a__03afifo_driver>& obj);

#endif  // guard
