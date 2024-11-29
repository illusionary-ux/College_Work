library verilog;
use verilog.vl_types.all;
entity simu_vlg_sample_tst is
    port(
        CLK_T1S         : in     vl_logic;
        Rst_L           : in     vl_logic;
        sampler_tx      : out    vl_logic
    );
end simu_vlg_sample_tst;
