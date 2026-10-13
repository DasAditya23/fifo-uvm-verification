// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_test.h for the primary calling header

#include "Vverilator_test__pch.h"
#include "Vverilator_test__Syms.h"
#include "Vverilator_test___024unit.h"

void Vverilator_test___024unit___ctor_var_reset(Vverilator_test___024unit* vlSelf);

Vverilator_test___024unit::Vverilator_test___024unit(Vverilator_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vverilator_test___024unit___ctor_var_reset(this);
}

void Vverilator_test___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vverilator_test___024unit::~Vverilator_test___024unit() {
}
