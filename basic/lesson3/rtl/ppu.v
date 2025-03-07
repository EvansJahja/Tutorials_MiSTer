`timescale 1ns / 1ps
module ppu (
    input  clk,
    // LCDC
    input lcd_ppu_en,
    input window_tile_map,
    input window_en,
    input bg_window_tile,
    input bg_tile_map,
    input obj_size,
    input obj_en,
    input bg_win_prio,
    // end

    // connect to VGA frame buffer 
    output fb_clk,
    output reg fb_wr,
    output reg [14:0] fb_addr,
    output reg [7:0] fb_data,


    output reg [13:0] vram0_addr,
    input [7:0] vram0_data,
    output reg [13:0] vram1_addr,
    input [7:0] vram1_data,

    output reg [7:0] LY
);        
reg [7:0] LX;
assign fb_clk = clk;

reg [2:0] mode;


reg [7:0] step;
reg [7:0] pixel_buf;
reg [7:0] tile_id;
reg [7:0] tile_attr;

wire tile_bank;
wire tile_bank_vram;

assign tile_bank = tile_attr[3];
assign tile_bank_vram = vram1_data[3];

reg [1:0] tick;

reg [7:0] tileX;
reg [7:0] tileY;

// Draw BG
always @(posedge clk, negedge lcd_ppu_en) begin
    if (!lcd_ppu_en) begin
        step <= 0;
        LX <= 0;
        LY <= 0;
        tileX <= 0;
        tileY <= 0;
        fb_wr <= 1'b0;
        mode <= 3'd0;
    end else begin
        if(mode == 3'd0) begin
            case(step)
            8'd0: begin
                vram0_addr <= 'h9800 + (LX >> 3) + ((LY >> 3) * 'h20);
                vram1_addr <= 'h9800 + (LX >> 3) + ((LY >> 3) * 'h20);
            end
            8'd2: begin
                tile_id <= vram0_data;
                tile_attr <= vram1_data;
                // the base address depends on tile id and lcdc.4
                if (tile_bank_vram == 1'b0)
                    vram0_addr <= 'h8000 + (vram0_data << 4) + (tileY*2);
                else
                    vram1_addr <= 'h8000 + (vram0_data << 4) + (tileY*2);
            end

            8'd4: begin
                if (tile_bank == 1'b0)
                    pixel_buf <= vram0_data;
                else
                    pixel_buf <= vram1_data;
                fb_wr <= 1'b1;
                mode <= 3'd1;
            end
            endcase
            step <= step + 1;
        end
        if(mode == 3'd1) begin
            if (tileY < 8) begin
                fb_addr <= 15'd160*LY+LX;
                if (pixel_buf[7 - tileX])
                    fb_data <= 8'b01001010;
                else
                    fb_data <= 8'b11111111;
                if (tileX < 8) begin
                    tileX <= tileX + 1;
                    LX <= LX + 1;
                end
                else begin
                    mode <= 3'd0;
                    tileX <= 0;
                    step <= 8'd0;
                    if (LX >= 8'd160) begin
                        LX <= 0;
                        LY <= LY + 1;
                        tileY <= tileY + 1;
                    end else begin
                        mode <= 3'd2;
                    end
                end
            end else begin
                tileY <= 0;
                mode <= 3'd0;
            end
        end
        if(mode == 3'd2) begin
            if (step == 8'hFF) begin
                mode <= 3'd0;
                step <= 0;
            end else 
                step <= step + 1;
        end

    end
end

// I want to try drawing tile at 8190, it is 16 bytes.
// each row is two bytes (LL HH). HH is mostly 0 for now so let's ignore it.
// one byte = 8 bit  = 8 pixel
// always @(posedge clk) begin
//     if (!lcd_ppu_en) begin
//         step <= 0;
//         LX <= 0;
//         LY <= 0;
//         fb_wr <= 1'b0;
//     end else begin
//         if (LY < 8) begin
//             vram0_addr <= 'h8190 + LY * 2;
//             pixel_buf <= vram0_data[7:0];
// 
//             // Draw
//             if (step >= 3) begin
//                     fb_wr <= 1'b1;
//                     fb_addr <= 15'd160*LY+LX;
//                     if (pixel_buf[7 - LX])
//                         fb_data <= 8'b01001010;
//                     else
//                         fb_data <= 8'b11111111;
//                     if (LX < 7)
//                         LX <= LX + 1;
//                     else begin
//                         LX <= 0;
//                         LY <= LY + 1;
//                         step <= 0;
//                     end
//             end else begin
//                 fb_wr <= 1'b0;
//                 step <= step + 1;
//             end
//         end 
//     end
// end
endmodule