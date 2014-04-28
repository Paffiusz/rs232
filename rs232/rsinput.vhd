
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity rsinput is
	
	PORT(
		clk_i : in std_logic;
		rst_i : in std_logic;
		RXD_i : in std_logic;
		d_ready : out std_logic;
		led:out std_logic;
		rs_data_o : out std_logic_vector(7 downto 0)
	);
end rsinput;

architecture Behavioral of rsinput is


component synchronizer is
	PORT(
		clk_i : IN STD_LOGIC;
		sig_i : IN STD_LOGIC;
		sig_o : OUT STD_LOGIC
		);
end component;

component Freqdiv is
	PORT(
		clk_i : in std_logic;
		CLKout : out std_logic
		);
end component;


signal div_clk : std_logic;
signal sync_RXD : std_logic;
signal rs_word : std_logic_vector(7 downto 0);

shared variable count : integer range 0 to 9:=0;

type state is (waiting, input);

begin

divi_clk: Freqdiv
	PORT MAP(clk_i=>clk_i,CLKout => div_clk);

synch_RXD: synchronizer
	PORT MAP(  clk_i=>clk_i, sig_i=>RXD_i, sig_o=>sync_RXD);
	

process(div_clk)

variable q : state := waiting;

	begin
		if rising_edge(div_clk) then
		
			if q = waiting then
				count:=0;
				led<='0';
				d_ready<='0';
				if sync_RXD = '0' then
					q := input;
				end if;
			elsif q=input then
				led<='1';
				count := count + 1;
				if count = 8 then
					q:=waiting;
					d_ready<='1';
				end if;				
			end if;			
		end if;
		
end process;


process(div_clk)
	begin
		if falling_edge(div_clk) then
			case count is
				when 0 => rs_word(0) <= sync_RXD;
				when 1 => rs_word(1) <= sync_RXD;
				when 2 => rs_word(2) <= sync_RXD;
				when 3 => rs_word(3) <= sync_RXD;
				when 4 => rs_word(4) <= sync_RXD;
				when 5 => rs_word(5) <= sync_RXD;
				when 6 => rs_word(6) <= sync_RXD;
				when 7 => rs_word(7) <= sync_RXD;
				when others=> rs_word <= "00000000";
			end case;
		end if;
end process;

process(div_clk)

	begin
	if falling_edge(div_clk) and count = 8 then
		rs_data_o<=rs_word( 7 downto 0);
	end if;
end process;

end Behavioral;