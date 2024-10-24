library verilog;
use verilog.vl_types.all;
entity test_74283 is
    port(
        SUM4            : out    vl_logic;
        A1              : in     vl_logic;
        A2              : in     vl_logic;
        B2              : in     vl_logic;
        A3              : in     vl_logic;
        A4              : in     vl_logic;
        B4              : in     vl_logic;
        B1              : in     vl_logic;
        B3              : in     vl_logic;
        COUT            : out    vl_logic;
        SUM1            : out    vl_logic;
        SUM2            : out    vl_logic;
        SUM3            : out    vl_logic
    );
end test_74283;
