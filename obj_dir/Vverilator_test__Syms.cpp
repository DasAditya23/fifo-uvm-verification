// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vverilator_test__pch.h"
#include "Vverilator_test.h"
#include "Vverilator_test___024root.h"
#include "Vverilator_test___024unit.h"
#include "Vverilator_test___024unit__03a__03aPacket__Vclpkg.h"

// FUNCTIONS
Vverilator_test__Syms::~Vverilator_test__Syms()
{
}

Vverilator_test__Syms::Vverilator_test__Syms(VerilatedContext* contextp, const char* namep, Vverilator_test* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit__03a__03aPacket__Vclpkg{this, Verilated::catName(namep, "$unit::Packet__Vclpkg")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(27);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03aPacket__Vclpkg = &TOP____024unit__03a__03aPacket__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03aPacket__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
}
