#include <c8051f120.h>
#include <stdio.h>
#include "putget.h"

#include "compiler_defs.h"
#include "C8051F120_defs.h"


#define EXTCLK		22118400			// External oscillator frequency in Hz
#define SYSCLK		22118400//49766400			// Output of PLL derived from (EXTCLK * 9/4)
#define BAUDRATE	115200				// UART baud rate in bps


void main(void);
void Timer_Init(void);
void UART_Init(void);
void SPI_Init(void);
void Port_IO_Init(void);
void Oscillator_Init(void);
void Init_Device(void);

char nput;

void main(void)
{
	int i, row1 = 2, col1 = 1, row2 = 13, col2 = 1;
	WDTCN = 0xDE;						// Disable the watchdog timer
	WDTCN = 0xAD;

	Init_Device();
	SFRPAGE = UART0_PAGE;
	printf("Input characters:\033[s");
	printf("\033[12;1HReceived characters:");
	while(1)
	{
		SFRPAGE = UART0_PAGE;
		if(RI0 == 1) // New character received
		{
			RI0 = 0;
			nput = SBUF0;
			if(nput == 0x1B)
			{
				printf("GOODBYE");
				while(1);
			}
			else {
				printf("\033[%d;%dH%c", row1, col1, nput); // Set row and column
				if(col1 == 80) {
					col1 = 1;
					row1++;
				}
				else {
					col1++;
				}
			}					
			
			SFRPAGE = 0x00;

			NSSMD0 = 0;
			while(SPI0CFG & 0x80 > 0); // Wait for SPI
			SPIF = 0;
			SPI0DAT = nput; // Send character to SPI
			while(TXBMT == 0); // Wait for TX buffer to be set
						
			for(i=0; i<100; i++); // Allow slave time to react
			NSSMD0 = 1; // Set slave select HIGH
			SPI0DAT = 0xFF; // Set dummy character

			while(SPI0CFG & 0x80 > 0); // Wait for slave to respond
			nput = SPI0DAT; // Read response
			printf("\033[%d;%dH%c", row2, col2, nput); // Print response
			if(col2 == 80) {
				col2 = 1;
				row2++;
			}
			else {
				col2++;
			}
		}
	
	}

}

// Peripheral specific initialization functions,
// Called from the Init_Device() function
void Timer_Init()
{
    SFRPAGE   = TIMER01_PAGE;
    TCON      = 0x40; // TR1 = 1
    TMOD      = 0x20; // TIM1 8-bit auto-reload
    CKCON     = 0x10; // TIM1 system clock
	TH1 = 0xA0;
    //TH1		  = 0xF4;//TH1       = 0xFA;
	//TL1		 = TH1;

	//Timer 2
	SFRPAGE = TMR2_PAGE;
	TMR2CN = 0x00;
	TR2 = 1;
	TMR2CF = 0x08; // sysclk
	RCAP2H = 0xFF;
	RCAP2L = 0xF4;
}

void UART_Init()
{
    SFRPAGE   = UART0_PAGE;
    SCON0     = 0x50;
	SSTA0	  = 0x15;
	TI0 = 1;

    SFRPAGE   = UART1_PAGE;
    SCON1     = 0x10;
	//TI1 = 1;
}

void SPI_Init()
{
	SFRPAGE = SPI0_PAGE;
	SPI0CFG |= 0x40;
	SPI0CKR = 0x6E;

	SPI0CN |= 0x04;

	SPIEN = 1;
}

void Port_IO_Init()
{
    SFRPAGE   = CONFIG_PAGE;
    XBR0      = 0x06;
    XBR2      = 0x44;

	P0MDOUT |= 0x05;					// Set TX0 pin to push-pull
	P0MDOUT |= 0x30;
}

void Oscillator_Init()
{
    int i = 0;
    SFRPAGE   = CONFIG_PAGE;
    OSCXCN    = 0x67;
    for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
    while ((OSCXCN & 0x80) == 0);
    CLKSEL    = 0x01;
    OSCICN    &= ~0x80;

}

// Initialization function for device,
// Call Init_Device() from your main program
void Init_Device(void)
{
    Timer_Init();
    UART_Init();
	SPI_Init();
    Port_IO_Init();
    Oscillator_Init();
}
