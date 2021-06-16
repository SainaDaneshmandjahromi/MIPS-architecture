`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:14:11 10/23/2020
// Design Name:   multiplexer_16
// Module Name:   D:/Lessons/ArchitectureLab/Project_9632644/multiplexer_16Test.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multiplexer_16
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module multiplexer_16Test;

	// Inputs
	reg select;
	reg [15:0] myIn1;
	reg [15:0] myIn2;

	// Outputs
	wire [15:0] myOut;

	// Instantiate the Unit Under Test (UUT)
	multiplexer_16 uut (
		.select(select), 
		.myIn1(myIn1), 
		.myIn2(myIn2), 
		.myOut(myOut)
	);

	initial begin
		// Initialize Inputs
		select = 0;
		myIn1 = 0;
		myIn2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
      myIn1 = 16'd256;
		myIn2 = 16'd1024;
		select = 1'b0;

		#100;
      myIn1 = 16'd256;
		myIn2 = 16'd1024;
		select = 1'b1;
		
		
		#100;
      myIn1 = 16'd256;
		myIn2 = 16'd1024;
		select = 1'b0;
				
		// Add stimulus here

	end
      
endmodule

