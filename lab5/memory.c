//------------------------------------------------------------------------------------
// memory.c
//------------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------------
#include <c8051f120.h>
#include <stdio.h>
#include "putget.h"

//------------------------------------------------------------------------------------
// Global Constants
//------------------------------------------------------------------------------------
#define EXTCLK      22118400    // External oscillator frequency in Hz
#define SYSCLK      22118400    // Output of crystal oscillator
#define BAUDRATE    28800       // UART baud rate in bps

//------------------------------------------------------------------------------------
// Function Prototypes
//------------------------------------------------------------------------------------
void main(void);
void SYSCLK_INIT(void);
void PORT_INIT(void);
void UART0_INIT(void);
unsigned char _sdcc_external_startup(void);

//------------------------------------------------------------------------------------
// _sdcc_external_startup
//------------------------------------------------------------------------------------
//This is special function called by the system BEFORE main() is executed
// Disable watchdog timer before normal initialization - needed for memory
unsigned char _sdcc_external_startup(void)
{
    WDTCN = 0xDE;   // Disable the watchdog timer
    WDTCN = 0xAD;
    return 0;       // init everything else normally
}
//------------------------------------------------------------------------------------
// MAIN Routine
//------------------------------------------------------------------------------------
void main(void)
{
	unsigned int i;
	volatile __xdata unsigned char *ext_ram;
	volatile __xdata unsigned char *ext_ram2;
	unsigned static int __xdata failure[512];
	unsigned int count;
	ext_ram = (__xdata unsigned char *)(0x1FF0);
	ext_ram2 = (__xdata unsigned char *)(0x2800);

    SYSCLK_INIT();          // Initialize the oscillator
    PORT_INIT();            // Initialize the Crossbar and GPIO
    UART0_INIT();           // Initialize UART0

    SFRPAGE = UART0_PAGE;   // Direct output to UART0

    printf("\033[2J");     // Erase ANSI terminal & move cursor to home position
    printf("Memory test\n\n\r");

	count = 0;
	for(i=0; i<2064; i++)
	{
		ext_ram[i] = 0xAA;
	}
	for(i=0; i<2064; i++)
	{
		printf("%2X", ext_ram[i]);
		if(ext_ram[i] != 0xAA)
		{
			failure[count] = i+8176;
			count++;
			if(count == 512)
			{
				for(count=0; count<512; count++)
				{
					if(failure[count] != 0)
						printf("%4X\r\n", failure[count]);
				}
				count = 0;
			}
		}
	}
	
	for(i=0; i<2048; i++)
	{
		ext_ram2[i] = 0xAA;
	}
	for(i=0; i<2048; i++)
	{
		printf("%2X", ext_ram2[i]);
		if(ext_ram2[i] != 0xAA)
		{
			failure[count] = i+10240;
			count++;
			if(count == 512)
			{
				for(count=0; count<512; count++)
				{
					if(failure[count] != 0)
						printf("%4X\r\n", failure[count]);
				}
				count = 0;
			}
		}
	}
	for(i=0; i<2048; i++)
	{
		ext_ram2[i] = 0x55;
	}
	for(i=0; i<2048; i++)
	{
		printf("%2X", ext_ram2[i]);
		if(ext_ram2[i] != 0x55)
		{
			failure[count] = i+10240;
			count++;
			if(count == 512)
			{
				for(count=0; count<512; count++)
				{
					if(failure[count] != 0)
						printf("%4X\r\n", failure[count]);
				}
				count = 0;
			}
		}
	}

	for(count=0; count<512; count++)
	{
		if(failure[count] != 0)
			printf("%4X\r\n", failure[count]);
	}
	printf("Memory Test Completed");
    while(1);
}

//------------------------------------------------------------------------------------
// SYSCLK_Init
//------------------------------------------------------------------------------------
// Initialize the system clock to use a 22.1184MHz crystal as its clock source
void SYSCLK_INIT(void)
{
    int i;
    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page SFRPAGE = CONFIG_PAGE;
    SFRPAGE = CONFIG_PAGE;

    OSCXCN = 0x67;              // Start ext osc with 22.1184MHz crystal
    for(i=0; i < 3000; i++);    // Wait for the oscillator to start up
    while(!(OSCXCN & 0x80));
    CLKSEL = 0x01;              // Switch to the external crystal oscillator
    OSCICN = 0x00	;              // Disable the internal oscillator

    SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
}

//------------------------------------------------------------------------------------
// PORT_Init
//------------------------------------------------------------------------------------
// Configure the Crossbar and GPIO ports
void PORT_INIT(void)
{
    char SFRPAGE_SAVE = SFRPAGE;    // Save Current SFR page
    SFRPAGE = CONFIG_PAGE;

    XBR0 = 0x04;        // Enable UART0
    XBR1 = 0x00;
    XBR2 = 0x40;        // Enable Crossbar and weak pull-up

    P0MDOUT |= 0x01;    // Set TX0 pin to push-pull
    P4MDOUT = 0xFF;     // Output configuration for P4 all pushpull
    P5MDOUT = 0xFF;     // Output configuration for P5 pushpull EM addr
    P6MDOUT = 0xFF;     // Output configuration for P6 pushpull EM addr
    P7MDOUT = 0xFF;     // Output configuration for P7 pushpull EM data

    P5 = 0xFF;
    P6 = 0xFF;
    P7 = 0xFF;

// EMI_Init, split mode with no banking

    SFRPAGE = EMI0_PAGE;
    EMI0CF = 0x3b;              //34
    EMI0TC = 0xFF;

    SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
}

//------------------------------------------------------------------------------------
// UART0_Init
//------------------------------------------------------------------------------------
// Configure the UART0 using Timer1, for <baudrate> and 8-N-1
void UART0_INIT(void)
{
    char SFRPAGE_SAVE;

    SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page
    SFRPAGE = TIMER01_PAGE;

    TCON = 0x40;
    TMOD &= 0x0F;
    TMOD |= 0x20;               // Timer1, Mode 2, 8-bit reload
    CKCON |= 0x10;              // Timer1 uses SYSCLK as time base
// TH1 = 256 - SYSCLK/(BAUDRATE*32)  Set Timer1 reload baudrate value T1 Hi Byte
    TH1 = 0xE8;                 // 0xE8 = 232
    TR1 = 1;                    // Start Timer1

    SFRPAGE = UART0_PAGE;
    SCON0 = 0x50;               // Mode 1, 8-bit UART, enable RX
    SSTA0 = 0x00;               // SMOD0 = 0, in this mode
                                // TH1 = 256 - SYSCLK/(baud rate * 32)

    TI0 = 1;                    // Indicate TX0 ready

    SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
}


