// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4_AR70530_AR70530
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "Duplicate.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic Duplicate::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic Duplicate::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> Duplicate::ap_ST_fsm_state1 = "1";
const sc_lv<4> Duplicate::ap_ST_fsm_state2 = "10";
const sc_lv<4> Duplicate::ap_ST_fsm_pp0_stage0 = "100";
const sc_lv<4> Duplicate::ap_ST_fsm_state5 = "1000";
const bool Duplicate::ap_const_boolean_1 = true;
const sc_lv<32> Duplicate::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> Duplicate::ap_const_lv32_2 = "10";
const bool Duplicate::ap_const_boolean_0 = false;
const sc_lv<1> Duplicate::ap_const_lv1_0 = "0";
const sc_lv<32> Duplicate::ap_const_lv32_1 = "1";
const sc_lv<1> Duplicate::ap_const_lv1_1 = "1";
const sc_lv<10> Duplicate::ap_const_lv10_0 = "0000000000";
const sc_lv<32> Duplicate::ap_const_lv32_3 = "11";
const sc_lv<11> Duplicate::ap_const_lv11_0 = "00000000000";
const sc_lv<10> Duplicate::ap_const_lv10_2D0 = "1011010000";
const sc_lv<10> Duplicate::ap_const_lv10_1 = "1";
const sc_lv<11> Duplicate::ap_const_lv11_500 = "10100000000";
const sc_lv<11> Duplicate::ap_const_lv11_1 = "1";

Duplicate::Duplicate(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_01001);
    sensitive << ( src_data_stream_V_empty_n );
    sensitive << ( dst1_data_stream_V_full_n );
    sensitive << ( dst2_data_stream_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( exitcond_reg_173 );

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( src_data_stream_V_empty_n );
    sensitive << ( dst1_data_stream_V_full_n );
    sensitive << ( dst2_data_stream_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( exitcond_reg_173 );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( src_data_stream_V_empty_n );
    sensitive << ( dst1_data_stream_V_full_n );
    sensitive << ( dst2_data_stream_V_full_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( exitcond_reg_173 );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter1);
    sensitive << ( src_data_stream_V_empty_n );
    sensitive << ( dst1_data_stream_V_full_n );
    sensitive << ( dst2_data_stream_V_full_n );
    sensitive << ( exitcond_reg_173 );

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state3);
    sensitive << ( exitcond_fu_152_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( exitcond3_fu_140_p2 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( real_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( internal_ap_ready );

    SC_METHOD(thread_dst1_data_stream_V_blk_n);
    sensitive << ( dst1_data_stream_V_full_n );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( exitcond_reg_173 );

    SC_METHOD(thread_dst1_data_stream_V_din);
    sensitive << ( src_data_stream_V_dout );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( exitcond_reg_173 );
    sensitive << ( ap_block_pp0_stage0_01001 );

    SC_METHOD(thread_dst1_data_stream_V_write);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( exitcond_reg_173 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_dst2_data_stream_V_blk_n);
    sensitive << ( dst2_data_stream_V_full_n );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( exitcond_reg_173 );

    SC_METHOD(thread_dst2_data_stream_V_din);
    sensitive << ( src_data_stream_V_dout );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( exitcond_reg_173 );
    sensitive << ( ap_block_pp0_stage0_01001 );

    SC_METHOD(thread_dst2_data_stream_V_write);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( exitcond_reg_173 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_exitcond3_fu_140_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( t_V_reg_118 );

    SC_METHOD(thread_exitcond_fu_152_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( t_V_3_reg_129 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_i_V_fu_146_p2);
    sensitive << ( t_V_reg_118 );

    SC_METHOD(thread_internal_ap_ready);
    sensitive << ( exitcond3_fu_140_p2 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_j_V_fu_158_p2);
    sensitive << ( t_V_3_reg_129 );

    SC_METHOD(thread_real_start);
    sensitive << ( ap_start );
    sensitive << ( start_full_n );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_src_data_stream_V_blk_n);
    sensitive << ( src_data_stream_V_empty_n );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( exitcond_reg_173 );

    SC_METHOD(thread_src_data_stream_V_read);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( exitcond_reg_173 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_start_out);
    sensitive << ( real_start );

    SC_METHOD(thread_start_write);
    sensitive << ( real_start );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( exitcond3_fu_140_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_152_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0_subdone );

    start_once_reg = SC_LOGIC_0;
    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "0001";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "Duplicate_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, start_full_n, "(port)start_full_n");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, start_out, "(port)start_out");
    sc_trace(mVcdFile, start_write, "(port)start_write");
    sc_trace(mVcdFile, src_data_stream_V_dout, "(port)src_data_stream_V_dout");
    sc_trace(mVcdFile, src_data_stream_V_empty_n, "(port)src_data_stream_V_empty_n");
    sc_trace(mVcdFile, src_data_stream_V_read, "(port)src_data_stream_V_read");
    sc_trace(mVcdFile, dst1_data_stream_V_din, "(port)dst1_data_stream_V_din");
    sc_trace(mVcdFile, dst1_data_stream_V_full_n, "(port)dst1_data_stream_V_full_n");
    sc_trace(mVcdFile, dst1_data_stream_V_write, "(port)dst1_data_stream_V_write");
    sc_trace(mVcdFile, dst2_data_stream_V_din, "(port)dst2_data_stream_V_din");
    sc_trace(mVcdFile, dst2_data_stream_V_full_n, "(port)dst2_data_stream_V_full_n");
    sc_trace(mVcdFile, dst2_data_stream_V_write, "(port)dst2_data_stream_V_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, real_start, "real_start");
    sc_trace(mVcdFile, start_once_reg, "start_once_reg");
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, internal_ap_ready, "internal_ap_ready");
    sc_trace(mVcdFile, src_data_stream_V_blk_n, "src_data_stream_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, exitcond_reg_173, "exitcond_reg_173");
    sc_trace(mVcdFile, dst1_data_stream_V_blk_n, "dst1_data_stream_V_blk_n");
    sc_trace(mVcdFile, dst2_data_stream_V_blk_n, "dst2_data_stream_V_blk_n");
    sc_trace(mVcdFile, t_V_3_reg_129, "t_V_3_reg_129");
    sc_trace(mVcdFile, exitcond3_fu_140_p2, "exitcond3_fu_140_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, i_V_fu_146_p2, "i_V_fu_146_p2");
    sc_trace(mVcdFile, i_V_reg_168, "i_V_reg_168");
    sc_trace(mVcdFile, exitcond_fu_152_p2, "exitcond_fu_152_p2");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter0, "ap_block_state3_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter1, "ap_block_state4_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, j_V_fu_158_p2, "j_V_fu_158_p2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state3, "ap_condition_pp0_exit_iter0_state3");
    sc_trace(mVcdFile, t_V_reg_118, "t_V_reg_118");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ap_block_pp0_stage0_01001, "ap_block_pp0_stage0_01001");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
}

Duplicate::~Duplicate() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void Duplicate::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(exitcond3_fu_140_p2.read(), ap_const_lv1_1))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_140_p2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read()))) {
            ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state3.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_140_p2.read()))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_152_p2.read()))) {
        t_V_3_reg_129 = j_V_fu_158_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_140_p2.read()))) {
        t_V_3_reg_129 = ap_const_lv11_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        t_V_reg_118 = i_V_reg_168.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        t_V_reg_118 = ap_const_lv10_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond_reg_173 = exitcond_fu_152_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_V_reg_168 = i_V_fu_146_p2.read();
    }
}

void Duplicate::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[2];
}

void Duplicate::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void Duplicate::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void Duplicate::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[3];
}

void Duplicate::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void Duplicate::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, src_data_stream_V_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, dst1_data_stream_V_full_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, dst2_data_stream_V_full_n.read()))));
}

void Duplicate::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, src_data_stream_V_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, dst1_data_stream_V_full_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, dst2_data_stream_V_full_n.read()))));
}

void Duplicate::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, src_data_stream_V_empty_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, dst1_data_stream_V_full_n.read())) || 
  (esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, dst2_data_stream_V_full_n.read()))));
}

void Duplicate::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void Duplicate::thread_ap_block_state3_pp0_stage0_iter0() {
    ap_block_state3_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void Duplicate::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = ((esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, src_data_stream_V_empty_n.read())) || (esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, dst1_data_stream_V_full_n.read())) || (esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, dst2_data_stream_V_full_n.read())));
}

void Duplicate::thread_ap_condition_pp0_exit_iter0_state3() {
    if (esl_seteq<1,1,1>(exitcond_fu_152_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_0;
    }
}

void Duplicate::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond3_fu_140_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void Duplicate::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void Duplicate::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void Duplicate::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void Duplicate::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void Duplicate::thread_dst1_data_stream_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0))) {
        dst1_data_stream_V_blk_n = dst1_data_stream_V_full_n.read();
    } else {
        dst1_data_stream_V_blk_n = ap_const_logic_1;
    }
}

void Duplicate::thread_dst1_data_stream_V_din() {
    dst1_data_stream_V_din = src_data_stream_V_dout.read();
}

void Duplicate::thread_dst1_data_stream_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        dst1_data_stream_V_write = ap_const_logic_1;
    } else {
        dst1_data_stream_V_write = ap_const_logic_0;
    }
}

void Duplicate::thread_dst2_data_stream_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0))) {
        dst2_data_stream_V_blk_n = dst2_data_stream_V_full_n.read();
    } else {
        dst2_data_stream_V_blk_n = ap_const_logic_1;
    }
}

void Duplicate::thread_dst2_data_stream_V_din() {
    dst2_data_stream_V_din = src_data_stream_V_dout.read();
}

void Duplicate::thread_dst2_data_stream_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        dst2_data_stream_V_write = ap_const_logic_1;
    } else {
        dst2_data_stream_V_write = ap_const_logic_0;
    }
}

void Duplicate::thread_exitcond3_fu_140_p2() {
    exitcond3_fu_140_p2 = (!t_V_reg_118.read().is_01() || !ap_const_lv10_2D0.is_01())? sc_lv<1>(): sc_lv<1>(t_V_reg_118.read() == ap_const_lv10_2D0);
}

void Duplicate::thread_exitcond_fu_152_p2() {
    exitcond_fu_152_p2 = (!t_V_3_reg_129.read().is_01() || !ap_const_lv11_500.is_01())? sc_lv<1>(): sc_lv<1>(t_V_3_reg_129.read() == ap_const_lv11_500);
}

void Duplicate::thread_i_V_fu_146_p2() {
    i_V_fu_146_p2 = (!t_V_reg_118.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(t_V_reg_118.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void Duplicate::thread_internal_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond3_fu_140_p2.read(), ap_const_lv1_1))) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void Duplicate::thread_j_V_fu_158_p2() {
    j_V_fu_158_p2 = (!t_V_3_reg_129.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(t_V_3_reg_129.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void Duplicate::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void Duplicate::thread_src_data_stream_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0))) {
        src_data_stream_V_blk_n = src_data_stream_V_empty_n.read();
    } else {
        src_data_stream_V_blk_n = ap_const_logic_1;
    }
}

void Duplicate::thread_src_data_stream_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_173.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        src_data_stream_V_read = ap_const_logic_1;
    } else {
        src_data_stream_V_read = ap_const_logic_0;
    }
}

void Duplicate::thread_start_out() {
    start_out = real_start.read();
}

void Duplicate::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void Duplicate::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond3_fu_140_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_fu_152_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_fu_152_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}

