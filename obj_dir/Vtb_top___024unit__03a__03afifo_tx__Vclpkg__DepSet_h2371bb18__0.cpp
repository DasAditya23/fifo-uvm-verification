// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top___024unit__03a__03afifo_tx__Vclpkg.h"

void Vtb_top___024unit__03a__03afifo_tx::__VnoInFunc_display(Vtb_top__Syms* __restrict vlSymsp, std::string tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_tx::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("[%@] %s: data=0x%02x\n",0,-1,&(tag),
                 40,((IData)(this->__PVT__is_write)
                      ? 0x5752495445ULL : 0x5245414420ULL),
                 8,(IData)(this->__PVT__data));
}

Vtb_top___024unit__03a__03afifo_tx::~Vtb_top___024unit__03a__03afifo_tx() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_tx::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_top___024unit__03a__03afifo_tx>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_tx::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_top___024unit__03a__03afifo_tx::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_tx::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_top___024unit__03a__03afifo_tx::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_tx::to_string_middle\n"); );
    // Body
    std::string out;
    out += "is_write:" + VL_TO_STRING(__PVT__is_write);
    out += ", data:" + VL_TO_STRING(__PVT__data);
    return out;
}
