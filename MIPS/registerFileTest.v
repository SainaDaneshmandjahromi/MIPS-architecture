`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:29:12 11/10/2020
// Design Name:   registerFile
// Module Name:   D:/Lessons/ArchitectureLab/HW3/Project_9632644/registerFileTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: registerFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module registerFileTest;

	// Inputs
	reg clk;
	reg regWrite;
	reg [2:0] regNum1;
	reg [2:0] regNum2;
	reg [2:0] regWriteNum;
	reg [15:0] writeData;

	// Outputs
	wire [15:0] readData1;
	wire [15:0] readData2;

	// Instantiate the Unit Under Test (UUT)
	registerFile uut (
		.clk(clk), 
		.regWrite(regWrite), 
		.regNum1(regNum1), 
		.regNum2(regNum2), 
		.regWriteNum(regWriteNum), 
		.readData1(readData1), 
		.readData2(readData2), 
		.writeData(writeData)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		regWrite = 1;
		regNum1 = 4;
		regNum2 = 0;
		regWriteNum = 4;
		writeData = 20;
		$display(readData1);

		// Wait 100 ns for global reset to finish
		#20;
		clk = 1;
		$display(readData1);
		
		#20;
		clk = 0;
		$display(readData1);
		
		#20;
		clk = 1;
		$display(readData1);
		
		#20;
		clk = 0;
		$display(readData1);
		
		#20;
		clk = 1;
		$display(readData1);
		
		// Add stimulus here

	end
      
endmodule

