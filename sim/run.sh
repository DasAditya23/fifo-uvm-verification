#!/bin/bash
# Compile + run the FIFO verification testbench

set -e   # stop on error

verilator --binary --timing -j 0 \
    -Wno-WIDTHTRUNC -Wno-DECLFILENAME \
    -o sim_vtest \
    --top-module tb_top \
    tb/fifo_if.sv \
    tb/fifo_tx.sv \
    tb/fifo_driver.sv \
    rtl/sync_fifo.v \
    tb/tb_top.sv

./obj_dir/sim_vtest