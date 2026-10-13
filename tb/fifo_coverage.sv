// fifo_coverage.sv
// Functional coverage: tracks whether key corner cases were hit during the test.
// Simplified alternative to UVM covergroups - just manual bins.

class fifo_coverage;

    virtual fifo_if vif;

    // --- Bins (coverpoints) ---
    bit saw_full;
    bit saw_empty;
    bit saw_write_when_full;
    bit saw_read_when_empty;
    bit saw_back_to_back_writes;
    bit saw_back_to_back_reads;

    // Track previous cycle's activity for back-to-back detection
    bit prev_was_write;
    bit prev_was_read;

    function new(virtual fifo_if vif_in);
        this.vif = vif_in;

        saw_full                  = 0;
        saw_empty                 = 0;
        saw_write_when_full       = 0;
        saw_read_when_empty       = 0;
        saw_back_to_back_writes   = 0;
        saw_back_to_back_reads    = 0;
        prev_was_write            = 0;
        prev_was_read             = 0;
    endfunction

    // --- Background sampler: runs every clock edge ---
    task run();
        fork
            sample();
        join_none
    endtask

    task sample();
        bit cur_write;
        bit cur_read;

        forever begin
            @(posedge vif.clk);

            if (vif.rst_n) begin
                cur_write = 0;
                cur_read  = 0;

                // Corner 1 & 2: full / empty boundary
                if (vif.full)  saw_full  = 1;
                if (vif.empty) saw_empty = 1;

                // Corner 3: attempted write while full (driver blocked it, but bus saw it)
                if (vif.wr_en && vif.full)  saw_write_when_full  = 1;

                // Corner 4: attempted read while empty
                if (vif.rd_en && vif.empty) saw_read_when_empty = 1;

                // Detect actual write/read events
                if (vif.wr_en && !vif.full) cur_write = 1;
                if (vif.rd_en && !vif.empty) cur_read = 1;

                // Corner 5 & 6: back-to-back events
                if (cur_write && prev_was_write) saw_back_to_back_writes = 1;
                if (cur_read  && prev_was_read)  saw_back_to_back_reads  = 1;

                prev_was_write = cur_write;
                prev_was_read  = cur_read;
            end
        end
    endtask

    // --- Final coverage report ---
    function void report();
        int total;
        int hit;

        total = 6;
        hit = 0;

        $display("========================================");
        $display("[COV] FUNCTIONAL COVERAGE REPORT");
        $display("----------------------------------------");
        $display("[COV]   saw_full                 = %0d", saw_full);
        $display("[COV]   saw_empty                = %0d", saw_empty);
        $display("[COV]   saw_write_when_full      = %0d", saw_write_when_full);
        $display("[COV]   saw_read_when_empty      = %0d", saw_read_when_empty);
        $display("[COV]   saw_back_to_back_writes  = %0d", saw_back_to_back_writes);
        $display("[COV]   saw_back_to_back_reads   = %0d", saw_back_to_back_reads);
        $display("----------------------------------------");

        if (saw_full)                 hit++;
        if (saw_empty)                hit++;
        if (saw_write_when_full)      hit++;
        if (saw_read_when_empty)      hit++;
        if (saw_back_to_back_writes)  hit++;
        if (saw_back_to_back_reads)   hit++;

        $display("[COV]   Coverage: %0d/%0d = %0d%%", hit, total, (hit * 100) / total);
        $display("========================================");
    endfunction

endclass