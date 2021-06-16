`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:17:56 12/11/2020 
// Design Name: 
// Module Name:    myregEXMEM 
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
module myregEXMEM(clk, hit, memReadIn, memWriteIn, branchIn, regWriteIn, memtoRegIn, branchTargetIn, zeroIn, 
		aluResultIn, readRegTwoIn, writeRegIn,
		memReadOut, memWriteOut, branchOut, regWriteOut, memtoRegOut, branchTargetOut, zeroOut, 
		aluResultOut, readRegTwoOut, writeRegOut , hitOut
    );
	
	input clk;
	input hit;
	
	input memReadIn;
	input memWriteIn;
	input branchIn;
	input regWriteIn;
	input memtoRegIn;
	input [15:0] branchTargetIn;
	input zeroIn;
	input [15:0] aluResultIn;
	input [15:0] readRegTwoIn;
	input [2:0] writeRegIn;
	
	
	output reg memReadOut;
	output reg memWriteOut;
	output reg branchOut;
	output reg regWriteOut;
	output reg memtoRegOut;
	output reg [15:0] branchTargetOut;
	output reg zeroOut;
	output reg [15:0] aluResultOut;
	output reg [15:0] readRegTwoOut;
	output reg [2:0] writeRegOut;
	output reg hitOut;
	
	initial begin
			memReadOut = 0;
			memWriteOut = 0;
			branchOut = 0;
			regWriteOut = 0;
			memtoRegOut = 0;
			branchTargetOut = 0;
			zeroOut = 0;
			aluResultOut = 0;
			readRegTwoOut = 0;
			writeRegOut = 0;
	end
	
	always @(negedge clk) begin
		if(hit == 1)
			begin
				memReadOut = memReadIn;
				memWriteOut = memWriteIn;
				branchOut = branchIn;
				regWriteOut = regWriteIn;
				memtoRegOut = memtoRegIn;
				branchTargetOut = branchTargetIn;
				zeroOut = zeroIn;
				aluResultOut = aluResultIn;
				readRegTwoOut = readRegTwoIn;
				writeRegOut = writeRegIn;
				hitOut = hit;
			end
		end
	
endmodule
