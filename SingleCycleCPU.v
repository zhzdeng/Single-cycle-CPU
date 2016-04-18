`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    17:52:55 04/18/2016
// Design Name:
// Module Name:    SingleCycleCPU
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
module SingleCycleCPU;

reg clk;

initial
begin
	// 设定时钟信号 10ns变换一次
	clk = 0;
	forever #10 clk = !clk;
end

// 控制信号
wire Extsel, PCWre, InsMemRW, RegOut,
     RegWre, ALUOp, ALUSrcB, ALUM2Reg, PCSrc, DataMemRW;

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
// 获取指令
// pd -> InstructionRom ->
PC pc(
			.clk(clk),                         // 时钟信号
			.reset(),	                         // PC归零信号
			.PCWre(PCWre),	                   // CU控制信号，控制是否停机
			.instructionInput(_PcIn),	         // 指令输入，经过PC判断后输出
			.instructionOutput(_PcOut)		     // 指令输出
		);

InstructionRom instructionrom(
			.address(_PcOut),  		             // 输入地址
			.read_enable(InsMemRW),	           // 读的使能端
			.read_data(_instruction)			     // 数据输出端口
		);



// 分析指令
// CU -> Registers ->
Control_Unit cu(
      _instruction[31:26],
      _zero,
      Extsel,                            // 符号位扩展 1：有符号扩展, 只有逻辑运算才是无符号扩展
      PCWre,                             // PC的enable 1: 工作 halt : 0;
      InsMemRW,                          // 指令存储器读写端，只能读，一直为0
      RegOut,                            // 0: rt; 1: rd
      RegWre,                            // 写入通用寄存器使能端信号 1： 写入
      ALUOp,                             // ALU的运算类型
      ALUSrcB,                           // ALU的数据端选择
      ALUM2Reg,                          // 只有lw：1
      PCSrc,                             // beq PCSrc = zero others: 0
      DataMemRW                          // 1:写入数据存储器（只有lw），0：读
		);

SignOrZeroExtend signorzeroextend(
      .ExtSel(Extsel),                   // 是否有符号扩展
      .immediate(_instruction[15:0]),    // 立即数
      .DataOut(_extendOut)               // 输出
    );


TwoInOneSelector5Bit registersSelector(
      .ZeroInput(_instruction[20:16]),
      .OneInput(_instruction[15:11]),
      .Control(RegOut),
      .DataOutput(_thirdRg)
    );

GeneralRegisters generalregisters(
      .ReadReg1Address(_instruction[25:21]),
      .ReadReg2Address(_instruction[20:16]),
      .WriteRegAddress(_thirdRg),
      .DataOfWrite(_WriteData),
      .WriteControl(RegWre),
      .Clock(clk),
      .CleanAllControl(),
      .ReadData1(_RgData1),
      .ReadData2(_RgData2)
    );


// 执行指令
// ALU ->

ALU alu(
      .InputDataA(_RgData1),                // 寄存器A
      .InputDataB(_RgData2),                // 寄存器B
      .ImmediateDataB(_extendOut),          // 立即数
      .ALUSrcB(ALUSrcB),                    // CU控制信号，决定B为寄存器值或是立即数
      .ALUOp(ALUOp),                        // CU控制信号，决定运算类型
      .zero(_zero),                         // 输出信号，通知CU为跳转信号
      .result(_ALUResult)                   // 输出结果
    );


PCIncrementer pcincrementer(
      .PCWre(PCWre),
      .instructionInput(_PcOut),
      .instructionOutput(_PcIndect)
    );

PCJumper pcjumper(
      .PCSrc(PCSrc),                         // PC控制信号，控制是否跳转
      .instructionInput(_PcIndect),          // 原指令
      .addressOffset(_extendOut),            // 跳转偏移值
      .instructionOutput(_PcIn)              // 输出指令
    );



// 写入数据
// DataRam -> (Registers)

DataRam dataram(
      .address(_ALUResult),
      .RW(DataMemRW),
      .data(_RgData2)
    );

BitTwoInOneSelector32Bit DataOutputSelector(
      .ZeroInput(_ALUResult),
      .OneInput(_DataOut),
      .Control(ALUM2Reg),
      .DataOutput(_WriteData)
    );

// PC

endmodule
