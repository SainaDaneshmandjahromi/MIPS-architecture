`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:24:11 11/27/2020 
// Design Name: 
// Module Name:    controlUnit 
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
module controlUnit( opCode, regDst, ALUSrc, memtoReg, regWrite, memRead, memWrite, branch, ALUOp
    );
	 
	input [2:0] opCode;
	
	output regDst;
	output ALUSrc;
	output memtoReg;
	output regWrite;
	output memRead;
	output memWrite;
	output branch;
	output [2:0] ALUOp;
	 
	 
	assign regDst = opCode == 3'b000 ? 1'b1 : 1'b0 ;
	
	assign ALUSrc = opCode == 3'b000 ? 1'b0 :
						 opCode == 3'b110 ? 1'b0 : 1'b1 ;
						 
	assign memtoReg = opCode == 3'b100 ? 1'b1 : 1'b0;
	
	assign regWrite = opCode == 3'b101 ? 1'b0 :
							opCode == 3'b110 ? 1'b0 : 1'b1;
							
	assign memRead = opCode == 3'b100 ? 1'b1 : 1'b0;
	
	assign memWrite = opCode == 3'b101 ? 1'b1 : 1'b0;
	
	assign branch = opCode == 3'b110 ? 1'b1 : 1'b0; 
	
	assign ALUOp = opCode == 3'b000 ? 3'b000 :
					   opCode == 3'b110 ? 3'b001 :
					   opCode == 3'b001 ? 3'b010 : 
						opCode == 3'b011 ? 3'b111 : 3'b011;
					
	


endmodule
