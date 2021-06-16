`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:41:47 12/03/2020
// Design Name:   alu
// Module Name:   D:/Lessons/ArchitectureLab/9632644_HW4/Project_9632644/aluTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module aluTest;

	// Inputs
	reg [15:0] input1;
	reg [15:0] input2;
	reg [2:0] aluControl;

	// Outputs
	wire [15:0] Out;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.input1(input1), 
		.input2(input2), 
		.aluControl(aluControl), 
		.Out(Out), 
		.zero(zero)
	);

	initial begin
		// Initialize Inputs
		input1 = 0;
		input2 = 0;
		aluControl = 0;

		// Wait 100 ns for global reset to finish
		#10;
      input1 = 5;
		input2 = 6;
		aluControl = 3'b000;

		#10;
      input1 = 5;
		input2 = 6;
		aluControl = 3'b001;

		#10;
      input1 = 5;
		input2 = 6;
		aluControl = 3'b010;
		
		#10;
      input1 = 5;
		input2 = 6;
		aluControl = 3'b011;
		
		#10;
      input1 = 5;
		input2 = 6;
		aluControl = 3'b100;
		
		#10;
      input1 = 5;
		input2 = 6;
		aluControl = 3'b101;
		
		#10;
      input1 = 5;
		input2 = 6;
		aluControl = 3'b110;
		
		#10;
      input1 = 5;
		input2 = 6;
		aluControl = 3'b111;
		// Add stimulus here

	end
      
endmodule

