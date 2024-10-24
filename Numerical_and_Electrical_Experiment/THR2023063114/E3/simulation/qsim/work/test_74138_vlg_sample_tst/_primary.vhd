library verilog;
use verilog.vl_types.all;
entity test_74138_vlg_sample_tst is
    port(
        A               : in     vl_logic;
        B               : in     vl_logic;
        C               : in     vl_logic;
        G1              : in     vl_logic;
        G2AN            : in     vl_logic;
        G2BN            : in     vl_logic;
        sampler_tx      : out    vl_logic
    );
end test_74138_vlg_sample_tst;
