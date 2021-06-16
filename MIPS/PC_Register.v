`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:05:56 10/22/2020 
// Design Name: 
// Module Name:    PC_register 
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
module PC_register( clk, nextInst, currentInst
    );
	 
	 input clk;
	 input [15:0] nextInst;
	 output reg [15:0] currentInst;
	 
	 always @( posedge clk) begin
	 
		currentInst = nextInst + 1;
	 
	 end


endmodule
