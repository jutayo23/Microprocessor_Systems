#include <c8051f040.h>
#include "sysinit.h"
#include "uart0.h"
#include <stdio.h>
#include "can.h"


static char buf[40]; // for sprintf( )

void init_xbar( ) {
	char save = SFRPAGE;

	SFRPAGE = CONFIG_PAGE;
	XBR0 = 0x0C; // enable UART0
	XBR1 = 0x00; // enable nothing
	XBR2 = 0x40; // enable the crossbar
	XBR3 = 0x80; // enable CAN

	P0MDOUT &= ~0x02; // RX pin input
	P0MDOUT |= 0x01; // TX
	P0MDOUT |= 0x34;
	P3MDOUT &= 0xF0;
	P3MDIN |= 0x0F;

	// Disable watchdog timer
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

	// DAC initialization
	SFRPAGE = DAC0_PAGE;
	DAC0CN = 0x80;

	SFRPAGE = DAC1_PAGE;
	DAC1CN = 0x80;

	// PCA initialization to generate PWM
	SFRPAGE = 0x00;
	PCA0MD = 0x88;
	PCA0CPM0 = 0x42;
	PCA0CPL0 = 0x00;
	PCA0CPH0 = 0x00;
	PCA0CN = 0x40;
	SFRPAGE = save;
}

void boot_system( ) {
	char SFRPAGE_SAVE = SFRPAGE; // Save Current SFR page
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
	unsigned int counter = 0;
	unsigned int result1;
	unsigned int result2;
	CAN_BUFFER canbuf;
	boot_system( );

	while (1) {
		canbuf = can_get_tx_buf(); // get the CAN tx buffer reference

		SFRPAGE = CAN0_PAGE;
		//printf("%d\r\n", counter);
		switch(counter)
		{
			case 100: // don't send too many requests over the BUS, so delay by an arbitrary number
				can_set_address_std(canbuf,0x07); // Temperature
				can_send_rtr(canbuf);
				break;
			case 400:
				can_set_address_std(canbuf,0x09); // Motor current
				can_send_rtr(canbuf);
				break;
			case 700:
				can_set_address_std(canbuf,0x0A); // Left turn signal
				can_send_rtr(canbuf);
				break;
			case 900:
				can_set_address_std(canbuf,0x0B); // Right turn signal
				can_send_rtr(canbuf);
				break;
			case 1000:
				counter = 0;
				break;
			default:
				//counter = 0;
		}
		counter++;

		//can_send_rtr(canbuf);
		//can_set_buffer_data(canbuf, 0x00, 1);
		//can_send_tx_buf(canbuf);

		if (canbuf = can_get_rx_msg( )) {
			switch(can_get_address(canbuf))
			{
				case 0x0007: // Temp sensors sends 2 bytes
					result1 = can_get_data_byte(canbuf, 0);
					result2 = can_get_data_byte(canbuf, 1);
					PCA0CPL0 = 0x88; // Getting an output PWM signal was ultimately unsuccessful
					PCA0CPH0 = 0x88; // This was an attempt to get an arbitrary output to the analog meter
					//PCA0CPL0 = (unsigned int)(((float)(result1<<8)+result2)*-51/182 + 255);
					// We were able to display the temperature data on the Procomm Plus terminal
					printf("%d  %d  %d\r\n", result1, result2, (unsigned int)(((float)(result1<<8)+result2)*-51/182 + 255));
					break;
				case 0x0008: // RPM sensors sends 2 bytes
					result1 = can_get_data_byte(canbuf, 0);
					result2 = can_get_data_byte(canbuf, 1);
					printf("%d  %d\r\n", result1, result2);
					SFRPAGE = DAC1_PAGE;
					DAC1L = result2*3.35; // Output to DAC1
					DAC1H = result1*3.35;
					SFRPAGE = 0x00;
					break;
				case 0x0009: // Motor current sensors sends 2 bytes
					result1 = can_get_data_byte(canbuf, 0);
					result2 = can_get_data_byte(canbuf, 1);
					//printf("%d  %d\r\n", result1, result2);
					SFRPAGE = DAC0_PAGE;
					if(result1 == 255) // If the motor was off, the current would indicate 255
					{
						DAC0L = 0x00;
						DAC0H = 0x00;
					}
					else // Otherwise, output the actual sensor data
					{
						DAC0L = result2>>0;
						DAC0H = result1>>0;
					}
					SFRPAGE = 0x00;
					break;
				case 0x000A: // Left turn signal
					if(can_get_data_byte(canbuf, 0) == 0xff) // On
					{
						P0 &= 0xEF;
					}
					else // Off
					{
						P0 |= 0x10;
					}
					break;
				case 0x000B: // Right turn signal
					if(can_get_data_byte(canbuf, 0) == 0xff) // On
					{
						P0 &= 0xDF;
					}
					else // Off
					{
						P0 |= 0x20;
					}
					break;
				default:
					printf("");
			}
			can_free_rx_buf(canbuf); // Free the RX buffer
		}
	}
}