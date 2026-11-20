//-----------------------------------------------------------------
// 100 MHz board clock -> 25 MHz system clock
//   VCO = 100 MHz * 10 = 1000 MHz (inside Spartan-7 VCO range)
//   CLKOUT0 = 1000 / 40 = 25 MHz
//-----------------------------------------------------------------
module boolean_pll
(
    input            clkref_i,
    output           clkout0_o,
    output           locked_o
);

wire clkref_buffered_w;
wire clkfbout_w;
wire clkfbout_buffered_w;
wire pll_clkout0_w;
wire pll_locked_w;

IBUF IBUF_IN
(
    .I (clkref_i),
    .O (clkref_buffered_w)
);

PLLE2_BASE
#(
    .BANDWIDTH("OPTIMIZED"),
    .CLKFBOUT_PHASE(0.0),
    .CLKIN1_PERIOD(10.0),
    .CLKFBOUT_MULT(10),
    .CLKOUT0_DIVIDE(40),
    .CLKOUT0_DUTY_CYCLE(0.5),
    .CLKOUT0_PHASE(0.0),
    .DIVCLK_DIVIDE(1),
    .REF_JITTER1(0.0),
    .STARTUP_WAIT("FALSE")
)
u_pll
(
    .CLKFBOUT(clkfbout_w),
    .CLKOUT0(pll_clkout0_w),
    .CLKOUT1(),
    .CLKOUT2(),
    .CLKOUT3(),
    .CLKOUT4(),
    .CLKOUT5(),
    .LOCKED(pll_locked_w),
    .PWRDWN(1'b0),
    .RST(1'b0),
    .CLKIN1(clkref_buffered_w),
    .CLKFBIN(clkfbout_buffered_w)
);

BUFH u_clkfb_buf
(
    .I(clkfbout_w),
    .O(clkfbout_buffered_w)
);

BUFG u_clk_buf
(
    .I(pll_clkout0_w),
    .O(clkout0_o)
);

assign locked_o = pll_locked_w;

endmodule
