	// verilator_coverage annotation
	// DESCRIPTION: Verilator: Verilog Test module
	//
	// This file ONLY is placed under the Creative Commons Public Domain, for
	// any use, without warranty, 2003 by Wilson Snyder.
	// SPDX-License-Identifier: CC0-1.0
	// ======================================================================
	
	module sub
	  (
 000016	   input clk,
%000003	   input reset_l
	   );
	
	   // Example counter/flop
%000033	   reg [31:0] count_c;
%000016	   always_ff @ (posedge clk) begin
%000008	      if (!reset_l) begin
%000004	      verilator_coverage: (next point on previous line)

	         /*AUTORESET*/
	         // Beginning of autoreset for uninitialized flops
%000004	         count_c <= 32'h0;
	         // End of automatics
	      end
%000004	      else begin
%000004	         count_c <= count_c + 1;
%000002	         if (count_c >= 3) begin
%000003	         verilator_coverage: (next point on previous line)

	            // This write is a magic value the Makefile uses to make sure the
	            // test completes successfully.
%000001	            $write("*-* All Finished *-*\n");
%000001	            $finish;
	         end
	      end
	   end
	
	   // An example assertion
%000016	   always_ff @ (posedge clk) begin
%000008	      AssertionExample: assert (!reset_l || count_c<100);
	   end
	
	   // And example coverage analysis
%000002	   cover property (@(posedge clk) count_c==3);
	
	endmodule
	
