`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:36:25 12/03/2020
// Design Name:   aluControl
// Module Name:   D:/Lessons/ArchitectureLab/9632644_HW4/Project_9632644/aluControlTest.v
// Project Name:  Project_9632644
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: aluControl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module aluControlTest;

	// Inputs
	reg [3:0] myFunction;
	reg [1:0] aluOp;

	// Outputs
	wire [2:0] aluCnt;

	// Instantiate the Unit Under Test (UUT)
	aluControl uut (
		.myFunction(myFunction), 
		.aluOp(aluOp), 
		.aluCnt(aluCnt)
	);

	initial begin
		// Initialize Inputs
		myFunction = 0;
		aluOp = 0;

		// Wait 100 ns for global reset to finish
		#10;
		myFunction = 4'b0000;
		aluOp = 0;
		
		#10;
		myFunction = 4'b0001;
		aluOp = 0;
		
		#10;
		myFunction = 4'b0010;
		aluOp = 0;
				
		#10;
		myFunction = 4'b0011;
		aluOp = 0;
		
		#10;
		myFunction = 4'b0100;
		aluOp = 0;
				
		#10;
		myFunction = 4'b0101;
		aluOp = 0;
		
		#10;
		myFunction = 4'b0110;
		aluOp = 0;
			
		#10;
		myFunction = 4'b0111;
		aluOp = 0;
		
		#10;
		myFunction = 0;
		aluOp = 2'b01;
		
		#10;
		myFunction = 0;
		aluOp = 2'b10;
			
		#10;
		myFunction = 0;
		aluOp = 2'b11;
		
		
		
		
        
        
		// Add stimulus here

	end
      
endmodule

