// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top_fifo_if.h"

std::string VL_TO_STRING(const Vtb_top_fifo_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_fifo_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
