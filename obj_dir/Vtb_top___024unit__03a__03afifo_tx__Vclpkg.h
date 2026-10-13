// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_TX__VCLPKG_H_
#define VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_TX__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_top___024unit__03a__03afifo_tx;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024unit__03a__03afifo_tx__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top___024unit__03a__03afifo_tx__Vclpkg(Vtb_top__Syms* symsp, const char* v__name);
    ~Vtb_top___024unit__03a__03afifo_tx__Vclpkg();
    VL_UNCOPYABLE(Vtb_top___024unit__03a__03afifo_tx__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_top__Syms;

class Vtb_top___024unit__03a__03afifo_tx : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__is_write;
    CData/*7:0*/ __PVT__data;
    void __VnoInFunc_clone(Vtb_top__Syms* __restrict vlSymsp, VlClassRef<Vtb_top___024unit__03a__03afifo_tx> &clone__Vfuncrtn);
    void __VnoInFunc_display(Vtb_top__Syms* __restrict vlSymsp, std::string tag);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top___024unit__03a__03afifo_tx(Vtb_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_top___024unit__03a__03afifo_tx();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_top___024unit__03a__03afifo_tx>& obj);

#endif  // guard
