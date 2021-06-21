// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4_AR70530_AR70530
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module Sobel (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        p_src_data_stream_V_dout,
        p_src_data_stream_V_empty_n,
        p_src_data_stream_V_read,
        p_dst_data_stream_V_din,
        p_dst_data_stream_V_full_n,
        p_dst_data_stream_V_write
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [7:0] p_src_data_stream_V_dout;
input   p_src_data_stream_V_empty_n;
output   p_src_data_stream_V_read;
output  [7:0] p_dst_data_stream_V_din;
input   p_dst_data_stream_V_full_n;
output   p_dst_data_stream_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg p_src_data_stream_V_read;
reg p_dst_data_stream_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
wire    grp_Filter2D_fu_52_ap_start;
wire    grp_Filter2D_fu_52_ap_done;
wire    grp_Filter2D_fu_52_ap_idle;
wire    grp_Filter2D_fu_52_ap_ready;
wire    grp_Filter2D_fu_52_p_src_data_stream_V_read;
wire   [7:0] grp_Filter2D_fu_52_p_dst_data_stream_V_din;
wire    grp_Filter2D_fu_52_p_dst_data_stream_V_write;
reg    ap_reg_grp_Filter2D_fu_52_ap_start;
reg    ap_block_state1_ignore_call2;
wire    ap_CS_fsm_state2;
reg   [1:0] ap_NS_fsm;
reg    ap_block_state1;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 2'd1;
#0 ap_reg_grp_Filter2D_fu_52_ap_start = 1'b0;
end

Filter2D grp_Filter2D_fu_52(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_Filter2D_fu_52_ap_start),
    .ap_done(grp_Filter2D_fu_52_ap_done),
    .ap_idle(grp_Filter2D_fu_52_ap_idle),
    .ap_ready(grp_Filter2D_fu_52_ap_ready),
    .p_src_data_stream_V_dout(p_src_data_stream_V_dout),
    .p_src_data_stream_V_empty_n(p_src_data_stream_V_empty_n),
    .p_src_data_stream_V_read(grp_Filter2D_fu_52_p_src_data_stream_V_read),
    .p_dst_data_stream_V_din(grp_Filter2D_fu_52_p_dst_data_stream_V_din),
    .p_dst_data_stream_V_full_n(p_dst_data_stream_V_full_n),
    .p_dst_data_stream_V_write(grp_Filter2D_fu_52_p_dst_data_stream_V_write),
    .p_kernel_val_0_V_1_read(2'd0),
    .p_kernel_val_0_V_2_read(2'd1),
    .p_kernel_val_1_V_0_read(3'd6),
    .p_kernel_val_1_V_2_read(4'd2),
    .p_kernel_val_2_V_0_read(2'd3),
    .p_kernel_val_2_V_1_read(3'd0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((grp_Filter2D_fu_52_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_reg_grp_Filter2D_fu_52_ap_start <= 1'b0;
    end else begin
        if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_reg_grp_Filter2D_fu_52_ap_start <= 1'b1;
        end else if ((grp_Filter2D_fu_52_ap_ready == 1'b1)) begin
            ap_reg_grp_Filter2D_fu_52_ap_start <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (*) begin
    if (((grp_Filter2D_fu_52_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((grp_Filter2D_fu_52_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        p_dst_data_stream_V_write = grp_Filter2D_fu_52_p_dst_data_stream_V_write;
    end else begin
        p_dst_data_stream_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        p_src_data_stream_V_read = grp_Filter2D_fu_52_p_src_data_stream_V_read;
    end else begin
        p_src_data_stream_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((start_full_n == 1'b0) & (start_once_reg == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((grp_Filter2D_fu_52_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (ap_done_reg == 1'b1));
end

always @ (*) begin
    ap_block_state1_ignore_call2 = ((real_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_ready = internal_ap_ready;

assign grp_Filter2D_fu_52_ap_start = ap_reg_grp_Filter2D_fu_52_ap_start;

assign p_dst_data_stream_V_din = grp_Filter2D_fu_52_p_dst_data_stream_V_din;

assign start_out = real_start;

endmodule //Sobel
