`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:17:30 12/11/2020 
// Design Name: 
// Module Name:    myregMEMWB 
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
module myregMEMWB(clk, hit, regWriteIn, memtoRegIn, readDataIn, aluResultIn, writeRegIn,
						regWriteOut, memtoRegOut, readDataOut, aluResultOut, writeRegOut, hitOut
    );
	 
	input clk;
	input hit;
	input regWriteIn;
	input memtoRegIn;
	input [15:0] readDataIn;
	input [15:0] aluResultIn;
	input [2:0] writeRegIn;
	
	
	output reg regWriteOut;
	output reg memtoRegOut;
	output reg [15:0] readDataOut;
	output reg [15:0] aluResultOut;
	output reg [2:0] writeRegOut;
	output reg hitOut;
	
	initial begin
			regWriteOut = 0;
			memtoRegOut = 0;
			readDataOut = 0;
			aluResultOut = 0;
			writeRegOut = 0;
	end
	
	always @(negedge clk) begin
		if(hit == 1)
			begin
			regWriteOut = regWriteIn;
			memtoRegOut = memtoRegIn;
			readDataOut = readDataIn;
			aluResultOut = aluResultIn;
			writeRegOut = writeRegIn;
			hitOut = hit;
			end
		end

endmodule
