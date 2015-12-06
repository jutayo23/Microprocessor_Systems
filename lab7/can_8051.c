// CAN transmit code for the RC car
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

	// ADC initialization
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
		canbuf = can_get_tx_buf( ); // acquire the can tx buffer

		// Headlighs
		can_set_address_std(canbuf,0x01);
		if(P3 & 0x01 > 0) // poll the headlight switch
			can_set_buffer_data(canbuf, "\x00\x01", 2); //send On
		else
			can_set_buffer_data(canbuf, "\x00\x00", 2); // send Off
		can_send_tx_buf(canbuf);		
		
		// Right Turn Signal
		can_set_address_std(canbuf,0x03);
		if(P3 & 0x02 > 0)
			can_set_buffer_data(canbuf, "\x00\x01", 2); // On
		else
			can_set_buffer_data(canbuf, "\x00\x00", 2); // Off
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
	
		// Motor
		SFRPAGE = ADC0_PAGE;
		AMX0SL = 0x00;
		SFRPAGE = 0x00;
		SFRPAGE = ADC0_PAGE;
		AD0INT = 0;
		AD0BUSY = 1; // Initate AD conversion on AIN0.0 pin
		while(AD0INT == 0);
		ADval[1] = ADC0L;
		ADval[0] = ADC0H;
		SFRPAGE = 0x00;

		// Send motor data over CAN bus
		can_set_address_std(canbuf,0x05);
		can_set_buffer_data(canbuf, ADval, 2);
		can_send_tx_buf(canbuf);
		
		// Direction control
		SFRPAGE = ADC0_PAGE;
		AMX0SL = 0x01; // switch to AIN0.1 pin for ADC
		SFRPAGE = 0x00;
		SFRPAGE = ADC0_PAGE;
		AD0INT = 0;
		AD0BUSY = 1; // Initiate AD conversino on AIN0.1 pin
		while(AD0INT == 0);
		ADval[0] = ADC0L;
		ADval[1] = ADC0H;
		SFRPAGE = 0x00;

		// Normalize the vlue to a range of 850 - 2150 to protect servo components
		result = ((unsigned int)ADval[0] + (ADval[1]<<8))*13/41+850;
		//printf("%d\n\r", ((unsigned int)ADval[0] + (ADval[1]<<8))*13/41+850);
		//printf("%d   %d\r\n", ADval[0], ADval[1]);
		ADval[1] = result;
		ADval[0] = result>>8;

		// Output steering data to CAN bus
		can_set_address_std(canbuf,0x06);
		can_set_buffer_data(canbuf, ADval, 2);
		can_send_tx_buf(canbuf);
	}

}