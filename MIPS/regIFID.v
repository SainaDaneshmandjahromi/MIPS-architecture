`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:47:36 12/02/2020 
// Design Name: 
// Module Name:    regIFID 
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
module regIFID( clk, hit, instruction, nextinstruction, instOut, nextinstOut, hitOut
    );
	 
	 input clk;
	 input hit;
	 input [15:0] instruction;
	 input [15:0] nextinstruction;
	 
	 output reg [15:0] instOut;
	 output reg [15:0] nextinstOut;
	 output reg hitOut;
	 
	 initial begin
	 		hitOut = 0;
			instOut = 0;
			nextinstOut = 0;
	 end
	 
	 always @(negedge clk) begin
		if(hit == 1)
			begin
				hitOut = hit;
				instOut = instruction;
				nextinstOut = nextinstruction;
			end
		
	 end


endmodule
