// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_FIFO_IF_H_
#define VERILATED_VTB_TOP_FIFO_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_fifo_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ rst_n;
    CData/*0:0*/ wr_en;
    CData/*7:0*/ wr_data;
    CData/*0:0*/ full;
    CData/*0:0*/ rd_en;
    CData/*0:0*/ empty;

    // INTERNAL VARIABLES
    Vtb_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top_fifo_if(Vtb_top__Syms* symsp, const char* v__name);
    ~Vtb_top_fifo_if();
    VL_UNCOPYABLE(Vtb_top_fifo_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtb_top_fifo_if* obj);

#endif  // guard
