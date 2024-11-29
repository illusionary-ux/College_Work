library verilog;
use verilog.vl_types.all;
entity jz24_vlg_sample_tst is
    port(
        cp              : in     vl_logic;
        ld              : in     vl_logic;
        sampler_tx      : out    vl_logic
    );
end jz24_vlg_sample_tst;
