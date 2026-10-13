// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top__Syms.h"
#include "Vtb_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top___024root___eval_triggers__act(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (IData)(vlSelfRef.__VvifTrigger_h7959d6f6__0));
    vlSelfRef.__VvifTrigger_h7959d6f6__0 = 0U;
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_top__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdynSched.evaluate());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelf);
    }
#endif
    vlSelfRef.__VdynSched.doPostUpdates();
}

VL_INLINE_OPT void Vtb_top___024root___act_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__tb_top__DOT__dut_if.clk = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.__VvifTrigger_h7959d6f6__0 = 1U;
}

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlUnpacked<CData/*7:0*/, 16> tb_top__DOT__dut__DOT__mem;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        tb_top__DOT__dut__DOT__mem[__Vi0] = 0;
    }
    CData/*7:0*/ __VdlyVal__tb_top__DOT__dut__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__dut__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__mem__v0;
    __VdlySet__tb_top__DOT__dut__DOT__mem__v0 = 0;
    // Body
    __VdlySet__tb_top__DOT__dut__DOT__mem__v0 = 0U;
    if (vlSymsp->TOP__tb_top__DOT__dut_if.rst_n) {
        if (((IData)(vlSymsp->TOP__tb_top__DOT__dut_if.rd_en) 
             & (~ (IData)(vlSelfRef.tb_top__DOT____Vcellout__dut__empty)))) {
            vlSelfRef.tb_top__DOT__dut__DOT__rd_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__rd_ptr)));
        }
        if (((IData)(vlSymsp->TOP__tb_top__DOT__dut_if.wr_en) 
             & (~ (IData)(vlSelfRef.tb_top__DOT____Vcellout__dut__full)))) {
            __VdlyVal__tb_top__DOT__dut__DOT__mem__v0 
                = vlSymsp->TOP__tb_top__DOT__dut_if.wr_data;
            __VdlyDim0__tb_top__DOT__dut__DOT__mem__v0 
                = (0xfU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_ptr));
            __VdlySet__tb_top__DOT__dut__DOT__mem__v0 = 1U;
            vlSelfRef.tb_top__DOT__dut__DOT__wr_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_ptr)));
        }
    } else {
        vlSelfRef.tb_top__DOT__dut__DOT__rd_ptr = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__wr_ptr = 0U;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__mem__v0) {
        tb_top__DOT__dut__DOT__mem[__VdlyDim0__tb_top__DOT__dut__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__dut__DOT__mem__v0;
    }
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
