`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:56:54 11/10/2020 
// Design Name: 
// Module Name:    decode 
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
module decode(clk, instruction, opCode, readData1, readData2, signExtend, rt, rd, regWrite, regWriteNum, writeData 
    );

	input clk; 
	input [15:0] instruction;
	input regWrite;
	input [2:0] regWriteNum;
	input [15:0] writeData;
	
	output [2:0] opCode;
	output [15:0] readData1;
	output [15:0] readData2;
	output [15:0] signExtend;
	output [2:0] rt;
	output [2:0] rd;
	
	wire [15:0] readData1Wire;
	wire [15:0] readData2Wire;
	wire [15:0] signOutWire;
	
	registerFile myRegFile (
    .clk(clk), 
    .regWrite(regWrite), 
    .regNum1(instruction[12:10]), 
    .regNum2(instruction[9:7]), 
    .regWriteNum(regWriteNum), //changed 
    .readData1(readData1Wire), 
    .readData2(readData2Wire), 
    .writeData(writeData)
    );
	 
	 signExtend mySignExtend (
    .myInput(instruction[6:0]), 
    .myOutput(signOutWire)
    );

	 

	assign opCode = instruction[15:13];
	assign rt = instruction[9:7];
	assign rd = instruction[6:4];
	assign readData1 = readData1Wire;
	assign readData2 = readData2Wire;
	assign signExtend = signOutWire;
	 
endmodule
