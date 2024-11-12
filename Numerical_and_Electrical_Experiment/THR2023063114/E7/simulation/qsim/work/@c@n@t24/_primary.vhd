library verilog;
use verilog.vl_types.all;
entity CNT24 is
    port(
        Q0              : out    vl_logic;
        cp              : in     vl_logic;
        clr             : in     vl_logic;
        Q1              : out    vl_logic;
        Q2              : out    vl_logic;
        Q3              : out    vl_logic;
        Q4              : out    vl_logic;
        Q5              : out    vl_logic;
        Q6              : out    vl_logic;
        Q7              : out    vl_logic
    );
end CNT24;
