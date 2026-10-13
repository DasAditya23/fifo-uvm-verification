// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_top__pch.h"
#include "Vtb_top.h"
#include "Vtb_top___024root.h"
#include "Vtb_top___024unit.h"
#include "Vtb_top_fifo_if.h"
#include "Vtb_top___024unit__03a__03afifo_tx__Vclpkg.h"
#include "Vtb_top___024unit__03a__03afifo_driver__Vclpkg.h"

// FUNCTIONS
Vtb_top__Syms::~Vtb_top__Syms()
{
}

Vtb_top__Syms::Vtb_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit__03a__03afifo_driver__Vclpkg{this, Verilated::catName(namep, "$unit::fifo_driver__Vclpkg")}
    , TOP____024unit__03a__03afifo_tx__Vclpkg{this, Verilated::catName(namep, "$unit::fifo_tx__Vclpkg")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__tb_top__DOT__dut_if{this, Verilated::catName(namep, "tb_top.dut_if")}
{
        // Check resources
        Verilated::stackCheck(101);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03afifo_driver__Vclpkg = &TOP____024unit__03a__03afifo_driver__Vclpkg;
    TOP.__024unit__03a__03afifo_tx__Vclpkg = &TOP____024unit__03a__03afifo_tx__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__tb_top__DOT__dut_if = &TOP__tb_top__DOT__dut_if;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03afifo_driver__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03afifo_tx__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__tb_top__DOT__dut_if.__Vconfigure(true);
}
