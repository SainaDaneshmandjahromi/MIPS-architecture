`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:34:02 12/11/2020 
// Design Name: 
// Module Name:    myDataMem 
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
module myDataMem(clk, memRead, address, memWrite, dataIn, dataOut
    );
	
	input clk;
	input [15:0] dataIn;
	input [15:0] address;
	input memRead;
	input memWrite;
	
	integer i;
	
	output reg[15:0] dataOut;
	
	reg [7:0] mem [0:1023];
	
	initial
		begin 
		for(i = 0; i<=1023 ; i = i+1)
			mem[i] = i; 		
	end
	
	always @(posedge clk)begin
		if(memWrite == 1'b1)
			begin
			mem[address] = dataIn[15:8];
			mem[address + 1] = dataIn[7:0];
			end
			
		if(memRead == 1'b1)
			dataOut = {mem[address],mem[address + 1'b1]};
			

			
	end

endmodule
