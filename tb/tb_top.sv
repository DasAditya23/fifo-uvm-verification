`timescale 1ns/1ps
import fifo_pkg::*;
module tb_top;

    localparam DATA_WIDTH = 8;
    localparam DEPTH      = 16;
    localparam ADDR_WIDTH = 4;

    // --- Clock ---
    logic clk = 0;
    always #5 clk = ~clk;

    // --- Instantiate the interface ---
    fifo_if #(.DATA_WIDTH(DATA_WIDTH)) dut_if (.clk(clk));

    // --- Instantiate the DUT ---
    sync_fifo #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) dut (
        .clk     (clk),
        .rst_n   (dut_if.rst_n),
        .wr_en   (dut_if.wr_en),
        .wr_data (dut_if.wr_data),
        .full    (dut_if.full),
        .rd_en   (dut_if.rd_en),
        .rd_data (dut_if.rd_data),
        .empty   (dut_if.empty)
    );

    // --- Testbench components ---
    fifo_driver  drv;
    fifo_monitor mon;

    // --- Test ---
    initial begin
        // Create and reset driver
        drv = new(dut_if);
        drv.reset();

        // Create monitor and start observing in background
        mon = new(dut_if);
        mon.run();

        // Drive one write transaction
        begin
            fifo_tx tx = new();
            tx.is_write = 1;
            tx.data     = 8'hAA;
            drv.drive(tx);
            $display("Drove one write of 0xAA");
        end
        // Drive one read transaction
        begin
            fifo_tx tx = new();
            tx.is_write = 0;
            drv.drive(tx);
            $display("Drove one read");
        end
                // Give the monitor time to observe
        repeat (10) @(posedge clk);

        // --- Scoreboard: compare writes vs reads ---
        begin
            fifo_scoreboard scb = new();

            $display("--- Feeding scoreboard from monitor ---");
            // Push all observed writes to scoreboard first
            foreach (mon.observed_writes[i])
                scb.on_write(mon.observed_writes[i]);
            // Then push all observed reads
            foreach (mon.observed_reads[i])
                scb.on_read(mon.observed_reads[i]);

            scb.final_check();
        end

        $finish;
    end

endmodule