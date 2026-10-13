// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top__Syms.h"
#include "Vtb_top___024unit__03a__03afifo_driver__Vclpkg.h"

Vtb_top___024unit__03a__03afifo_driver::Vtb_top___024unit__03a__03afifo_driver(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_fifo_if* vif_in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__vif = vif_in;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    this->__VnoInFunc_reset____Vfork_1__1(vlSymsp, 0U);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_hbd88153a__0;
    __Vintraval_hbd88153a__0 = 0;
    __Vintraval_hbd88153a__0 = 0U;
    this->__VnoInFunc_reset____Vfork_2__1(vlSymsp, __Vintraval_hbd88153a__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*7:0*/ __Vintraval_haf49e8de__0;
    __Vintraval_haf49e8de__0 = 0;
    __Vintraval_haf49e8de__0 = 0U;
    this->__VnoInFunc_reset____Vfork_3__1(vlSymsp, __Vintraval_haf49e8de__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h4a54021d__0;
    __Vintraval_h4a54021d__0 = 0;
    __Vintraval_h4a54021d__0 = 0U;
    this->__VnoInFunc_reset____Vfork_4__1(vlSymsp, __Vintraval_h4a54021d__0);
    CData/*0:0*/ __VdynTrigger_hc117fa6b__0;
    __VdynTrigger_hc117fa6b__0 = 0;
    __VdynTrigger_hc117fa6b__0 = 0U;
    CData/*0:0*/ __Vtrigprevexpr_hc2d7e255__0;
    __Vtrigprevexpr_hc2d7e255__0 = 0;
    __Vtrigprevexpr_hc2d7e255__0 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 21)
        ->clk;
    while ((1U & (~ (IData)(__VdynTrigger_hc117fa6b__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_driver.vif.clk)", 
                                                     "tb/fifo_driver.sv", 
                                                     21);
        __VdynTrigger_hc117fa6b__0 = (VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 21)
                                      ->clk & (~ (IData)(__Vtrigprevexpr_hc2d7e255__0)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc117fa6b__0);
        __Vtrigprevexpr_hc2d7e255__0 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 21)
            ->clk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge $unit::fifo_driver.vif.clk)", 
                                                 "tb/fifo_driver.sv", 
                                                 21);
    CData/*0:0*/ __VdynTrigger_hc117fa6b__1;
    __VdynTrigger_hc117fa6b__1 = 0;
    __VdynTrigger_hc117fa6b__1 = 0U;
    CData/*0:0*/ __Vtrigprevexpr_hc2d7e255__1;
    __Vtrigprevexpr_hc2d7e255__1 = 0;
    __Vtrigprevexpr_hc2d7e255__1 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 21)
        ->clk;
    while ((1U & (~ (IData)(__VdynTrigger_hc117fa6b__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_driver.vif.clk)", 
                                                     "tb/fifo_driver.sv", 
                                                     21);
        __VdynTrigger_hc117fa6b__1 = (VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 21)
                                      ->clk & (~ (IData)(__Vtrigprevexpr_hc2d7e255__1)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc117fa6b__1);
        __Vtrigprevexpr_hc2d7e255__1 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 21)
            ->clk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge $unit::fifo_driver.vif.clk)", 
                                                 "tb/fifo_driver.sv", 
                                                 21);
    CData/*0:0*/ __VdynTrigger_hc117fa6b__2;
    __VdynTrigger_hc117fa6b__2 = 0;
    __VdynTrigger_hc117fa6b__2 = 0U;
    CData/*0:0*/ __Vtrigprevexpr_hc2d7e255__2;
    __Vtrigprevexpr_hc2d7e255__2 = 0;
    __Vtrigprevexpr_hc2d7e255__2 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 21)
        ->clk;
    while ((1U & (~ (IData)(__VdynTrigger_hc117fa6b__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_driver.vif.clk)", 
                                                     "tb/fifo_driver.sv", 
                                                     21);
        __VdynTrigger_hc117fa6b__2 = (VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 21)
                                      ->clk & (~ (IData)(__Vtrigprevexpr_hc2d7e255__2)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc117fa6b__2);
        __Vtrigprevexpr_hc2d7e255__2 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 21)
            ->clk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge $unit::fifo_driver.vif.clk)", 
                                                 "tb/fifo_driver.sv", 
                                                 21);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h4a534b9a__0;
    __Vintraval_h4a534b9a__0 = 0;
    __Vintraval_h4a534b9a__0 = 1U;
    this->__VnoInFunc_reset____Vfork_5__1(vlSymsp, __Vintraval_h4a534b9a__0);
    CData/*0:0*/ __VdynTrigger_hc117fa6b__3;
    __VdynTrigger_hc117fa6b__3 = 0;
    __VdynTrigger_hc117fa6b__3 = 0U;
    CData/*0:0*/ __Vtrigprevexpr_hc2d7e255__3;
    __Vtrigprevexpr_hc2d7e255__3 = 0;
    __Vtrigprevexpr_hc2d7e255__3 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 23)
        ->clk;
    while ((1U & (~ (IData)(__VdynTrigger_hc117fa6b__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_driver.vif.clk)", 
                                                     "tb/fifo_driver.sv", 
                                                     23);
        __VdynTrigger_hc117fa6b__3 = (VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 23)
                                      ->clk & (~ (IData)(__Vtrigprevexpr_hc2d7e255__3)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc117fa6b__3);
        __Vtrigprevexpr_hc2d7e255__3 = VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 23)
            ->clk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge $unit::fifo_driver.vif.clk)", 
                                                 "tb/fifo_driver.sv", 
                                                 23);
    co_return;
}

VL_INLINE_OPT VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset____Vfork_5__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4a534b9a__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset____Vfork_5__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_hfbbbb810__4;
    __VdynTrigger_hfbbbb810__4 = 0;
    __VdynTrigger_hfbbbb810__4 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hfbbbb810__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     22);
        __VdynTrigger_hfbbbb810__4 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfbbbb810__4);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     22);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/fifo_driver.sv", 
                                                 22);
    VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 22)->rst_n 
        = __Vintraval_h4a534b9a__0;
    vlSymsp->TOP.__VvifTrigger_h7959d6f6__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset____Vfork_4__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4a54021d__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset____Vfork_4__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_hfbbbb810__3;
    __VdynTrigger_hfbbbb810__3 = 0;
    __VdynTrigger_hfbbbb810__3 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hfbbbb810__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     20);
        __VdynTrigger_hfbbbb810__3 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfbbbb810__3);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     20);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/fifo_driver.sv", 
                                                 20);
    VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 20)->rst_n 
        = __Vintraval_h4a54021d__0;
    vlSymsp->TOP.__VvifTrigger_h7959d6f6__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset____Vfork_3__1(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_haf49e8de__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset____Vfork_3__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_hfbbbb810__2;
    __VdynTrigger_hfbbbb810__2 = 0;
    __VdynTrigger_hfbbbb810__2 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hfbbbb810__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     19);
        __VdynTrigger_hfbbbb810__2 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfbbbb810__2);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     19);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/fifo_driver.sv", 
                                                 19);
    VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 19)->wr_data 
        = __Vintraval_haf49e8de__0;
    vlSymsp->TOP.__VvifTrigger_h7959d6f6__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset____Vfork_2__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hbd88153a__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset____Vfork_2__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_hfbbbb810__1;
    __VdynTrigger_hfbbbb810__1 = 0;
    __VdynTrigger_hfbbbb810__1 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hfbbbb810__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     18);
        __VdynTrigger_hfbbbb810__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfbbbb810__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     18);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/fifo_driver.sv", 
                                                 18);
    VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 18)->rd_en 
        = __Vintraval_hbd88153a__0;
    vlSymsp->TOP.__VvifTrigger_h7959d6f6__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset____Vfork_1__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h15922ab0__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_reset____Vfork_1__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_hfbbbb810__0;
    __VdynTrigger_hfbbbb810__0 = 0;
    __VdynTrigger_hfbbbb810__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hfbbbb810__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     17);
        __VdynTrigger_hfbbbb810__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfbbbb810__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     17);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/fifo_driver.sv", 
                                                 17);
    VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 17)->wr_en 
        = __Vintraval_h15922ab0__0;
    vlSymsp->TOP.__VvifTrigger_h7959d6f6__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive____Vfork_10__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hbd88153a__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive____Vfork_10__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_hfbbbb810__9;
    __VdynTrigger_hfbbbb810__9 = 0;
    __VdynTrigger_hfbbbb810__9 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hfbbbb810__9)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     40);
        __VdynTrigger_hfbbbb810__9 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfbbbb810__9);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     40);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/fifo_driver.sv", 
                                                 40);
    VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 40)->rd_en 
        = __Vintraval_hbd88153a__1;
    vlSymsp->TOP.__VvifTrigger_h7959d6f6__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive____Vfork_9__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hbd96a93f__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive____Vfork_9__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_hfbbbb810__8;
    __VdynTrigger_hfbbbb810__8 = 0;
    __VdynTrigger_hfbbbb810__8 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hfbbbb810__8)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     38);
        __VdynTrigger_hfbbbb810__8 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfbbbb810__8);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     38);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/fifo_driver.sv", 
                                                 38);
    VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 38)->rd_en 
        = __Vintraval_hbd96a93f__0;
    vlSymsp->TOP.__VvifTrigger_h7959d6f6__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive____Vfork_8__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h15922ab0__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive____Vfork_8__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_hfbbbb810__7;
    __VdynTrigger_hfbbbb810__7 = 0;
    __VdynTrigger_hfbbbb810__7 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hfbbbb810__7)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     34);
        __VdynTrigger_hfbbbb810__7 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfbbbb810__7);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     34);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/fifo_driver.sv", 
                                                 34);
    VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 34)->wr_en 
        = __Vintraval_h15922ab0__1;
    vlSymsp->TOP.__VvifTrigger_h7959d6f6__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive____Vfork_7__1(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_hd79684f8__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive____Vfork_7__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_hfbbbb810__6;
    __VdynTrigger_hfbbbb810__6 = 0;
    __VdynTrigger_hfbbbb810__6 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hfbbbb810__6)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     32);
        __VdynTrigger_hfbbbb810__6 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfbbbb810__6);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     32);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/fifo_driver.sv", 
                                                 32);
    VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 32)->wr_data 
        = __Vintraval_hd79684f8__0;
    vlSymsp->TOP.__VvifTrigger_h7959d6f6__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive____Vfork_6__1(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h1591504d__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive____Vfork_6__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_hfbbbb810__5;
    __VdynTrigger_hfbbbb810__5 = 0;
    __VdynTrigger_hfbbbb810__5 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hfbbbb810__5)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     31);
        __VdynTrigger_hfbbbb810__5 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfbbbb810__5);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/fifo_driver.sv", 
                                                     31);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/fifo_driver.sv", 
                                                 31);
    VL_NULL_CHECK(this->__PVT__vif, "tb/fifo_driver.sv", 31)->wr_en 
        = __Vintraval_h1591504d__0;
    vlSymsp->TOP.__VvifTrigger_h7959d6f6__0 = 1U;
}

void Vtb_top___024unit__03a__03afifo_driver::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}
