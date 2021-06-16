`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:43:59 12/03/2020 
// Design Name: 
// Module Name:    alu 
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
module alu(clk, input1, input2, aluControl, Out, zero 
    );
		
	input clk;	
	input [15:0] input1;
	input [15:0] input2;
	input [3:0] aluControl;
	
	output zero;
	output [15:0] Out;
	
	wire [31:0] mul_res;
	wire [31:0] div_res;
	
	assign Out = aluControl == 4'b0111 ? (input1<input2 ? 1 : 0):
					 aluControl == 4'b0000 ? input1+input2 :
				    aluControl == 4'b0001 ? input1-input2 :
					 aluControl == 4'b0010 ? ~input1:
				    aluControl == 4'b0011 ? input1<<input2 :
					 aluControl == 4'b0100 ? input1>>input2 :
					 aluControl == 4'b0101 ? input1&input2 :					 					 
					 aluControl == 4'b0110 ? input1|input2 :		
					 aluControl == 4'b1001 ? div_res[31:16] :					 
					 aluControl == 4'b1000 ? mul_res[15:0]	:	3'bxxx;					 
				  
				
	assign zero = Out == 3'b000 ? 1:0;				  
				  
	Multiplier myMul (
    .clk(clk), 
	 .control(aluControl),
    .a(input2), 
    .b(input1), 
    .r(mul_res), 
    .validity(validity)
    );
	
	Divider myDiv (
    .clk(clk), 
	 .mycontrol(aluControl),
    .dividend(input1), 
    .divisor(input2), 
    .validity(validity), 
    .result(div_res)
    );
	 
endmodule
