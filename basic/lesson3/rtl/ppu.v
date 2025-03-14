`timescale 1ns / 1ps
module ppu (
    input  clk,
    // LCDC
    input lcd_ppu_en,
    input window_tile_map,
    input window_en,
    input bg_char_data_sel,
    input bg_code_area_sel,
    input obj_size,
    input obj_en,
    input bg_win_prio,
    // end

    input gbc_mode,

    input [7:0] scx,
    input [7:0] scy,

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
reg [7:0] pixel_buf_h;
reg [7:0] pixel_buf_l;
reg [7:0] tmp_pixel;
reg [7:0] tmp_pixel_2;
reg [7:0] tile_id;
reg [7:0] tile_attr;

reg [1:0] tick;

reg [7:0] tileX;
reg [7:0] tileY;

reg [1:0] pixel;

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
                vram0_addr <= 'h9800 + ((LX+scx) >> 3) + (((LY+scy) >> 3) * 'h20);
                if (gbc_mode)
                    vram1_addr <= 'h9800 + ((LX+scx) >> 3) + (((LY+scy) >> 3) * 'h20);
            end

            // Get BG Tile and BG Attr
            8'd2: begin
                tile_id <= vram0_data;
                if (gbc_mode)
                    tile_attr <= vram1_data;
                if (vram0_data < 255)
                    if (vram0_data >= 128)
                        // Flip if tile_attr[6] (FlipY)
                        if (!gbc_mode || vram1_data[3] == 1'b0)
                            vram0_addr <= 'h8800 + (vram0_data[7:0] << 4) + ((vram1_data[6] ? 7-tileY : tileY)*2);
                        else
                            vram1_addr <= 'h8800 + (vram0_data[7:0] << 4) + ((vram1_data[6] ? 7-tileY : tileY)*2);
                    else //vram depends on bg_char_data_sel
                        if (bg_char_data_sel == 1'b0)
                            if (!gbc_mode || vram1_data[3] == 1'b0)
                                vram0_addr <= 'h9000 + (vram0_data[7:0] << 4) + ((vram1_data[6] ? 7-tileY : tileY)*2);
                            else
                                vram1_addr <= 'h9000 + (vram0_data[7:0] << 4) + ((vram1_data[6] ? 7-tileY : tileY)*2);
                        else
                            if (!gbc_mode || vram1_data[3] == 1'b0)
                                vram0_addr <= 'h8000 + (vram0_data[7:0] << 4) + ((vram1_data[6] ? 7-tileY : tileY)*2);
                            else
                                vram1_addr <= 'h8000 + (vram0_data[7:0] << 4) + ((vram1_data[6] ? 7-tileY : tileY)*2);
            end

            8'd4: begin
                if (!gbc_mode || tile_attr[3] == 1'b0)
                    tmp_pixel = vram0_data;
                else
                    tmp_pixel = vram1_data;

                if (tile_attr[5])
                    begin
                        // X flip
                        integer i;
                        for (i=0; i<8 ; i = i + 1)
                            tmp_pixel_2[7-i] = tmp_pixel[i];
                        pixel_buf_h <= tmp_pixel_2;
                    end
                else 
                    pixel_buf_h <= tmp_pixel;

                if (tile_id < 255)
                    if (tile_id >= 128)
                        if (!gbc_mode || tile_attr[3] == 1'b0)
                            vram0_addr <= 'h8800 + (tile_id[7:0] << 4) + ((tile_attr[6] ? 7-tileY : tileY)*2)+1;
                        else
                            vram1_addr <= 'h8800 + (tile_id[7:0] << 4) + ((tile_attr[6] ? 7-tileY : tileY)*2)+1;
                    else //vram depends on bg_char_data_sel
                        if (bg_char_data_sel == 1'b0)
                            if (!gbc_mode || tile_attr[3] == 1'b0)
                                vram0_addr <= 'h9000 + (tile_id[7:0] << 4) + ((tile_attr[6] ? 7-tileY : tileY)*2)+1;
                            else
                                vram1_addr <= 'h9000 + (tile_id[7:0] << 4) + ((tile_attr[6] ? 7-tileY : tileY)*2)+1;
                        else
                            if (!gbc_mode || tile_attr[3] == 1'b0)
                                vram0_addr <= 'h8000 + (tile_id[7:0] << 4) + ((tile_attr[6] ? 7-tileY : tileY)*2)+1;
                            else
                                vram1_addr <= 'h8000 + (tile_id[7:0] << 4) + ((tile_attr[6] ? 7-tileY : tileY)*2)+1;


                // if (tile_attr[3] == 1'b0) begin
                //     vram0_addr <= 'h9000 + (vram0_data << 4) + (tileY*2) + 1;
                // end else begin
                //     pixel_buf_h <= vram1_data;
                //     vram1_addr <= 'h9000 + (vram1_data << 4) + (tileY*2) + 1;
                // end
            end

            8'd6: begin
                if (!gbc_mode || tile_attr[3] == 1'b0)
                    tmp_pixel = vram0_data;
                else
                    tmp_pixel = vram1_data;

                if (tile_attr[5])
                    begin
                        // X flip
                        integer i;
                        for (i=0; i<8 ; i = i + 1)
                            tmp_pixel_2[7-i] = tmp_pixel[i];
                        pixel_buf_l <= tmp_pixel_2;
                    end
                else 
                    pixel_buf_l <= tmp_pixel;

                fb_wr <= 1'b1;
                mode <= 3'd1;
            end
            endcase
            step <= step + 1;
        end

        if(mode == 3'd1) begin
            if (tileY < 8) begin
                pixel = {pixel_buf_h[7 - tileX], pixel_buf_l[7 - tileX]};

                fb_addr <= 15'd160*LY+LX;
                case(pixel)
                  2'b00: 
                    fb_data <= 8'b11111111;
                  2'b01: 
                    fb_data <= 8'b10110111;
                  2'b10: 
                    fb_data <= 8'b01001010;
                  2'b11: 
                    fb_data <= 8'b00000000;
                endcase

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