`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:12:11 01/31/2021
// Design Name:   Divider
// Module Name:   D:/Lessons/ArchitectureLab/9632644_HW6/Project_9632644/dividerTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dividerTest;

	// Inputs
	reg clk;
	reg [15:0] dividend;
	reg [15:0] divisor;

	// Outputs
	wire validity;
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	Divider uut (
		.clk(clk), 
		.dividend(dividend), 
		.divisor(divisor), 
		.validity(validity), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		dividend = 23;
		divisor = 6;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
	end
     always begin
		 #10;
		 clk = ~clk;
   end
endmodule

