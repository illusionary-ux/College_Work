library verilog;
use verilog.vl_types.all;
entity adder is
    port(
        sout            : out    vl_logic;
        a               : in     vl_logic;
        b               : in     vl_logic;
        cout            : out    vl_logic
    );
end adder;
