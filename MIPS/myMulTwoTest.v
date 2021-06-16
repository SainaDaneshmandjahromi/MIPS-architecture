`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:26:04 02/01/2021
// Design Name:   Multiplier
// Module Name:   D:/Lessons/ArchitectureLab/9632644_Project/9632644_HW6/Project_9632644/myMulTwoTest.v
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

module myMulTwoTest;

	// Inputs
	reg clk;
	reg [3:0] control;
	reg [15:0] a;
	reg [15:0] b;

	// Outputs
	wire [31:0] r;
	wire validity;

	// Instantiate the Unit Under Test (UUT)
	Multiplier uut (
		.clk(clk), 
		.control(control), 
		.a(a), 
		.b(b), 
		.r(r), 
		.validity(validity)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		control = 4'b1000;
		a = 21845;
		b = 1;

		// Wait 100 ns for global reset to finish
		#400;
		a = 1;
		b = 21845;
		
		#400;
		a = -1;
		b = 21845;
		
		#400;
		a = 10922;
		b = 2;
        
		// Add stimulus here

	end
	
	always begin
	 #10;
	 clk = ~clk;
	end
      
endmodule

