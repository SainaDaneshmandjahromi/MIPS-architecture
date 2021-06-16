`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:48:09 01/31/2021 
// Design Name: 
// Module Name:    SrForMultiplier 
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
module SrForMultiplier(

	input clk,
	input startbit,
	input [15:0] b,
	output reg [15:0] shiftedb
    );
	reg first;
	
	initial
		begin
			first = 1'b0;
		end
	
	always @(negedge clk)
		begin
			if(startbit == 1'b1)
				begin
					if(first == 1'b0) 
						begin
							shiftedb = b;
							first = 1'b1;
						end
					else if(shiftedb != 16'h0000) 
						begin
							shiftedb = shiftedb << 1; 
						end
				end
			else if(startbit == 1'b0)
				begin
				 first = 1'b0;
				end
		end	
	
endmodule
