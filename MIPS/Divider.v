`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:43:09 01/31/2021 
// Design Name: 
// Module Name:    Divider 
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
module Divider(
	input clk,
	input [3:0] mycontrol,
	input [15:0] dividend,
	input [15:0] divisor,
	output validity,
	output [31:0] result
    );
	
	wire [5:0] iterationWire;
	wire [31:0] dWire;
	wire [31:0] rsubdWire;
	wire [1:0] operationWire;
	wire [31:0] rWire;
	wire srOraddsubWire;
	wire validityWire;
	wire [15:0] quotientWire;
	
	wire srstartwire;
	wire addstartwire;
	
	SrForDivider mysrfordivider (
    .clk(clk), 
	 .startbit(srstartwire), 
    .srOraddsub(srOraddsubWire), 
    .iteration(iterationWire), 
    .divisor(divisor), 
    .operation(operationWire), 
    .shiftedD(dWire), 
    .quotient(quotientWire)
    );
	 
	 CuForDivider mycufordivider (
    .clk(clk),  
	 .control(mycontrol), 
    .rsubd(rsubdWire), 
    .dividend(dividend), 
    .r(rWire), 
    .operation(operationWire), 
    .srOraddsub(srOraddsubWire), 
    .iteration(iterationWire), 
    .validity(validityWire),
	 .srstart(srstartwire), 
    .addsubstart(addstartwire)
    );
	 
	 Add_SubForDivider myadd_subfordivider (
    .clk(clk), 
	 .startbit(addstartwire), 
    .srOraddsub(srOraddsubWire), 
    .iteration(iterationWire), 
    .r(rWire), 
    .d(dWire), 
    .rsubd(rsubdWire)
    );
	
	assign validity = validityWire;
	assign result = {quotientWire[15:0] ,rWire[15:0]};
	
endmodule
