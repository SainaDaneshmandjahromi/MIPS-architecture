`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:56:29 02/01/2021
// Design Name:   Divider
// Module Name:   D:/Lessons/ArchitectureLab/9632644_Project/9632644_HW6/Project_9632644/myDivTwoTest.v
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

module myDivTwoTest;

	// Inputs
	reg clk;
	reg control;
	reg [15:0] dividend;
	reg [15:0] divisor;

	// Outputs
	wire validity;
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	Divider uut (
		.clk(clk), 
		.control(control), 
		.dividend(dividend), 
		.divisor(divisor), 
		.validity(validity), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		control = 4'b1001;
		dividend = 51;
		divisor = 5;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always begin
		 #10;
		 clk = ~clk;
   end		
      
endmodule

