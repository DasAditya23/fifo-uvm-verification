// fifo_if.sv
// Interface: a named bundle of wires connecting TB to DUT.

interface fifo_if #(
    parameter DATA_WIDTH = 8
)(
    input logic clk
);

    logic                  rst_n;
    logic                  wr_en;
    logic [DATA_WIDTH-1:0] wr_data;
    logic                  full;
    logic                  rd_en;
    logic [DATA_WIDTH-1:0] rd_data;
    logic                  empty;

endinterface