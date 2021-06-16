`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:24:18 12/03/2020
// Design Name:   Execute
// Module Name:   D:/Lessons/ArchitectureLab/9632644_HW4/Project_9632644/ExecuteTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Execute
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ExecuteTest;

	// Inputs
	reg [15:0] readData1;
	reg [15:0] readData2;
	reg [15:0] instant;
	reg aluSrc;
	reg [1:0] aluOp;

	// Outputs
	wire [15:0] aluOut;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	Execute uut (
		.readData1(readData1), 
		.readData2(readData2), 
		.instant(instant), 
		.aluSrc(aluSrc), 
		.aluOp(aluOp), 
		.aluOut(aluOut), 
		.zero(zero)
	);

	initial begin
		// Initialize Inputs
		readData1 = 0;
		readData2 = 0;
		instant = 0;
		aluSrc = 0;
		aluOp = 0;

		// Wait 100 ns for global reset to finish
		#100;
		readData1 = 10;
		readData2 = 20;
		instant = 0;
		aluSrc = 0;
		aluOp = 2'b00;
		
		#100;
		readData1 = 10;
		readData2 = 20;
		instant = 3;
		aluSrc = 1;
		aluOp = 2'b00;
		
		
		#100;
		readData1 = 10;
		readData2 = 20;
		instant = 3;
		aluSrc = 1;
		aluOp = 2'b01;
        
		// Add stimulus here

	end
      
endmodule

