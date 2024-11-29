LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

ENTITY LowFreqClk IS
PORT(rst_n  : IN STD_LOGIC;			--异步清零信号，低电平有效
	Clk_50M  : IN STD_LOGIC;			--晶振50MHz信号输入
	clk_1Hz  : buffer STD_LOGIC;
	clk_2Hz  : buffer STD_LOGIC;
	clk_4Hz  : buffer STD_LOGIC;
	clk_8Hz  : buffer STD_LOGIC);
END LowFreqClk;

ARCHITECTURE Behv OF LowFreqClk IS
CONSTANT Freq_div: INTEGER :=3125000;	--分频系数，仿真的时候请将该系数改为2
BEGIN
PROCESS(Clk_50M,rst_n)						--将晶振50MHz信号分频后输出8Hz信号
VARIABLE Count:INTEGER :=0;
BEGIN
  IF rst_n = '0' then 
    Count := 0 ;
	 clk_8Hz <= '0';
  ELSIF Clk_50M'EVENT AND Clk_50M='1' THEN
    IF Count >= Freq_div - 1 THEN
	   clk_8Hz <=not clk_8Hz;
		Count := 0 ;
	  ELSE
		Count := Count + 1;
	  END IF;
  END IF;
END PROCESS ;
PROCESS(Clk_8Hz,rst_n)					--将8Hz信号二分频后输出4Hz信号
BEGIN
  IF rst_n = '0' then 
	 clk_4Hz <= '0';
  ELSIF Clk_8Hz'EVENT AND Clk_8Hz='1' THEN
	 clk_4Hz <=not clk_4Hz;
  END IF;
END PROCESS ;
PROCESS(Clk_4Hz,rst_n)					--将4Hz信号二分频后输出2Hz信号
BEGIN
  IF rst_n = '0' then 
	 clk_2Hz <= '0';
  ELSIF Clk_4Hz'EVENT AND Clk_4Hz='1' THEN
	 clk_2Hz <=not clk_2Hz;
  END IF;
END PROCESS ;
PROCESS(Clk_2Hz,rst_n)					--将2Hz信号二分频后输出1Hz信号
BEGIN
  IF rst_n = '0' then 
	 clk_1Hz <= '0';
  ELSIF Clk_2Hz'EVENT AND Clk_2Hz='1' THEN
	 clk_1Hz <=not clk_1Hz;
  END IF;
END PROCESS ;
END Behv;	