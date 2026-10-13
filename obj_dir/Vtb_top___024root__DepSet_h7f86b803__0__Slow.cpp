// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top__Syms.h"
#include "Vtb_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___eval_triggers__stl(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__tb_top__DOT__dut_if.clk = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.tb_top__DOT____Vcellout__dut__empty = 
        ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__rd_ptr) 
         == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_ptr));
    vlSelfRef.tb_top__DOT____Vcellout__dut__full = 
        (((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_ptr) 
                 >> 4U)) != (1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__rd_ptr) 
                                   >> 4U))) & ((0xfU 
                                                & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_ptr)) 
                                               == (0xfU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__rd_ptr))));
    vlSymsp->TOP__tb_top__DOT__dut_if.empty = vlSelfRef.tb_top__DOT____Vcellout__dut__empty;
    vlSymsp->TOP__tb_top__DOT__dut_if.full = vlSelfRef.tb_top__DOT____Vcellout__dut__full;
    vlSelfRef.__VvifTrigger_h7959d6f6__0 = 1U;
}
