`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:58:33 04/13/2016 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input clk,
    input reset,
    input PCWre,
    input [31:0] instructionInput,
    output reg[31:0] instructionOutput
    );
	 initial
	     instructionOutput = 32 'h00000000;
    always @(posedge clk)
	     begin
		      if (PCWre != 1 'b0)
                if (reset == 1 'b1)
					     instructionOutput = 32 'h00000000;
					 else
					     instructionOutput = instructionInput;
		  end

endmodule
