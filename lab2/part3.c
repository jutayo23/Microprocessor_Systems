// IntrptEx.c
//
// 8051 Interrupt Example Program
//
// This program uses an interrupt to call the ISR handler
// function, SW2_ISR(), when the /INT0 line is grounded.
// Each time the signal makes a low transition, an interrupt will be
// generated.  If the line is held down, the SWR_ISR()
// function will only be executed once, and not be called
// again unless the line is released, and grounded again.
// Additionally timer0 will be used to count each .1 seconds
// to be used as a game to test reaction time.
//
// /INT0 is configured to be on P0.2
// UART0 is used to communicate to the user through ProCOMM
//
// This code was written and tested using the SiLabs IDE 
// and SDCC.
//
//-------------------------------------------------------------------------------------------
// Includes
//-------------------------------------------------------------------------------------------
#include <c8051f120.h>				// SFR declarations.
#include <stdio.h>					// Necessary for printf.
#include <putget.h>					// Necessary for printf
//-------------------------------------------------------------------------------------------
// Global CONSTANTS
//-------------------------------------------------------------------------------------------
#define EXTCLK		22118400		// External oscillator frequency in Hz
#define SYSCLK		49766400		// Output of PLL derived from (EXTCLK * 9/4)
#define BAUDRATE	115200			// UART baud rate in bps
//#define BAUDRATE	19200			// UART baud rate in bps

__bit SW2press = 0;
//-------------------------------------------------------------------------------------------
// Function PROTOTYPES
//-------------------------------------------------------------------------------------------
void main(void);
void PORT_INIT(void);
void SYSCLK_INIT(void);
void UART0_INIT(void);

void timer0_ISR (void) __interrupt 1;

unsigned int interrupt_count = 0;
char press = 0;
//-------------------------------------------------------------------------------------------
// MAIN Routine
//-------------------------------------------------------------------------------------------
void main (void)
{
	__bit restart = 0;
	char character;
	unsigned int delay1, delay2 = 0;
	unsigned int randnum = 0;
	unsigned int ones, tenths = 0;

	unsigned char tenths_seconds = 0;
	unsigned int seconds = 0;
	unsigned int delay;
	unsigned int times[5];
	unsigned int time;
	unsigned char started = 0;
	unsigned int avg;
	char i;
	char grace;

	
	SFRPAGE = CONFIG_PAGE;

	PORT_INIT();				// Configure the Crossbar and GPIO.
	SYSCLK_INIT();				// Initialize the oscillator.
	UART0_INIT();				// Initialize UART0.

	SFRPAGE = LEGACY_PAGE;
	IT0	= 1;					// /INT0 is edge triggered, falling-edge.

	SFRPAGE = CONFIG_PAGE;
	EX0		= 1;				// Enable Ext Int 0 only after everything is settled

	SFRPAGE = UART0_PAGE;		// Direct output to UART0
	
	printf("\033[2J");			// Erase screen and move cursor to the home posiiton.
	printf("MPS Timer Game\n\n\r");
	printf("Press button 8 ASAP on GO.\n\n\r");


	SFRPAGE = UART0_PAGE;

	delay = rand() % 50 + 10;

	while (1)
	{
		if (interrupt_count == 404) { // Count each .1 seconds
			tenths_seconds = tenths_seconds + 1;
			interrupt_count = 0;
			if (tenths_seconds % 10 == 0 && tenths_seconds != 0) {
				tenths_seconds = 0;
				seconds = seconds + 1;
				if(seconds < 1 && !started) // Don't count quick double presses before the start of the next trial
					grace = 1;
				else
					grace = 0;
			}
		}
		
		if(seconds >= delay/10 && tenths_seconds >= delay-delay/10*10 && !started) // Flash GO and restart the timer
		{
			seconds = 0;
			tenths_seconds = 0;

			started = 1;
			printf("\033[16;26HGO");
			printf("\033[5;0H");
		}

		if(press > 0 && !grace) // The user has pressed the button
		{
			printf("\033[16;26H  ");
			delay = rand() % 50 + 10; // Gererate a new random delay between 1 and 5 seconds.
			press = 0; // Reset interrupt variable
			if(started == 1)
			{
				time = seconds*10 + tenths_seconds; // Reaction time for this trial
			}
			else
			{
				time = 50; // False button press (GO not flashed on screen). Penalize 5 seconds
			}
			seconds = 0;
			tenths_seconds = 0;
			started = 0;

			// Shift 5 most recent times
			times[0] = times[1];
			times[1] = times[2];
			times[2] = times[3];
			times[3] = times[4];
			times[4] = time;

			avg = (times[0] + times[1] + times[2] + times[3] + times[4])/5; // Calculate running average of 5
			printf("\033[6;0H"); //Move cursor position
			for (i = 0; i <= 4; i++) {
				printf("Trial %d: %d.%d seconds\r\n", (5-i), times[i]/10, times[i]-times[i]/10*10);
			}
			printf("Avg: %d.%d seconds", avg/10, avg-avg/10*10);
		}

			
	}
}
//-------------------------------------------------------------------------------------------
// Interrupt Service Routines
//-------------------------------------------------------------------------------------------
// NOTE: this is an example of what NOT to do in an interrupt handler. No I/O should be done
// in ISRs since I/O is very slow and the handler must execute very quickly.
//
// This routine stops Timer0 when the user presses SW2.
//
void timer0_ISR (void) __interrupt 1		// Interrupt 0 corresponds to vector address 0003h.
// the keyword "interrupt" defines this as an ISR and the number is determined by the 
// Priority Order number in Table 11.4 in the 8051 reference manual.
{
	TL0 = 64512;
	TH0 = 64512 >> 8; // Restart counter to only count for 1024 clock ticks
	interrupt_count = interrupt_count + 1;
}


void SW2_ISR (void) __interrupt 0		// Interrupt 0 corresponds to vector address 0003h.
// the keyword "interrupt" defines this as an ISR and the number is determined by the 
// Priority Order number in Table 11.4 in the 8051 reference manual.
{
	press = 1;
}

//-------------------------------------------------------------------------------------------
// PORT_Init
//-------------------------------------------------------------------------------------------
//
// Configure the Crossbar and GPIO ports
//
void PORT_INIT(void)
{	
	char SFRPAGE_SAVE = SFRPAGE;    // Save Current SFR page.
	SFRPAGE = CONFIG_PAGE;

	WDTCN	= 0xDE;			// Disable watchdog timer.
	WDTCN	= 0xAD;
	EA		= 1;			// Enable interrupts as selected.

	XBR0	= 0x04;			// Enable UART0.
	XBR1	= 0x04;			// /INT0 routed to port pin.
	XBR2	= 0x40;			// Enable Crossbar and weak pull-ups.

	P0MDOUT = 0x01;			// P0.0 (TX0) is configured as Push-Pull for output.
			// P0.1 (RX0) is configure as Open-Drain input.
			// P0.2 (SW2 through jumper wire) is configured as Open_Drain for input.
	P0		= 0x06;			// Additionally, set P0.0=0, P0.1=1, and P0.2=1.

//	EX0		= 1;			// Enable External Interrupt 0 when everything is settled.

	SFRPAGE = SFRPAGE_SAVE;	// Restore SFR page.
}

//-------------------------------------------------------------------------------------------
// SYSCLK_Init
//-------------------------------------------------------------------------------------------
//
// Initialize the system clock
//
void SYSCLK_INIT(void)
{
	int i;

	char SFRPAGE_SAVE = SFRPAGE;	// Save Current SFR page.
	SFRPAGE = CONFIG_PAGE;
	
	OSCXCN = 0x67;			// Start external oscillator
	for(i=0; i < 256; i++);	// Wait for the oscillator to start up.
	while(!(OSCXCN & 0x80));// Check to see if the Crystal Oscillator Valid Flag is set.
	CLKSEL = 0x01;			// SYSCLK derived from the External Oscillator circuit.
	OSCICN = 0x00;			// Disable the internal oscillator.

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
	CLKSEL = 0x02;			// SYSCLK derived from the PLL.

	SFRPAGE = SFRPAGE_SAVE;	// Restore SFR page
}

//-------------------------------------------------------------------------------------------
// UART0_Init
//-------------------------------------------------------------------------------------------
//
// Configure the UART0 using Timer1, for <baudrate> and 8-N-1.
//
void UART0_INIT(void)
{
	char SFRPAGE_SAVE = SFRPAGE;    // Save Current SFR page.

	SFRPAGE = UART0_PAGE;
	SCON0	 = 0x50;		// Set Mode 1: 8-Bit UART
	SSTA0	 = 0x10;		// UART0 baud rate divide-by-two disabled (SMOD0 = 1).
	
	SFRPAGE = TIMER01_PAGE;
	TMOD	&= ~0xF0;
	TMOD	|=  0x20;		// Timer1, Mode 2: 8-bit counter/timer with auto-reload.
	TH1		 = -(SYSCLK/BAUDRATE/16);	// Set Timer1 reload value for baudrate
	CKCON	|= 0x10;		// Timer1 uses SYSCLK as time base.
	TL1		 = TH1;
	TR1		 = 1;			// Start Timer1.

	TMOD &= 0xF0;			// Setup timer0 for 16 bit mode
	TMOD |= 0x08;
	TMOD |= 0x01;

	ET0 = 1;
	TR0 = 1;

	SFRPAGE = UART0_PAGE;
	TI0 = 1;				// Indicate TX0 ready.
	
	SFRPAGE = SFRPAGE_SAVE;	// Restore SFR page.
}



