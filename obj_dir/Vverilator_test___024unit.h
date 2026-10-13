// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverilator_test.h for the primary calling header

#ifndef VERILATED_VVERILATOR_TEST___024UNIT_H_
#define VERILATED_VVERILATOR_TEST___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_random.h"


class Vverilator_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vverilator_test___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vverilator_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vverilator_test___024unit(Vverilator_test__Syms* symsp, const char* v__name);
    ~Vverilator_test___024unit();
    VL_UNCOPYABLE(Vverilator_test___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
