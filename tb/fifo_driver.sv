// fifo_driver.sv
// Takes fifo_tx objects and drives them onto the DUT's signals.

class fifo_driver;

    // Handle to the DUT's interface (connected from tb_top)
       virtual fifo_if vif;
    
        // --- Constructor ---
    function new(virtual fifo_if vif_in);
        this.vif = vif_in;
    endfunction

    // --- Reset the DUT ---
    task reset();
        vif.wr_en   <= 0;
        vif.rd_en   <= 0;
        vif.wr_data <= 0;
        vif.rst_n   <= 0;
        repeat (3) @(posedge vif.clk);
        vif.rst_n   <= 1;
        @(posedge vif.clk);
    endtask

        // --- Drive one transaction ---
    task drive(fifo_tx tx);
        int timeout;

        if (tx.is_write) begin
            // Poll until FIFO is not full, with a timeout
            timeout = 0;
            while (vif.full && timeout < 500) begin
                @(posedge vif.clk);
                timeout++;
            end
            if (timeout >= 100) begin
                $display("[DRV] TIMEOUT waiting for !full — dropping write");
                return;
            end
            vif.wr_en   <= 1;
            vif.wr_data <= tx.data;
            @(posedge vif.clk);
            vif.wr_en   <= 0;
        end else begin
            // Poll until FIFO is not empty, with a timeout
            timeout = 0;
            while (vif.empty && timeout < 500) begin
                @(posedge vif.clk);
                timeout++;
            end
            if (timeout >= 100) begin
                $display("[DRV] TIMEOUT waiting for !empty — dropping read");
                return;
            end
            vif.rd_en <= 1;
            @(posedge vif.clk);
            vif.rd_en <= 0;
        end
        
    endtask

endclass