// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_test.h for the primary calling header

#include "Vverilator_test__pch.h"
#include "Vverilator_test___024unit__03a__03aPacket__Vclpkg.h"

void Vverilator_test___024unit__03a__03aPacket::__VnoInFunc_display(Vverilator_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vverilator_test___024unit__03a__03aPacket::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("Packet: addr=0x%0x data=0x%0x\n",0,
                 4,this->__PVT__addr,8,(IData)(this->__PVT__data));
}

void Vverilator_test___024unit__03a__03aPacket::__VnoInFunc_randomize(Vverilator_test__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vverilator_test___024unit__03a__03aPacket::__VnoInFunc_randomize\n"); );
    // Init
    IData/*31:0*/ __Vfunc___Vbasic_randomize__0__Vfuncout;
    __Vfunc___Vbasic_randomize__0__Vfuncout = 0;
    // Body
    randomize__Vfuncrtn = 1U;
    randomize__Vfuncrtn = (1U & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__0__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__0__Vfuncout));
}

void Vverilator_test___024unit__03a__03aPacket::__VnoInFunc___Vbasic_randomize(Vverilator_test__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vverilator_test___024unit__03a__03aPacket::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
    this->__PVT__data = (0xffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__addr = (0xfU & VL_RANDOM_RNG_I(__Vm_rng));
}

Vverilator_test___024unit__03a__03aPacket::~Vverilator_test___024unit__03a__03aPacket() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vverilator_test___024unit__03a__03aPacket::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vverilator_test___024unit__03a__03aPacket>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vverilator_test___024unit__03a__03aPacket::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vverilator_test___024unit__03a__03aPacket::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vverilator_test___024unit__03a__03aPacket::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vverilator_test___024unit__03a__03aPacket::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vverilator_test___024unit__03a__03aPacket::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data:" + VL_TO_STRING(__PVT__data);
    out += ", addr:" + VL_TO_STRING(__PVT__addr);
    return out;
}
