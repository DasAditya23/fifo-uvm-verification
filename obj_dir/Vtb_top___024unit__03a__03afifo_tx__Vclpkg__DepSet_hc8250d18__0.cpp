// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top__Syms.h"
#include "Vtb_top___024unit__03a__03afifo_tx__Vclpkg.h"

void Vtb_top___024unit__03a__03afifo_tx::__VnoInFunc_clone(Vtb_top__Syms* __restrict vlSymsp, VlClassRef<Vtb_top___024unit__03a__03afifo_tx> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_tx::__VnoInFunc_clone\n"); );
    // Body
    VlClassRef<Vtb_top___024unit__03a__03afifo_tx> copy;
    copy = VL_NEW(Vtb_top___024unit__03a__03afifo_tx, vlSymsp);
    VL_NULL_CHECK(copy, "tb/fifo_tx.sv", 26)->__PVT__is_write 
        = this->__PVT__is_write;
    VL_NULL_CHECK(copy, "tb/fifo_tx.sv", 27)->__PVT__data 
        = this->__PVT__data;
    clone__Vfuncrtn = copy;
}

Vtb_top___024unit__03a__03afifo_tx::Vtb_top___024unit__03a__03afifo_tx(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_tx::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
}

void Vtb_top___024unit__03a__03afifo_tx::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_tx::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__is_write = 0;
    __PVT__data = 0;
}
