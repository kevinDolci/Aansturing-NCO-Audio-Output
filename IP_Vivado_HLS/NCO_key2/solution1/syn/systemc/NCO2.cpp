// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "NCO2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic NCO2::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic NCO2::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<45> NCO2::ap_ST_fsm_state1 = "1";
const sc_lv<45> NCO2::ap_ST_fsm_state2 = "10";
const sc_lv<45> NCO2::ap_ST_fsm_state3 = "100";
const sc_lv<45> NCO2::ap_ST_fsm_state4 = "1000";
const sc_lv<45> NCO2::ap_ST_fsm_state5 = "10000";
const sc_lv<45> NCO2::ap_ST_fsm_state6 = "100000";
const sc_lv<45> NCO2::ap_ST_fsm_state7 = "1000000";
const sc_lv<45> NCO2::ap_ST_fsm_state8 = "10000000";
const sc_lv<45> NCO2::ap_ST_fsm_state9 = "100000000";
const sc_lv<45> NCO2::ap_ST_fsm_state10 = "1000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state11 = "10000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state12 = "100000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state13 = "1000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state14 = "10000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state15 = "100000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state16 = "1000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state17 = "10000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state18 = "100000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state19 = "1000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state20 = "10000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state21 = "100000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state22 = "1000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state23 = "10000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state24 = "100000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state25 = "1000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state26 = "10000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state27 = "100000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state28 = "1000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state29 = "10000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state30 = "100000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state31 = "1000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state32 = "10000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state33 = "100000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state34 = "1000000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state35 = "10000000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state36 = "100000000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state37 = "1000000000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state38 = "10000000000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state39 = "100000000000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state40 = "1000000000000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state41 = "10000000000000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state42 = "100000000000000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state43 = "1000000000000000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state44 = "10000000000000000000000000000000000000000000";
const sc_lv<45> NCO2::ap_ST_fsm_state45 = "100000000000000000000000000000000000000000000";
const sc_lv<32> NCO2::ap_const_lv32_0 = "00000000000000000000000000000000";
const int NCO2::C_S_AXI_DATA_WIDTH = "100000";
const sc_lv<32> NCO2::ap_const_lv32_2 = "10";
const sc_lv<1> NCO2::ap_const_lv1_1 = "1";
const sc_lv<32> NCO2::ap_const_lv32_6 = "110";
const sc_lv<32> NCO2::ap_const_lv32_25 = "100101";
const sc_lv<32> NCO2::ap_const_lv32_2B = "101011";
const sc_lv<32> NCO2::ap_const_lv32_2C = "101100";
const sc_lv<64> NCO2::ap_const_lv64_4046800000000000 = "100000001000110100000000000000000000000000000000000000000000000";
const sc_lv<32> NCO2::ap_const_lv32_26 = "100110";
const sc_lv<64> NCO2::ap_const_lv64_3F97D6B65A9A8049 = "11111110010111110101101011011001011010100110101000000001001001";
const sc_lv<32> NCO2::ap_const_lv32_7 = "111";
const sc_lv<32> NCO2::ap_const_lv32_13 = "10011";
const sc_lv<32> NCO2::ap_const_lv32_1F = "11111";
const sc_lv<32> NCO2::ap_const_lv32_34 = "110100";
const sc_lv<32> NCO2::ap_const_lv32_3E = "111110";
const sc_lv<12> NCO2::ap_const_lv12_C01 = "110000000001";
const sc_lv<32> NCO2::ap_const_lv32_B = "1011";
const sc_lv<11> NCO2::ap_const_lv11_3FF = "1111111111";
const sc_lv<32> NCO2::ap_const_lv32_53 = "1010011";

NCO2::NCO2(sc_module_name name) : sc_module(name), mVcdFile(0) {
    sine_V_U = new NCO2_sine_V("sine_V_U");
    sine_V_U->clk(ap_clk);
    sine_V_U->reset(ap_rst_n_inv);
    sine_V_U->address0(sine_V_address0);
    sine_V_U->ce0(sine_V_ce0);
    sine_V_U->q0(sine_V_q0);
    NCO2_AXILiteS_s_axi_U = new NCO2_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>("NCO2_AXILiteS_s_axi_U");
    NCO2_AXILiteS_s_axi_U->AWVALID(s_axi_AXILiteS_AWVALID);
    NCO2_AXILiteS_s_axi_U->AWREADY(s_axi_AXILiteS_AWREADY);
    NCO2_AXILiteS_s_axi_U->AWADDR(s_axi_AXILiteS_AWADDR);
    NCO2_AXILiteS_s_axi_U->WVALID(s_axi_AXILiteS_WVALID);
    NCO2_AXILiteS_s_axi_U->WREADY(s_axi_AXILiteS_WREADY);
    NCO2_AXILiteS_s_axi_U->WDATA(s_axi_AXILiteS_WDATA);
    NCO2_AXILiteS_s_axi_U->WSTRB(s_axi_AXILiteS_WSTRB);
    NCO2_AXILiteS_s_axi_U->ARVALID(s_axi_AXILiteS_ARVALID);
    NCO2_AXILiteS_s_axi_U->ARREADY(s_axi_AXILiteS_ARREADY);
    NCO2_AXILiteS_s_axi_U->ARADDR(s_axi_AXILiteS_ARADDR);
    NCO2_AXILiteS_s_axi_U->RVALID(s_axi_AXILiteS_RVALID);
    NCO2_AXILiteS_s_axi_U->RREADY(s_axi_AXILiteS_RREADY);
    NCO2_AXILiteS_s_axi_U->RDATA(s_axi_AXILiteS_RDATA);
    NCO2_AXILiteS_s_axi_U->RRESP(s_axi_AXILiteS_RRESP);
    NCO2_AXILiteS_s_axi_U->BVALID(s_axi_AXILiteS_BVALID);
    NCO2_AXILiteS_s_axi_U->BREADY(s_axi_AXILiteS_BREADY);
    NCO2_AXILiteS_s_axi_U->BRESP(s_axi_AXILiteS_BRESP);
    NCO2_AXILiteS_s_axi_U->ACLK(ap_clk);
    NCO2_AXILiteS_s_axi_U->ARESET(ap_rst_n_inv);
    NCO2_AXILiteS_s_axi_U->ACLK_EN(ap_var_for_const0);
    NCO2_AXILiteS_s_axi_U->freqControl(freqControl);
    NCO2_AXILiteS_s_axi_U->sine_out_V(sine_out_V);
    NCO2_AXILiteS_s_axi_U->sine_out_V_ap_vld(sine_out_V_ap_vld);
    NCO2_dmul_64ns_64bkb_U0 = new NCO2_dmul_64ns_64bkb<1,6,64,64,64>("NCO2_dmul_64ns_64bkb_U0");
    NCO2_dmul_64ns_64bkb_U0->clk(ap_clk);
    NCO2_dmul_64ns_64bkb_U0->reset(ap_rst_n_inv);
    NCO2_dmul_64ns_64bkb_U0->din0(tmp_1_reg_301);
    NCO2_dmul_64ns_64bkb_U0->din1(ap_var_for_const1);
    NCO2_dmul_64ns_64bkb_U0->ce(ap_var_for_const0);
    NCO2_dmul_64ns_64bkb_U0->dout(grp_fu_97_p2);
    NCO2_ddiv_64ns_64cud_U1 = new NCO2_ddiv_64ns_64cud<1,31,64,64,64>("NCO2_ddiv_64ns_64cud_U1");
    NCO2_ddiv_64ns_64cud_U1->clk(ap_clk);
    NCO2_ddiv_64ns_64cud_U1->reset(ap_rst_n_inv);
    NCO2_ddiv_64ns_64cud_U1->din0(tmp_s_reg_296);
    NCO2_ddiv_64ns_64cud_U1->din1(ap_var_for_const2);
    NCO2_ddiv_64ns_64cud_U1->ce(ap_var_for_const0);
    NCO2_ddiv_64ns_64cud_U1->dout(grp_fu_102_p2);
    NCO2_sitodp_32ns_dEe_U2 = new NCO2_sitodp_32ns_dEe<1,5,32,64>("NCO2_sitodp_32ns_dEe_U2");
    NCO2_sitodp_32ns_dEe_U2->clk(ap_clk);
    NCO2_sitodp_32ns_dEe_U2->reset(ap_rst_n_inv);
    NCO2_sitodp_32ns_dEe_U2->din0(freqControl_assign_fu_68);
    NCO2_sitodp_32ns_dEe_U2->ce(ap_var_for_const0);
    NCO2_sitodp_32ns_dEe_U2->dout(grp_fu_107_p1);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state38);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state39);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state44);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state45);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_isNeg_fu_183_p3);
    sensitive << ( sh_assign_fu_177_p2 );

    SC_METHOD(thread_loc_V_1_fu_157_p1);
    sensitive << ( p_Val2_s_fu_144_p1 );

    SC_METHOD(thread_loc_V_fu_147_p4);
    sensitive << ( p_Val2_s_fu_144_p1 );

    SC_METHOD(thread_p_Result_s_fu_161_p3);
    sensitive << ( loc_V_1_fu_157_p1 );

    SC_METHOD(thread_p_Val2_s_fu_144_p1);
    sensitive << ( val_assign_reg_311 );

    SC_METHOD(thread_phitmp_fu_123_p4);
    sensitive << ( accumulator_V );

    SC_METHOD(thread_result_V_fu_255_p3);
    sensitive << ( isNeg_fu_183_p3 );
    sensitive << ( tmp_4_fu_241_p1 );
    sensitive << ( tmp_5_fu_245_p4 );

    SC_METHOD(thread_sh_assign_1_cast_fu_209_p1);
    sensitive << ( sh_assign_1_fu_201_p3 );

    SC_METHOD(thread_sh_assign_1_fu_201_p3);
    sensitive << ( sh_assign_fu_177_p2 );
    sensitive << ( isNeg_fu_183_p3 );
    sensitive << ( tmp_2_i_i_cast_fu_197_p1 );

    SC_METHOD(thread_sh_assign_fu_177_p2);
    sensitive << ( tmp_i_i_i_cast1_fu_173_p1 );

    SC_METHOD(thread_sine_V_address0);
    sensitive << ( ap_CS_fsm_state44 );
    sensitive << ( tmp_3_fu_139_p1 );

    SC_METHOD(thread_sine_V_ce0);
    sensitive << ( ap_CS_fsm_state44 );

    SC_METHOD(thread_sine_out_V);
    sensitive << ( sine_V_q0 );
    sensitive << ( ap_CS_fsm_state45 );

    SC_METHOD(thread_sine_out_V_ap_vld);
    sensitive << ( ap_CS_fsm_state45 );

    SC_METHOD(thread_tmp_2_fu_269_p2);
    sensitive << ( accumulator_V );
    sensitive << ( result_V_fu_255_p3 );

    SC_METHOD(thread_tmp_2_i_i_cast_fu_197_p1);
    sensitive << ( tmp_2_i_i_fu_191_p2 );

    SC_METHOD(thread_tmp_2_i_i_fu_191_p2);
    sensitive << ( loc_V_fu_147_p4 );

    SC_METHOD(thread_tmp_3_fu_139_p1);
    sensitive << ( phitmp_fu_123_p4 );

    SC_METHOD(thread_tmp_4_fu_241_p1);
    sensitive << ( tmp_fu_233_p3 );

    SC_METHOD(thread_tmp_4_i_i_cast_fu_217_p1);
    sensitive << ( sh_assign_1_cast_fu_209_p1 );

    SC_METHOD(thread_tmp_4_i_i_fu_213_p1);
    sensitive << ( sh_assign_1_cast_fu_209_p1 );

    SC_METHOD(thread_tmp_5_fu_245_p4);
    sensitive << ( tmp_7_i_i_fu_227_p2 );

    SC_METHOD(thread_tmp_5_i_i_fu_221_p2);
    sensitive << ( p_Result_s_fu_161_p3 );
    sensitive << ( tmp_4_i_i_cast_fu_217_p1 );

    SC_METHOD(thread_tmp_7_i_i_fu_227_p2);
    sensitive << ( tmp_i_i_fu_169_p1 );
    sensitive << ( tmp_4_i_i_fu_213_p1 );

    SC_METHOD(thread_tmp_fu_233_p3);
    sensitive << ( tmp_5_i_i_fu_221_p2 );

    SC_METHOD(thread_tmp_i_i_fu_169_p1);
    sensitive << ( p_Result_s_fu_161_p3 );

    SC_METHOD(thread_tmp_i_i_i_cast1_fu_173_p1);
    sensitive << ( loc_V_fu_147_p4 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const1);

    SC_THREAD(thread_ap_var_for_const2);

    accumulator_V = "00000000000000000000000000000000";
    ap_CS_fsm = "000000000000000000000000000000000000000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "NCO2_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, s_axi_AXILiteS_AWVALID, "(port)s_axi_AXILiteS_AWVALID");
    sc_trace(mVcdFile, s_axi_AXILiteS_AWREADY, "(port)s_axi_AXILiteS_AWREADY");
    sc_trace(mVcdFile, s_axi_AXILiteS_AWADDR, "(port)s_axi_AXILiteS_AWADDR");
    sc_trace(mVcdFile, s_axi_AXILiteS_WVALID, "(port)s_axi_AXILiteS_WVALID");
    sc_trace(mVcdFile, s_axi_AXILiteS_WREADY, "(port)s_axi_AXILiteS_WREADY");
    sc_trace(mVcdFile, s_axi_AXILiteS_WDATA, "(port)s_axi_AXILiteS_WDATA");
    sc_trace(mVcdFile, s_axi_AXILiteS_WSTRB, "(port)s_axi_AXILiteS_WSTRB");
    sc_trace(mVcdFile, s_axi_AXILiteS_ARVALID, "(port)s_axi_AXILiteS_ARVALID");
    sc_trace(mVcdFile, s_axi_AXILiteS_ARREADY, "(port)s_axi_AXILiteS_ARREADY");
    sc_trace(mVcdFile, s_axi_AXILiteS_ARADDR, "(port)s_axi_AXILiteS_ARADDR");
    sc_trace(mVcdFile, s_axi_AXILiteS_RVALID, "(port)s_axi_AXILiteS_RVALID");
    sc_trace(mVcdFile, s_axi_AXILiteS_RREADY, "(port)s_axi_AXILiteS_RREADY");
    sc_trace(mVcdFile, s_axi_AXILiteS_RDATA, "(port)s_axi_AXILiteS_RDATA");
    sc_trace(mVcdFile, s_axi_AXILiteS_RRESP, "(port)s_axi_AXILiteS_RRESP");
    sc_trace(mVcdFile, s_axi_AXILiteS_BVALID, "(port)s_axi_AXILiteS_BVALID");
    sc_trace(mVcdFile, s_axi_AXILiteS_BREADY, "(port)s_axi_AXILiteS_BREADY");
    sc_trace(mVcdFile, s_axi_AXILiteS_BRESP, "(port)s_axi_AXILiteS_BRESP");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, freqControl, "freqControl");
    sc_trace(mVcdFile, sine_out_V, "sine_out_V");
    sc_trace(mVcdFile, sine_out_V_ap_vld, "sine_out_V_ap_vld");
    sc_trace(mVcdFile, accumulator_V, "accumulator_V");
    sc_trace(mVcdFile, sine_V_address0, "sine_V_address0");
    sc_trace(mVcdFile, sine_V_ce0, "sine_V_ce0");
    sc_trace(mVcdFile, sine_V_q0, "sine_V_q0");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, grp_fu_107_p1, "grp_fu_107_p1");
    sc_trace(mVcdFile, tmp_s_reg_296, "tmp_s_reg_296");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, grp_fu_102_p2, "grp_fu_102_p2");
    sc_trace(mVcdFile, tmp_1_reg_301, "tmp_1_reg_301");
    sc_trace(mVcdFile, ap_CS_fsm_state38, "ap_CS_fsm_state38");
    sc_trace(mVcdFile, ap_CS_fsm_state44, "ap_CS_fsm_state44");
    sc_trace(mVcdFile, grp_fu_97_p2, "grp_fu_97_p2");
    sc_trace(mVcdFile, val_assign_reg_311, "val_assign_reg_311");
    sc_trace(mVcdFile, tmp_3_fu_139_p1, "tmp_3_fu_139_p1");
    sc_trace(mVcdFile, tmp_2_fu_269_p2, "tmp_2_fu_269_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state45, "ap_CS_fsm_state45");
    sc_trace(mVcdFile, phitmp_fu_123_p4, "phitmp_fu_123_p4");
    sc_trace(mVcdFile, result_V_fu_255_p3, "result_V_fu_255_p3");
    sc_trace(mVcdFile, freqControl_assign_fu_68, "freqControl_assign_fu_68");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, ap_CS_fsm_state39, "ap_CS_fsm_state39");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, p_Val2_s_fu_144_p1, "p_Val2_s_fu_144_p1");
    sc_trace(mVcdFile, loc_V_1_fu_157_p1, "loc_V_1_fu_157_p1");
    sc_trace(mVcdFile, p_Result_s_fu_161_p3, "p_Result_s_fu_161_p3");
    sc_trace(mVcdFile, loc_V_fu_147_p4, "loc_V_fu_147_p4");
    sc_trace(mVcdFile, tmp_i_i_i_cast1_fu_173_p1, "tmp_i_i_i_cast1_fu_173_p1");
    sc_trace(mVcdFile, sh_assign_fu_177_p2, "sh_assign_fu_177_p2");
    sc_trace(mVcdFile, tmp_2_i_i_fu_191_p2, "tmp_2_i_i_fu_191_p2");
    sc_trace(mVcdFile, isNeg_fu_183_p3, "isNeg_fu_183_p3");
    sc_trace(mVcdFile, tmp_2_i_i_cast_fu_197_p1, "tmp_2_i_i_cast_fu_197_p1");
    sc_trace(mVcdFile, sh_assign_1_fu_201_p3, "sh_assign_1_fu_201_p3");
    sc_trace(mVcdFile, sh_assign_1_cast_fu_209_p1, "sh_assign_1_cast_fu_209_p1");
    sc_trace(mVcdFile, tmp_4_i_i_cast_fu_217_p1, "tmp_4_i_i_cast_fu_217_p1");
    sc_trace(mVcdFile, tmp_i_i_fu_169_p1, "tmp_i_i_fu_169_p1");
    sc_trace(mVcdFile, tmp_4_i_i_fu_213_p1, "tmp_4_i_i_fu_213_p1");
    sc_trace(mVcdFile, tmp_5_i_i_fu_221_p2, "tmp_5_i_i_fu_221_p2");
    sc_trace(mVcdFile, tmp_fu_233_p3, "tmp_fu_233_p3");
    sc_trace(mVcdFile, tmp_7_i_i_fu_227_p2, "tmp_7_i_i_fu_227_p2");
    sc_trace(mVcdFile, tmp_4_fu_241_p1, "tmp_4_fu_241_p1");
    sc_trace(mVcdFile, tmp_5_fu_245_p4, "tmp_5_fu_245_p4");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("NCO2.hdltvin.dat");
    mHdltvoutHandle.open("NCO2.hdltvout.dat");
}

NCO2::~NCO2() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete sine_V_U;
    delete NCO2_AXILiteS_s_axi_U;
    delete NCO2_dmul_64ns_64bkb_U0;
    delete NCO2_ddiv_64ns_64cud_U1;
    delete NCO2_sitodp_32ns_dEe_U2;
}

void NCO2::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void NCO2::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv64_4046800000000000;
}

void NCO2::thread_ap_var_for_const2() {
    ap_var_for_const2 = ap_const_lv64_3F97D6B65A9A8049;
}

void NCO2::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state45.read()))) {
        accumulator_V = tmp_2_fu_269_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state1.read()))) {
        freqControl_assign_fu_68 = freqControl.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state38.read()))) {
        tmp_1_reg_301 = grp_fu_102_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state7.read()))) {
        tmp_s_reg_296 = grp_fu_107_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state44.read()))) {
        val_assign_reg_311 = grp_fu_97_p2.read();
    }
}

void NCO2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read().range(0, 0);
}

void NCO2::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read().range(2, 2);
}

void NCO2::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read().range(37, 37);
}

void NCO2::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read().range(38, 38);
}

void NCO2::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read().range(43, 43);
}

void NCO2::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read().range(44, 44);
}

void NCO2::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read().range(6, 6);
}

void NCO2::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read().range(7, 7);
}

void NCO2::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void NCO2::thread_isNeg_fu_183_p3() {
    isNeg_fu_183_p3 = sh_assign_fu_177_p2.read().range(11, 11);
}

void NCO2::thread_loc_V_1_fu_157_p1() {
    loc_V_1_fu_157_p1 = p_Val2_s_fu_144_p1.read().range(52-1, 0);
}

void NCO2::thread_loc_V_fu_147_p4() {
    loc_V_fu_147_p4 = p_Val2_s_fu_144_p1.read().range(62, 52);
}

void NCO2::thread_p_Result_s_fu_161_p3() {
    p_Result_s_fu_161_p3 = esl_concat<1,52>(ap_const_lv1_1, loc_V_1_fu_157_p1.read());
}

void NCO2::thread_p_Val2_s_fu_144_p1() {
    p_Val2_s_fu_144_p1 = val_assign_reg_311.read();
}

void NCO2::thread_phitmp_fu_123_p4() {
    phitmp_fu_123_p4 = accumulator_V.read().range(31, 19);
}

void NCO2::thread_result_V_fu_255_p3() {
    result_V_fu_255_p3 = (!isNeg_fu_183_p3.read()[0].is_01())? sc_lv<32>(): ((isNeg_fu_183_p3.read()[0].to_bool())? tmp_4_fu_241_p1.read(): tmp_5_fu_245_p4.read());
}

void NCO2::thread_sh_assign_1_cast_fu_209_p1() {
    sh_assign_1_cast_fu_209_p1 = esl_sext<32,12>(sh_assign_1_fu_201_p3.read());
}

void NCO2::thread_sh_assign_1_fu_201_p3() {
    sh_assign_1_fu_201_p3 = (!isNeg_fu_183_p3.read()[0].is_01())? sc_lv<12>(): ((isNeg_fu_183_p3.read()[0].to_bool())? tmp_2_i_i_cast_fu_197_p1.read(): sh_assign_fu_177_p2.read());
}

void NCO2::thread_sh_assign_fu_177_p2() {
    sh_assign_fu_177_p2 = (!ap_const_lv12_C01.is_01() || !tmp_i_i_i_cast1_fu_173_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C01) + sc_biguint<12>(tmp_i_i_i_cast1_fu_173_p1.read()));
}

void NCO2::thread_sine_V_address0() {
    sine_V_address0 =  (sc_lv<13>) (tmp_3_fu_139_p1.read());
}

void NCO2::thread_sine_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state44.read()))) {
        sine_V_ce0 = ap_const_logic_1;
    } else {
        sine_V_ce0 = ap_const_logic_0;
    }
}

void NCO2::thread_sine_out_V() {
    sine_out_V = esl_zext<24,23>(sine_V_q0.read());
}

void NCO2::thread_sine_out_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state45.read()))) {
        sine_out_V_ap_vld = ap_const_logic_1;
    } else {
        sine_out_V_ap_vld = ap_const_logic_0;
    }
}

void NCO2::thread_tmp_2_fu_269_p2() {
    tmp_2_fu_269_p2 = (!accumulator_V.read().is_01() || !result_V_fu_255_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(accumulator_V.read()) + sc_biguint<32>(result_V_fu_255_p3.read()));
}

void NCO2::thread_tmp_2_i_i_cast_fu_197_p1() {
    tmp_2_i_i_cast_fu_197_p1 = esl_sext<12,11>(tmp_2_i_i_fu_191_p2.read());
}

void NCO2::thread_tmp_2_i_i_fu_191_p2() {
    tmp_2_i_i_fu_191_p2 = (!ap_const_lv11_3FF.is_01() || !loc_V_fu_147_p4.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) - sc_biguint<11>(loc_V_fu_147_p4.read()));
}

void NCO2::thread_tmp_3_fu_139_p1() {
    tmp_3_fu_139_p1 = esl_zext<32,13>(phitmp_fu_123_p4.read());
}

void NCO2::thread_tmp_4_fu_241_p1() {
    tmp_4_fu_241_p1 = esl_zext<32,1>(tmp_fu_233_p3.read());
}

void NCO2::thread_tmp_4_i_i_cast_fu_217_p1() {
    tmp_4_i_i_cast_fu_217_p1 = esl_zext<53,32>(sh_assign_1_cast_fu_209_p1.read());
}

void NCO2::thread_tmp_4_i_i_fu_213_p1() {
    tmp_4_i_i_fu_213_p1 = esl_zext<136,32>(sh_assign_1_cast_fu_209_p1.read());
}

void NCO2::thread_tmp_5_fu_245_p4() {
    tmp_5_fu_245_p4 = tmp_7_i_i_fu_227_p2.read().range(83, 52);
}

void NCO2::thread_tmp_5_i_i_fu_221_p2() {
    tmp_5_i_i_fu_221_p2 = (!tmp_4_i_i_cast_fu_217_p1.read().is_01())? sc_lv<53>(): p_Result_s_fu_161_p3.read() >> (unsigned short)tmp_4_i_i_cast_fu_217_p1.read().to_uint();
}

void NCO2::thread_tmp_7_i_i_fu_227_p2() {
    tmp_7_i_i_fu_227_p2 = (!tmp_4_i_i_fu_213_p1.read().is_01())? sc_lv<136>(): tmp_i_i_fu_169_p1.read() << (unsigned short)tmp_4_i_i_fu_213_p1.read().to_uint();
}

void NCO2::thread_tmp_fu_233_p3() {
    tmp_fu_233_p3 = tmp_5_i_i_fu_221_p2.read().range(52, 52);
}

void NCO2::thread_tmp_i_i_fu_169_p1() {
    tmp_i_i_fu_169_p1 = esl_zext<136,53>(p_Result_s_fu_161_p3.read());
}

void NCO2::thread_tmp_i_i_i_cast1_fu_173_p1() {
    tmp_i_i_i_cast1_fu_173_p1 = esl_zext<12,11>(loc_V_fu_147_p4.read());
}

void NCO2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state27;
            break;
        case 67108864 : 
            ap_NS_fsm = ap_ST_fsm_state28;
            break;
        case 134217728 : 
            ap_NS_fsm = ap_ST_fsm_state29;
            break;
        case 268435456 : 
            ap_NS_fsm = ap_ST_fsm_state30;
            break;
        case 536870912 : 
            ap_NS_fsm = ap_ST_fsm_state31;
            break;
        case 1073741824 : 
            ap_NS_fsm = ap_ST_fsm_state32;
            break;
        case 2147483648 : 
            ap_NS_fsm = ap_ST_fsm_state33;
            break;
        case 4294967296 : 
            ap_NS_fsm = ap_ST_fsm_state34;
            break;
        case 8589934592 : 
            ap_NS_fsm = ap_ST_fsm_state35;
            break;
        case 17179869184 : 
            ap_NS_fsm = ap_ST_fsm_state36;
            break;
        case 34359738368 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 68719476736 : 
            ap_NS_fsm = ap_ST_fsm_state38;
            break;
        case 137438953472 : 
            ap_NS_fsm = ap_ST_fsm_state39;
            break;
        case 274877906944 : 
            ap_NS_fsm = ap_ST_fsm_state40;
            break;
        case 549755813888 : 
            ap_NS_fsm = ap_ST_fsm_state41;
            break;
        case 1099511627776 : 
            ap_NS_fsm = ap_ST_fsm_state42;
            break;
        case 2199023255552 : 
            ap_NS_fsm = ap_ST_fsm_state43;
            break;
        case 4398046511104 : 
            ap_NS_fsm = ap_ST_fsm_state44;
            break;
        case 8796093022208 : 
            ap_NS_fsm = ap_ST_fsm_state45;
            break;
        case 17592186044416 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
            break;
    }
}

void NCO2::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWVALID\" :  \"" << s_axi_AXILiteS_AWVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"s_axi_AXILiteS_AWREADY\" :  \"" << s_axi_AXILiteS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWADDR\" :  \"" << s_axi_AXILiteS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WVALID\" :  \"" << s_axi_AXILiteS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_WREADY\" :  \"" << s_axi_AXILiteS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WDATA\" :  \"" << s_axi_AXILiteS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WSTRB\" :  \"" << s_axi_AXILiteS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARVALID\" :  \"" << s_axi_AXILiteS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_ARREADY\" :  \"" << s_axi_AXILiteS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARADDR\" :  \"" << s_axi_AXILiteS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RVALID\" :  \"" << s_axi_AXILiteS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_RREADY\" :  \"" << s_axi_AXILiteS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RDATA\" :  \"" << s_axi_AXILiteS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RRESP\" :  \"" << s_axi_AXILiteS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BVALID\" :  \"" << s_axi_AXILiteS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_BREADY\" :  \"" << s_axi_AXILiteS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BRESP\" :  \"" << s_axi_AXILiteS_BRESP.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

