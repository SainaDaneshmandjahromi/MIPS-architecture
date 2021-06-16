`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:55:29 01/31/2021 
// Design Name: 
// Module Name:    SrForDivider 
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
module SrForDivider(
		input clk,
		input startbit,
		input srOraddsub, //If 0 Sr
		input [5:0] iteration,
		input [15:0] divisor,
		input [1:0] operation,
		output reg [31:0] shiftedD,
		output reg [15:0] quotient
    );
	 
	 reg [1:0] first;
	 
	 initial 
		begin
		quotient = 32'h00000000;
		first = 2'b00;
		end
	
	always @(negedge clk)
	begin
		if(startbit == 1'b1)
			begin
			if(first == 2'b00)
				begin
				first = first + 1;
				shiftedD = {divisor, {16{1'b0}}};
				end
			else
				begin
					if(srOraddsub == 1'b0)
					begin
						if(operation == 2'b10) 
						begin
							quotient = quotient << 1;
						end
						
						else if(operation == 2'b01)
						begin
							quotient = quotient << 1;
							quotient[0] = 1'b1;
						end
						
						shiftedD = shiftedD >> 1;
					end
				end
			end
	
	end

endmodule
