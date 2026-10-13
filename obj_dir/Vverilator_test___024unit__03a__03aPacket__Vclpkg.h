// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverilator_test.h for the primary calling header

#ifndef VERILATED_VVERILATOR_TEST___024UNIT__03A__03APACKET__VCLPKG_H_
#define VERILATED_VVERILATOR_TEST___024UNIT__03A__03APACKET__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_random.h"


class Vverilator_test__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vverilator_test___024unit__03a__03aPacket__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vverilator_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vverilator_test___024unit__03a__03aPacket__Vclpkg(Vverilator_test__Syms* symsp, const char* v__name);
    ~Vverilator_test___024unit__03a__03aPacket__Vclpkg();
    VL_UNCOPYABLE(Vverilator_test___024unit__03a__03aPacket__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vverilator_test__Syms;

class Vverilator_test___024unit__03a__03aPacket : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__data;
    CData/*3:0*/ __PVT__addr;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc___Vbasic_randomize(Vverilator_test__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    void __VnoInFunc_display(Vverilator_test__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vverilator_test__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vverilator_test__Syms* __restrict vlSymsp);
  public:
    Vverilator_test___024unit__03a__03aPacket(Vverilator_test__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vverilator_test___024unit__03a__03aPacket();
};

std::string VL_TO_STRING(const VlClassRef<Vverilator_test___024unit__03a__03aPacket>& obj);

#endif  // guard
