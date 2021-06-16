`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:23:55 10/22/2020
// Design Name:   PC_register
// Module Name:   D:/Lessons/ArchitectureLab/Project_9632644/PC_registerTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC_register
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_registerTest;

	// Inputs
	reg clk;
	reg [15:0] nextInst;

	// Outputs
	wire [15:0] currentInst;

	// Instantiate the Unit Under Test (UUT)
	PC_register uut (
		.clk(clk), 
		.nextInst(nextInst), 
		.currentInst(currentInst)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		nextInst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
	always
	begin
	#10
	clk = -clk;
	nextInst = nextInst + 2;
	end
endmodule

