// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_test.h for the primary calling header

#include "Vverilator_test__pch.h"
#include "Vverilator_test__Syms.h"
#include "Vverilator_test___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vverilator_test___024root___dump_triggers__act(Vverilator_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vverilator_test___024root___eval_triggers__act(Vverilator_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverilator_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_test___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vverilator_test___024root___dump_triggers__act(vlSelf);
    }
#endif
}
