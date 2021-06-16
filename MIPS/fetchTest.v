`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:47:55 11/04/2020
// Design Name:   fetch
// Module Name:   D:/Lessons/ArchitectureLab/9632644_HW1/Project_9632644/fetchTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fetch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fetchTest;

	// Inputs
	reg clk;
	reg PcSrc;
	reg BranchTarget;

	// Outputs
	wire [15:0] addressOut;
	wire [15:0] instructionOut;
	wire hitOut;

	// Instantiate the Unit Under Test (UUT)
	fetch uut (
		.clk(clk), 
		.PcSrc(PcSrc), 
		.BranchTarget(BranchTarget), 
		.addressOut(addressOut), 
		.instructionOut(instructionOut), 
		.hitOut(hitOut)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		PcSrc = 0;
		BranchTarget = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
    always begin
	 #10;
	 clk = ~clk;
	 end
endmodule

