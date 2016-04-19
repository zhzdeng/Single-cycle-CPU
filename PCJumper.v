`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    12:53:32 04/17/2016
// Design Name:
// Module Name:    PCJumper
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
module PCJumper(
    input PCSrc,                         // PC控制信号，控制是否跳转
    input [31:0] instructionInput,       // 原指令
    input [31:0] addressOffset,          // 跳转偏移值
    output reg[31:0] instructionOutput   // 输出指令
    );
    initial begin
      instructionOutput = 32'b0;
    end
    always @(instructionInput)
	     begin
		      if (PCSrc == 0)
				    instructionOutput = instructionInput;
				else
				    instructionOutput = instructionInput + (addressOffset << 2);
			end

endmodule
