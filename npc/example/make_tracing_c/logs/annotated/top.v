	// verilator_coverage annotation
	// DESCRIPTION: Verilator: Verilog example module
	//
	// This file ONLY is placed under the Creative Commons Public Domain, for
	// any use, without warranty, 2003 by Wilson Snyder.
	// SPDX-License-Identifier: CC0-1.0
	// ======================================================================
	
	// This is intended to be a complex example of several features, please also
	// see the simpler examples/make_hello_c.
	
	module top
	  (
	   // Declare some signals so we can see how I/O works
 000016	   input              clk,
%000003	   input              reset_l,
	
%000002	   output wire [1:0]  out_small,
%000035	   output wire [39:0] out_quad,
%000069	   output wire [69:0] out_wide,
%000001	   input [1:0]        in_small,
%000051	   input [39:0]       in_quad,
%000039	   input [69:0]       in_wide
	   );
	
	   // Connect up the outputs, using some trivial logic
	   assign out_small = ~reset_l ? '0 : (in_small + 2'b1);
	   assign out_quad  = ~reset_l ? '0 : (in_quad + 40'b1);
	   assign out_wide  = ~reset_l ? '0 : (in_wide + 70'b1);
	
	   // And an example sub module. The submodule will print stuff.
	   sub sub (/*AUTOINST*/
	            // Inputs
	            .clk                        (clk),
	            .reset_l                    (reset_l));
	
	   // Print some stuff as an example
%000002	   initial begin
%000002	      if ($test$plusargs("trace") != 0) begin
%000000	      verilator_coverage: (next point on previous line)

%000001	         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
%000001	         $dumpfile("logs/vlt_dump.vcd");
%000001	         $dumpvars();
	      end
%000001	      $display("[%0t] Model running...\n", $time);
	   end
	
	endmodule
	
