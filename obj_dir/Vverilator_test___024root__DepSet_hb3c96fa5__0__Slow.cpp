// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_test.h for the primary calling header

#include "Vverilator_test__pch.h"
#include "Vverilator_test___024root.h"

VL_ATTR_COLD void Vverilator_test___024root___eval_static(Vverilator_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverilator_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_test___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vverilator_test___024root___eval_initial__TOP(Vverilator_test___024root* vlSelf);

VL_ATTR_COLD void Vverilator_test___024root___eval_initial(Vverilator_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverilator_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_test___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vverilator_test___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vverilator_test___024root___eval_final(Vverilator_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverilator_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_test___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vverilator_test___024root___eval_settle(Vverilator_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverilator_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_test___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverilator_test___024root___dump_triggers__act(Vverilator_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverilator_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_test___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverilator_test___024root___dump_triggers__nba(Vverilator_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverilator_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_test___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vverilator_test___024root___ctor_var_reset(Vverilator_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverilator_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_test___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
