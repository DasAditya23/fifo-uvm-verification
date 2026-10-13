// fifo_driver.sv
// Takes fifo_tx objects and drives them onto the DUT's signals.

class fifo_driver;

    // --- Handles to the DUT's signals ---
    // We'll connect these from tb_top using virtual interface.
    virtual fifo_if vif;

    // --- Constructor ---
    function new(virtual fifo_if vif_in);
        this.vif = vif_in;
    endfunction

    // --- Reset the DUT ---
    task reset();
        vif.wr_en  <= 0;
        vif.rd_en  <= 0;
        vif.wr_data <= 0;
        vif.rst_n  <= 0;
        repeat (3) @(posedge vif.clk);
        vif.rst_n  <= 1;
        @(posedge vif.clk);
    endtask

    // --- Drive one transaction ---
    task drive(fifo_tx tx);
        if (tx.is_write) begin
            // Wait until FIFO is not full, then pulse wr_en for 1 cycle
            wait (vif.full == 0);
            vif.wr_en   <= 1;
            vif.wr_data <= tx.data;
            @(posedge vif.clk);
            vif.wr_en   <= 0;
        end else begin
            // Wait until FIFO is not empty, then pulse rd_en for 1 cycle
            wait (vif.empty == 0);
            vif.rd_en <= 1;
            @(posedge vif.clk);
            vif.rd_en <= 0;
        end
        // Small gap between transactions
        @(posedge vif.clk);
    endtask

endclass