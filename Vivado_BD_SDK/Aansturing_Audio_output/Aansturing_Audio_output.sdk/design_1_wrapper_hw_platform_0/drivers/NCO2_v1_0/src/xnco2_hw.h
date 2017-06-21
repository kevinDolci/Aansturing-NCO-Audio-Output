// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// AXILiteS
// 0x00 : reserved
// 0x04 : reserved
// 0x08 : reserved
// 0x0c : reserved
// 0x10 : Data signal of freqControl
//        bit 31~0 - freqControl[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of sine_out_V
//        bit 23~0 - sine_out_V[23:0] (Read)
//        others   - reserved
// 0x1c : Control signal of sine_out_V
//        bit 0  - sine_out_V_ap_vld (Read/COR)
//        others - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XNCO2_AXILITES_ADDR_FREQCONTROL_DATA 0x10
#define XNCO2_AXILITES_BITS_FREQCONTROL_DATA 32
#define XNCO2_AXILITES_ADDR_SINE_OUT_V_DATA  0x18
#define XNCO2_AXILITES_BITS_SINE_OUT_V_DATA  24
#define XNCO2_AXILITES_ADDR_SINE_OUT_V_CTRL  0x1c

