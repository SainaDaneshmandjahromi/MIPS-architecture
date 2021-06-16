`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:13:43 10/23/2020 
// Design Name: 
// Module Name:    instruction_memory 
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
module instruction_memory(clk, address, data_line
    );
	 
	reg [7:0] mem[0:1023];
	 
	initial
		begin 
		$readmemb("MyMemory.txt", mem);
		end
	
	input clk;
	input [15:0] address;
	output reg[63:0] data_line;

	reg [2:0] count;
	reg [12:0] prevAddress;
	initial
		begin 
		count = 3'b000;
		end
		
	initial
		begin 
		prevAddress = {~address[15:3]};
		end
	
	
	always @(*) begin
		if(prevAddress != address[15:3])
			count = 3'b000;
			prevAddress = address[15:3];
		if(clk == 1'b1)
			begin
				if(count == 3'b101)
					begin
						data_line = {mem[{address[15:3],1'b0,1'b0,1'b0}],mem[{address[15:3],1'b0,1'b0,1'b1}]
										,mem[{address[15:3],1'b0,1'b1,1'b0}],mem[{address[15:3],1'b0,1'b1,1'b1}]
										,mem[{address[15:3],1'b1,1'b0,1'b0}],mem[{address[15:3],1'b1,1'b0,1'b1}]
										,mem[{address[15:3],1'b1,1'b1,1'b0}],mem[{address[15:3],1'b1,1'b1,1'b1}]};
						
					end
				else
					begin
						count = count + 1'b1;
						data_line = {64{1'bx}};
					end
			end
			
	end
	
endmodule
