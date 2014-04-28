
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

ENTITY testtap IS
END testtap;
 
ARCHITECTURE behavior OF testtap IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT tapmadl
    PORT(
         clk_i : IN  std_logic;
         rst_i : IN  std_logic;
         RXD_i : IN  std_logic;
			led:out std_logic;
         TXD_o : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal rst_i : std_logic := '0';
   signal RXD_i : std_logic := '1';

 	--Outputs
   signal TXD_o : std_logic;
	signal led :std_logic;

   -- Clock period definitions
   constant clk_i_period : time := 20 ns;
 
BEGIN 
 
	-- Instantiate the Unit Under Test (UUT)
   uut: tapmadl PORT MAP (
          clk_i => clk_i,
          rst_i => rst_i,
          RXD_i => RXD_i,
			 led=>led,
          TXD_o => TXD_o
        );

   -- Clock process definitions
   clk_i_process :process
   begin
		clk_i <= '0';
		wait for clk_i_period/2;
		clk_i <= '1';
		wait for clk_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      wait for 500 us;	
		RXD_i <= not RXD_i;
		wait for 937.8 us;
		RXD_i <= not RXD_i;
		wait for 521 us; 
		RXD_i <= not RXD_i;
		wait for 104.2 us;
		RXD_i <= not RXD_i;
		wait for 312.6 us;
		RXD_i <= not RXD_i;
		wait for 104.2 us;
		RXD_i <= not RXD_i;
		wait for 208.4 us;
		RXD_i <= not RXD_i;
		wait for 208.4 us;
		RXD_i <= not RXD_i;

      wait;
   end process;

END;
