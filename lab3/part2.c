/////////////////////////////////////
//  Generated Initialization File  //
/////////////////////////////////////

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
void Interrupts_Init(void);
void Init_Device(void);
void UART0_ISR (void) __interrupt 4;

char nput;


void main(void)
{
	char uart1_high = 0; //Flag to indicate UART1's priority level (0 = low, 1 = high)
	char i;
	WDTCN = 0xDE;						// Disable the watchdog timer
	WDTCN = 0xAD;

	SFRPAGE = LEGACY_PAGE;
	IT0	= 1;					// /INT0 is edge triggered, falling-edge.	

	SFRPAGE = CONFIG_PAGE;
	//ES0		= 1;				// Enable Ext Int 0 only after everything is settled
	//IE |= 0x90;

	Init_Device();
	while(1)
	{
		for (i = 0; i < 100; i++) {} //do nothing
		if(uart1_high)
			EIP2 &= ~0x40; //Set UART1 priority to low
		else
			EIP2 |= 0x40;//Set UART1 priority to high
	}

}

void UART0_ISR (void) __interrupt 4
{
	if (RI0 == 1)
	{
		RI0 = 0;
		nput = SBUF0;
		SBUF0 = nput;
		SFRPAGE = UART1_PAGE;
		SBUF1 = nput;
	}
	if (TI0 == 1)
	{
		TI0 = 0;
	}
}

void UART1_ISR (void) __interrupt 20
{
	if (RI1 == 1)
	{
		RI1 = 0;
		nput = SBUF1;
		SBUF1 = nput;
		TI1 = 0;
		SFRPAGE = UART0_PAGE;
		SBUF0 = nput;
	}
	if (TI1 == 1)
	{
		TI1 = 0;
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
	//TI0 = 1;

    SFRPAGE   = UART1_PAGE;
    SCON1     = 0x10;
	//TI1 = 1;

}

void Port_IO_Init()
{
    // P0.0  -  TX0 (UART0), Open-Drain, Digital
    // P0.1  -  RX0 (UART0), Open-Drain, Digital
    // P0.2  -  Unassigned,  Open-Drain, Digital
    // P0.3  -  Unassigned,  Open-Drain, Digital
    // P0.4  -  Unassigned,  Open-Drain, Digital
    // P0.5  -  Unassigned,  Open-Drain, Digital
    // P0.6  -  Unassigned,  Open-Drain, Digital
    // P0.7  -  Unassigned,  Open-Drain, Digital

    // P1.0  -  Unassigned,  Open-Drain, Digital
    // P1.1  -  Unassigned,  Open-Drain, Digital
    // P1.2  -  Unassigned,  Open-Drain, Digital
    // P1.3  -  Unassigned,  Open-Drain, Digital
    // P1.4  -  Unassigned,  Open-Drain, Digital
    // P1.5  -  Unassigned,  Open-Drain, Digital
    // P1.6  -  Unassigned,  Open-Drain, Digital
    // P1.7  -  Unassigned,  Open-Drain, Digital

    // P2.0  -  Unassigned,  Open-Drain, Digital
    // P2.1  -  Unassigned,  Open-Drain, Digital
    // P2.2  -  Unassigned,  Open-Drain, Digital
    // P2.3  -  Unassigned,  Open-Drain, Digital
    // P2.4  -  Unassigned,  Open-Drain, Digital
    // P2.5  -  Unassigned,  Open-Drain, Digital
    // P2.6  -  Unassigned,  Open-Drain, Digital
    // P2.7  -  Unassigned,  Open-Drain, Digital

    // P3.0  -  Unassigned,  Open-Drain, Digital
    // P3.1  -  Unassigned,  Open-Drain, Digital
    // P3.2  -  Unassigned,  Open-Drain, Digital
    // P3.3  -  Unassigned,  Open-Drain, Digital
    // P3.4  -  Unassigned,  Open-Drain, Digital
    // P3.5  -  Unassigned,  Open-Drain, Digital
    // P3.6  -  Unassigned,  Open-Drain, Digital
    // P3.7  -  Unassigned,  Open-Drain, Digital

    SFRPAGE   = CONFIG_PAGE;
    XBR0      = 0x04;
	//XBR1	  = 0x04; // INT0
    XBR2      = 0x44;
	//P0 = 0x06; // idk remove me

	P0MDOUT |= 0x05;					// Set TX0 pin to push-pull
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

	/*SFRPAGE = CONFIG_PAGE;
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
	CLKSEL = 0x02;*/
}

void Interrupts_Init()
{
	//EA = 1;
    IE |= 0x90;
	EIE2 |= 0x40;
}

// Initialization function for device,
// Call Init_Device() from your main program
void Init_Device(void)
{
    Timer_Init();
    UART_Init();
    Port_IO_Init();
    Oscillator_Init();
    Interrupts_Init();
}
