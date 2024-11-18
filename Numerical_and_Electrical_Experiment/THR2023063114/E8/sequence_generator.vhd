library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sequence_generator is
    Port (
        clk : in STD_LOGIC;           -- 时钟信号
        rst : in STD_LOGIC;           -- 高有效复位信号
        sout : out STD_LOGIC;         -- 序列输出信号
        sync : out STD_LOGIC          -- 同步信号，表示序列的起始
    );
end sequence_generator;

architecture Behavioral of sequence_generator is
    signal sequence : STD_LOGIC_VECTOR(7 downto 0) := "01101010"; -- 定义序列
    signal index : integer range 0 to 7 := 0;                    -- 当前序列索引
begin
    process(clk, rst)
    begin
        if rst = '1' then
            index <= 0;              -- 复位时序列重置到起始
            sync <= '1';             -- 复位后同步信号输出高电平
        elsif rising_edge(clk) then
            sout <= sequence(index); -- 输出当前索引对应的序列值
            if index = 7 then
                index <= 0;          -- 如果到序列末尾，循环到起始
                sync <= '1';         -- 输出同步信号
            else
                index <= index + 1;  -- 否则索引加1
                sync <= '0';         -- 同步信号保持低电平
            end if;
        end if;
    end process;
end Behavioral;
