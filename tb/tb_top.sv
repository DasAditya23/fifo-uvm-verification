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

    // --- Declare the driver ---
    fifo_driver drv;

    // --- Test ---
    initial begin
        // Create the driver, passing the interface handle
        drv = new(dut_if);
        drv.reset();

        // Drive one write transaction
        begin
            fifo_tx tx = new();
            tx.is_write = 1;
            tx.data     = 8'hAA;
            drv.drive(tx);
            $display("Drove one write of 0xAA");
        end

        repeat (5) @(posedge clk);
        $finish;
    end

endmodule