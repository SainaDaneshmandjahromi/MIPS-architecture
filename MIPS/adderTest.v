`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:56:27 11/04/2020
// Design Name:   adderaddress
// Module Name:   D:/Lessons/ArchitectureLab/9632644_HW1/Project_9632644/adderTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adderaddress
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adderTest;

	// Inputs
	reg [15:0] preInstruction;

	// Outputs
	wire [15:0] nextInstruction;

	// Instantiate the Unit Under Test (UUT)
	adderaddress uut (
		.preInstruction(preInstruction), 
		.nextInstruction(nextInstruction)
	);

	initial begin
		// Initialize Inputs
		preInstruction = 0;

		// Wait 100 ns for global reset to finish
		#100;
        	preInstruction = 2;
		// Add stimulus here

	end
      
endmodule

