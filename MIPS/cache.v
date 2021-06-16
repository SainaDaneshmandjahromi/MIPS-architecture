`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:00:23 11/04/2020 
// Design Name: 
// Module Name:    cache 
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
module cache(clk, address, data_line, instruction, hit
    );
	 
	reg [74:0] myCache[0:7];
	 
	input clk;
	input [15:0] address;
	input [63:0] data_line;
	 
	output reg [15:0] instruction;
	output reg hit;
	
	initial begin 
		myCache[0][74] = 1'b0;
		myCache[1][74] = 1'b0;
		myCache[2][74] = 1'b0;
		myCache[3][74] = 1'b0;
		myCache[4][74] = 1'b0;
		myCache[5][74] = 1'b0;
		myCache[6][74] = 1'b0;
		myCache[7][74] = 1'b0;
	end
	
	always@(data_line) begin
		if(data_line === {64{1'bx}})
			begin
			end
		else
			begin
			myCache[address[5:3]] = {1'b1,address[15:6],data_line};
			end
	end
	
	always@(posedge clk) begin
		if(myCache[address[5:3]][74] == 1'b1)
			begin
				if(myCache[address[5:3]][73:64] == address[15:6])
					begin
						hit = 1'b1;
						if(address[2:1] == 2'b00)
							begin
								instruction = myCache[address[5:3]][63:48];
							end
						else if(address[2:1] == 2'b01)
							begin
								instruction = myCache[address[5:3]][47:32];
							end
						else if(address[2:1] == 2'b10)
							begin
								instruction = myCache[address[5:3]][31:16];
							end
						else if(address[2:1] == 2'b11)
							begin
								instruction = myCache[address[5:3]][15:0];
							end
					end
				else
					begin
						hit = 1'b0;
						instruction = {16{1'bx}};
					end
			end
		else
			begin
				hit = 1'b0;
				instruction = {16{1'bx}};
			end
	end
	


endmodule
