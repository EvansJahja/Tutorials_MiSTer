`timescale 1ns / 1ps
module ppu (
    input  clk,
    // LCDC
    input lcd_ppu_en,
    input window_code_area_sel,
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


reg [15:0] step;
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

reg bg_code_area_flag = 0;

wire [15:0] bg_code_area = bg_code_area_flag ? 16'h9c00 : 16'h9800;



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
                vram0_addr <= bg_code_area + ((LX+scx) >> 3) + (((LY+scy) >> 3) * 'h20);
                if (gbc_mode)
                    vram1_addr <= bg_code_area + ((LX+scx) >> 3) + (((LY+scy) >> 3) * 'h20);
            end

            // Get BG Tile and BG Attr
            8'd2: begin
                tile_id <= vram0_data;
                if (gbc_mode)
                    tile_attr <= vram1_data;
                if (vram0_data < 255)
                    if (!gbc_mode || vram1_data[3] == 1'b0)
                        vram0_addr <= load_tile(
                                        .base_char_addr(get_base_char_addr(.tile_id(vram0_data[7:0]),.bg_char_data_sel(bg_char_data_sel))),
                                        .tile_id(vram0_data[7:0]),
                                        .tile_attr(vram1_data[7:0]),
                                        .tileY(tileY),
                                        .bit_plane(0),
                                        .gbc_mode(gbc_mode)
                                    );
                    else
                        vram1_addr <= load_tile(
                                        .base_char_addr(get_base_char_addr(.tile_id(vram0_data[7:0]),.bg_char_data_sel(bg_char_data_sel))),
                                        .tile_id(vram0_data[7:0]),
                                        .tile_attr(vram1_data[7:0]),
                                        .tileY(tileY),
                                        .bit_plane(0),
                                        .gbc_mode(gbc_mode)
                                    );
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
                    if (!gbc_mode || tile_attr[3] == 1'b0)
                        vram0_addr <= load_tile(
                            .base_char_addr(get_base_char_addr(.tile_id(tile_id[7:0]),.bg_char_data_sel(bg_char_data_sel))),
                            .tile_id(tile_id[7:0]),
                            .tile_attr(tile_attr[7:0]),
                            .tileY(tileY),
                            .bit_plane(1),
                            .gbc_mode(gbc_mode)
                        );
                    else
                        vram1_addr <= load_tile(
                            .base_char_addr(get_base_char_addr(.tile_id(tile_id[7:0]),.bg_char_data_sel(bg_char_data_sel))),
                            .tile_id(tile_id[7:0]),
                            .tile_attr(tile_attr[7:0]),
                            .tileY(tileY),
                            .bit_plane(1),
                            .gbc_mode(gbc_mode)
                        );
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

                if (tileX < 8)
                    begin
                        tileX <= tileX + 1;
                        LX <= LX + 1;
                    end
                else
                    begin
                        tileX <= 0;
                        step <= 16'd0;
                        mode <= 3'd2;
                        if (LX >= 8'd160) begin
                            LX <= 0;
                            LY <= LY + 1;
                            tileY <= tileY + 1;
                        end
                    end
            end else begin
                tileY <= 0;
                mode <= 3'd0;
                step <= 0;
            end
        end
        if(mode == 3'd2) begin
            if (step == 16'hFF) begin
                if (LY >= 8'd144)
                    begin
                        LX <= 8'd0;
                        step <= 16'd0;
                        mode <= 3'd3;
                    end
                else
                    mode <= 3'd0;
                step <= 0;
            end else 
                step <= step + 1;
        end

        if(mode == 3'd3) begin
            if (step <= 456)
                step <= step + 1;
            else
                begin
                    step <= 16'd0;
                    if (LY < 153)
                        LY <= LY + 1;
                    else
                        begin
                            LY <= 8'd0;
                            mode <= 3'd0;
                            step <= 16'd0;
                        end
                end


        end

    end
end

function [15:0] load_tile;
    input [15:0] base_char_addr;
    input [7:0] tile_id;
    input [7:0] tile_attr;
    input [7:0] tileY;
    input bit_plane;
    input gbc_mode;


    begin
        load_tile = base_char_addr + (tile_id[7:0] << 4) + ((tile_attr[6] ? 7-tileY : tileY)*2) + bit_plane;
    end
endfunction

function [15:0] get_base_char_addr;
    input [7:0] tile_id;
    input bg_char_data_sel;
    begin
        if (tile_id >= 128)
            get_base_char_addr = 16'h8800;
        else
            if (bg_char_data_sel == 1'b0)
                get_base_char_addr = 16'h9000;
            else
                get_base_char_addr = 16'h8000;
    end
endfunction

endmodule