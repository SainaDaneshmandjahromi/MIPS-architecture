`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:14:37 11/04/2020
// Design Name:   pc_reg
// Module Name:   D:/Lessons/ArchitectureLab/9632644_HW1/Project_9632644/pcTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pc_reg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pcTest;

	// Inputs
	reg clk;
	reg [15:0] nextInst;
	reg hit;

	// Outputs
	wire [15:0] currentInst;

	// Instantiate the Unit Under Test (UUT)
	pc_reg uut (
		.clk(clk), 
		.nextInst(nextInst), 
		.currentInst(currentInst), 
		.hit(hit)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		nextInst = 0;
		hit = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

