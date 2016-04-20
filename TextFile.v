`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:   13:32:09 04/19/2016
// Design Name:   SingleCycleCPU
// Module Name:   Y:/Desktop/Single-cycle-CPU/TextFile.v
// Project Name:  CPU
// Target Device:
// Tool versions:
// Description:
//
// Verilog Test Fixture created by ISE for module: SingleCycleCPU
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////

module TextFile;

	// Instantiate the Unit Under Test (UUT)
	SingleCycleCPU uut (clk, Extsel,  PCWre,  InsMemRW,  RegOut,
     RegWre,  ALUSrcB,  ALUM2Reg,  PCSrc,  DataMemRW, ALUOp, _instruction,
		_PcOut, _PcIn, _zero, _extendOut, thirdRg, _RgData1, _RgData2,
		_WriteData, _ALUResult, _DataOut, _PcIndect);
	reg clk;
	wire Extsel,  PCWre,  InsMemRW,  RegOut,
     RegWre,  ALUSrcB,  ALUM2Reg,  PCSrc,  DataMemRW;
	wire [2:0] ALUOp;
// 中间数据
	wire [31:0]_instruction;
	wire [31:0]_PcOut;
	wire [31:0]_PcIn;
	wire _zero;
	wire [31:0]_extendOut;
	wire [4:0]_thirdRg;
	wire [31:0]_RgData1;
	wire [31:0]_RgData2;
	wire [31:0]_WriteData;
	wire [31:0]_ALUResult;
	wire [31:0]_DataOut;
	wire [31:0]_PcIndect;
	initial begin
		clk = 1;
		// Initialize Inputs
		#20
		clk = 1'b1;
		forever #20 clk = !clk;
		// Wait 100 ns for global reset to finish
	   #600 $stop;

		// Add stimulus here

	end

endmodule

