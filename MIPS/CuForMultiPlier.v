`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:44:53 01/31/2021 
// Design Name: 
// Module Name:    CuForMultiPlier 
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
module CuForMultiPlier(
	input [15:0] a,
	input clk,
	input [3:0] control,
	output reg validity,
	output reg [1:0] AddorSub,
	output reg srstart,
	output reg addsubstart
    );
	 
	reg [15:0] lastIn;
	reg [4:0] index;
	reg [16:0] newa;
	
	initial
	begin
		index = 0;
		validity = 1'b0;
		
		lastIn = 16'b0;
		
		srstart = 1'b0;
		addsubstart = 1'b0;
	end
	
	always @( posedge clk)
	begin
		if(control == 4'b1000 && lastIn != a)
			begin
			srstart = 1'b1;
			lastIn = a;
			end
		if(index == 16)
			begin
				srstart = 1'b0;
				validity = 1'b1;
			end
	end
	
	always @( negedge clk)
	begin 
		if(srstart == 1'b1)
			begin
			addsubstart = 1'b1;
			newa = {a[15:0] ,1'b0};
			if(index <16)
				begin
					if(newa[index] == 1'b0 && newa[index+1] == 1'b1)
						begin 
							AddorSub = 2'b10; //add
						end
					else if(newa[index] == 1'b1 && newa[index+1] == 1'b0)
						begin
							AddorSub = 2'b01; //sub
						end
					else 
						begin
							AddorSub = 2'b00;
						end
				index = index + 1'b1;
				end
		end	
		else if(srstart == 1'b0)
			begin 
				AddorSub = 2'b00;
				validity = 1'b0;
				
				index = 0;
				addsubstart = 0;
			end
		
	end
endmodule
