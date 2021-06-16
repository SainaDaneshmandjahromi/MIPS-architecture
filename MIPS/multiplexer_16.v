`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:34:10 10/22/2020 
// Design Name: 
// Module Name:    multiplexer_16 
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
module multiplexer_16( select, myIn1, myIn2 , myOut
    );
	 
	 input select;
	 input [15:0] myIn1;
	 input [15:0] myIn2;
	 output [15:0] myOut;
	 
	 assign myOut = select ? myIn2 : myIn1;
	 
	 

endmodule
