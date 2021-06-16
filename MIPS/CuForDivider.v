`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:54:55 01/31/2021 
// Design Name: 
// Module Name:    CuForDivider 
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
module CuForDivider(
	input clk,
	input [3:0] control,
	input [31:0] rsubd,
	input [15:0] dividend,
	
	output reg [31:0] r,
	output reg [1:0] operation,
	output reg srOraddsub,
	output reg [5:0] iteration,
	output reg validity,
	output reg srstart,
	output reg addsubstart
    );
	 
	reg [1:0] first;
	reg mystart;
	
	initial
		begin
		srOraddsub = 1'b1;
		iteration = 5'b00001;
		first = 2'b00;
		validity = 1'b0;
		
		mystart = 1'b0;
		srstart = 1'b0;
		addsubstart = 1'b0;
		end
	
	always @(negedge clk) 
		begin
		if(control == 4'b1001)
			begin
				mystart = 1'b1;	
			end

		if(iteration == 18) 
			begin
				validity = 1'b1;
			end	
		end
		
	always@(posedge clk)
		begin
			if(mystart == 1'b1)
				begin
					srstart = 1'b1;
					addsubstart = 1'b1;
				if(iteration < 18)
					begin
						if(first == 2'b00)
							begin
								first = first + 1;
								r = {{16{1'b0}}, dividend};
							end
						else if(first == 2'b01)
							begin
								first = first + 1;
							end
						else
							begin
								if(srOraddsub == 1'b1)
									begin
										srOraddsub = 1'b0;
										if(rsubd[31] == 1'b1)  // r-d < 0
											begin
												operation = 2'b10;
											end
										else      // r-d > 0
											begin 
												operation = 2'b01;
												r = rsubd;
											end
									end
								else if(srOraddsub == 1'b0)
									begin
										iteration = iteration + 1;
										srOraddsub = 1'b1;
									end
							end
					
					end
				end
		end


	

endmodule
