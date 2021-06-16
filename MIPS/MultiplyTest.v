`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:44:33 01/31/2021
// Design Name:   Multiplier
// Module Name:   D:/Lessons/ArchitectureLab/9632644_HW6/Project_9632644/MultiplyTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MultiplyTest;

	// Inputs
	reg clk;
	reg [15:0] a;
	reg [15:0] b;

	// Outputs
	wire [31:0] r;
	wire validity;

	// Instantiate the Unit Under Test (UUT)
	Multiplier uut (
		.clk(clk), 
		.a(a), 
		.b(b), 
		.r(r), 
		.validity(validity)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		a = 11;
		b = 4;

		// Wait 100 ns for global reset to finish
		#100;
    //  a = 3;
	//	b = 4;
		// Add stimulus here

	end
      
		
	always begin
		 #10;
		 clk = ~clk;
   end		

endmodule

