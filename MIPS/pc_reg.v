`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:33:17 10/22/2020 
// Design Name: 
// Module Name:    pc_reg 
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
module pc_reg( clk, nextInst, currentInst, hit
    );
	input clk;
	input [15:0] nextInst;
	input hit;
	output reg [15:0] currentInst;
	
	initial
		begin 
		currentInst = {16{1'b0}};
		end
		
	always @(negedge clk) begin
		if(hit == 1'b1)
			currentInst = nextInst ;
	end

endmodule
