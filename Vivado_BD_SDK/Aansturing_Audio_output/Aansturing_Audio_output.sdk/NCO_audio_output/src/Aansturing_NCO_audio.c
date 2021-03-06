#include "Aansturing_NCO_audio.h"

int main(void)
{
	xil_printf("Entering Main\r\n");
	//Configure the IIC data structure
	IicConfig(XPAR_XIICPS_1_DEVICE_ID);
	IicPsMasterIntrExample(XPAR_XIICPS_0_DEVICE_ID);

	//Configure the Audio Codec's PLL
	AudioPllConfig();

	xil_printf("SSM2603 configured\n\r");

	/* Initialise GPIO and NCO peripherals */
	gpio_init();
	nco_init(&Nco, NCO_ID);
	xil_printf("GPIO and NCO peripheral configured\r\n");

	/* Display interactive menu interface via terminal */
	menu();
    return 1;
}


void menu(){
	u8 inp = 0x00;
	u32 CntrlRegister;

	XGpio_DiscreteWrite(&Gpio_audio_enable, 1, 0);
	CntrlRegister = XUartPs_ReadReg(UART_BASEADDR, XUARTPS_CR_OFFSET);

	XUartPs_WriteReg(UART_BASEADDR, XUARTPS_CR_OFFSET,
				  ((CntrlRegister & ~XUARTPS_CR_EN_DIS_MASK) |
				   XUARTPS_CR_TX_EN | XUARTPS_CR_RX_EN));
	xil_printf("\r\n\r\n");
	xil_printf("Bachelorproef demo: Vivado HLS\r\n");
	xil_printf("Enter 'p' to use the piano, 't' to change tones and 'f' to change frequencies\r\n");
	xil_printf("----------------------------------------\r\n");

	while (!XUartPs_IsReceiveData(UART_BASEADDR));
	inp = XUartPs_ReadReg(UART_BASEADDR, XUARTPS_FIFO_OFFSET);

	switch(inp){
	case 'p':
		xil_printf("ENTERING NCO piano\r\n");
		xil_printf("Play the board\r\n\n");
		xil_printf("Press 'q' to return to the main menu\r\n");
		XGpio_DiscreteWrite(&Gpio_audio_enable, 1, 1);
		Piano_sound();
		break;
	case 't':
		xil_printf("ENTERING sound configuration\r\n");
		xil_printf("Choose your sound for each key\r\n\n");
		xil_printf("Press 'q' to return to the main menu\r\n");
		XGpio_DiscreteWrite(&Gpio_audio_enable, 1, 1);
		config_tones();
		break;
	case 'f':
		xil_printf("ENTERING frequency configuration\r\n");
		xil_printf("You can change the frequencies by turning the encoder\r\n");
		xil_printf("Press 'q' to return to the main menu\r\n");
		XGpio_DiscreteWrite(&Gpio_audio_enable, 1, 1);
		config_freq();
		break;
	default:
		menu();
		break;
	// Select function based on UART input
	} // menu()
}

