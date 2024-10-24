library verilog;
use verilog.vl_types.all;
entity test_74283_vlg_check_tst is
    port(
        COUT            : in     vl_logic;
        SUM1            : in     vl_logic;
        SUM2            : in     vl_logic;
        SUM3            : in     vl_logic;
        SUM4            : in     vl_logic;
        sampler_rx      : in     vl_logic
    );
end test_74283_vlg_check_tst;
