library verilog;
use verilog.vl_types.all;
entity sequence_generator is
    port(
        clk             : in     vl_logic;
        rst             : in     vl_logic;
        sout            : out    vl_logic;
        sync            : out    vl_logic
    );
end sequence_generator;
