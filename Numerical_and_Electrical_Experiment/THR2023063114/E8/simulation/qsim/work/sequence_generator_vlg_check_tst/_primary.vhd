library verilog;
use verilog.vl_types.all;
entity sequence_generator_vlg_check_tst is
    port(
        sout            : in     vl_logic;
        sync            : in     vl_logic;
        sampler_rx      : in     vl_logic
    );
end sequence_generator_vlg_check_tst;
