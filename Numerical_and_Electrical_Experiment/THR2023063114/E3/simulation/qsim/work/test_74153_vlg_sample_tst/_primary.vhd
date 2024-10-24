library verilog;
use verilog.vl_types.all;
entity test_74153_vlg_sample_tst is
    port(
        A1              : in     vl_logic;
        B1              : in     vl_logic;
        C10             : in     vl_logic;
        C11             : in     vl_logic;
        C12             : in     vl_logic;
        C13             : in     vl_logic;
        C20             : in     vl_logic;
        C21             : in     vl_logic;
        C22             : in     vl_logic;
        C23             : in     vl_logic;
        GN1             : in     vl_logic;
        GN2             : in     vl_logic;
        sampler_tx      : out    vl_logic
    );
end test_74153_vlg_sample_tst;
