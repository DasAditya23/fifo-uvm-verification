// fifo_scoreboard.sv
// Compares what was written vs. what was read.

class fifo_scoreboard;

    // Expected data in FIFO order (write order)
    bit [7:0] expected[$];

    // Counters
    int checks_passed = 0;
    int checks_failed = 0;

    // --- Called when a write is observed ---
    function void on_write(fifo_tx tx);
        expected.push_back(tx.data);
        $display("[SCB] Queued expected: 0x%02h (queue size=%0d)",
                 tx.data, expected.size());
    endfunction

    // --- Called when a read is observed ---
    function void on_read(fifo_tx tx);
        bit [7:0] exp;

        if (expected.size() == 0) begin
            $display("[SCB] FAIL: read observed with empty expectation queue! got 0x%02h",
                     tx.data);
            checks_failed++;
            return;
        end

        exp = expected.pop_front();

        if (tx.data === exp) begin
            checks_passed++;
            $display("[SCB] PASS: read 0x%02h matches expected 0x%02h",
                     tx.data, exp);
        end else begin
            checks_failed++;
            $display("[SCB] FAIL: read 0x%02h != expected 0x%02h",
                     tx.data, exp);
        end
    endfunction

    // --- Called at end of test to make sure nothing's left over ---
    function void final_check();
        $display("========================================");
        $display("[SCB] FINAL REPORT");
        $display("[SCB]   Checks passed: %0d", checks_passed);
        $display("[SCB]   Checks failed: %0d", checks_failed);
        $display("[SCB]   Expected-but-never-read: %0d", expected.size());
        if (checks_failed == 0 && expected.size() == 0)
            $display("[SCB]   >>> ALL CHECKS PASSED <<<");
        else
            $display("[SCB]   >>> TEST FAILED <<<");
        $display("========================================");
    endfunction

endclass