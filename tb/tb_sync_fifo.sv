`timescale 1ns/1ps

module tb_sync_fifo;

    // Parameters
    localparam DATA_WIDTH = 8;
    localparam DEPTH      = 16;
    localparam ADDR_WIDTH = 4;

    // DUT signals
    logic                  clk;
    logic                  rst_n;
    logic                  wr_en;
    logic [DATA_WIDTH-1:0] wr_data;
    logic                  full;
    logic                  rd_en;
    logic [DATA_WIDTH-1:0] rd_data;
    logic                  empty;

    // Instantiate the FIFO
    sync_fifo #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .wr_en(wr_en),
        .wr_data(wr_data),
        .full(full),
        .rd_en(rd_en),
        .rd_data(rd_data),
        .empty(empty)
    );

    // Clock: 10ns period
    initial clk = 0;
    always #5 clk = ~clk;

    // Test sequence
    initial begin
        // Init
        rst_n  = 0;
        wr_en  = 0;
        rd_en  = 0;
        wr_data = 0;

        // Apply reset
        repeat (3) @(posedge clk);
        rst_n = 1;
        @(posedge clk);

        // TEST 1: Write one value, read it back
        $display("[%0t] TEST 1: Write 0xAA, read it back", $time);
        wr_en   = 1;
        wr_data = 8'hAA;
        @(posedge clk);
        wr_en = 0;

        // Expect empty = 0 now
        if (empty) $display("  FAIL: empty should be 0 after write");
        else       $display("  OK: empty=0");

        rd_en = 1;
        @(posedge clk);
        // data should appear on rd_data
        if (rd_data !== 8'hAA) $display("  FAIL: rd_data=%h expected AA", rd_data);
        else                   $display("  OK: rd_data=%h", rd_data);
        rd_en = 0;

        // Expect empty = 1 now
        @(posedge clk);
        if (!empty) $display("  FAIL: empty should be 1 after read");
        else        $display("  OK: empty=1");

        // TEST 2: Fill the FIFO (16 writes)
        $display("[%0t] TEST 2: Fill FIFO", $time);
        for (int i = 0; i < DEPTH; i++) begin
            wr_en   = 1;
            wr_data = i[DATA_WIDTH-1:0];
            @(posedge clk);
        end
        wr_en = 0;
        @(posedge clk);

        if (!full) $display("  FAIL: full should be 1 after %0d writes", DEPTH);
        else       $display("  OK: full=1");

        // Try to write when full - should be ignored
        wr_en   = 1;
        wr_data = 8'hFF;
        @(posedge clk);
        wr_en = 0;
        $display("  Attempted write while full (should be ignored)");

        // TEST 3: Drain the FIFO, verify data order
        $display("[%0t] TEST 3: Drain FIFO, verify order", $time);
        for (int i = 0; i < DEPTH; i++) begin
            rd_en = 1;
            @(posedge clk);
            if (rd_data !== i[DATA_WIDTH-1:0])
                $display("  FAIL: at index %0d, rd_data=%h expected %h",
                         i, rd_data, i[DATA_WIDTH-1:0]);
        end
        rd_en = 0;
        @(posedge clk);

        if (!empty) $display("  FAIL: empty should be 1 after draining");
        else        $display("  OK: empty=1 after drain");

        $display("[%0t] ALL TESTS DONE", $time);
        $finish;
    end

    // Optional: dump waveforms for GTKWave
    initial begin
        $dumpfile("sim/tb_sync_fifo.vcd");
        $dumpvars(0, tb_sync_fifo);
    end

endmodule