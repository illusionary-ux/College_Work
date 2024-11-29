library verilog;
use verilog.vl_types.all;
entity cnt4 is
    port(
        clk             : in     vl_logic;
        rst             : in     vl_logic;
        Q               : out    vl_logic
    );
end cnt4;
