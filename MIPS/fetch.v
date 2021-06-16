`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:02:12 11/04/2020 
// Design Name: 
// Module Name:    fetch 
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
module fetch(clk, PcSrc, BranchTarget, addressOut, instructionOut, hitOut
    );
		
	input clk;
	input PcSrc;
	input [15:0] BranchTarget;
	
	output [15:0] instructionOut;
	output [15:0] addressOut;
	output hitOut;
	
	wire [15:0] wireAddress;
	wire [15:0] myMuxOut;
	wire hit;
	wire [15:0] newAddress;
	wire [63:0] data_line;
	wire [15:0] instruction;
	
	pc_reg myPc (
    .clk(clk), 
    .nextInst(myMuxOut), 
    .currentInst(wireAddress), 
    .hit(hit)
   );

	multiplexer_16 myMux (
    .select(PcSrc), 
    .myIn1(newAddress), 
    .myIn2(BranchTarget), 
    .myOut(myMuxOut)
    );
	 
	adderaddress myAdder (
    .preInstruction(wireAddress), 
    .nextInstruction(newAddress)
   );
		 
	instruction_memory myInstMem (
    .clk(clk), 
    .address(wireAddress), 
    .data_line(data_line)
    );

	cache myCache (
    .clk(clk), 
    .address(wireAddress), 
    .data_line(data_line), 
    .instruction(instruction), 
    .hit(hit)
   );
	
	assign hitOut = hit;
	assign addressOut = newAddress;
	assign instructionOut = instruction;


endmodule
