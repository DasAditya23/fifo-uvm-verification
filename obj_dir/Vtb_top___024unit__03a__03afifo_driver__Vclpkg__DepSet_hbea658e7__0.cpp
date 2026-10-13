// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top___024unit__03a__03afifo_driver__Vclpkg.h"

Vtb_top___024unit__03a__03afifo_driver::~Vtb_top___024unit__03a__03afifo_driver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_top___024unit__03a__03afifo_driver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_top___024unit__03a__03afifo_driver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top___024unit__03a__03afifo_driver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_driver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    return out;
}
