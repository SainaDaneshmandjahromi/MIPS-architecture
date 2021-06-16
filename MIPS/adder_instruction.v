`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:16:17 11/04/2020 
// Design Name: 
// Module Name:    adder_instruction 
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
module adder_instruction(preInstruction,nextInstruction
    );
	input [15:0] preInstruction;
	output [15:0] nextInstruction;
	
	assign nextInstruction = preInstruction + 2;

endmodule
