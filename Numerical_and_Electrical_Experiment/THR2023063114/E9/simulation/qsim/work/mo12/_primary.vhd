library verilog;
use verilog.vl_types.all;
entity mo12 is
    port(
        EWG             : out    vl_logic;
        cp              : in     vl_logic;
        cr              : in     vl_logic;
        EWY             : out    vl_logic;
        EWR             : out    vl_logic;
        NSG             : out    vl_logic;
        NSY             : out    vl_logic;
        NSR             : out    vl_logic
    );
end mo12;
