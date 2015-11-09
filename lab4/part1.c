//------------------------------------------------------------------------------------
// lab4_part1.c
//------------------------------------------------------------------------------------
// Part 1 acts like a digital voltmeter, taking in an analong input on AIN0.0 and 
// displays the voltage on a terminal when a push button is pressed. 
//------------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------------
#include <c8051f120.h>
#include <stdio.h>
#include "putget.h"

//------------------------------------------------------------------------------------
// Global Constants
//------------------------------------------------------------------------------------
#define EXTCLK 22118400	// External oscillator frequency in Hz
#define SYSCLK 22118400
#define BAUDRATE 115200	// UART baud rate in bps

//------------------------------------------------------------------------------------
// Function Prototypes
//------------------------------------------------------------------------------------
void main(void);
void SYSCLK_INIT(void);
void PORT_INIT(void);
void UART0_INIT(void);
void ADC_INIT(void);
void INTERRUPT_INIT(void);

// Global Variables
char start_conversion = 0; // Flag to indicate when to start the ADC

//------------------------------------------------------------------------------------
// MAIN Routine
//------------------------------------------------------------------------------------
void main(void)
{	
	unsigned short int analogval;
	unsigned char *analoghi, *analoglow;
	float VREF = 2.4; // Reference voltage
	float result; // Voltage measurement result
	short int result_high = 0;
	short int result_low = 4095;
	char samples = 0; // Use the last 16 samples to take an average
	short int accum[16] = {0}; // Array to hold the samples
	char i;
	unsigned long int sum = 0;
	unsigned int avg;
	float result_dec1; // Need 2 variables to hold the decimal value to prevent overflow
	float result_dec2;
	analoglow = (char *) &analogval;
	analoghi = analoglow + 1;
	
	

	WDTCN = 0xDE; // Disable the watchdog timer
	WDTCN = 0xAD;
	
	PORT_INIT(); // Initialize the Crossbar and GPIO
	SYSCLK_INIT(); // Initialize the oscillator
	UART0_INIT(); // Initialize UART0
	ADC_INIT(); // Initialize ADC0
	INTERRUPT_INIT();

	
	while(1)
	{
		if (start_conversion)
		{
			SFRPAGE = ADC0_PAGE;
			AD0INT = 0; // Clear the "conversion done" flag
			AD0BUSY = 1; // Start A/D Conversion
			while (AD0INT == 0); // Wait for the conversion to finish
			*analoglow = ADC0L; // Read the low byte
			*analoghi = ADC0H; // Read the high byte

			SFRPAGE = UART0_PAGE;
			result = analogval*2.4/(float)4095;

			// Maintain high and low hex values
			if (analogval > result_high) result_high = analogval;
			if (analogval < result_low) result_low = analogval;
			
			// Maintain the array of voltage readings
			if (samples < 16) {
				accum[samples] = analogval;
				samples++;
			}
			else {
				for (i = 0; i < samples-1; i++) {
					accum[i] = accum[i+1];
				}
				accum[samples-1] = analogval;
			}
			
			// Compute the average
			sum = 0;
			for (i = 0; i < samples; i++) {
				sum = sum + accum[i];
			}
			avg = (int)(sum/samples);
			
			result_dec1 = (1000*result-1000*(int)result);
			result_dec2 = (1000*(result_dec1-(int)result_dec1));//-100*(int)(result_dec1-(int)result_dec1);
			// Erase screen and move cursor to home position
			printf("\033[2JVoltage reading: %d.%03d%03d\n\r", (int)result, (int)result_dec1, (int)result_dec2);
			printf("Hex value: 0x%03X\n\r", analogval);
			printf("High value hex: 0x%03X\n\r", result_high);
			printf("Low value hex: 0x%03X\n\r", result_low);
			printf("Average value hex: 0x%03X\n\r", avg);

			start_conversion = 0;

		}
	}
}

//External Interrupt (Push Button) ISR
void int0_interrupt(void) __interrupt 0
{
	start_conversion = 1;
}

//------------------------------------------------------------------------------------
// SYSCLK_Init
//------------------------------------------------------------------------------------
// Initialize the system clock to use a 22.1184MHz crystal as its clock source
void SYSCLK_INIT(void)
{
	int i = 0;
	char SFRPAGE_SAVE = SFRPAGE;
    SFRPAGE = CONFIG_PAGE;

    OSCXCN = 0x67;
    for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
    while ((OSCXCN & 0x80) == 0);
    CLKSEL = 0x01;
    OSCICN &= ~0x80;

    SFRPAGE = SFRPAGE_SAVE;
}

//------------------------------------------------------------------------------------
// PORT_Init
//------------------------------------------------------------------------------------
// Configure the Crossbar and GPIO ports
void PORT_INIT(void)
{	
	SFRPAGE = CONFIG_PAGE;

	WDTCN	= 0xDE;	// Disable watchdog timer.
	WDTCN	= 0xAD;

    XBR0 = 0x04;
    XBR1 = 0x04; // Enable external interrupt
    XBR2 = 0x40; //Enable crossbar

	P0MDOUT = 0x01;// Set TX0 pin to push-pull, RX and Push Button to open drain
	P0 = 0x06; // Inputs RX and Push Button set to high impedence

	SFRPAGE = LEGACY_PAGE;
	IT0 = 0; // /INT0 is edge triggered, falling-edge.
}

//------------------------------------------------------------------------------------
// UART0_Init
//------------------------------------------------------------------------------------
// Configure the UART0 using Timer1, for <baudrate> and 8-N-1
void UART0_INIT(void)
{
	SFRPAGE = UART0_PAGE;
	SCON0	 = 0x50;	// Mode 1, 8-bit UART, enable RX
	SSTA0	 = 0x10;	// SMOD0 = 1
	
	SFRPAGE = TIMER01_PAGE;
	TMOD	&= ~0xF0;
	TMOD	|=  0x20;	// Timer1, Mode 2, 8-bit reload
	TH1		 = -SYSCLK/(BAUDRATE*16); // Set Timer1 reload baudrate value T1 Hi Byte
	CKCON	|= 0x10;// Timer1 uses SYSCLK as time base
	TL1		 = TH1;
	TR1		 = 1;	// Start Timer1

	SFRPAGE = UART0_PAGE;
	TI0 = 1;	// Indicate TX0 ready
}

void ADC_INIT(void)
{
	char SFRPAGE_SAVE = SFRPAGE;
	SFRPAGE = ADC0_PAGE;

	AMX0CF = 0x00; // All input ports set to single-ended mode
	AMX0SL = 0x00; // Select port AIN0.0 for inpit
	ADC0CF = 0x20; // ADC clock rate < 2.5MHz, internal gain of 1
	ADC0CN = 0X00;
	REF0CN = 0X03; // Voltage reference from VREF0 pin; enable bias generator and reference buffer
	AD0EN = 1; //Enable ADC
}

void INTERRUPT_INIT(void) {
	EA = 1;
	EX0 = 1;
}

