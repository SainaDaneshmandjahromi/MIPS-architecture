`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:31:11 01/31/2021 
// Design Name: 
// Module Name:    Multiplier 
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
module Multiplier(
	input clk,
	input [3:0] control,
	input [15:0] a,
	input [15:0] b,
	output [31:0] r,
	output validity
    );
	 
	 wire [1:0] AddorSubWire;
	 wire [31:0] resultWire;
	 wire [15:0] shiftedb;
	 wire validityWire;
	 
	 wire srstartwire;
	 wire addorsubstartwire;

	 
	 CuForMultiPlier mycuformultiplier (
    .a(a), 
    .clk(clk), 
	 .control(control),
    .validity(validityWire), 
    .AddorSub(AddorSubWire),
	 .srstart(srstartwire), 
    .addsubstart(addorsubstartwire)
    );
	
	SrForMultiplier mysrformultiplier (		
    .clk(clk), 
	 .startbit(srstartwire), 
    .b(b), 
    .shiftedb(shiftedb)
    );
	 
	 Add_SubForMultiplier myadd_subformultiplier (
    .AddorSub(AddorSubWire),
    .startbit(addorsubstartwire), 	 
    .b(shiftedb), 
    .clk(clk), 
    .r(resultWire)
    );
	 
	 assign validity = validityWire;
	 assign r = resultWire;

endmodule
