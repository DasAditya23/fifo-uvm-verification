`timescale 1ns/1ps

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

    // --- Testbench components (module-level) ---
    fifo_driver     drv;
    fifo_monitor    mon;
    fifo_sequence   seq;
    fifo_scoreboard scb;

    // --- Test ---
    initial begin
        drv = new(dut_if);
        mon = new(dut_if);
        scb = new();
        seq = new();

        drv.reset();
        mon.run();

        seq.run(drv, 150);

        repeat (10) @(posedge clk);

        $display("--- Feeding scoreboard from monitor ---");
        foreach (mon.observed_writes[i])
            scb.on_write(mon.observed_writes[i]);
        foreach (mon.observed_reads[i])
            scb.on_read(mon.observed_reads[i]);

        scb.final_check();

        $finish;
    end

endmodule