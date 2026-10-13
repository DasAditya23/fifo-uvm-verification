// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_top___024unit;
class Vtb_top___024unit__03a__03afifo_driver;
class Vtb_top___024unit__03a__03afifo_driver__Vclpkg;
class Vtb_top___024unit__03a__03afifo_tx;
class Vtb_top___024unit__03a__03afifo_tx__Vclpkg;
class Vtb_top_fifo_if;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_top___024unit* __PVT____024unit;
    Vtb_top_fifo_if* __PVT__tb_top__DOT__dut_if;
    Vtb_top___024unit__03a__03afifo_tx__Vclpkg* __024unit__03a__03afifo_tx__Vclpkg;
    Vtb_top___024unit__03a__03afifo_driver__Vclpkg* __024unit__03a__03afifo_driver__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_top__DOT__clk;
    CData/*0:0*/ tb_top__DOT____Vcellout__dut__empty;
    CData/*0:0*/ tb_top__DOT____Vcellout__dut__full;
    CData/*4:0*/ tb_top__DOT__dut__DOT__wr_ptr;
    CData/*4:0*/ tb_top__DOT__dut__DOT__rd_ptr;
    CData/*0:0*/ __VnbaEventTrigger;
    CData/*0:0*/ __VvifTrigger_h7959d6f6__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hcfda8b72__0;
    VlEvent __VnbaEvent;
    VlDynamicTriggerScheduler __VdynSched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* v__name);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
