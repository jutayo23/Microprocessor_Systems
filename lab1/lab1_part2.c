//------------------------------------------------------------------------------------
// lab1_part2.c
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
	
	WDTCN = 0xDE;						// Disable the watchdog timer
	WDTCN = 0xAD;
	
	PORT_INIT();						// Initialize the Crossbar and GPIO
	SYSCLK_INIT();						// Initialize the oscillator
	UART0_INIT();						// Initialize UART0

	SFRPAGE = UART0_PAGE;				// Direct output to UART0

	printf("\033[2J");					// Erase screen & move cursor to home position
	printf("\033[33m");					// Use Yellow Text
	printf("\033[44m");					// Use a Blue background for the terminal
	printf("\033[13;0H");				// Set the cursor position to the lower half of the terminal
	printf("\033[s");					// Save the cursor position to return to later
	printf("\033[13;25r");				// Apply scrolling to lower half of terminal

	printf("\033[2;23H");				// Center help text
	printf("Type <ESC> to end the program\n");

	
	while(1)
	{
		choice=getchar();				// Read input character to process
		if(choice == 0x1b)				// Escape character
			return;
		if(choice > 126 || choice < 32) { // Characters in this range are not printable
			printf("\033[u");			// Restore the cursor position
			printf("\033[5mThe keyboard character $%02x is \033[4m'not printable'\033[0m", choice); // User message with blink and underline
			printf("\033[33m");			// Yellow text
			printf("\033[44m\n\r");		// Blue background
			printf("\033[s");			// Save the cursor position
			putchar(0x07);				// Beep
		}
		else {
			printf("\033[6;0H"); // Set cursor to line 6
			printf("The keyboard character is \033[37m%c\033[33m\r", choice); // Printable character is output overwriting previous value
		}
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


