`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:35:50 12/12/2020 
// Design Name: 
// Module Name:    mux3 
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
module mux3( select, myIn1, myIn2, myOut
    );
	
	 input select;
	 input [2:0] myIn1;
	 input [2:0] myIn2;
	 output [2:0] myOut;
	 
	 assign myOut = select ? myIn2 : myIn1;

endmodule
