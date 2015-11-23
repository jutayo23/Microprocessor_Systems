#include <c8051f040.h>
#include "sysinit.h"
#include "uart0.h"
#include <stdio.h>
#include "can.h"


static char buf[40]; // for sprintf( )

void init_xbar( ) {
	char save = SFRPAGE;

	SFRPAGE = CONFIG_PAGE;
	XBR0 = 0x04; // enable UART0
	XBR1 = 0x00; // enable nothing
	XBR2 = 0x40; // enable the crossbar
	XBR3 = 0x80; // enable CAN

	P0MDOUT &= ~0x02; // RX pin input
	P0MDOUT |= 0x01; // TX
	P3MDOUT &= 0xF0;
	P3MDIN |= 0x0F;

	// write "0xdead" to the watchdog register, disabling the watchdog
	WDTCN = 0xde;
	WDTCN = 0xad; 


	// ADC
	SFRPAGE = ADC0_PAGE;
	AMX0CF = 0x00;
	AMX0SL = 0x00;
	ADC0CF = 0x40;
	ADC0CN = 0x00;
	REF0CN = 0x03;
	AD0EN = 1;

	SFRPAGE = save;
}


void boot_system( ) {
	char SFRPAGE_SAVE = SFRPAGE;        // Save Current SFR page
	SFRPAGE = CONFIG_PAGE;
	
	init_sysclk( );
	init_xbar();
	uart0_init( );
	can_init( );
	printf("Hello World!\r\n");

	EA = 1; /* enable interrupts now that everything is initialized */

	SFRPAGE = SFRPAGE_SAVE;
}

void main( ) {
	unsigned char ADval[2];
	unsigned int result;
	CAN_BUFFER canbuf;
	boot_system( );


	while (1) {
		//printf("getting transmit buffer\r\n");
		canbuf = can_get_tx_buf( );
		//printf("setting message ID\r\n");
		//can_set_address_ext(canbuf, 0x12345678);
		can_set_address_std(canbuf,0x01);
		//printf("setting data\r\n");
		
		// Headlights
		if(P3 & 0x01 > 0)
			can_set_buffer_data(canbuf, "\x00\x01", 2);
		else
			can_set_buffer_data(canbuf, "\x00\x00", 2);
		//printf("sending buffer\r\n");
		can_send_tx_buf(canbuf);		
		//printf("message sent successfully\r\n");
		
		// Right Turn Signal
		can_set_address_std(canbuf,0x03);
		if(P3 & 0x02 > 0)
			can_set_buffer_data(canbuf, "\x00\x01", 2);
		else
			can_set_buffer_data(canbuf, "\x00\x00", 2);
		can_send_tx_buf(canbuf);
		
		// Light Turn Signal
		can_set_address_std(canbuf,0x02);
		if(P3 & 0x04 > 0)
			can_set_buffer_data(canbuf, "\x00\x01", 2);
		else
			can_set_buffer_data(canbuf, "\x00\x00", 2);
		can_send_tx_buf(canbuf);

		// Horn
		can_set_address_std(canbuf,0x04);
		if(P3 & 0x08 > 0)
			can_set_buffer_data(canbuf, "\x00\x01", 2);
		else
			can_set_buffer_data(canbuf, "\x00\x00", 2);
		can_send_tx_buf(canbuf);
		


		// ADC Things
		SFRPAGE = ADC0_PAGE;
		AMX0SL = 0x00;
		SFRPAGE = 0x00;
		SFRPAGE = ADC0_PAGE;
		AD0INT = 0;
		AD0BUSY = 1;
		while(AD0INT == 0);
		ADval[1] = ADC0L;
		ADval[0] = ADC0H;
		SFRPAGE = 0x00;
		//printf("LOW:%02X  HIGH:%02X\n\r", ADval[0], ADval[1]);
		//printf("%d\n\r", ADval[0] + (ADval[1]<<8));

		// Motor
		can_set_address_std(canbuf,0x05);
		can_set_buffer_data(canbuf, ADval, 2);
		can_send_tx_buf(canbuf);
		
		// More ADCs
		SFRPAGE = ADC0_PAGE;
		AMX0SL = 0x01;
		SFRPAGE = 0x00;
		SFRPAGE = ADC0_PAGE;
		AD0INT = 0;
		AD0BUSY = 1;
		while(AD0INT == 0);
		ADval[0] = ADC0L;
		ADval[1] = ADC0H;
		SFRPAGE = 0x00;

		result = ((unsigned int)ADval[0] + (ADval[1]<<8))*13/41+850;
		printf("%d\n\r", ((unsigned int)ADval[0] + (ADval[1]<<8))*13/41+850);
		//printf("%d   %d\r\n", ADval[0], ADval[1]);
		ADval[1] = result;
		ADval[0] = result>>8;

		// Steering
		can_set_address_std(canbuf,0x06);
		can_set_buffer_data(canbuf, ADval, 2);
		can_send_tx_buf(canbuf);
		
		
		/*
		if (canbuf = can_get_rx_msg( )) {
			printf("got CAN message in!\r\n");
			printf("ID=%04lx\r\n", can_get_address(canbuf));
			printf("DLC=%d\r\n", can_get_dlc(canbuf));
			printf("data0=%02x\r\n", can_get_data_byte(canbuf, 0));
			printf("data1=%02x\r\n", can_get_data_byte(canbuf, 1));
			printf("data2=%02x\r\n", can_get_data_byte(canbuf, 2));
			printf("data3=%02x\r\n", can_get_data_byte(canbuf, 3));
			printf("data4=%02x\r\n", can_get_data_byte(canbuf, 4));
			printf("data5=%02x\r\n", can_get_data_byte(canbuf, 5));
			printf("data6=%02x\r\n", can_get_data_byte(canbuf, 6));
			printf("data7=%02x\r\n", can_get_data_byte(canbuf, 7));
			can_free_rx_buf(canbuf);
		}
		*/
	}

}