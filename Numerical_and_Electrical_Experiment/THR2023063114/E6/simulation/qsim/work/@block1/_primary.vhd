library verilog;
use verilog.vl_types.all;
entity Block1 is
    port(
        Y0N             : out    vl_logic;
        RST             : in     vl_logic;
        CLK             : in     vl_logic;
        Y1N             : out    vl_logic;
        Y2N             : out    vl_logic;
        Y3N             : out    vl_logic;
        Y4N             : out    vl_logic;
        Y5N             : out    vl_logic;
        Y6N             : out    vl_logic;
        Y7N             : out    vl_logic;
        CLK_4           : out    vl_logic;
        CLK_8           : out    vl_logic;
        CLK_2           : out    vl_logic;
        CLK_1           : out    vl_logic
    );
end Block1;
