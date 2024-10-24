library ieee;
use ieee.std_logic_1164.all;

entity gate_xor is
port(A,B: in std_logic;
Y: out std_logic);
end gate_xor;

architecture archi of gate_xor is
begin
Y<= A xor B;
end archi;