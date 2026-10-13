`timescale 1ns/1ps
// fifo_pkg.sv
// Package that contains all testbench classes.
// This mirrors how real UVM uses uvm_pkg.

package fifo_pkg;

    `include "fifo_tx.sv"
    `include "fifo_driver.sv"
    `include "fifo_monitor.sv"

endpackage