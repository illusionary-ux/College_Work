library verilog;
use verilog.vl_types.all;
entity simu is
    port(
        a0              : out    vl_logic;
        Rst_L           : in     vl_logic;
        CLK_T1S         : in     vl_logic;
        a1              : out    vl_logic;
        a2              : out    vl_logic;
        a3              : out    vl_logic;
        a4              : out    vl_logic;
        a5              : out    vl_logic;
        a6              : out    vl_logic;
        a7              : out    vl_logic;
        EWG             : out    vl_logic;
        EWY             : out    vl_logic;
        EWR             : out    vl_logic;
        NSG             : out    vl_logic;
        NSY             : out    vl_logic;
        NSR             : out    vl_logic;
        CLK_T4S         : out    vl_logic
    );
end simu;
