`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:25:17 12/12/2020 
// Design Name: 
// Module Name:    myAnd 
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
module myAnd( Branch , zero , PcSrc
    );
	input Branch;
	input zero;
	output reg PcSrc;
	always @(*) begin
		PcSrc = Branch && zero;
	end
					  						 
endmodule
