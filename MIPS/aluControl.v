`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:59:05 12/02/2020 
// Design Name: 
// Module Name:    aluControl 
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
module aluControl( myFunction, aluOp, aluCnt
    );
	input [3:0] myFunction;
	input [2:0] aluOp;
	 
	output [3:0] aluCnt;
	 
	assign aluCnt = aluOp == 3'b000 ? (myFunction == 4'b0000 ? 4'b0000 :
												 myFunction == 4'b0001 ? 4'b0001 :
												 myFunction == 4'b0010 ? 4'b0101 :
												 myFunction == 4'b0011 ? 4'b0110 :
												 myFunction == 4'b0100 ? 4'b0111 :
												 myFunction == 4'b0101 ? 4'b0011 :
												 myFunction == 4'b0110 ? 4'b0100 : 		
												 myFunction == 4'b0111 ? 4'b0010 : 
												 myFunction == 4'b1000 ? 4'b1000 : //Mul
												 myFunction == 4'b1001 ? 4'b1001 : 4'bxxxx): //Div
												 
						  aluOp == 3'b001 ? 4'b0001 :
						  aluOp == 3'b010 ? 4'b0111 :
						  aluOp == 3'b011 ? 4'b0000 : 						 
						  aluOp == 3'b111 ? 4'b1000 : 4'bxxxx ;	
	

endmodule
