//------------------------------------------------------------------------------------
// Hello.c
//------------------------------------------------------------------------------------
//8051 Test program to demonstrate serial port I/O.  This program writes a message on
//the console using the printf() function, and reads characters using the getchar()
//function.  An ANSI escape sequence is used to clear the screen if a '2' is typed. 
//A '1' repeats the message and the program responds to other input characters with
//an appropriate message.
//------------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------------
#include <c8051f120.h>
#include <stdio.h>
#include "putget.h"

//------------------------------------------------------------------------------------
// Global Constants
//------------------------------------------------------------------------------------
#define EXTCLK		22118400			// External oscillator frequency in Hz
#define SYSCLK		49766400			// Output of PLL derived from (EXTCLK * 9/4)
#define BAUDRATE	115200				// UART baud rate in bps

//------------------------------------------------------------------------------------
// Function Prototypes
//------------------------------------------------------------------------------------
void main(void);
void SYSCLK_INIT(void);
void PORT_INIT(void);
void UART0_INIT(void);

//------------------------------------------------------------------------------------
// MAIN Routine
//------------------------------------------------------------------------------------
void main(void)
{
	char choice;
	char i;
	char count;
	
	WDTCN = 0xDE;						// Disable the watchdog timer
	WDTCN = 0xAD;
	
	PORT_INIT();						// Initialize the Crossbar and GPIO
	SYSCLK_INIT();						// Initialize the oscillator
	UART0_INIT();						// Initialize UART0

	SFRPAGE = UART0_PAGE;				// Direct output to UART0
	
	while(1)
	{
		P2 = P1;
		count = 0;
		for(i=0; i<6; i++)
		{
			count = ((P1 & (1<<i)) > 0) ? count+1:count;
		}

		P3 = count;
		/*
		choice=getchar();
		if(choice == 0x1b)
			return;
		if(choice > 126 || choice < 32) {
			printf("\033[u");
			printf("\033[5mThe keyboard character $%02x is \033[4m'not printable'\033[0m", choice);
			printf("\033[33m"); //Yellow text
			printf("\033[44m\n\r"); //Blue background
			printf("\033[s");
			putchar(0x07);
		}
		else {
			printf("\033[6;0H"); //Cursor to line 6
			printf("The keyboard character is \033[37m%c\033[33m\r", choice);
		}
		*/
	}

}

//------------------------------------------------------------------------------------
// SYSCLK_Init
//------------------------------------------------------------------------------------
//
// Initialize the system clock to use a 22.1184MHz crystal as its clock source
//
void SYSCLK_INIT(void)
{
	int i;

	char SFRPAGE_SAVE = SFRPAGE;        // Save Current SFR page
	SFRPAGE = CONFIG_PAGE;
	
	OSCXCN = 0x67;						// Start ext osc with 22.1184MHz crystal
	for(i=0; i < 256; i++);				// Wait for the oscillator to start up
	while(!(OSCXCN & 0x80));
	CLKSEL = 0x01;
	OSCICN = 0x00;

	SFRPAGE = CONFIG_PAGE;
	PLL0CN = 0x04;
	SFRPAGE = LEGACY_PAGE;
	FLSCL = 0x10;
	SFRPAGE = CONFIG_PAGE;
	PLL0CN |= 0x01;
	PLL0DIV = 0x04;
	PLL0FLT = 0x01;
	PLL0MUL = 0x09;
	for(i=0; i < 256; i++);
	PLL0CN |= 0x02;
	while(!(PLL0CN & 0x10));
	CLKSEL = 0x02;

	SFRPAGE = SFRPAGE_SAVE;             // Restore SFR page
}

//------------------------------------------------------------------------------------
// PORT_Init
//------------------------------------------------------------------------------------
//
// Configure the Crossbar and GPIO ports
//
void PORT_INIT(void)
{	
	char SFRPAGE_SAVE = SFRPAGE;        // Save Current SFR page
	SFRPAGE = CONFIG_PAGE;
	
	XBR0	 = 0x04;					// Enable UART0
	XBR1	 = 0x00;
	XBR2	 = 0x40;					// Enable Crossbar and weak pull-up

	P0MDOUT |= 0x01;					// Set TX0 pin to push-pull
	
	P1MDOUT = 0x00; // Port 1 open drain
	P1MDIN = 0xFF; // Port 1 digital input
	P2MDOUT = 0xFF;
	P3MDOUT = 0xFF;

	SFRPAGE = SFRPAGE_SAVE;             // Restore SFR page
}

//------------------------------------------------------------------------------------
// UART0_Init
//------------------------------------------------------------------------------------
//
// Configure the UART0 using Timer1, for <baudrate> and 8-N-1
//
void UART0_INIT(void)
{
	char SFRPAGE_SAVE = SFRPAGE;        // Save Current SFR page

	SFRPAGE = UART0_PAGE;
	SCON0	 = 0x50;					// Mode 1, 8-bit UART, enable RX
	SSTA0	 = 0x10;					// SMOD0 = 1
	
	SFRPAGE = TIMER01_PAGE;
	TMOD	&= ~0xF0;
	TMOD	|=  0x20;					// Timer1, Mode 2, 8-bit reload
	TH1		 = -(SYSCLK/BAUDRATE/16);	// Set Timer1 reload baudrate value T1 Hi Byte
	CKCON	|= 0x10;					// Timer1 uses SYSCLK as time base
	TL1		 = TH1;
	TR1		 = 1;						// Start Timer1

	SFRPAGE = UART0_PAGE;
	TI0 = 1;							// Indicate TX0 ready
	
	SFRPAGE = SFRPAGE_SAVE;             // Restore SFR page
}


