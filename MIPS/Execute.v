`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:50:32 12/03/2020 
// Design Name: 
// Module Name:    Execute 
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
module Execute(clk, readData1, readData2, instant, aluSrc, aluOp, aluOut, zero
    );
	
	input clk;
	input [15:0] readData1;
	input [15:0] readData2;
	input [15:0] instant;
	input aluSrc;
	input [2:0] aluOp;
	
	output [15:0] aluOut;
	output zero;

	wire [15:0] muxOut;
	wire [3:0] aluCnt;
	
	alu myalu (
		 .clk(clk),	
		 .input1(readData1), 
		 .input2(muxOut), 
		 .aluControl(aluCnt), 
		 .Out(aluOut), 
		 .zero(zero)
		 );

	aluControl myaluControl (
    .myFunction(instant[3:0]), 
    .aluOp(aluOp), 
    .aluCnt(aluCnt)
    );
	 
	 multiplexer_16 mymux (
    .select(aluSrc), 
    .myIn1(readData2), 
    .myIn2(instant), 
    .myOut(muxOut)
    );
	 

endmodule
