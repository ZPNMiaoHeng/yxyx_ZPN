/* verilator lint_off DECLFILENAME */
//import "DPI-C" function int add (input bit [4:0] a);//, input int b);
//import "DPI-C" function void instCheck(output bit instQute ,
//                          input bit [4:0] instType,
//                          input bit reset  );

module Fetch(
  input         clock,
  input         reset,
  input         io_instEn,
  input  [63:0] io_instIn,
  input  [63:0] io_pcIn,
  output [63:0] io_pcOut,
  output [63:0] io_inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] pc; // @[Fetch.scala 18:23]
  reg [63:0] inst; // @[Fetch.scala 19:23]
  assign io_pcOut = pc; // @[Fetch.scala 22:13]
  assign io_inst = inst; // @[Fetch.scala 23:11]
  always @(posedge clock) begin
    if (reset) begin // @[Fetch.scala 18:23]
      pc <= 64'h80000000; // @[Fetch.scala 18:23]
    end else begin
      pc <= io_pcIn; // @[Fetch.scala 20:6]
    end
    if (reset) begin // @[Fetch.scala 19:23]
      inst <= 64'h0; // @[Fetch.scala 19:23]
    end else if (io_instEn) begin // @[Fetch.scala 21:14]
      inst <= io_instIn;
    end else begin
      inst <= 64'h0;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  pc = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  inst = _RAND_1[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IDU(
  input  [63:0] io_inst,
  output [4:0]  io_WAddr,
  output        io_WEn,
  output [4:0]  io_RAddr1,
  output        io_REn1,
  output [4:0]  io_RAddr2,
  output        io_REn2,
  output [63:0] io_imm,
  output [4:0]  io_instType
);
  wire [7:0] instOF = {io_inst[14:12],io_inst[6:2]}; // @[IDU.scala 29:33]
  wire  instAddiEn = 8'h4 == instOF; // @[IDU.scala 30:39]
  assign io_WAddr = io_inst[11:7]; // @[IDU.scala 33:25]
  assign io_WEn = 8'h4 == instOF; // @[IDU.scala 30:39]
  assign io_RAddr1 = io_inst[19:15]; // @[IDU.scala 35:25]
  assign io_REn1 = 8'h4 == instOF; // @[IDU.scala 30:39]
  assign io_RAddr2 = io_inst[24:20]; // @[IDU.scala 38:25]
  assign io_REn2 = instAddiEn ? 1'h0 : 1'h1; // @[IDU.scala 39:21]
  assign io_imm = {{20'd0}, io_inst[63:20]}; // @[IDU.scala 40:25]
  assign io_instType = {{4'd0}, instAddiEn}; // @[IDU.scala 30:39]
endmodule
module regFile(
  input         clock,
  input  [4:0]  io_RAddr1,
  input         io_REn1,
  output [63:0] io_RData1,
  input  [4:0]  io_RAddr2,
  input         io_REn2,
  output [63:0] io_RData2,
  input  [4:0]  io_WAddr,
  input         io_WEn,
  input  [63:0] io_WData
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
  reg [63:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] regFile_0; // @[regFile.scala 22:22]
  reg [63:0] regFile_1; // @[regFile.scala 22:22]
  reg [63:0] regFile_2; // @[regFile.scala 22:22]
  reg [63:0] regFile_3; // @[regFile.scala 22:22]
  reg [63:0] regFile_4; // @[regFile.scala 22:22]
  reg [63:0] regFile_5; // @[regFile.scala 22:22]
  reg [63:0] regFile_6; // @[regFile.scala 22:22]
  reg [63:0] regFile_7; // @[regFile.scala 22:22]
  reg [63:0] regFile_8; // @[regFile.scala 22:22]
  reg [63:0] regFile_9; // @[regFile.scala 22:22]
  reg [63:0] regFile_10; // @[regFile.scala 22:22]
  reg [63:0] regFile_11; // @[regFile.scala 22:22]
  reg [63:0] regFile_12; // @[regFile.scala 22:22]
  reg [63:0] regFile_13; // @[regFile.scala 22:22]
  reg [63:0] regFile_14; // @[regFile.scala 22:22]
  reg [63:0] regFile_15; // @[regFile.scala 22:22]
  reg [63:0] regFile_16; // @[regFile.scala 22:22]
  reg [63:0] regFile_17; // @[regFile.scala 22:22]
  reg [63:0] regFile_18; // @[regFile.scala 22:22]
  reg [63:0] regFile_19; // @[regFile.scala 22:22]
  reg [63:0] regFile_20; // @[regFile.scala 22:22]
  reg [63:0] regFile_21; // @[regFile.scala 22:22]
  reg [63:0] regFile_22; // @[regFile.scala 22:22]
  reg [63:0] regFile_23; // @[regFile.scala 22:22]
  reg [63:0] regFile_24; // @[regFile.scala 22:22]
  reg [63:0] regFile_25; // @[regFile.scala 22:22]
  reg [63:0] regFile_26; // @[regFile.scala 22:22]
  reg [63:0] regFile_27; // @[regFile.scala 22:22]
  reg [63:0] regFile_28; // @[regFile.scala 22:22]
  reg [63:0] regFile_29; // @[regFile.scala 22:22]
  reg [63:0] regFile_30; // @[regFile.scala 22:22]
  reg [63:0] regFile_31; // @[regFile.scala 22:22]
  wire [63:0] _GEN_33 = 5'h1 == io_RAddr1 ? regFile_1 : regFile_0; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_34 = 5'h2 == io_RAddr1 ? regFile_2 : _GEN_33; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_35 = 5'h3 == io_RAddr1 ? regFile_3 : _GEN_34; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_36 = 5'h4 == io_RAddr1 ? regFile_4 : _GEN_35; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_37 = 5'h5 == io_RAddr1 ? regFile_5 : _GEN_36; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_38 = 5'h6 == io_RAddr1 ? regFile_6 : _GEN_37; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_39 = 5'h7 == io_RAddr1 ? regFile_7 : _GEN_38; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_40 = 5'h8 == io_RAddr1 ? regFile_8 : _GEN_39; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_41 = 5'h9 == io_RAddr1 ? regFile_9 : _GEN_40; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_42 = 5'ha == io_RAddr1 ? regFile_10 : _GEN_41; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_43 = 5'hb == io_RAddr1 ? regFile_11 : _GEN_42; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_44 = 5'hc == io_RAddr1 ? regFile_12 : _GEN_43; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_45 = 5'hd == io_RAddr1 ? regFile_13 : _GEN_44; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_46 = 5'he == io_RAddr1 ? regFile_14 : _GEN_45; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_47 = 5'hf == io_RAddr1 ? regFile_15 : _GEN_46; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_48 = 5'h10 == io_RAddr1 ? regFile_16 : _GEN_47; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_49 = 5'h11 == io_RAddr1 ? regFile_17 : _GEN_48; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_50 = 5'h12 == io_RAddr1 ? regFile_18 : _GEN_49; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_51 = 5'h13 == io_RAddr1 ? regFile_19 : _GEN_50; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_52 = 5'h14 == io_RAddr1 ? regFile_20 : _GEN_51; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_53 = 5'h15 == io_RAddr1 ? regFile_21 : _GEN_52; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_54 = 5'h16 == io_RAddr1 ? regFile_22 : _GEN_53; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_55 = 5'h17 == io_RAddr1 ? regFile_23 : _GEN_54; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_56 = 5'h18 == io_RAddr1 ? regFile_24 : _GEN_55; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_57 = 5'h19 == io_RAddr1 ? regFile_25 : _GEN_56; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_58 = 5'h1a == io_RAddr1 ? regFile_26 : _GEN_57; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_59 = 5'h1b == io_RAddr1 ? regFile_27 : _GEN_58; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_60 = 5'h1c == io_RAddr1 ? regFile_28 : _GEN_59; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_61 = 5'h1d == io_RAddr1 ? regFile_29 : _GEN_60; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_62 = 5'h1e == io_RAddr1 ? regFile_30 : _GEN_61; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_63 = 5'h1f == io_RAddr1 ? regFile_31 : _GEN_62; // @[regFile.scala 35:21 regFile.scala 35:21]
  wire [63:0] _GEN_65 = 5'h1 == io_RAddr2 ? regFile_1 : regFile_0; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_66 = 5'h2 == io_RAddr2 ? regFile_2 : _GEN_65; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_67 = 5'h3 == io_RAddr2 ? regFile_3 : _GEN_66; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_68 = 5'h4 == io_RAddr2 ? regFile_4 : _GEN_67; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_69 = 5'h5 == io_RAddr2 ? regFile_5 : _GEN_68; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_70 = 5'h6 == io_RAddr2 ? regFile_6 : _GEN_69; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_71 = 5'h7 == io_RAddr2 ? regFile_7 : _GEN_70; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_72 = 5'h8 == io_RAddr2 ? regFile_8 : _GEN_71; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_73 = 5'h9 == io_RAddr2 ? regFile_9 : _GEN_72; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_74 = 5'ha == io_RAddr2 ? regFile_10 : _GEN_73; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_75 = 5'hb == io_RAddr2 ? regFile_11 : _GEN_74; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_76 = 5'hc == io_RAddr2 ? regFile_12 : _GEN_75; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_77 = 5'hd == io_RAddr2 ? regFile_13 : _GEN_76; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_78 = 5'he == io_RAddr2 ? regFile_14 : _GEN_77; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_79 = 5'hf == io_RAddr2 ? regFile_15 : _GEN_78; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_80 = 5'h10 == io_RAddr2 ? regFile_16 : _GEN_79; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_81 = 5'h11 == io_RAddr2 ? regFile_17 : _GEN_80; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_82 = 5'h12 == io_RAddr2 ? regFile_18 : _GEN_81; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_83 = 5'h13 == io_RAddr2 ? regFile_19 : _GEN_82; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_84 = 5'h14 == io_RAddr2 ? regFile_20 : _GEN_83; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_85 = 5'h15 == io_RAddr2 ? regFile_21 : _GEN_84; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_86 = 5'h16 == io_RAddr2 ? regFile_22 : _GEN_85; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_87 = 5'h17 == io_RAddr2 ? regFile_23 : _GEN_86; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_88 = 5'h18 == io_RAddr2 ? regFile_24 : _GEN_87; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_89 = 5'h19 == io_RAddr2 ? regFile_25 : _GEN_88; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_90 = 5'h1a == io_RAddr2 ? regFile_26 : _GEN_89; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_91 = 5'h1b == io_RAddr2 ? regFile_27 : _GEN_90; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_92 = 5'h1c == io_RAddr2 ? regFile_28 : _GEN_91; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_93 = 5'h1d == io_RAddr2 ? regFile_29 : _GEN_92; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_94 = 5'h1e == io_RAddr2 ? regFile_30 : _GEN_93; // @[regFile.scala 36:21 regFile.scala 36:21]
  wire [63:0] _GEN_95 = 5'h1f == io_RAddr2 ? regFile_31 : _GEN_94; // @[regFile.scala 36:21 regFile.scala 36:21]
  assign io_RData1 = io_REn1 ? _GEN_63 : 64'h0; // @[regFile.scala 35:21]
  assign io_RData2 = io_REn2 ? _GEN_95 : 64'h0; // @[regFile.scala 36:21]
  always @(posedge clock) begin
    if (5'h0 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_0 <= io_WData;
      end else begin
        regFile_0 <= 64'h0;
      end
    end
    if (5'h1 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_1 <= io_WData;
      end else begin
        regFile_1 <= 64'h0;
      end
    end
    if (5'h2 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_2 <= io_WData;
      end else begin
        regFile_2 <= 64'h0;
      end
    end
    if (5'h3 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_3 <= io_WData;
      end else begin
        regFile_3 <= 64'h0;
      end
    end
    if (5'h4 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_4 <= io_WData;
      end else begin
        regFile_4 <= 64'h0;
      end
    end
    if (5'h5 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_5 <= io_WData;
      end else begin
        regFile_5 <= 64'h0;
      end
    end
    if (5'h6 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_6 <= io_WData;
      end else begin
        regFile_6 <= 64'h0;
      end
    end
    if (5'h7 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_7 <= io_WData;
      end else begin
        regFile_7 <= 64'h0;
      end
    end
    if (5'h8 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_8 <= io_WData;
      end else begin
        regFile_8 <= 64'h0;
      end
    end
    if (5'h9 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_9 <= io_WData;
      end else begin
        regFile_9 <= 64'h0;
      end
    end
    if (5'ha == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_10 <= io_WData;
      end else begin
        regFile_10 <= 64'h0;
      end
    end
    if (5'hb == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_11 <= io_WData;
      end else begin
        regFile_11 <= 64'h0;
      end
    end
    if (5'hc == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_12 <= io_WData;
      end else begin
        regFile_12 <= 64'h0;
      end
    end
    if (5'hd == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_13 <= io_WData;
      end else begin
        regFile_13 <= 64'h0;
      end
    end
    if (5'he == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_14 <= io_WData;
      end else begin
        regFile_14 <= 64'h0;
      end
    end
    if (5'hf == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_15 <= io_WData;
      end else begin
        regFile_15 <= 64'h0;
      end
    end
    if (5'h10 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_16 <= io_WData;
      end else begin
        regFile_16 <= 64'h0;
      end
    end
    if (5'h11 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_17 <= io_WData;
      end else begin
        regFile_17 <= 64'h0;
      end
    end
    if (5'h12 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_18 <= io_WData;
      end else begin
        regFile_18 <= 64'h0;
      end
    end
    if (5'h13 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_19 <= io_WData;
      end else begin
        regFile_19 <= 64'h0;
      end
    end
    if (5'h14 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_20 <= io_WData;
      end else begin
        regFile_20 <= 64'h0;
      end
    end
    if (5'h15 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_21 <= io_WData;
      end else begin
        regFile_21 <= 64'h0;
      end
    end
    if (5'h16 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_22 <= io_WData;
      end else begin
        regFile_22 <= 64'h0;
      end
    end
    if (5'h17 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_23 <= io_WData;
      end else begin
        regFile_23 <= 64'h0;
      end
    end
    if (5'h18 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_24 <= io_WData;
      end else begin
        regFile_24 <= 64'h0;
      end
    end
    if (5'h19 == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_25 <= io_WData;
      end else begin
        regFile_25 <= 64'h0;
      end
    end
    if (5'h1a == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_26 <= io_WData;
      end else begin
        regFile_26 <= 64'h0;
      end
    end
    if (5'h1b == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_27 <= io_WData;
      end else begin
        regFile_27 <= 64'h0;
      end
    end
    if (5'h1c == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_28 <= io_WData;
      end else begin
        regFile_28 <= 64'h0;
      end
    end
    if (5'h1d == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_29 <= io_WData;
      end else begin
        regFile_29 <= 64'h0;
      end
    end
    if (5'h1e == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_30 <= io_WData;
      end else begin
        regFile_30 <= 64'h0;
      end
    end
    if (5'h1f == io_WAddr) begin // @[regFile.scala 33:23]
      if (io_WEn & io_WAddr != 5'h0) begin // @[regFile.scala 33:29]
        regFile_31 <= io_WData;
      end else begin
        regFile_31 <= 64'h0;
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  regFile_0 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  regFile_1 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  regFile_2 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  regFile_3 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  regFile_4 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  regFile_5 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  regFile_6 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  regFile_7 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  regFile_8 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  regFile_9 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  regFile_10 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  regFile_11 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  regFile_12 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  regFile_13 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  regFile_14 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  regFile_15 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  regFile_16 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  regFile_17 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  regFile_18 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  regFile_19 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  regFile_20 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  regFile_21 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  regFile_22 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  regFile_23 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  regFile_24 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  regFile_25 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  regFile_26 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  regFile_27 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  regFile_28 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  regFile_29 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  regFile_30 = _RAND_30[63:0];
  _RAND_31 = {2{`RANDOM}};
  regFile_31 = _RAND_31[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Decode(
  input         clock,
  input  [63:0] io_inst,
  input  [63:0] io_WData,
  output [4:0]  io_aluOp,
  output [63:0] io_regA,
  output [63:0] io_regB
);
  wire [63:0] idu_io_inst; // @[Decode.scala 22:21]
  wire [4:0] idu_io_WAddr; // @[Decode.scala 22:21]
  wire  idu_io_WEn; // @[Decode.scala 22:21]
  wire [4:0] idu_io_RAddr1; // @[Decode.scala 22:21]
  wire  idu_io_REn1; // @[Decode.scala 22:21]
  wire [4:0] idu_io_RAddr2; // @[Decode.scala 22:21]
  wire  idu_io_REn2; // @[Decode.scala 22:21]
  wire [63:0] idu_io_imm; // @[Decode.scala 22:21]
  wire [4:0] idu_io_instType; // @[Decode.scala 22:21]
  wire  regs_clock; // @[Decode.scala 23:22]
  wire [4:0] regs_io_RAddr1; // @[Decode.scala 23:22]
  wire  regs_io_REn1; // @[Decode.scala 23:22]
  wire [63:0] regs_io_RData1; // @[Decode.scala 23:22]
  wire [4:0] regs_io_RAddr2; // @[Decode.scala 23:22]
  wire  regs_io_REn2; // @[Decode.scala 23:22]
  wire [63:0] regs_io_RData2; // @[Decode.scala 23:22]
  wire [4:0] regs_io_WAddr; // @[Decode.scala 23:22]
  wire  regs_io_WEn; // @[Decode.scala 23:22]
  wire [63:0] regs_io_WData; // @[Decode.scala 23:22]
  IDU idu ( // @[Decode.scala 22:21]
    .io_inst(idu_io_inst),
    .io_WAddr(idu_io_WAddr),
    .io_WEn(idu_io_WEn),
    .io_RAddr1(idu_io_RAddr1),
    .io_REn1(idu_io_REn1),
    .io_RAddr2(idu_io_RAddr2),
    .io_REn2(idu_io_REn2),
    .io_imm(idu_io_imm),
    .io_instType(idu_io_instType)
  );
  regFile regs ( // @[Decode.scala 23:22]
    .clock(regs_clock),
    .io_RAddr1(regs_io_RAddr1),
    .io_REn1(regs_io_REn1),
    .io_RData1(regs_io_RData1),
    .io_RAddr2(regs_io_RAddr2),
    .io_REn2(regs_io_REn2),
    .io_RData2(regs_io_RData2),
    .io_WAddr(regs_io_WAddr),
    .io_WEn(regs_io_WEn),
    .io_WData(regs_io_WData)
  );
  assign io_aluOp = idu_io_instType; // @[Decode.scala 38:14]
  assign io_regA = regs_io_RData1; // @[Decode.scala 36:13]
  assign io_regB = idu_io_instType == 5'h1 ? idu_io_imm : regs_io_RData2; // @[Decode.scala 37:19]
  assign idu_io_inst = io_inst; // @[Decode.scala 35:17]
  assign regs_clock = clock;
  assign regs_io_RAddr1 = idu_io_RAddr1; // @[Decode.scala 26:20]
  assign regs_io_REn1 = idu_io_REn1; // @[Decode.scala 27:20]
  assign regs_io_RAddr2 = idu_io_RAddr2; // @[Decode.scala 28:20]
  assign regs_io_REn2 = idu_io_REn2; // @[Decode.scala 29:20]
  assign regs_io_WAddr = idu_io_WAddr; // @[Decode.scala 30:20]
  assign regs_io_WEn = idu_io_WEn; // @[Decode.scala 31:20]
  assign regs_io_WData = io_WData; // @[Decode.scala 32:20]
endmodule
module Execute(
  input  [63:0] io_pcOut,
  input  [4:0]  io_aluOp,
  input  [63:0] io_regA,
  input  [63:0] io_regB,
  output [63:0] io_result,
  output [63:0] io_pcNext
);
  wire [63:0] _io_result_T_2 = io_regA + io_regB; // @[Execute.scala 16:59]
  assign io_result = io_aluOp == 5'h1 ? _io_result_T_2 : 64'h0; // @[Execute.scala 16:25]
  assign io_pcNext = io_pcOut + 64'h4; // @[Execute.scala 17:31]
endmodule
module riscv64Top(
  input         clock,
  input         reset,
  input         io_instEn,
  input  [63:0] io_inst,
  output [63:0] io_instAddr,
  output [63:0] io_instResult
);
  wire  fetch_clock; // @[riscv64Top.scala 15:23]
  wire  fetch_reset; // @[riscv64Top.scala 15:23]
  wire  fetch_io_instEn; // @[riscv64Top.scala 15:23]
  wire [63:0] fetch_io_instIn; // @[riscv64Top.scala 15:23]
  wire [63:0] fetch_io_pcIn; // @[riscv64Top.scala 15:23]
  wire [63:0] fetch_io_pcOut; // @[riscv64Top.scala 15:23]
  wire [63:0] fetch_io_inst; // @[riscv64Top.scala 15:23]
  wire  decode_clock; // @[riscv64Top.scala 16:24]
  wire [63:0] decode_io_inst; // @[riscv64Top.scala 16:24]
  wire [63:0] decode_io_WData; // @[riscv64Top.scala 16:24]
  wire [4:0] decode_io_aluOp; // @[riscv64Top.scala 16:24]
  wire [63:0] decode_io_regA; // @[riscv64Top.scala 16:24]
  wire [63:0] decode_io_regB; // @[riscv64Top.scala 16:24]
  wire [63:0] execute_io_pcOut; // @[riscv64Top.scala 17:25]
  wire [4:0] execute_io_aluOp; // @[riscv64Top.scala 17:25]
  wire [63:0] execute_io_regA; // @[riscv64Top.scala 17:25]
  wire [63:0] execute_io_regB; // @[riscv64Top.scala 17:25]
  wire [63:0] execute_io_result; // @[riscv64Top.scala 17:25]
  wire [63:0] execute_io_pcNext; // @[riscv64Top.scala 17:25]
  Fetch fetch ( // @[riscv64Top.scala 15:23]
    .clock(fetch_clock),
    .reset(fetch_reset),
    .io_instEn(fetch_io_instEn),
    .io_instIn(fetch_io_instIn),
    .io_pcIn(fetch_io_pcIn),
    .io_pcOut(fetch_io_pcOut),
    .io_inst(fetch_io_inst)
  );
  Decode decode ( // @[riscv64Top.scala 16:24]
    .clock(decode_clock),
    .io_inst(decode_io_inst),
    .io_WData(decode_io_WData),
    .io_aluOp(decode_io_aluOp),
    .io_regA(decode_io_regA),
    .io_regB(decode_io_regB)
  );
  Execute execute ( // @[riscv64Top.scala 17:25]
    .io_pcOut(execute_io_pcOut),
    .io_aluOp(execute_io_aluOp),
    .io_regA(execute_io_regA),
    .io_regB(execute_io_regB),
    .io_result(execute_io_result),
    .io_pcNext(execute_io_pcNext)
  );
  assign io_instAddr = execute_io_pcNext; // @[riscv64Top.scala 31:17]
  assign io_instResult = execute_io_result; // @[riscv64Top.scala 32:19]
  assign fetch_clock = clock;
  assign fetch_reset = reset;
  assign fetch_io_instEn = io_instEn; // @[riscv64Top.scala 19:21]
  assign fetch_io_instIn = io_inst; // @[riscv64Top.scala 20:21]
  assign fetch_io_pcIn = execute_io_pcNext; // @[riscv64Top.scala 21:21]
  assign decode_clock = clock;
  assign decode_io_inst = fetch_io_inst; // @[riscv64Top.scala 23:21]
  assign decode_io_WData = execute_io_result; // @[riscv64Top.scala 24:21]
  assign execute_io_pcOut = fetch_io_pcOut; // @[riscv64Top.scala 26:22]
  assign execute_io_aluOp = decode_io_aluOp; // @[riscv64Top.scala 27:22]
  assign execute_io_regA = decode_io_regA; // @[riscv64Top.scala 28:21]
  assign execute_io_regB = decode_io_regB; // @[riscv64Top.scala 29:21]
  /*
  initial begin
   $display("%x + %x = %x", 1, 2, add(decode_io_aluOp));
end
*/
endmodule
/*
task publicSetBool;
   input bit in_bool;
   var_bool = in_bool;
endtask
*/
