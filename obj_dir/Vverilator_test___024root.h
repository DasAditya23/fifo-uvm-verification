// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverilator_test.h for the primary calling header

#ifndef VERILATED_VVERILATOR_TEST___024ROOT_H_
#define VERILATED_VVERILATOR_TEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_random.h"
class Vverilator_test___024unit;
class Vverilator_test___024unit__03a__03aPacket;
class Vverilator_test___024unit__03a__03aPacket__Vclpkg;


class Vverilator_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vverilator_test___024root final : public VerilatedModule {
  public:
    // CELLS
    Vverilator_test___024unit* __PVT____024unit;
    Vverilator_test___024unit__03a__03aPacket__Vclpkg* __024unit__03a__03aPacket__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vverilator_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vverilator_test___024root(Vverilator_test__Syms* symsp, const char* v__name);
    ~Vverilator_test___024root();
    VL_UNCOPYABLE(Vverilator_test___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
