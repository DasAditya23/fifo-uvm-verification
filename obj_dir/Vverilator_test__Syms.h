// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVERILATOR_TEST__SYMS_H_
#define VERILATED_VVERILATOR_TEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vverilator_test.h"

// INCLUDE MODULE CLASSES
#include "Vverilator_test___024root.h"
#include "Vverilator_test___024unit.h"
#include "Vverilator_test___024unit__03a__03aPacket__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vverilator_test__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vverilator_test* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vverilator_test___024root      TOP;
    Vverilator_test___024unit__03a__03aPacket__Vclpkg TOP____024unit__03a__03aPacket__Vclpkg;
    Vverilator_test___024unit      TOP____024unit;

    // CONSTRUCTORS
    Vverilator_test__Syms(VerilatedContext* contextp, const char* namep, Vverilator_test* modelp);
    ~Vverilator_test__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
