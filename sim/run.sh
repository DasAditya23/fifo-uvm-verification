#!/bin/bash
set -e

verilator --binary --timing -j 0 \
    -Wno-WIDTHTRUNC -Wno-DECLFILENAME \
    +incdir+tb \
    -o sim_vtest \
    --top-module tb_top \
    tb/fifo_if.sv \
    tb/fifo_pkg.sv \
    rtl/sync_fifo.v \
    tb/tb_top.sv

./obj_dir/sim_vtest