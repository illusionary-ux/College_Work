library verilog;
use verilog.vl_types.all;
entity Block1_vlg_check_tst is
    port(
        CLK_1           : in     vl_logic;
        CLK_2           : in     vl_logic;
        CLK_4           : in     vl_logic;
        CLK_8           : in     vl_logic;
        Y0N             : in     vl_logic;
        Y1N             : in     vl_logic;
        Y2N             : in     vl_logic;
        Y3N             : in     vl_logic;
        Y4N             : in     vl_logic;
        Y5N             : in     vl_logic;
        Y6N             : in     vl_logic;
        Y7N             : in     vl_logic;
        sampler_rx      : in     vl_logic
    );
end Block1_vlg_check_tst;
