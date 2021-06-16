`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:50:42 01/31/2021 
// Design Name: 
// Module Name:    Add_SubForMultiplier 
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
module Add_SubForMultiplier(
	input [1:0] AddorSub,
	input startbit,
	input [15:0] b,
	input clk,
	output reg [31:0] r
    );
	 
	reg [1:0] first;
	initial begin
		first = 2'b00;
		r = 32'h00000000;
   end
	
	always @(posedge clk)
	begin
		if(startbit == 1'b1 && first == 2'b00)
			begin
			if(AddorSub == 2'b01)
				begin
					r = 32'h00000000 + b;
					first = 2'b01;
				end
			else if(AddorSub == 2'b10)
				begin
					r = 32'h00000000 - b;
					first = 2'b01;
				end
			end
		else if(startbit == 1'b1 && first == 2'b01)
			begin
			if(AddorSub == 2'b01)
				begin
					r = r + b;
				end
			else if(AddorSub == 2'b10)
				begin
					r = r - b;
				end
			end
		else if(startbit == 1'b0)
			begin
				first = 2'b00;
			end
	end
	

endmodule
