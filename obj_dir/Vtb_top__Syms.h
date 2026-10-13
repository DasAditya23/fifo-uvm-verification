// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_TOP__SYMS_H_
#define VERILATED_VTB_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_top.h"

// INCLUDE MODULE CLASSES
#include "Vtb_top___024root.h"
#include "Vtb_top___024unit.h"
#include "Vtb_top_fifo_if.h"
#include "Vtb_top___024unit__03a__03afifo_tx__Vclpkg.h"
#include "Vtb_top___024unit__03a__03afifo_driver__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_top* const __Vm_modelp;
    std::vector<VlEvent*> __Vm_triggeredEvents;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_top___024root              TOP;
    Vtb_top___024unit__03a__03afifo_driver__Vclpkg TOP____024unit__03a__03afifo_driver__Vclpkg;
    Vtb_top___024unit__03a__03afifo_tx__Vclpkg TOP____024unit__03a__03afifo_tx__Vclpkg;
    Vtb_top___024unit              TOP____024unit;
    Vtb_top_fifo_if                TOP__tb_top__DOT__dut_if;

    // CONSTRUCTORS
    Vtb_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_top* modelp);
    ~Vtb_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void fireEvent(VlEvent& event) {
        if (VL_LIKELY(!event.isTriggered())) {
            __Vm_triggeredEvents.push_back(&event);
        }
        event.fire();
    }
    void clearTriggeredEvents() {
        for (const auto eventp : __Vm_triggeredEvents) eventp->clearTriggered();
        __Vm_triggeredEvents.clear();
    }
};

#endif  // guard
