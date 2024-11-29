library verilog;
use verilog.vl_types.all;
entity mo12_vlg_sample_tst is
    port(
        cp              : in     vl_logic;
        cr              : in     vl_logic;
        sampler_tx      : out    vl_logic
    );
end mo12_vlg_sample_tst;
