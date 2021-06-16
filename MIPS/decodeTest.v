`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:41:50 11/11/2020
// Design Name:   decode
// Module Name:   D:/Lessons/ArchitectureLab/HW3/Project_9632644/decodeTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decode
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decodeTest;

	// Inputs
	reg clk;
	reg [15:0] instruction;

	// Outputs
	wire [2:0] opCode;
	wire [15:0] readData1;
	wire [15:0] readData2;
	wire [15:0] signExtend;
	wire [2:0] rt;
	wire [2:0] rd;

	// Instantiate the Unit Under Test (UUT)
	decode uut (
		.clk(clk), 
		.instruction(instruction), 
		.opCode(opCode), 
		.readData1(readData1), 
		.readData2(readData2), 
		.signExtend(signExtend), 
		.rt(rt), 
		.rd(rd)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		instruction = 0;

		// Wait 100 ns for global reset to finish
		#10;
		instruction = 16'h1234;
		#200;
		instruction = 16'hFEDC;
        
		// Add stimulus here

	end
	always begin
	#10;
	clk = ~clk;
	end
      
endmodule

