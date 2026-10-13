// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top_fifo_if.h"

VL_ATTR_COLD void Vtb_top_fifo_if___ctor_var_reset(Vtb_top_fifo_if* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_fifo_if___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->wr_data = VL_RAND_RESET_I(8);
    vlSelf->full = VL_RAND_RESET_I(1);
    vlSelf->rd_en = VL_RAND_RESET_I(1);
    vlSelf->empty = VL_RAND_RESET_I(1);
}
