library verilog;
use verilog.vl_types.all;
entity CNT24_vlg_sample_tst is
    port(
        clr             : in     vl_logic;
        cp              : in     vl_logic;
        sampler_tx      : out    vl_logic
    );
end CNT24_vlg_sample_tst;
