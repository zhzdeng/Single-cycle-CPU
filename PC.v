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
    input clk,                        // 时钟信号
    input reset,                      // PC置零信号
    input PCWre,                      // CU控制信号，控制是否停机
    input [31:0] instructionInput,    // 指令输入，经过PC判断后输出
    output reg[31:0] instructionOutput// 指令输出
    );
	 initial
	     instructionOutput = 32 'h00000000;
    always @(posedge clk)
	     begin
		      if (PCWre != 1 'b0) begin
				        // 不停机
               if (reset == 1 'b1) instructionOutput = 32 'h00000000;
					     else instructionOutput = instructionInput;
					end
		  end

endmodule
