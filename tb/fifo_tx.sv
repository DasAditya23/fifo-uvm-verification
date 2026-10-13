// fifo_tx.sv
// A "transaction" - one unit of work: either a WRITE or a READ.
// This is the fundamental data object that flows through the testbench.

class fifo_tx;

    // --- Random fields ---
    rand bit        is_write;              // 1 = write, 0 = read
    rand bit [7:0]  data;                  // data to write (ignored for reads)

    // --- Constraints ---
    // Right now, keep it simple: 50/50 chance of write vs read.
    // We'll add more interesting constraints later.

    // --- Helper functions ---
    function void display(string tag = "");
        $display("[%s] %s: data=0x%02h",
                 tag,
                 is_write ? "WRITE" : "READ ",
                 data);
    endfunction

    // Deep copy - useful for scoreboards later
    function fifo_tx clone();
        fifo_tx copy = new();
        copy.is_write = this.is_write;
        copy.data     = this.data;
        return copy;
    endfunction

endclass