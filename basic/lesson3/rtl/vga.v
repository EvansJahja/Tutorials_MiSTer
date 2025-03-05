`timescale 1ns / 1ps
// A simple system-on-a-chip (SoC) for the MiST
// (c) 2015 Till Harbaum

// VGA controller generating 160x100 pixles. The VGA mode ised is 640x400
// combining every 4 row and column

// http://tinyvga.com/vga-timing/640x400@70Hz

// GB mode

// To draw Game boy nicely, we need 160x144 pixels. Times 4 that gives us 640x576. We could use 768x576 which gives us
// black bars of 128 columns (64 on left and right)
// http://tinyvga.com/vga-timing/768x576@60Hz
// VESA 768x576@60 Hz (pixel clock 34.96 MHz)


module vga (
   // pixel clock
   input  pclk,
	
	// FB interface for writing
	input  fb_clk,
	input  fb_wr,
	input [14:0] fb_addr,
	input [7:0] fb_data,
		
   // VGA output
   output reg	hs,
   output reg 	vs,
   output [7:0] r,
   output [7:0] g,
   output [7:0] b,
   output reg VGA_HB,
   output reg VGA_VB,
   output VGA_DE
);
					
// http://tinyvga.com/vga-timing/768x576@60Hz
// VESA 768x576@60 Hz (pixel clock 34.96 MHz)
parameter H   = 768;    // width of visible area
parameter HFP = 24;     // unused time before hsync
parameter HS  = 80;     // width of hsync
parameter HBP = 104;     // unused time after hsync

parameter V   = 576;    // height of visible area
parameter VFP = 1;      // unused time before vsync
parameter VS  = 3;      // width of vsync
parameter VBP = 17;     // unused time after vsync

reg[9:0]  h_cnt;        // horizontal pixel counter
reg[9:0]  v_cnt;        // vertical pixel counter

reg hblank;
reg vblank;

// both counters count from the begin of the visibla area

// horizontal pixel counter
always@(posedge pclk) begin
	if(h_cnt==H+HFP+HS+HBP-1)   h_cnt <= 0;
	else                        h_cnt <= h_cnt + 1;

	// generate negative hsync signal
	if(h_cnt == H+HFP)    hs <= 1'b0;
	if(h_cnt == H+HFP+HS) hs <= 1'b1;

	end

// veritical pixel counter
always@(posedge pclk) begin
	// the vertical counter is processed at the begin of each hsync
	if(h_cnt == H+HFP) begin
		if(v_cnt==VS+VBP+V+VFP-1)  v_cnt <= 0; 
		else							        v_cnt <= v_cnt + 1;

	   // generate positive vsync signal
		if(v_cnt == V+VFP)    vs <= 1'b1;
		if(v_cnt == V+VFP+VS) vs <= 1'b0;
	end
end

// read VRAM
reg [15:0] video_counter;
wire [7:0] pixel;
reg de;

// 16000 bytes of internal video memory for 160x100 pixel at 8 Bit (RGB 332)
// reg [7:0] vmem [160*144-1:0];
dpram #( .widthad_a(16),.width_a(8)) fb
(
        .clock_a(pclk),
        .address_a(video_counter),
        .q_a(pixel),
        .wren_a(1'b0),

		.clock_b(fb_clk),
		.address_b(fb_addr),
		.data_b(fb_data),
        .wren_b(fb_wr)
);

reg [0:0] show_black;

always@(posedge pclk) begin
        // The video counter is being reset at the begin of each vsync.
        // Otherwise it's increased every fourth pixel in the visible area.
        // At the end of the first three of four lines the counter is
        // decreased by the total line length to display the same contents
        // for four lines so 100 different lines are displayed on the 400
        // VGA lines.

	// visible area?
        if(v_cnt < V)
                VGA_VB<=0;
        else
                VGA_VB<=1;
        if(h_cnt < H)
                VGA_HB<=0;
        else
                VGA_HB<=1;
	if((v_cnt < V) && (h_cnt < H) && (h_cnt > 64 && h_cnt < (H-64))) begin
		if(h_cnt[1:0] == 2'b11)
			video_counter <= video_counter + 16'd1;
		
		// pixel <= (v_cnt[2] ^ h_cnt[2])?8'h00:8'hff;    // checkboard
		// pixel <= video_counter[7:0];                // color pattern
		// pixel <= vmem[video_counter];               // read VRAM
		show_black <= 0;
		de<=1;
	end else begin
		if(h_cnt == H+HFP) begin
			if(v_cnt == V+VFP)
				video_counter <= 14'd0;
			else if((v_cnt < V) && (v_cnt[1:0] != 2'b11))
				video_counter <= video_counter - 15'd160;
		de<=0;
		end
			
		// show black when outside of drawing range (black columns)
		show_black <= 1;
	end
end

// seperate 8 bits into three colors (332)
assign r = show_black ? 8'd0 : { pixel[7:5],  pixel[7:5] , pixel[7:6]};
assign g = show_black ? 8'd0 : { pixel[4:2],  pixel[4:2] , pixel[4:3]};
assign b = show_black ? 8'd0 : { pixel[1:0], pixel[1:0] , pixel[1:0],pixel[1:0] };


assign VGA_DE = de;

endmodule
