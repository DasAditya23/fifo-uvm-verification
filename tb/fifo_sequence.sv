// fifo_sequence.sv
// Generates random fifo_tx objects and drives them through the driver.

class fifo_sequence;

    function new();
    endfunction

        // --- Run N transactions through the driver ---
    task run(fifo_driver drv, int unsigned count);
        int unsigned writes_issued;
        int unsigned reads_issued;
        int roll;

        writes_issued = 0;
        reads_issued  = 0;

        $display("========================================");
        $display("[SEQ] Running %0u random transactions", count);
        $display("========================================");

        for (int i = 0; i < count; i++) begin
            fifo_tx tx;
            tx = new();

            roll = $urandom_range(0, 99);

            // Phase-biased randomization:
            //   - First 1/3:  mostly writes -> fill the FIFO
            //   - Next 1/3:   mostly reads  -> drain the FIFO
            //   - Last 1/3:   50/50         -> mixed traffic
            if (i < count / 3)
                tx.is_write = (roll < 85);   // 85% writes
            else if (i < 2 * count / 3)
                tx.is_write = (roll < 15);   // 85% reads
            else
                tx.is_write = (roll < 50);   // 50/50

            tx.data = $urandom_range(0, 255);

            if (tx.is_write) writes_issued++;
            else             reads_issued++;

            drv.drive(tx);
        end

        $display("[SEQ] Done. Writes=%0u Reads=%0u", writes_issued, reads_issued);
        $display("========================================");
    endtask
    endclass