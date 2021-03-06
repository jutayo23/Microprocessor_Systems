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

	Init_Device();
	while(1)
	{
		// Alternate UART interrupt prioritys to check both interrupts equally
		for (i = 0; i < 100; i++) {} //do nothing
		if(uart1_high)
			EIP2 &= ~0x40; //Set UART1 priority to low
		else
			EIP2 |= 0x40;//Set UART1 priority to high
	}

}

void UART0_ISR (void) __interrupt 4
{
	if (RI0 == 1) // Receive flag triggered interrupt
	{
		RI0 = 0;
		nput = SBUF0; // Read input register
		if(nput == 0x1B)
		{
			printf("GOODBYE");
			SFRPAGE = UART1_PAGE;
			printf("GOODBYE");
			while(1);
		}
		SBUF0 = nput; // Echo character to UART0
		SFRPAGE = UART1_PAGE;
		SBUF1 = nput; // Echo character to UART1
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
		//SBUF1 = nput; // Comment this out to communicate with other groups to prevent the endless feedback
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

    SFRPAGE   = UART1_PAGE;
    SCON1     = 0x10;
}

void Port_IO_Init()
{

    SFRPAGE   = CONFIG_PAGE;
    XBR0      = 0x04;
    XBR2      = 0x44;

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

}

void Interrupts_Init()
{
    IE |= 0x90;
	EIE2 |= 0x40; // Enable UART1 interrupts
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
