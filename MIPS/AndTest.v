`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:01:06 12/13/2020
// Design Name:   myAnd
// Module Name:   D:/Lessons/ArchitectureLab/Folder/Project_9632644/AndTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: myAnd
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module AndTest;

	// Inputs
	reg Branch;
	reg zero;

	// Outputs
	wire PcSrc;

	// Instantiate the Unit Under Test (UUT)
	myAnd uut (
		.Branch(Branch), 
		.zero(zero), 
		.PcSrc(PcSrc)
	);

	initial begin
		// Initialize Inputs
		#100;

		// Wait 100 ns for global reset to finish
		#100;
		Branch = 1;
		zero = 1; 
		// Add stimulus here

	end
      
endmodule

