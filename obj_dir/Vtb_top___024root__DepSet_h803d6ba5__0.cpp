// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top__Syms.h"
#include "Vtb_top___024root.h"
#include "Vtb_top___024unit__03a__03afifo_driver__Vclpkg.h"
#include "Vtb_top___024unit__03a__03afifo_tx__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlClassRef<Vtb_top___024unit__03a__03afifo_driver> tb_top__DOT__drv;
    VlClassRef<Vtb_top___024unit__03a__03afifo_tx> tb_top__DOT__unnamedblk1__DOT__tx;
    // Body
    tb_top__DOT__drv = VL_NEW(Vtb_top___024unit__03a__03afifo_driver, vlSymsp, (&vlSymsp->TOP__tb_top__DOT__dut_if));
    co_await VL_NULL_CHECK(tb_top__DOT__drv, "tb/tb_top.sv", 39)->__VnoInFunc_reset(vlSymsp);
    tb_top__DOT__unnamedblk1__DOT__tx = VL_NEW(Vtb_top___024unit__03a__03afifo_tx, vlSymsp);
    VL_NULL_CHECK(tb_top__DOT__unnamedblk1__DOT__tx, "tb/tb_top.sv", 44)->__PVT__is_write = 1U;
    VL_NULL_CHECK(tb_top__DOT__unnamedblk1__DOT__tx, "tb/tb_top.sv", 45)->__PVT__data = 0xaaU;
    co_await VL_NULL_CHECK(tb_top__DOT__drv, "tb/tb_top.sv", 46)->__VnoInFunc_drive(vlSymsp, tb_top__DOT__unnamedblk1__DOT__tx);
    VL_WRITEF_NX("Drove one write of 0xAA\n",0);
    co_await vlSelfRef.__VtrigSched_hcfda8b72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb/tb_top.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_hcfda8b72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb/tb_top.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_hcfda8b72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb/tb_top.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_hcfda8b72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb/tb_top.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_hcfda8b72__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.clk)", 
                                                         "tb/tb_top.sv", 
                                                         50);
    VL_FINISH_MT("tb/tb_top.sv", 51, "");
}
