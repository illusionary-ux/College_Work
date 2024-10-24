library verilog;
use verilog.vl_types.all;
entity test_74153 is
    port(
        Y1              : out    vl_logic;
        C11             : in     vl_logic;
        GN1             : in     vl_logic;
        C10             : in     vl_logic;
        C20             : in     vl_logic;
        GN2             : in     vl_logic;
        C22             : in     vl_logic;
        C12             : in     vl_logic;
        C13             : in     vl_logic;
        B1              : in     vl_logic;
        A1              : in     vl_logic;
        C21             : in     vl_logic;
        C23             : in     vl_logic;
        Y2              : out    vl_logic
    );
end test_74153;
