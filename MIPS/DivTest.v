`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:17:05 02/01/2021
// Design Name:   Divider
// Module Name:   D:/Lessons/ArchitectureLab/9632644_Project/9632644_HW6/Project_9632644/DivTest.v
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

module DivTest;

	// Inputs
	reg clk;
	reg [3:0] mycontrol;
	reg [15:0] dividend;
	reg [15:0] divisor;

	// Outputs
	wire validity;
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	Divider uut (
		.clk(clk), 
		.mycontrol(mycontrol), 
		.dividend(dividend), 
		.divisor(divisor), 
		.validity(validity), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		mycontrol = 4'b1001;
		dividend = 10;
		divisor = 4;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
		always begin
	 #10;
	 clk = ~clk;
	end
      
      
endmodule

