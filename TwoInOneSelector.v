`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:45:20 04/18/2016 
// Design Name: 
// Module Name:    32BitTwoInOneSelector 
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
module BitTwoInOneSelector32Bit(
    input [31:0] ZeroInput,
    input [31:0] OneInput,
    input Control,
    output [31:0] DataOutput
    );

	 assign DataOutput = (Control == 1) ? OneInput : ZeroInput;
endmodule
