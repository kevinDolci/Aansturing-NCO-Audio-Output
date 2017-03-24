# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\11401393\Documents\PSoC Creator\CE97634 PSoC 4 Breathing LED\SCB_I2cCommSlave01.cydsn\SCB_I2cCommSlave01.cyprj
# Date: Mon, 20 Mar 2017 09:08:19 GMT
#set_units -time ns
create_clock -name {I2CS_SCBCLK(FFB)} -period 625 -waveform {0 312.5} [list [get_pins {ClockBlock/ff_div_3}]]
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFCLK} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySYSCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {I2CS_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 15 31} [list]


# Component constraints for C:\Users\11401393\Documents\PSoC Creator\CE97634 PSoC 4 Breathing LED\SCB_I2cCommSlave01.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\11401393\Documents\PSoC Creator\CE97634 PSoC 4 Breathing LED\SCB_I2cCommSlave01.cydsn\SCB_I2cCommSlave01.cyprj
# Date: Mon, 20 Mar 2017 09:08:16 GMT
