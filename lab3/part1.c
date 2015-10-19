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
void Port_IO_Init(void);
void Oscillator_Init(void);
void Init_Device(void);

char nput;

void main(void)
{
	WDTCN = 0xDE;						// Disable the watchdog timer
	WDTCN = 0xAD;

	Init_Device();
	while(1)
	{
		SFRPAGE = UART0_PAGE;
		if(RI0 == 1) // Check for UART 0 data
		{
			RI0 = 0; // Reset flag for next receive
			nput = SBUF0; // Read data register
			if(nput == 0x1B) // Escape character is read
			{
				printf("GOODBYE");
				SFRPAGE = UART1_PAGE;
				printf("GOODBYE");
				while(1);
			}
			SBUF0 = SBUF0; // Echo character to UART0
			SFRPAGE = UART1_PAGE;
			SBUF1 = nput; // Echo character to UART1
		}
		SFRPAGE = UART1_PAGE;
		if(RI1 == 1) // Check for UART 1 data
		{
			RI1 = 0;
			nput = SBUF1;
			SBUF1 = SBUF1; // Echo character to UART1
			SFRPAGE = UART0_PAGE;
			SBUF0 = nput; // Echo character to UART0
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
	//TI0 = 1;

    SFRPAGE   = UART1_PAGE;
    SCON1     = 0x10;
	//TI1 = 1;

}

void Port_IO_Init()
{
    SFRPAGE   = CONFIG_PAGE;
    XBR0      = 0x04;
    XBR2      = 0x44;

	P0MDOUT |= 0x05;	// Set TX0 pin to push-pull
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
    Port_IO_Init();
    Oscillator_Init();
}
