`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:52:33 12/12/2020
// Design Name:   regIDEX
// Module Name:   D:/Lessons/ArchitectureLab/Folder/Project_9632644/regIDEXTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: regIDEX
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module regIDEXTest;

	// Inputs
	reg clk;
	reg hit;
	reg [15:0] nextinst;
	reg regDst;
	reg ALUSrc;
	reg memtoReg;
	reg regWrite;
	reg memRead;
	reg memWrite;
	reg branch;
	reg [1:0] ALUOp;
	reg [2:0] opCode;
	reg [15:0] readData1;
	reg [15:0] readData2;
	reg [15:0] signExtend;
	reg [2:0] rt;
	reg [2:0] rd;

	// Outputs
	wire [15:0] nextinstOut;
	wire regDstOut;
	wire ALUSrcOut;
	wire memtoRegOut;
	wire regWriteOut;
	wire memReadOut;
	wire memWriteOut;
	wire branchOut;
	wire [1:0] ALUOpOut;
	wire [2:0] opCodeOut;
	wire [15:0] readData1Out;
	wire [15:0] readData2Out;
	wire [15:0] signExtendOut;
	wire [2:0] rtOut;
	wire [2:0] rdOut;

	// Instantiate the Unit Under Test (UUT)
	regIDEX uut (
		.clk(clk), 
		.hit(hit), 
		.nextinst(nextinst), 
		.regDst(regDst), 
		.ALUSrc(ALUSrc), 
		.memtoReg(memtoReg), 
		.regWrite(regWrite), 
		.memRead(memRead), 
		.memWrite(memWrite), 
		.branch(branch), 
		.ALUOp(ALUOp), 
		.opCode(opCode), 
		.readData1(readData1), 
		.readData2(readData2), 
		.signExtend(signExtend), 
		.rt(rt), 
		.rd(rd), 
		.nextinstOut(nextinstOut), 
		.regDstOut(regDstOut), 
		.ALUSrcOut(ALUSrcOut), 
		.memtoRegOut(memtoRegOut), 
		.regWriteOut(regWriteOut), 
		.memReadOut(memReadOut), 
		.memWriteOut(memWriteOut), 
		.branchOut(branchOut), 
		.ALUOpOut(ALUOpOut), 
		.opCodeOut(opCodeOut), 
		.readData1Out(readData1Out), 
		.readData2Out(readData2Out), 
		.signExtendOut(signExtendOut), 
		.rtOut(rtOut), 
		.rdOut(rdOut)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		hit = 1;
		nextinst = 2;
		regDst = 1;
		ALUSrc = 0;
		memtoReg = 0;
		regWrite = 0;
		memRead = 0;
		memWrite = 0;
		branch = 0;
		ALUOp = 0;
		opCode = 3'b111;
		readData1 = 0;
		readData2 = 0;
		signExtend = 0;
		rt = 0;
		rd = 0;

		// Wait 100 ns for global reset to finish
		#100;
		clk = 0;
		hit = 1;
		nextinst = 2;
		regDst = 1;
		ALUSrc = 0;
		memtoReg = 0;
		regWrite = 0;
		memRead = 0;
		memWrite = 0;
		branch = 0;
		ALUOp = 0;
		opCode = 3'b111;
		readData1 = 0;
		readData2 = 0;
		signExtend = 0;
		rt = 0;
		rd = 0;
        
		// Add stimulus here

	end
      
endmodule

