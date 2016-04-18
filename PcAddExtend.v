`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:23:12 04/18/2016 
// Design Name: 
// Module Name:    PcAddExtend 
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
module PcAddExtend(
    input reg[31:0] PcInput,
    input reg 31:0] extend,
    output reg[31:0] OutData
    );
	
	always @(PcInput) begin
		extend = extend << 2;
		OutData = extend + PcInput;
	end
endmodule
