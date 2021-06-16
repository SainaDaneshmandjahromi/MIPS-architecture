`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:30:34 11/28/2020
// Design Name:   controlUnit
// Module Name:   D:/Lessons/ArchitectureLab/9632644_HW4/Project_9632644/controlUnitTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module controlUnitTest;

	// Inputs
	reg [2:0] opCode;

	// Outputs
	wire regDst;
	wire ALUSrc;
	wire memtoReg;
	wire regWrite;
	wire memRead;
	wire memWrite;
	wire branch;
	wire [1:0] ALUOp;

	// Instantiate the Unit Under Test (UUT)
	controlUnit uut (
		.opCode(opCode), 
		.regDst(regDst), 
		.ALUSrc(ALUSrc), 
		.memtoReg(memtoReg), 
		.regWrite(regWrite), 
		.memRead(memRead), 
		.memWrite(memWrite), 
		.branch(branch), 
		.ALUOp(ALUOp)
	);

	initial begin
		// Initialize Inputs
		opCode = 0;

		// Wait 100 ns for global reset to finish
		#10;
		opCode = 3'b000;
		#10;
		opCode = 3'b100;
		#10;
		opCode = 3'b101;
		#10;
		opCode = 3'b111;
		#10;
		opCode = 3'b110;
		#10;
		opCode = 3'b001;
        
		// Add stimulus here

	end
      
endmodule

