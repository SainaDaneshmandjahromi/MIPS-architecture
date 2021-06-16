`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:51:32 11/10/2020 
// Design Name: 
// Module Name:    registerFile 
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
module registerFile(clk, regWrite, regNum1, regNum2, regWriteNum, readData1, readData2, writeData
    );
	
	input clk;
	input regWrite;
	
	input [2:0] regNum1;
	input [2:0] regNum2;
	input [2:0] regWriteNum;
	
	input [15:0] writeData;
	
	output [15:0] readData1;
	output [15:0] readData2;

	reg [15:0] myReg[0:7];
	
	initial begin
		myReg[0] = 0;
	end
	
	integer i;
	initial begin
		for(i=1; i<8; i=i+1)
			myReg[i] = i;
	end
	
	assign readData1 = myReg[regNum1];
	assign readData2 = myReg[regNum2];
	
	always @(posedge clk) 
	begin
		if(regWrite == 1'b1)
			begin
				if(regWriteNum != 3'b000)
					begin
						myReg[regWriteNum] = writeData;
					end
				else
					begin
						$display("You can't write in register zero");
					end
			end
	end
	
endmodule
