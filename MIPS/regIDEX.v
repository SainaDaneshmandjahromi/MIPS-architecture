`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:59:21 12/03/2020 
// Design Name: 
// Module Name:    regIDEX 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module regIDEX(clk, hit, nextinst, regDst, ALUSrc, memtoReg, regWrite, memRead, memWrite, branch, ALUOp
		,opCode ,readData1 ,readData2 ,signExtend ,rt ,rd , nextinstOut, regDstOut, ALUSrcOut, memtoRegOut, regWriteOut, memReadOut, memWriteOut,
		branchOut, ALUOpOut,opCodeOut,readData1Out,readData2Out,signExtendOut,rtOut,rdOut, hitOut
    );

	input clk;
	input hit;
	input [15:0] nextinst;
	
	input regDst;
	input ALUSrc;
	input memtoReg;
	input regWrite;
	input memRead;
	input memWrite;
	input branch;
	input [2:0] ALUOp;
	
	input [2:0] opCode;
	input [15:0] readData1;
	input [15:0] readData2;
	input [15:0] signExtend;
	input [2:0] rt;
	input [2:0] rd;

	output reg [15:0] nextinstOut; 
	
	output reg regDstOut;
	output reg ALUSrcOut;
	output reg memtoRegOut;
	output reg regWriteOut;
	output reg memReadOut;
	output reg memWriteOut;
	output reg branchOut;
	output reg [2:0] ALUOpOut;
	
	output reg [2:0] opCodeOut;
	output reg [15:0] readData1Out;
	output reg [15:0] readData2Out;
	output reg [15:0] signExtendOut;
	output reg [2:0] rtOut;
	output reg [2:0] rdOut;	
	output reg hitOut;
	
	initial begin
	
		nextinstOut = 0;
		regDstOut = 0;
		ALUSrcOut = 0;
		memtoRegOut = 0;
		regWriteOut = 0;
		memReadOut = 0;
		memWriteOut = 0;
		branchOut = 0;
		ALUOpOut = 0;

		opCodeOut = 0;
		readData1Out = 0;
		readData2Out = 0;
		signExtendOut = 0;
		rtOut = 0;
		rdOut = 0;

	
	end
	 
	 always @(negedge clk) begin
		if(hit == 1)
			begin
				nextinstOut = nextinst;
				regDstOut = regDst;
				ALUSrcOut = ALUSrc;
	         memtoRegOut = memtoReg;
				regWriteOut = regWrite;
				memReadOut = memRead;
				memWriteOut = memWrite;
				branchOut = branch;
				ALUOpOut = ALUOp;
	
				opCodeOut = opCode;
				readData1Out = readData1;
				readData2Out = readData2;
				signExtendOut = signExtend;
				rtOut = rt;
				rdOut = rd;
				
				hitOut = hit;
			end
	 end

endmodule
