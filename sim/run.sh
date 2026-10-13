#!/bin/bash
set -e

verilator --binary --timing -j 0 \
    -Wno-WIDTHTRUNC -Wno-DECLFILENAME \
    -o sim_vtest \
    --top-module tb_top \
    tb/fifo_if.sv \
    tb/fifo_tx.sv \
    tb/fifo_driver.sv \
    tb/fifo_monitor.sv \
    tb/fifo_scoreboard.sv \
    tb/fifo_sequence.sv \
    rtl/sync_fifo.v \
    tb/tb_top.sv

./obj_dir/sim_vtest