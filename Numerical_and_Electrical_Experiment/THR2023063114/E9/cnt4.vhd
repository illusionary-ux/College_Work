library ieee ;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
entity cnt4 is 
port (clk:in std_logic; 
   rst: in std_logic;
   Q: out std_logic);
end cnt4;
architecture behv of cnt4 is
begin
process (clk,rst)
variable count: integer range 0 to 3; 
begin 
if rst='0'then
    Q<='1';
    count:=0;
elsif clk'event and clk='1' then
   if count<3 then
     Q<='0';
     count:=count+1;
   else
     Q<='1';
     count:=0;
   end if; 
end if;
end process; 
end behv;