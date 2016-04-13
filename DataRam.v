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
   inout [7:0] data,
   input [7:0] address,
   input read,
   input write
   );
	reg [8:0] memory [0:255];
	assign data = read ? memory[address] : 4'bz;
	always @( posedge write)
         memory[address] = data;

endmodule
