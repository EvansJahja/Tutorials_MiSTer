`timescale 1ns / 1ps
module soc (
   input  clk_sys,
   input  pixel_clock,
   output VGA_HS,
   output VGA_VS,
   output [7:0] VGA_R,
   output [7:0] VGA_G,
   output [7:0] VGA_B,
   output VGA_HB,
   output VGA_VB,
   output VGA_DE
);        

///////////////////////////////////////////////////
wire [3:0] r, g, b;
wire vs,hs;
wire ce_pix;
wire hblank, vblank;
wire interlace;

wire [7:0] ppu_LY;

wire fb_clk;
wire fb_wr;
wire [14:0] fb_addr;
wire [7:0] fb_data;

wire [13:0] ppu_vram0_addr;
wire [7:0]  ppu_vram0_data;
wire [13:0] ppu_vram1_addr;
wire [7:0]  ppu_vram1_data;

ppu ppu (
	.clk(cpu_clock),

    .lcd_ppu_en(io_lcdc[7]),
    .window_tile_map(io_lcdc[6]),
    .window_en(io_lcdc[5]),
    .bg_window_tile(io_lcdc[4]),
    .bg_tile_map(io_lcdc[3]),
    .obj_size(io_lcdc[2]),
    .obj_en(io_lcdc[1]),
    .bg_win_prio(io_lcdc[0]),

	.fb_clk(fb_clk),
	.fb_wr(fb_wr),
	.fb_addr(fb_addr),
	.fb_data(fb_data),

	.vram0_addr(ppu_vram0_addr),
	.vram0_data(ppu_vram0_data),
	.vram1_addr(ppu_vram1_addr),
	.vram1_data(ppu_vram1_data),


	.LY(ppu_LY)

);


// include VGA controller
vga vga (
	.pclk     ( pixel_clock),
	 
	// .cpu_clk  ( cpu_clock        ),
	// .cpu_wr   ( !cpu_wr_n && !cpu_addr[15] ),
	// .cpu_addr ( cpu_addr[13:0]   ),
	// .cpu_data ( cpu_dout         ),

        // video output as fed into the VGA outputs
	.hs    (VGA_HS),
	.vs    (VGA_VS),
	.r     (VGA_R),
	.g     (VGA_G),
	.b     (VGA_B),
	.VGA_HB(VGA_HB),
	.VGA_VB(VGA_VB),
	.VGA_DE(VGA_DE),

	.fb_clk(fb_clk),
	.fb_wr(fb_wr),
	.fb_addr(fb_addr),
	.fb_data(fb_data)

);

// The CPU is kept in reset for 256 cycles after power on
reg [7:0] cpu_reset_cnt = 8'h00;
wire cpu_reset = (cpu_reset_cnt != 7);
always @(posedge cpu_clock)
	if(cpu_reset_cnt != 7)
		cpu_reset_cnt <= cpu_reset_cnt + 8'd1;

// CPU control signals
wire cpu_clock = clk_sys;
wire [15:0] cpu_addr;
reg [7:0] cpu_din;
wire [7:0] cpu_dout;
wire cpu_rd_n;
wire cpu_wr_n;
wire cpu_mreq_n;

// include Z80 CPU
/*
T80s T80s (
	.RESET_n  ( !cpu_reset    ),
	.CLK    ( cpu_clock     ),
	.WAIT_n   ( 1'b1          ),
	.INT_n    ( 1'b1          ),
	.NMI_n    ( 1'b1          ),
	.BUSRQ_n  ( 1'b1          ),
	.MREQ_n   ( cpu_mreq_n    ),
	.RD_n     ( cpu_rd_n      ), 
	.WR_n     ( cpu_wr_n      ),
	.A        ( cpu_addr      ),
	.DI       ( cpu_din       ),
	.DO       ( cpu_dout      )
);
*/

tv80s #(.Mode(3), .IOWait(0)) T80x  (
	.reset_n   ( !cpu_reset    ),
	.clk       ( cpu_clock     ),
	.wait_n    ( 1'b1          ),
	.int_n     ( 1'b1          ),
	.nmi_n     ( 1'b1          ),
	.busrq_n   ( 1'b1          ),
	.mreq_n    ( cpu_mreq_n    ),
	.rd_n      ( cpu_rd_n      ), 
	.wr_n      ( cpu_wr_n      ),
	.A         ( cpu_addr      ),
	.di        ( cpu_din       ),
	.dout      ( cpu_dout      )
  );

  
// map 4k RAM into upper half of the address space (A15=1)
// and 4k ROM into the lower half (A15=0)
wire [7:0] rom_data_out;
wire [7:0] game_rom_data_out;

wire [7:0] vram_data_out;
wire [7:0] vram0_data_out;
wire [7:0] vram1_data_out;
wire vram0_sel = io_vbk[0] == 1'b0;
assign vram_data_out = vram0_sel ? vram0_data_out : vram1_data_out;



wire [7:0] wram0_data_out;
reg [7:0] wramN_data_out;
wire [7:0] hram_data_out;

wire [7:0] wramN_q_a[1:7];

// ---- IO Controls

reg [7:0] io_vbk;
reg [7:0] io_lcdc;
reg [7:0] io_svbk;
reg [7:0] io_scx;
reg [7:0] io_scy;
wire [2:0] wram_sel;
assign wram_sel = io_svbk[2:0];

reg [7:0] io_bgp;
wire [1:0] bgp_id3;
wire [1:0] bgp_id2;
wire [1:0] bgp_id1;
wire [1:0] bgp_id0;

wire hram_sel = cpu_addr[15:0] >= 16'hff80 && cpu_addr[15:0] <= 16'hfffe;
wire vram_sel = cpu_addr[15:0] >= 16'h8000 && cpu_addr[15:0] <= 16'h9fff;
wire io_sel = cpu_addr[15:0] >= 16'hff00 && cpu_addr[15:0] <= 16'hff7f;
wire wram_0_sel = cpu_addr[15:0] >= 16'hC000 && cpu_addr[15:0] <= 16'hCFFF;

// CGB rom is split into 0x0000-0x00ff and 0x0200-0x8ff
wire bios_rom_sel = cpu_addr[15:0] <= 16'h00ff || (cpu_addr[15:0] >= 16'h0200 && cpu_addr[15:0] <= 16'h08FF) ;

wire game_rom_sel = cpu_addr[15:0] <= 16'h3fff ;

// any of the wram_n is selected
wire wram_n_group_sel = cpu_addr[15:0] >= 16'hD000 && cpu_addr[15:0] <= 16'hDFFF;

assign {bgp_id3, bgp_id2, bgp_id1, bgp_id0} = io_bgp;


always @(*) begin
	if (!cpu_rd_n ) begin
		if (io_sel) begin
			case (cpu_addr[7:0])
				8'h70: cpu_din = io_svbk;
				8'h47: cpu_din = io_bgp;
			endcase
		end
		else if (hram_sel) cpu_din = hram_data_out;
		else if (vram_sel) cpu_din = vram_data_out;

		else if (bios_rom_sel) cpu_din = rom_data_out;
		else if (game_rom_sel) cpu_din = game_rom_data_out;
		else cpu_din = 8'hFF;

	end else cpu_din = 8'hFF;

end

always @(*) begin
	wramN_data_out = wramN_q_a[wram_sel];
end

always @(negedge cpu_mreq_n) begin
	// IO Register Writes
	if (cpu_addr[15:8] == 8'hFF && !cpu_wr_n) begin
		case (cpu_addr[7:0])
			8'h40: io_lcdc <= cpu_dout;
			8'h42: io_scy <= cpu_dout;
			8'h43: io_scx <= cpu_dout;
			8'h47: io_bgp <= cpu_dout;
			8'h4F: io_vbk <= cpu_dout;
			8'h70: io_svbk <= cpu_dout;
		endcase
	end
end


// include 4k program code from boot_rom

dpram #( .init_file("gbc.hex"),.widthad_a(12),.width_a(8)) rom
(
        .clock_a(cpu_clock),
        .address_a(cpu_addr[11:0]),
        .wren_a(1'b0),
        .q_a(rom_data_out),
		// .byteena_a(!cpu_rd_n && cpu_addr[15:12] == 4'b0000),
		.byteena_a(1'b1),
        .clock_b(cpu_clock),
        .wren_b(1'b0)

);

dpram #( .init_file("game_rom.hex"),.widthad_a(21),.width_a(8)) game_rom
(
        .clock_a(cpu_clock),
        .address_a(cpu_addr[11:0]),
        .wren_a(1'b0),
        .q_a(game_rom_data_out),

        .clock_b(cpu_clock),
        .wren_b(1'b0)
);

dpram #( .widthad_a(12),.width_a(8)) wram_0
(
        .clock_a(cpu_clock),
        .address_a(cpu_addr[11:0]),
        .wren_a(!cpu_wr_n && wram_0_sel),
        .q_a(wram0_data_out),
        .data_a(cpu_dout),

        .wren_b(1'b0)
);

genvar i;
generate
	for (i=1; i<=7; i=i+1) begin : wram_
		dpram #( .widthad_a(12),.width_a(8)) wram_N 
		(
				.clock_a(cpu_clock),
				.address_a(cpu_addr[11:0]),
				.wren_a(!cpu_wr_n && wram_n_group_sel && wram_sel == i),
				.q_a(wramN_q_a[i]),
				.data_a(cpu_dout),

				.wren_b(1'b0)
		);
	end
endgenerate



dpram #( .widthad_a(13),.width_a(8)) vram_0
(
        .clock_a(cpu_clock),
        .address_a(cpu_addr[13:0]),
        .wren_a(!cpu_wr_n && vram_sel && vram0_sel),
        .q_a(vram0_data_out),
        .data_a(cpu_dout),

        .clock_b(cpu_clock),
		.address_b(ppu_vram0_addr),
		.q_b(ppu_vram0_data),
        .wren_b(1'b0)
);

dpram #( .widthad_a(13),.width_a(8)) vram_1
(
        .clock_a(cpu_clock),
        .address_a(cpu_addr[13:0]),
        .wren_a(!cpu_wr_n && vram_sel && !vram0_sel),
        .q_a(vram1_data_out),
        .data_a(cpu_dout),

        .clock_b(cpu_clock),
		.address_b(ppu_vram1_addr),
		.q_b(ppu_vram1_data),
        .wren_b(1'b0)
);


dpram #( .widthad_a(7),.width_a(8)) hram
(
        .clock_a(cpu_clock),
        .address_a(cpu_addr[6:0]),
        .q_a(hram_data_out),
        .wren_a(!cpu_wr_n && hram_sel),
        .data_a(cpu_dout),

        .wren_b(1'b0)
);

endmodule
