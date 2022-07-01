/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
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
  reg [63:0] pc; // @[Fetch.scala 20:23]
  reg [63:0] inst; // @[Fetch.scala 21:23]

/*
  import "DPI-C" function void ebreak_D();
  
  always@(io_instIn or io_pcIn) begin
    if(io_instIn == 64'h00100073)
      ebreak_D();
  end
*/
  
  assign io_pcOut = pc; // @[Fetch.scala 59:14]
  assign io_inst = inst; // @[Fetch.scala 60:14]
  always @(posedge clock) begin
    if (reset) begin // @[Fetch.scala 20:23]
      pc <= 64'h80000000; // @[Fetch.scala 20:23]
    end else if (io_instEn) begin // @[Fetch.scala 53:28]
      pc <= io_pcIn; // @[Fetch.scala 54:8]
    end
    if (reset) begin // @[Fetch.scala 21:23]
      inst <= 64'h0; // @[Fetch.scala 21:23]
    end else if (io_instEn) begin // @[Fetch.scala 53:28]
      inst <= io_instIn; // @[Fetch.scala 55:10]
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
module regFile(
  input         clock,
  input  [4:0]  io_RAddr1,
  input  [4:0]  io_WAddr,
  input         io_RegWr,
  input  [63:0] io_WData,
  output [63:0] io_RData1
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
  reg [63:0] regFile_0; // @[regFile.scala 19:22]
  reg [63:0] regFile_1; // @[regFile.scala 19:22]
  reg [63:0] regFile_2; // @[regFile.scala 19:22]
  reg [63:0] regFile_3; // @[regFile.scala 19:22]
  reg [63:0] regFile_4; // @[regFile.scala 19:22]
  reg [63:0] regFile_5; // @[regFile.scala 19:22]
  reg [63:0] regFile_6; // @[regFile.scala 19:22]
  reg [63:0] regFile_7; // @[regFile.scala 19:22]
  reg [63:0] regFile_8; // @[regFile.scala 19:22]
  reg [63:0] regFile_9; // @[regFile.scala 19:22]
  reg [63:0] regFile_10; // @[regFile.scala 19:22]
  reg [63:0] regFile_11; // @[regFile.scala 19:22]
  reg [63:0] regFile_12; // @[regFile.scala 19:22]
  reg [63:0] regFile_13; // @[regFile.scala 19:22]
  reg [63:0] regFile_14; // @[regFile.scala 19:22]
  reg [63:0] regFile_15; // @[regFile.scala 19:22]
  reg [63:0] regFile_16; // @[regFile.scala 19:22]
  reg [63:0] regFile_17; // @[regFile.scala 19:22]
  reg [63:0] regFile_18; // @[regFile.scala 19:22]
  reg [63:0] regFile_19; // @[regFile.scala 19:22]
  reg [63:0] regFile_20; // @[regFile.scala 19:22]
  reg [63:0] regFile_21; // @[regFile.scala 19:22]
  reg [63:0] regFile_22; // @[regFile.scala 19:22]
  reg [63:0] regFile_23; // @[regFile.scala 19:22]
  reg [63:0] regFile_24; // @[regFile.scala 19:22]
  reg [63:0] regFile_25; // @[regFile.scala 19:22]
  reg [63:0] regFile_26; // @[regFile.scala 19:22]
  reg [63:0] regFile_27; // @[regFile.scala 19:22]
  reg [63:0] regFile_28; // @[regFile.scala 19:22]
  reg [63:0] regFile_29; // @[regFile.scala 19:22]
  reg [63:0] regFile_30; // @[regFile.scala 19:22]
  reg [63:0] regFile_31; // @[regFile.scala 19:22]
  wire [63:0] _GEN_33 = 5'h1 == io_RAddr1 ? regFile_1 : regFile_0; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_34 = 5'h2 == io_RAddr1 ? regFile_2 : _GEN_33; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_35 = 5'h3 == io_RAddr1 ? regFile_3 : _GEN_34; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_36 = 5'h4 == io_RAddr1 ? regFile_4 : _GEN_35; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_37 = 5'h5 == io_RAddr1 ? regFile_5 : _GEN_36; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_38 = 5'h6 == io_RAddr1 ? regFile_6 : _GEN_37; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_39 = 5'h7 == io_RAddr1 ? regFile_7 : _GEN_38; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_40 = 5'h8 == io_RAddr1 ? regFile_8 : _GEN_39; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_41 = 5'h9 == io_RAddr1 ? regFile_9 : _GEN_40; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_42 = 5'ha == io_RAddr1 ? regFile_10 : _GEN_41; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_43 = 5'hb == io_RAddr1 ? regFile_11 : _GEN_42; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_44 = 5'hc == io_RAddr1 ? regFile_12 : _GEN_43; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_45 = 5'hd == io_RAddr1 ? regFile_13 : _GEN_44; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_46 = 5'he == io_RAddr1 ? regFile_14 : _GEN_45; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_47 = 5'hf == io_RAddr1 ? regFile_15 : _GEN_46; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_48 = 5'h10 == io_RAddr1 ? regFile_16 : _GEN_47; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_49 = 5'h11 == io_RAddr1 ? regFile_17 : _GEN_48; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_50 = 5'h12 == io_RAddr1 ? regFile_18 : _GEN_49; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_51 = 5'h13 == io_RAddr1 ? regFile_19 : _GEN_50; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_52 = 5'h14 == io_RAddr1 ? regFile_20 : _GEN_51; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_53 = 5'h15 == io_RAddr1 ? regFile_21 : _GEN_52; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_54 = 5'h16 == io_RAddr1 ? regFile_22 : _GEN_53; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_55 = 5'h17 == io_RAddr1 ? regFile_23 : _GEN_54; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_56 = 5'h18 == io_RAddr1 ? regFile_24 : _GEN_55; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_57 = 5'h19 == io_RAddr1 ? regFile_25 : _GEN_56; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_58 = 5'h1a == io_RAddr1 ? regFile_26 : _GEN_57; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_59 = 5'h1b == io_RAddr1 ? regFile_27 : _GEN_58; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_60 = 5'h1c == io_RAddr1 ? regFile_28 : _GEN_59; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_61 = 5'h1d == io_RAddr1 ? regFile_29 : _GEN_60; // @[regFile.scala 22:15 regFile.scala 22:15]
  wire [63:0] _GEN_62 = 5'h1e == io_RAddr1 ? regFile_30 : _GEN_61; // @[regFile.scala 22:15 regFile.scala 22:15]
  assign io_RData1 = 5'h1f == io_RAddr1 ? regFile_31 : _GEN_62; // @[regFile.scala 22:15 regFile.scala 22:15]
  always @(posedge clock) begin
    if (5'h0 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_0 <= io_WData;
      end else begin
        regFile_0 <= 64'h0;
      end
    end
    if (5'h1 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_1 <= io_WData;
      end else begin
        regFile_1 <= 64'h0;
      end
    end
    if (5'h2 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_2 <= io_WData;
      end else begin
        regFile_2 <= 64'h0;
      end
    end
    if (5'h3 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_3 <= io_WData;
      end else begin
        regFile_3 <= 64'h0;
      end
    end
    if (5'h4 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_4 <= io_WData;
      end else begin
        regFile_4 <= 64'h0;
      end
    end
    if (5'h5 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_5 <= io_WData;
      end else begin
        regFile_5 <= 64'h0;
      end
    end
    if (5'h6 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_6 <= io_WData;
      end else begin
        regFile_6 <= 64'h0;
      end
    end
    if (5'h7 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_7 <= io_WData;
      end else begin
        regFile_7 <= 64'h0;
      end
    end
    if (5'h8 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_8 <= io_WData;
      end else begin
        regFile_8 <= 64'h0;
      end
    end
    if (5'h9 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_9 <= io_WData;
      end else begin
        regFile_9 <= 64'h0;
      end
    end
    if (5'ha == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_10 <= io_WData;
      end else begin
        regFile_10 <= 64'h0;
      end
    end
    if (5'hb == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_11 <= io_WData;
      end else begin
        regFile_11 <= 64'h0;
      end
    end
    if (5'hc == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_12 <= io_WData;
      end else begin
        regFile_12 <= 64'h0;
      end
    end
    if (5'hd == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_13 <= io_WData;
      end else begin
        regFile_13 <= 64'h0;
      end
    end
    if (5'he == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_14 <= io_WData;
      end else begin
        regFile_14 <= 64'h0;
      end
    end
    if (5'hf == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_15 <= io_WData;
      end else begin
        regFile_15 <= 64'h0;
      end
    end
    if (5'h10 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_16 <= io_WData;
      end else begin
        regFile_16 <= 64'h0;
      end
    end
    if (5'h11 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_17 <= io_WData;
      end else begin
        regFile_17 <= 64'h0;
      end
    end
    if (5'h12 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_18 <= io_WData;
      end else begin
        regFile_18 <= 64'h0;
      end
    end
    if (5'h13 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_19 <= io_WData;
      end else begin
        regFile_19 <= 64'h0;
      end
    end
    if (5'h14 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_20 <= io_WData;
      end else begin
        regFile_20 <= 64'h0;
      end
    end
    if (5'h15 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_21 <= io_WData;
      end else begin
        regFile_21 <= 64'h0;
      end
    end
    if (5'h16 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_22 <= io_WData;
      end else begin
        regFile_22 <= 64'h0;
      end
    end
    if (5'h17 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_23 <= io_WData;
      end else begin
        regFile_23 <= 64'h0;
      end
    end
    if (5'h18 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_24 <= io_WData;
      end else begin
        regFile_24 <= 64'h0;
      end
    end
    if (5'h19 == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_25 <= io_WData;
      end else begin
        regFile_25 <= 64'h0;
      end
    end
    if (5'h1a == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_26 <= io_WData;
      end else begin
        regFile_26 <= 64'h0;
      end
    end
    if (5'h1b == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_27 <= io_WData;
      end else begin
        regFile_27 <= 64'h0;
      end
    end
    if (5'h1c == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_28 <= io_WData;
      end else begin
        regFile_28 <= 64'h0;
      end
    end
    if (5'h1d == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_29 <= io_WData;
      end else begin
        regFile_29 <= 64'h0;
      end
    end
    if (5'h1e == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
        regFile_30 <= io_WData;
      end else begin
        regFile_30 <= 64'h0;
      end
    end
    if (5'h1f == io_WAddr) begin // @[regFile.scala 21:23]
      if (io_RegWr & io_WAddr != 5'h0) begin // @[regFile.scala 21:29]
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
module ImmGen(
  input  [63:0] io_inst,
  input  [2:0]  io_ExtOp,
  output [63:0] io_imm
);
  wire [51:0] _immType_0_T_2 = io_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [63:0] immType_0 = {_immType_0_T_2,io_inst[31:20]}; // @[ImmGen.scala 21:41]
  wire [31:0] _immType_1_T_2 = io_inst[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] immType_1 = {_immType_1_T_2,io_inst[31:12],12'h0}; // @[ImmGen.scala 22:59]
  wire [63:0] immType_2 = {_immType_0_T_2,io_inst[31:25],io_inst[11:7]}; // @[ImmGen.scala 23:59]
  wire [64:0] _immType_3_T_11 = {_immType_0_T_2,io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8],1'h0}; // @[ImmGen.scala 24:110]
  wire [43:0] _immType_4_T_2 = io_inst[31] ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 72:12]
  wire [64:0] _immType_4_T_11 = {_immType_4_T_2,io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[ImmGen.scala 25:113]
  wire [63:0] _GEN_1 = 3'h1 == io_ExtOp ? immType_1 : immType_0; // @[ImmGen.scala 27:10 ImmGen.scala 27:10]
  wire [63:0] _GEN_2 = 3'h2 == io_ExtOp ? immType_2 : _GEN_1; // @[ImmGen.scala 27:10 ImmGen.scala 27:10]
  wire [63:0] immType_3 = _immType_3_T_11[63:0]; // @[ImmGen.scala 19:21 ImmGen.scala 24:16]
  wire [63:0] _GEN_3 = 3'h3 == io_ExtOp ? immType_3 : _GEN_2; // @[ImmGen.scala 27:10 ImmGen.scala 27:10]
  wire [63:0] immType_4 = _immType_4_T_11[63:0]; // @[ImmGen.scala 19:21 ImmGen.scala 25:16]
  assign io_imm = 3'h4 == io_ExtOp ? immType_4 : _GEN_3; // @[ImmGen.scala 27:10 ImmGen.scala 27:10]
endmodule
module ContrGen(
  input  [63:0] io_inst,
  output        io_ALUAsrc,
  output [1:0]  io_ALUBsrc,
  output [2:0]  io_Branch,
  output        io_RegWr,
  output [2:0]  io_ExtOp
);
  wire [7:0] instOF = {io_inst[14:12],io_inst[6:2]}; // @[ContrGen.scala 19:31]
  wire  instAddiEn = 8'h4 == instOF; // @[ContrGen.scala 21:41]
  wire  instJalrEn = 8'h19 == instOF; // @[ContrGen.scala 23:41]
  wire  instSdEn = 8'h68 == instOF; // @[ContrGen.scala 24:41]
  wire  instAuipcEn = 5'h5 == io_inst[6:2]; // @[ContrGen.scala 25:38]
  wire  instLuiEn = 5'hd == io_inst[6:2]; // @[ContrGen.scala 26:38]
  wire  instJalEn = 5'h1b == io_inst[6:2]; // @[ContrGen.scala 27:38]
  wire  _io_ALUBsrc_T = instJalrEn | instJalEn; // @[ContrGen.scala 32:25]
  wire [1:0] _io_ALUBsrc_T_1 = _io_ALUBsrc_T ? 2'h2 : 2'h1; // @[Mux.scala 98:16]
  wire [1:0] _io_Branch_T = instJalrEn ? 2'h2 : 2'h0; // @[Mux.scala 98:16]
  wire [1:0] _io_Branch_T_1 = instJalEn ? 2'h1 : _io_Branch_T; // @[Mux.scala 98:16]
  wire  _io_ExtOp_T = instAuipcEn | instLuiEn; // @[ContrGen.scala 47:24]
  wire [1:0] _io_ExtOp_T_4 = instSdEn ? 2'h2 : {{1'd0}, _io_ExtOp_T}; // @[Mux.scala 98:16]
  assign io_ALUAsrc = instAddiEn | instSdEn | instLuiEn ? 1'h0 : 1'h1; // @[ContrGen.scala 29:20]
  assign io_ALUBsrc = instSdEn ? 2'h0 : _io_ALUBsrc_T_1; // @[Mux.scala 98:16]
  assign io_Branch = {{1'd0}, _io_Branch_T_1}; // @[Mux.scala 98:16]
  assign io_RegWr = instSdEn ? 1'h0 : 1'h1; // @[ContrGen.scala 41:19]
  assign io_ExtOp = instJalEn ? 3'h4 : {{1'd0}, _io_ExtOp_T_4}; // @[Mux.scala 98:16]
endmodule
module NextPC(
  input  [63:0] io_PC,
  input  [2:0]  io_Branch,
  input  [63:0] io_imm,
  input  [63:0] io_rs1,
  output [63:0] io_NextPC
);
  wire  _PCsrc_T = io_Branch == 3'h1; // @[NextPC.scala 23:16]
  wire  _PCsrc_T_1 = io_Branch == 3'h2; // @[NextPC.scala 24:16]
  wire [1:0] _PCsrc_T_2 = _PCsrc_T_1 ? 2'h3 : 2'h0; // @[Mux.scala 98:16]
  wire [1:0] PCsrc = _PCsrc_T ? 2'h2 : _PCsrc_T_2; // @[Mux.scala 98:16]
  wire  PCAsrc = PCsrc[1]; // @[NextPC.scala 26:18]
  wire  PCBsrc = PCsrc[0]; // @[NextPC.scala 27:18]
  wire [63:0] _io_NextPC_T_1 = ~PCAsrc ? 64'h4 : io_imm; // @[NextPC.scala 28:19]
  wire [63:0] _io_NextPC_T_3 = ~PCBsrc ? io_PC : io_rs1; // @[NextPC.scala 28:54]
  assign io_NextPC = _io_NextPC_T_1 + _io_NextPC_T_3; // @[NextPC.scala 28:49]
endmodule
module Decode(
  input         clock,
  input  [63:0] io_inst,
  input  [63:0] io_WData,
  input  [63:0] io_PC,
  output [63:0] io_Asrc,
  output [63:0] io_Bsrc,
  output [63:0] io_NextPC
);
  wire  regs_clock; // @[Decode.scala 23:22]
  wire [4:0] regs_io_RAddr1; // @[Decode.scala 23:22]
  wire [4:0] regs_io_WAddr; // @[Decode.scala 23:22]
  wire  regs_io_RegWr; // @[Decode.scala 23:22]
  wire [63:0] regs_io_WData; // @[Decode.scala 23:22]
  wire [63:0] regs_io_RData1; // @[Decode.scala 23:22]
  wire [63:0] imm_io_inst; // @[Decode.scala 24:22]
  wire [2:0] imm_io_ExtOp; // @[Decode.scala 24:22]
  wire [63:0] imm_io_imm; // @[Decode.scala 24:22]
  wire [63:0] con_io_inst; // @[Decode.scala 25:22]
  wire  con_io_ALUAsrc; // @[Decode.scala 25:22]
  wire [1:0] con_io_ALUBsrc; // @[Decode.scala 25:22]
  wire [2:0] con_io_Branch; // @[Decode.scala 25:22]
  wire  con_io_RegWr; // @[Decode.scala 25:22]
  wire [2:0] con_io_ExtOp; // @[Decode.scala 25:22]
  wire [63:0] nextpc_io_PC; // @[Decode.scala 26:24]
  wire [2:0] nextpc_io_Branch; // @[Decode.scala 26:24]
  wire [63:0] nextpc_io_imm; // @[Decode.scala 26:24]
  wire [63:0] nextpc_io_rs1; // @[Decode.scala 26:24]
  wire [63:0] nextpc_io_NextPC; // @[Decode.scala 26:24]
  wire  _io_Bsrc_T = con_io_ALUBsrc == 2'h0; // @[Decode.scala 44:23]
  wire  _io_Bsrc_T_1 = con_io_ALUBsrc == 2'h2; // @[Decode.scala 45:23]
  wire [63:0] _io_Bsrc_T_2 = _io_Bsrc_T_1 ? 64'h4 : imm_io_imm; // @[Mux.scala 98:16]
  regFile regs ( // @[Decode.scala 23:22]
    .clock(regs_clock),
    .io_RAddr1(regs_io_RAddr1),
    .io_WAddr(regs_io_WAddr),
    .io_RegWr(regs_io_RegWr),
    .io_WData(regs_io_WData),
    .io_RData1(regs_io_RData1)
  );
  ImmGen imm ( // @[Decode.scala 24:22]
    .io_inst(imm_io_inst),
    .io_ExtOp(imm_io_ExtOp),
    .io_imm(imm_io_imm)
  );
  ContrGen con ( // @[Decode.scala 25:22]
    .io_inst(con_io_inst),
    .io_ALUAsrc(con_io_ALUAsrc),
    .io_ALUBsrc(con_io_ALUBsrc),
    .io_Branch(con_io_Branch),
    .io_RegWr(con_io_RegWr),
    .io_ExtOp(con_io_ExtOp)
  );
  NextPC nextpc ( // @[Decode.scala 26:24]
    .io_PC(nextpc_io_PC),
    .io_Branch(nextpc_io_Branch),
    .io_imm(nextpc_io_imm),
    .io_rs1(nextpc_io_rs1),
    .io_NextPC(nextpc_io_NextPC)
  );
  assign io_Asrc = con_io_ALUAsrc ? io_PC : regs_io_RData1; // @[Decode.scala 42:19]
  assign io_Bsrc = _io_Bsrc_T ? regs_io_RData1 : _io_Bsrc_T_2; // @[Mux.scala 98:16]
  assign io_NextPC = nextpc_io_NextPC; // @[Decode.scala 47:15]
  assign regs_clock = clock;
  assign regs_io_RAddr1 = io_inst[19:15]; // @[Decode.scala 28:30]
  assign regs_io_WAddr = io_inst[11:7]; // @[Decode.scala 30:30]
  assign regs_io_RegWr = con_io_RegWr; // @[Decode.scala 31:20]
  assign regs_io_WData = io_WData; // @[Decode.scala 32:20]
  assign imm_io_inst = io_inst; // @[Decode.scala 33:20]
  assign imm_io_ExtOp = con_io_ExtOp; // @[Decode.scala 34:20]
  assign con_io_inst = io_inst; // @[Decode.scala 35:20]
  assign nextpc_io_PC = io_PC; // @[Decode.scala 36:20]
  assign nextpc_io_Branch = con_io_Branch; // @[Decode.scala 37:22]
  assign nextpc_io_imm = imm_io_imm; // @[Decode.scala 38:20]
  assign nextpc_io_rs1 = regs_io_RData1; // @[Decode.scala 39:20]
endmodule
module Execute(
  input  [63:0] io_Asrc,
  input  [63:0] io_Bsrc,
  output [63:0] io_result
);
  assign io_result = io_Asrc + io_Bsrc; // @[Execute.scala 14:59]
endmodule
module riscv64Top(
  input         clock,
  input         reset,
  input         io_instEn,
  input  [63:0] io_inst,
  output [63:0] io_NextPC,
  output [63:0] io_IRes
);
  wire  fetch_clock; // @[riscv64Top.scala 15:25]
  wire  fetch_reset; // @[riscv64Top.scala 15:25]
  wire  fetch_io_instEn; // @[riscv64Top.scala 15:25]
  wire [63:0] fetch_io_instIn; // @[riscv64Top.scala 15:25]
  wire [63:0] fetch_io_pcIn; // @[riscv64Top.scala 15:25]
  wire [63:0] fetch_io_pcOut; // @[riscv64Top.scala 15:25]
  wire [63:0] fetch_io_inst; // @[riscv64Top.scala 15:25]
  wire  decode_clock; // @[riscv64Top.scala 16:25]
  wire [63:0] decode_io_inst; // @[riscv64Top.scala 16:25]
  wire [63:0] decode_io_WData; // @[riscv64Top.scala 16:25]
  wire [63:0] decode_io_PC; // @[riscv64Top.scala 16:25]
  wire [63:0] decode_io_Asrc; // @[riscv64Top.scala 16:25]
  wire [63:0] decode_io_Bsrc; // @[riscv64Top.scala 16:25]
  wire [63:0] decode_io_NextPC; // @[riscv64Top.scala 16:25]
  wire [63:0] execute_io_Asrc; // @[riscv64Top.scala 17:25]
  wire [63:0] execute_io_Bsrc; // @[riscv64Top.scala 17:25]
  wire [63:0] execute_io_result; // @[riscv64Top.scala 17:25]
  Fetch fetch ( // @[riscv64Top.scala 15:25]
    .clock(fetch_clock),
    .reset(fetch_reset),
    .io_instEn(fetch_io_instEn),
    .io_instIn(fetch_io_instIn),
    .io_pcIn(fetch_io_pcIn),
    .io_pcOut(fetch_io_pcOut),
    .io_inst(fetch_io_inst)
  );
  Decode decode ( // @[riscv64Top.scala 16:25]
    .clock(decode_clock),
    .io_inst(decode_io_inst),
    .io_WData(decode_io_WData),
    .io_PC(decode_io_PC),
    .io_Asrc(decode_io_Asrc),
    .io_Bsrc(decode_io_Bsrc),
    .io_NextPC(decode_io_NextPC)
  );
  Execute execute ( // @[riscv64Top.scala 17:25]
    .io_Asrc(execute_io_Asrc),
    .io_Bsrc(execute_io_Bsrc),
    .io_result(execute_io_result)
  );

  
  import "DPI-C" function void ebreak_D();
  
  always@(fetch_io_inst or fetch_io_pcOut) begin
    if(fetch_io_inst == 64'h00100073)
      ebreak_D();
  end


  assign io_NextPC = decode_io_NextPC; // @[riscv64Top.scala 32:15]
  assign io_IRes = execute_io_result; // @[riscv64Top.scala 33:13]
  assign fetch_clock = clock;
  assign fetch_reset = reset;
  assign fetch_io_instEn = io_instEn; // @[riscv64Top.scala 19:21]
  assign fetch_io_instIn = io_inst; // @[riscv64Top.scala 20:21]
  assign fetch_io_pcIn = decode_io_NextPC; // @[riscv64Top.scala 21:21]
  assign decode_clock = clock;
  assign decode_io_inst = fetch_io_inst; // @[riscv64Top.scala 23:21]
  assign decode_io_WData = execute_io_result; // @[riscv64Top.scala 24:21]
  assign decode_io_PC = fetch_io_pcOut; // @[riscv64Top.scala 25:21]
  assign execute_io_Asrc = decode_io_Asrc; // @[riscv64Top.scala 29:23]
  assign execute_io_Bsrc = decode_io_Bsrc; // @[riscv64Top.scala 30:23]
endmodule
