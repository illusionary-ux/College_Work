LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;
ENTITY LowFreqClk IS
PORT(rst_n  : IN STD_LOGIC;
    Clk_50M  : IN STD_LOGIC;
    clk_1MHz  : buffer STD_LOGIC);
END LowFreqClk;
 
ARCHITECTURE bhv OF LowFreqClk IS
BEGIN
PROCESS(Clk_50M,rst_n)
VARIABLE Count:INTEGER ;
BEGIN
  IF rst_n = '1' then 
    Count := 0 ;
     clk_1MHz <= '0';
  ELSIF Clk_50M'EVENT AND Clk_50M='1' THEN
    IF Count = 24 THEN
       clk_1MHz <=not clk_1MHz;
        Count := 0 ;
      ELSE
        Count := Count + 1;
      END IF;
  END IF;
END PROCESS ;
END bhv;