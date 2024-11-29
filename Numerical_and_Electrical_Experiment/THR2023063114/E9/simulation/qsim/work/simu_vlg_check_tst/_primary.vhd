library verilog;
use verilog.vl_types.all;
entity simu_vlg_check_tst is
    port(
        a0              : in     vl_logic;
        a1              : in     vl_logic;
        a2              : in     vl_logic;
        a3              : in     vl_logic;
        a4              : in     vl_logic;
        a5              : in     vl_logic;
        a6              : in     vl_logic;
        a7              : in     vl_logic;
        CLK_T4S         : in     vl_logic;
        EWG             : in     vl_logic;
        EWR             : in     vl_logic;
        EWY             : in     vl_logic;
        NSG             : in     vl_logic;
        NSR             : in     vl_logic;
        NSY             : in     vl_logic;
        sampler_rx      : in     vl_logic
    );
end simu_vlg_check_tst;
