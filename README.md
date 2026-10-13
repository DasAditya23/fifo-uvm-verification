# FIFO UVM Verification

A UVM-style verification environment for a synchronous FIFO, written in
SystemVerilog and simulated with Verilator.

## What This Is

A hands-on project to learn class-based SystemVerilog verification (the
concepts behind UVM) without needing a commercial simulator.

## Structure

- `rtl/sync_fifo.v` — The DUT: a parameterizable synchronous FIFO
- `tb/fifo_if.sv` — Interface bundling the FIFO signals
- `tb/fifo_tx.sv` — Transaction class (one write or read operation)
- `tb/fifo_driver.sv` — Drives transactions onto the DUT
- `tb/tb_top.sv` — Testbench top: clock, DUT, driver
- `sim/run.sh` — One-command build + run

## Running

Requires: `verilator`, `make`, `g++`

```bash
./sim/run.sh