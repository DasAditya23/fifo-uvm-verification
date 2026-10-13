// fifo_monitor.sv
// Passively observes the DUT's signals and reconstructs fifo_tx objects.
// Two observation streams:
//   - "observed writes"  -> whenever wr_en && !full on a posedge
//   - "observed reads"   -> whenever rd_en && !empty on a posedge

class fifo_monitor;

    virtual fifo_if vif;

    // Queues holding what we observed (in order)
    fifo_tx observed_writes[$];
    fifo_tx observed_reads[$];

    function new(virtual fifo_if vif_in);
        this.vif = vif_in;
    endfunction

    // --- Start observing in the background ---
    // We launch two forked threads that sample on every posedge.
    task run();
        fork
            watch_writes();
            watch_reads();
        join_none
    endtask

    // --- Watch for write events ---
    task watch_writes();
        forever begin
            @(posedge vif.clk);
            if (vif.wr_en && !vif.full && vif.rst_n) begin
                fifo_tx tx = new();
                tx.is_write = 1;
                tx.data     = vif.wr_data;
                observed_writes.push_back(tx);
                $display("[MON] WRITE observed: data=0x%02h", tx.data);
            end
        end
    endtask

    // --- Watch for read events ---
    task watch_reads();
        forever begin
            @(posedge vif.clk);
            if (vif.rd_en && !vif.empty && vif.rst_n) begin
                fifo_tx tx = new();
                tx.is_write = 0;
                tx.data     = vif.rd_data;
                observed_reads.push_back(tx);
                $display("[MON] READ  observed: data=0x%02h", tx.data);
            end
        end
    endtask

endclass