// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_test.h for the primary calling header

#include "Vverilator_test__pch.h"
#include "Vverilator_test__Syms.h"
#include "Vverilator_test___024root.h"
#include "Vverilator_test___024unit__03a__03aPacket__Vclpkg.h"

VL_ATTR_COLD void Vverilator_test___024root___eval_initial__TOP(Vverilator_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vverilator_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_test___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlClassRef<Vverilator_test___024unit__03a__03aPacket> verilator_test__DOT__unnamedblk1__DOT__p;
    IData/*31:0*/ __Vtask_randomize__1__Vfuncout;
    __Vtask_randomize__1__Vfuncout = 0;
    // Body
    verilator_test__DOT__unnamedblk1__DOT__p = VL_NEW(Vverilator_test___024unit__03a__03aPacket, vlSymsp);
    if (VL_UNLIKELY((1U & (~ (IData)((0U != ([&]() {
                                    VL_NULL_CHECK(verilator_test__DOT__unnamedblk1__DOT__p, "tb/verilator_test.sv", 14)
                                             ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
                                }(), __Vtask_randomize__1__Vfuncout))))))) {
        VL_WRITEF_NX("randomize failed\n",0);
    }
    VL_NULL_CHECK(verilator_test__DOT__unnamedblk1__DOT__p, "tb/verilator_test.sv", 15)->__VnoInFunc_display(vlSymsp);
    if (VL_UNLIKELY((1U & (~ (IData)((0U != ([&]() {
                                    VL_NULL_CHECK(verilator_test__DOT__unnamedblk1__DOT__p, "tb/verilator_test.sv", 14)
                                             ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
                                }(), __Vtask_randomize__1__Vfuncout))))))) {
        VL_WRITEF_NX("randomize failed\n",0);
    }
    VL_NULL_CHECK(verilator_test__DOT__unnamedblk1__DOT__p, "tb/verilator_test.sv", 15)->__VnoInFunc_display(vlSymsp);
    if (VL_UNLIKELY((1U & (~ (IData)((0U != ([&]() {
                                    VL_NULL_CHECK(verilator_test__DOT__unnamedblk1__DOT__p, "tb/verilator_test.sv", 14)
                                             ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
                                }(), __Vtask_randomize__1__Vfuncout))))))) {
        VL_WRITEF_NX("randomize failed\n",0);
    }
    VL_NULL_CHECK(verilator_test__DOT__unnamedblk1__DOT__p, "tb/verilator_test.sv", 15)->__VnoInFunc_display(vlSymsp);
    if (VL_UNLIKELY((1U & (~ (IData)((0U != ([&]() {
                                    VL_NULL_CHECK(verilator_test__DOT__unnamedblk1__DOT__p, "tb/verilator_test.sv", 14)
                                             ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
                                }(), __Vtask_randomize__1__Vfuncout))))))) {
        VL_WRITEF_NX("randomize failed\n",0);
    }
    VL_NULL_CHECK(verilator_test__DOT__unnamedblk1__DOT__p, "tb/verilator_test.sv", 15)->__VnoInFunc_display(vlSymsp);
    if (VL_UNLIKELY((1U & (~ (IData)((0U != ([&]() {
                                    VL_NULL_CHECK(verilator_test__DOT__unnamedblk1__DOT__p, "tb/verilator_test.sv", 14)
                                             ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
                                }(), __Vtask_randomize__1__Vfuncout))))))) {
        VL_WRITEF_NX("randomize failed\n",0);
    }
    VL_NULL_CHECK(verilator_test__DOT__unnamedblk1__DOT__p, "tb/verilator_test.sv", 15)->__VnoInFunc_display(vlSymsp);
    VL_FINISH_MT("tb/verilator_test.sv", 17, "");
}
