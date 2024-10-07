library verilog;
use verilog.vl_types.all;
entity f_adder is
    port(
        sout            : out    vl_logic;
        a               : in     vl_logic;
        b               : in     vl_logic;
        cin             : in     vl_logic;
        cout            : out    vl_logic
    );
end f_adder;
