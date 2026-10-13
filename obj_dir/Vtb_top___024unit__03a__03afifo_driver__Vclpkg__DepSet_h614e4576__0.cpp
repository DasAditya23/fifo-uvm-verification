// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top__Syms.h"
#include "Vtb_top___024unit__03a__03afifo_driver__Vclpkg.h"
#include "Vtb_top___024unit__03a__03afifo_tx__Vclpkg.h"

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive(Vtb_top__Syms* __restrict vlSymsp, VlClassRef<Vtb_top___024unit__03a__03afifo_tx> tx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_NULL_CHECK(tx, "tb/fifo_driver.sv", 28)->__PVT__is_write) {
        if (VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 30)
            ->full) {
            CData/*0:0*/ __VdynTrigger_h17533151__0;
            __VdynTrigger_h17533151__0 = 0;
            __VdynTrigger_h17533151__0 = 0U;
            CData/*0:0*/ __Vtrigcurrexpr_hed2d1600__0;
            __Vtrigcurrexpr_hed2d1600__0 = 0;
            while ((1U & (~ (IData)(__VdynTrigger_h17533151__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (~ $unit::fifo_driver.vif.full))", 
                                                             "tb/fifo_driver.sv", 
                                                             30);
                __Vtrigcurrexpr_hed2d1600__0 = (1U 
                                                & (~ (IData)(VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 30)
                                                             ->full)));
                __VdynTrigger_h17533151__0 = __Vtrigcurrexpr_hed2d1600__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h17533151__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (~ $unit::fifo_driver.vif.full))", 
                                                         "tb/fifo_driver.sv", 
                                                         30);
        }
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h1591504d__0;
        __Vintraval_h1591504d__0 = 0;
        __Vintraval_h1591504d__0 = 1U;
        this->__VnoInFunc_drive____Vfork_6__1(vlSymsp, __Vintraval_h1591504d__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*7:0*/ __Vintraval_hd79684f8__0;
        __Vintraval_hd79684f8__0 = 0;
        __Vintraval_hd79684f8__0 = VL_NULL_CHECK(tx, "tb/fifo_driver.sv", 32)
            ->__PVT__data;
        this->__VnoInFunc_drive____Vfork_7__1(vlSymsp, __Vintraval_hd79684f8__0);
        CData/*0:0*/ __VdynTrigger_hc117fa6b__4;
        __VdynTrigger_hc117fa6b__4 = 0;
        __VdynTrigger_hc117fa6b__4 = 0U;
        CData/*0:0*/ __Vtrigprevexpr_hc2d7e255__4;
        __Vtrigprevexpr_hc2d7e255__4 = 0;
        __Vtrigprevexpr_hc2d7e255__4 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 33)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_hc117fa6b__4)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::fifo_driver.vif.clk)", 
                                                         "tb/fifo_driver.sv", 
                                                         33);
            __VdynTrigger_hc117fa6b__4 = (VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 33)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_hc2d7e255__4)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc117fa6b__4);
            __Vtrigprevexpr_hc2d7e255__4 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 33)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_driver.vif.clk)", 
                                                     "tb/fifo_driver.sv", 
                                                     33);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h15922ab0__1;
        __Vintraval_h15922ab0__1 = 0;
        __Vintraval_h15922ab0__1 = 0U;
        this->__VnoInFunc_drive____Vfork_8__1(vlSymsp, __Vintraval_h15922ab0__1);
    } else {
        if (VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 37)
            ->empty) {
            CData/*0:0*/ __VdynTrigger_h2f695a4b__0;
            __VdynTrigger_h2f695a4b__0 = 0;
            __VdynTrigger_h2f695a4b__0 = 0U;
            CData/*0:0*/ __Vtrigcurrexpr_h158642b6__0;
            __Vtrigcurrexpr_h158642b6__0 = 0;
            while ((1U & (~ (IData)(__VdynTrigger_h2f695a4b__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (~ $unit::fifo_driver.vif.empty))", 
                                                             "tb/fifo_driver.sv", 
                                                             37);
                __Vtrigcurrexpr_h158642b6__0 = (1U 
                                                & (~ (IData)(VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 37)
                                                             ->empty)));
                __VdynTrigger_h2f695a4b__0 = __Vtrigcurrexpr_h158642b6__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2f695a4b__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (~ $unit::fifo_driver.vif.empty))", 
                                                         "tb/fifo_driver.sv", 
                                                         37);
        }
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_hbd96a93f__0;
        __Vintraval_hbd96a93f__0 = 0;
        __Vintraval_hbd96a93f__0 = 1U;
        this->__VnoInFunc_drive____Vfork_9__1(vlSymsp, __Vintraval_hbd96a93f__0);
        CData/*0:0*/ __VdynTrigger_hc117fa6b__5;
        __VdynTrigger_hc117fa6b__5 = 0;
        __VdynTrigger_hc117fa6b__5 = 0U;
        CData/*0:0*/ __Vtrigprevexpr_hc2d7e255__5;
        __Vtrigprevexpr_hc2d7e255__5 = 0;
        __Vtrigprevexpr_hc2d7e255__5 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 39)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_hc117fa6b__5)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::fifo_driver.vif.clk)", 
                                                         "tb/fifo_driver.sv", 
                                                         39);
            __VdynTrigger_hc117fa6b__5 = (VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 39)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_hc2d7e255__5)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc117fa6b__5);
            __Vtrigprevexpr_hc2d7e255__5 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 39)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_driver.vif.clk)", 
                                                     "tb/fifo_driver.sv", 
                                                     39);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_hbd88153a__1;
        __Vintraval_hbd88153a__1 = 0;
        __Vintraval_hbd88153a__1 = 0U;
        this->__VnoInFunc_drive____Vfork_10__1(vlSymsp, __Vintraval_hbd88153a__1);
    }
    CData/*0:0*/ __VdynTrigger_hc117fa6b__6;
    __VdynTrigger_hc117fa6b__6 = 0;
    __VdynTrigger_hc117fa6b__6 = 0U;
    CData/*0:0*/ __Vtrigprevexpr_hc2d7e255__6;
    __Vtrigprevexpr_hc2d7e255__6 = 0;
    __Vtrigprevexpr_hc2d7e255__6 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 43)
        ->clk;
    while ((1U & (~ (IData)(__VdynTrigger_hc117fa6b__6)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_driver.vif.clk)", 
                                                     "tb/fifo_driver.sv", 
                                                     43);
        __VdynTrigger_hc117fa6b__6 = (VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 43)
                                      ->clk & (~ (IData)(__Vtrigprevexpr_hc2d7e255__6)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc117fa6b__6);
        __Vtrigprevexpr_hc2d7e255__6 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 43)
            ->clk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge $unit::fifo_driver.vif.clk)", 
                                                 "tb/fifo_driver.sv", 
                                                 43);
}
