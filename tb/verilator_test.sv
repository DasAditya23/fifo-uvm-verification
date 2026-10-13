class Packet;
    rand bit [7:0] data;
    rand bit [3:0] addr;

    function void display();
        $display("Packet: addr=0x%0h data=0x%0h", addr, data);
    endfunction
endclass

module verilator_test;
    initial begin
        Packet p = new();
        repeat (5) begin
            if (!p.randomize()) $display("randomize failed");
            p.display();
        end
        $finish;
    end
endmodule