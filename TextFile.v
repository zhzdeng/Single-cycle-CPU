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
	SingleCycleCPU uut (1'b0
	);

	initial begin
		// Initialize Inputs
		
		// Wait 100 ns for global reset to finish
	   #5000 $stop;
        
		// Add stimulus here

	end
      
endmodule

