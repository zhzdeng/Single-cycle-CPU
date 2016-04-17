`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:07:34 04/13/2016 
// Design Name: 
// Module Name:    DataRam 
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
// data 数据输入输出 address 地址总线 read = 1 读 write = 1 写
// write和read不同时为1
module DataRam(
   input [31:0] address,
   input RW,
	inout [31:0] data
   );
	reg [7:0] memory [0:255];
	assign data = RW == 0 ? {memory[address], memory[address + 1], 
								 memory[address + 2], memory[address + 3]} : 32'bz;
	always @(posedge address) begin
			if (RW == 1) begin
         memory[address] <= data[31:24];
			memory[address + 1] <= data[23:16];
			memory[address + 2] <= data[15:8];
			memory[address + 3] <= data[7:0];
			end
	end
endmodule
