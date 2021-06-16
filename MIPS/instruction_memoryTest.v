`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:49:03 10/23/2020
// Design Name:   instruction_memory
// Module Name:   D:/Lessons/ArchitectureLab/Project_9632644/instruction_memoryTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: instruction_memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module instruction_memoryTest;

	// Inputs
	reg clk;
	reg [15:0] address;

	// Outputs
	wire [63:0] data_line;

	// Instantiate the Unit Under Test (UUT)
	instruction_memory uut (
		.clk(clk), 
		.address(address), 
		.data_line(data_line)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		address = 0;

		// Wait 100 ns for global reset to finish
		#50;
		address = 16'h0004;
		#250;
		address = 16'h000A;
		#150;
		address = 16'h0008;
		#500;
		address = 16'h0010;
		#100;
		address = 16'h0012;
		// Add stimulus here

	end
      
	always
	begin
	#50;
	clk = ~clk;
	end

	
endmodule

