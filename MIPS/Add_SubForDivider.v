`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:56:33 01/31/2021 
// Design Name: 
// Module Name:    Add_SubForDivider 
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
module Add_SubForDivider(
	input clk,
	input startbit,
	input srOraddsub, //IF 1 addsub
	input [5:0] iteration,
	input [31:0] r,
	input [31:0] d,
	output reg [31:0] rsubd
	
    );
	reg [1:0] first;
	
	initial
		begin
			first = 2'b0;
		end
		
	always @(negedge clk)
		begin
			if(startbit == 1'b1)
				begin
				if(iteration < 18)
					begin
					if(first == 2'b00)
						begin
							first = first + 1;
						end
					else 
						begin
							if(srOraddsub == 1'b1)
								begin
									rsubd = r - d;
								end
						end
					
					end
				end
		
		end

endmodule
