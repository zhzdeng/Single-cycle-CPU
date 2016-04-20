`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    21:01:39 04/14/2016
// Design Name:
// Module Name:    Control_Unit
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
// zero 有问题
module Control_Unit(
    input [5:0] opcode,
    input zero,
    output reg Extsel, // 符号位扩展 1：有符号扩展, 只有逻辑运算才是无符号扩展
    output reg PCWre, // PC的enable 1: 工作 halt : 0;
    output reg InsMemRW, // 指令存储器读写端，只能读，一直为0
    output reg RegOut, // 0: rt; 1: rd
    output reg RegWre, // 写入通用寄存器使能端信号 1： 写入
    output reg [2:0] ALUOp, // ALU的运算类型
    output reg ALUSrcB, // ALU的数据端选择
    output reg ALUM2Reg, // 只有lw：1
    output reg PCSrc, // beq PCSrc = zero others: 0
    output reg DataMemRW // 1:写入数据存储器（只有lw），0：读
    );

	initial begin
		PCWre <= 1;
		InsMemRW <= 0;
		Extsel <= 0;
		PCSrc <= 0;
		DataMemRW <= 0;
		ALUM2Reg <= 0;
		RegOut <= 1'bz;
		RegWre <= 1'bz;
		ALUOp <= 3'bz;
		ALUSrcB <= 1'bz;
	end
	always @(opcode or zero) begin
		case(opcode)
			6'b000000: begin // add
				Extsel <= 1;
				PCWre <= 1;
				InsMemRW <= 0;
				RegOut <= 1;
				RegWre <= 1;
				ALUOp <= 3'b000;
				ALUSrcB <= 0;
				ALUM2Reg <= 0;
				PCSrc <= 0;
				DataMemRW <= 0;
				end
			6'b000001: begin // addi
				Extsel <= 1;
				PCWre <= 1;
				InsMemRW <= 0;
				RegOut <= 0;
				RegWre <= 1;
				ALUOp <= 3'b000;
				ALUSrcB <= 1;
				ALUM2Reg <= 0;
				PCSrc <= 0;
				DataMemRW <= 0;
				end
			6'b000010: begin // sub
				Extsel <= 1;
				PCWre <= 1;
				InsMemRW <= 0;
				RegOut <= 1;
				RegWre <= 1;
				ALUOp <= 3'b001;
				ALUSrcB <= 0;
				ALUM2Reg <= 0;
				PCSrc <= 0;
				DataMemRW <= 0;
				end
			6'b010000: begin // ori
				Extsel <= 0;
				PCWre <= 1;
				InsMemRW <= 0;
				RegOut <= 0;
				RegWre <= 1;
				ALUOp <= 3'b011;
				ALUSrcB <= 1;
				ALUM2Reg <= 0;
				PCSrc <= 0;
				DataMemRW <= 0;
				end
			6'b010001: begin // and
				Extsel <= 0;
				PCWre <= 1;
				InsMemRW <= 0;
				RegOut <= 1;
				RegWre <= 1;
				ALUOp <= 3'b100;
				ALUSrcB <= 0;
				ALUM2Reg <= 0;
				PCSrc <= 0;
				DataMemRW <= 0;
				end
			6'b010010: begin // or
				Extsel <= 0;
				PCWre <= 1;
				InsMemRW <= 0;
				RegOut <= 1;
				RegWre <= 1;
				ALUOp <= 3'b011;
				ALUSrcB <= 0;
				ALUM2Reg <= 0;
				PCSrc <= 0;
				DataMemRW <= 0;
				end
			6'b100000: begin // move
				Extsel <= 1;
				PCWre <= 1;
				InsMemRW <= 0;
				RegOut <= 1;
				RegWre <= 1;
				ALUOp <= 3'b000;
				ALUSrcB <= 0;
				ALUM2Reg <= 0;
				PCSrc <= 0;
				DataMemRW <= 0;
				end
			6'b100110: begin // sw
				Extsel <= 1;
				PCWre <= 1;
				InsMemRW <= 0;
				RegOut <= 0;
				RegWre <= 0;
				ALUOp <= 3'b000;
				ALUSrcB <= 1;
				ALUM2Reg <= 0;
				PCSrc <= 0;
				DataMemRW <= 1;
				end
			6'b100111: begin // lw
				Extsel <= 1;
				PCWre <= 1;
				InsMemRW <= 0;
				RegOut <= 0;
				RegWre <= 1;
				ALUOp <= 3'b000;
				ALUSrcB <= 1;
				ALUM2Reg <= 1;
				PCSrc <= 0;
				DataMemRW <= 0;
				end
			6'b110000: begin // beq
				Extsel <= 1;
				PCWre <= 1;
				InsMemRW <= 0;
				RegOut <= 0;
				RegWre <= 0;
				ALUOp <= 3'b001;
				ALUSrcB <= 0;
				ALUM2Reg <= 0;
				PCSrc <= zero;
				DataMemRW <= 0;
				end
			6'b111111: begin // halt
				Extsel <= 1;
				PCWre <= 0;
				InsMemRW <= 0;
				RegOut <= 1;
				RegWre <= 0;
				ALUOp <= 3'b000;
				ALUSrcB <= 0;
				ALUM2Reg <= 0;
				PCSrc <= 0;
				DataMemRW <= 0;
				end
		endcase
	end
endmodule
