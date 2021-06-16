`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:53:43 12/02/2020 
// Design Name: 
// Module Name:    MIPS 
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
module MIPS(clk
    );

	input clk;
	
	
	//And
	wire PcSrcstage1;
	
	//Fetch
	wire PcSrcwire;
	wire [15:0] addressOutstage1; //pc+2
	wire [15:0] instructionOutstage1; 
	wire hitOutwire;
	
	//IFID
	wire [15:0] addressOutstage12; //pc+2
	wire [15:0] instructionOutstage12; 
	wire hitOutstage12;
	
	//Decode
	wire [2:0] opCodestage2;
	wire [15:0] readData1stage2;
	wire [15:0] readData2stage2;
	wire [15:0] signExtendstage2;
	wire [2:0] rtstage2;
	wire [2:0] rdstage2;
	
	//ControlUnit
	wire regDstwire;
	wire ALUSrcwire;
	wire memtoRegwire;
	wire regWritewire;
	wire memReadwire;
	wire memWritewire;
	wire branchwire;
	wire [2:0] ALUOpwire;
	
	//IDEX
	wire [15:0] nextinststage23;
	
	wire regDststage23;
	wire ALUSrcstage23;
	wire memtoRegstage23;
	wire regWritestage23;
	wire memReadstage23;
	wire memWritestage23;
	wire branchstage23;
	wire [2:0] ALUOpstage23;
	
	wire [2:0] opCodestage23;
	wire [15:0] readData1stage23;
	wire [15:0] readData2stage23;
	wire [15:0] signExtendstage23;
	wire [2:0] rtstage23;
	wire [2:0] rdstage23;
	
	wire hitOutstage23;
	
	//EXECUTE
	wire [15:0] aluOutstage3;
	wire zerostage3;
	
	//RegWrite
	wire [2:0] regWritestage3;
	
	//EXMEM
	wire memReadstage34;
	wire memWritestage34;
	wire branchstage34;
	wire regWritestage34;
	wire memtoRegstage34;
	wire [15:0] branchTargetstage34;
	wire zerostage34;
	wire [15:0] aluResultstage34;
	wire [15:0] readRegTwostage34;
	wire [2:0] writeRegstage34;
	wire hitOutstage34;
	
	//MEM
	wire [15:0] datastage4;
	
	//MEMWB
	wire regWriteOutstage45;
	wire memtoRegOutstage45;
	wire [15:0] readDataOutstage45;
	wire [15:0] aluResultOutstage45;
	wire [2:0] writeRegOutstage45;
	wire hitOutstage45;
	
	//WB
	wire [15:0] writeData;
	
	//CLK
	wire slowclkWire;
	
	produceClock myproduceClk (
    .fastclk(clk), 
    .slowclk(slowclkWire)
    );
	 
	myAnd And (
    .Branch(branchstage34), 
    .zero(zerostage34), 
    .PcSrc(PcSrcstage1)
    );

	
	fetch myFetch (
		 .clk(slowclkWire), 
		 .PcSrc(PcSrcstage1), 
		 .BranchTarget(branchTargetstage34), 
		 .addressOut(addressOutstage1), 
		 .instructionOut(instructionOutstage1), 
		 .hitOut(hitOutwire)
		 );

	regIFID myregIFID (
    .clk(slowclkWire), 
    .hit(hitOutwire), 
    .instruction(instructionOutstage1), 
    .nextinstruction(addressOutstage1), 
    .instOut(instructionOutstage12), 
    .nextinstOut(addressOutstage12),
    .hitOut(hitOutstage12)
    );
	 
	decode myDecode (
    .clk(slowclkWire), 
    .instruction(instructionOutstage12), 
    .opCode(opCodestage2), 
    .readData1(readData1stage2), 
    .readData2(readData2stage2), 
    .signExtend(signExtendstage2), 
    .rt(rtstage2), 
    .rd(rdstage2), 
    .regWrite(regWriteOutstage45), 
    .regWriteNum(writeRegOutstage45), 
    .writeData(writeData)
    ); 
	 
	controlUnit myControlUnit (
		 .opCode(opCodestage2), 
		 .regDst(regDstwire), 
		 .ALUSrc(ALUSrcwire), 
		 .memtoReg(memtoRegwire), 
		 .regWrite(regWritewire), 
		 .memRead(memReadwire), 
		 .memWrite(memWritewire), 
		 .branch(branchwire), 
		 .ALUOp(ALUOpwire)
		 );
		 
	regIDEX myregIDEX (
    .clk(slowclkWire), 
    .hit(hitOutwire), 
    .nextinst(addressOutstage12), 
    .regDst(regDstwire), 
    .ALUSrc(ALUSrcwire), 
    .memtoReg(memtoRegwire), 
    .regWrite(regWritewire), 
    .memRead(memReadwire), 
    .memWrite(memWritewire), 
    .branch(branchwire), 
    .ALUOp(ALUOpwire), 
    .opCode(opCodestage2), 
    .readData1(readData1stage2), 
    .readData2(readData2stage2), 
    .signExtend(signExtendstage2), 
    .rt(rtstage2), 
    .rd(rdstage2), 
    .nextinstOut(nextinststage23), 
    .regDstOut(regDststage23), 
    .ALUSrcOut(ALUSrcstage23), 
    .memtoRegOut(memtoRegstage23), 
    .regWriteOut(regWritestage23), 
    .memReadOut(memReadstage23), 
    .memWriteOut(memWritestage23), 
    .branchOut(branchstage23), 
    .ALUOpOut(ALUOpstage23), 
    .opCodeOut(opCodestage23), 
    .readData1Out(readData1stage23), 
    .readData2Out(readData2stage23), 
    .signExtendOut(signExtendstage23), 
    .rtOut(rtstage23), 
    .rdOut(rdstage23),
    .hitOut(hitOutstage23)
    );
	 
	Execute myExecute (
	 .clk(clk),
    .readData1(readData1stage23), 
    .readData2(readData2stage23), 
    .instant(signExtendstage23), 
    .aluSrc(ALUSrcstage23), 
    .aluOp(ALUOpstage23), 
    .aluOut(aluOutstage3), 
    .zero(zerostage3)
    );

	mux3 myMux (
    .select(regDststage23), 
    .myIn1(rtstage23), 
    .myIn2(rdstage23), 
    .myOut(regWritestage3)
    );
		 
	myregEXMEM regEXMEM (
    .clk(slowclkWire), 
    .hit(hitOutwire), 
    .memReadIn(memReadstage23), 
    .memWriteIn(memWritestage23), 
    .branchIn(branchstage23), 
    .regWriteIn(regWritestage23), 
    .memtoRegIn(memtoRegstage23), 
    .branchTargetIn(nextinststage23 + (signExtendstage23 << 1)), //signextendshift + nextinstruction
    .zeroIn(zerostage3), 
    .aluResultIn(aluOutstage3), 
    .readRegTwoIn(readData2stage23), 
    .writeRegIn(regWritestage3), 
    .memReadOut(memReadstage34), 
    .memWriteOut(memWritestage34), 
    .branchOut(branchstage34), 
    .regWriteOut(regWritestage34), 
    .memtoRegOut(memtoRegstage34), 
    .branchTargetOut(branchTargetstage34), 
    .zeroOut(zerostage34), 
    .aluResultOut(aluResultstage34), 
    .readRegTwoOut(readRegTwostage34), 
    .writeRegOut(writeRegstage34),
	 .hitOut(hitOutstage34)
    );

	myDataMem DataMem(
    .clk(slowclkWire), 
    .memRead(memReadstage34), 
    .address(aluResultstage34), 
    .memWrite(memWritestage34), 
    .dataIn(readRegTwostage34), 
    .dataOut(datastage4)
    );

	myregMEMWB regMEMWB (
    .clk(slowclkWire), 
    .hit(hitOutwire), 
    .regWriteIn(regWritestage34), 
    .memtoRegIn(memtoRegstage34), 
    .readDataIn(datastage4), 
    .aluResultIn(aluResultstage34), 
    .writeRegIn(writeRegstage34), 
    .regWriteOut(regWriteOutstage45), 
    .memtoRegOut(memtoRegOutstage45), 
    .readDataOut(readDataOutstage45), 
    .aluResultOut(aluResultOutstage45), 
    .writeRegOut(writeRegOutstage45),//rt
	 .hitOut(hitOutstage45)
    );
	 
	 multiplexer_16 mymuxthird (
    .select(memtoRegOutstage45), 
    .myIn1(aluResultOutstage45), 
    .myIn2(readDataOutstage45), 
    .myOut(writeData)
    );

endmodule
