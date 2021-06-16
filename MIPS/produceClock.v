`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:40:41 01/31/2021 
// Design Name: 
// Module Name:    produceClock 
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
module produceClock( input fastclk, output reg slowclk
    );
	reg [5:0] counter;
	
	initial
		begin
			counter = 0;
			slowclk = 0;
		end
	
	always @(posedge fastclk)
		begin
			counter = counter + 1'b1;
		end

	always @(negedge fastclk)
		begin
			if(counter == 18)
				begin
					slowclk = ~slowclk;
				end
		end
		
endmodule
