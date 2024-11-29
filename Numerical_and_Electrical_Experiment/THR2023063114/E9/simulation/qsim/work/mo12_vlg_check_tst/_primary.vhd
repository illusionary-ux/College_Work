library verilog;
use verilog.vl_types.all;
entity mo12_vlg_check_tst is
    port(
        EWG             : in     vl_logic;
        EWR             : in     vl_logic;
        EWY             : in     vl_logic;
        NSG             : in     vl_logic;
        NSR             : in     vl_logic;
        NSY             : in     vl_logic;
        sampler_rx      : in     vl_logic
    );
end mo12_vlg_check_tst;
