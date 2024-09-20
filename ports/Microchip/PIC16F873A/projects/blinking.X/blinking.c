// This C code was automatically generated by Aixt Project
// Device = PIC16F873A
// Board = Nothing
// Backend = c

#include <xc.h>
#include <stdio.h>
#define _XTAL_FREQ 8000000
#define true   1
#define false  0
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)
#define TRISa		TRISA	// port setup name equivalents
#define TRISb		TRISB
#define TRISc		TRISC
#define PORTa		PORTA	// port in name equivalents
#define PORTb		PORTB
#define PORTc		PORTC
#define a0_s    TRISAbits.TRISA0    // pin configuration pits
#define a1_s    TRISAbits.TRISA1
#define a2_s    TRISAbits.TRISA2
#define a3_s    TRISAbits.TRISA3
#define a4_s    TRISAbits.TRISA4
#define a5_s    TRISAbits.TRISA5
#define b0_s    TRISBbits.TRISB0
#define b1_s    TRISBbits.TRISB1
#define b2_s    TRISBbits.TRISB2
#define b3_s    TRISBbits.TRISB3
#define b4_s    TRISBbits.TRISB4
#define b5_s    TRISBbits.TRISB5
#define b6_s    TRISBbits.TRISB6
#define b7_s    TRISBbits.TRISB7
#define c0_s    TRISCbits.TRISC0
#define c1_s    TRISCbits.TRISC1
#define c2_s    TRISCbits.TRISC2
#define c3_s    TRISCbits.TRISC3
#define c4_s    TRISCbits.TRISC4
#define c5_s    TRISCbits.TRISC5
#define c6_s    TRISCbits.TRISC6
#define c7_s    TRISCbits.TRISC7
#define a0    PORTAbits.RA0       // pin input and output pits
#define a1    PORTAbits.RA1
#define a2    PORTAbits.RA2
#define a3    PORTAbits.RA3
#define a4    PORTAbits.RA4
#define a5    PORTAbits.RA5
#define b0    PORTBbits.RB0
#define b1    PORTBbits.RB1
#define b2    PORTBbits.RB2
#define b3    PORTBbits.RB3
#define b4    PORTBbits.RB4
#define b5    PORTBbits.RB5
#define b6    PORTBbits.RB6
#define b7    PORTBbits.RB7
#define c0    PORTCbits.RC0
#define c1    PORTCbits.RC1
#define c2    PORTCbits.RC2
#define c3    PORTCbits.RC3
#define c4    PORTCbits.RC4
#define c5    PORTCbits.RC5
#define c6    PORTCbits.RC6
#define c7    PORTCbits.RC7
#define output 0   // pin direction
#define input  1
@[inline]
pub fn digital() {
	C.ADCON1bits.PCFG = 0b00000110
}
@[inline]
pub fn high(PIN_NAME) {
	C.PIN_NAME = 1
}
@[inline]
pub fn low(PIN_NAME) {
	C.PIN_NAME = 0
}
@[inline]
pub fn read(PIN_NAME) {
	C.PIN_NAME
}
@[inline]
pub fn setup(PIN_NAME, PIN_MODE) {
	C.PIN_NAME ##  _s = PIN_MODE
}
@[inline]
pub fn write(PIN_NAME,VAL) {
	C.PIN_NAME = VAL
}
#define time.sleep_ms(TIME)    __delay_ms(TIME)  // implementing by a macro for saving memory

void main__init();

void pin.init();

void time.init();

void main__init() {
	pin.init();
	time.init();
	
}

void pin.init() {
}

void time.init() {
}

void main(void) {
	main__init();
	pin.setup(b4, output);
	pin.setup(b5, output);
	pin.setup(b6, output);
	while(true) {
		pin.high(b4);
		time.sleep_ms(500);
		pin.high(b5);
		time.sleep_ms(500);
		pin.high(b6);
		time.sleep_ms(500);
		pin.low(b4);
		pin.low(b5);
		pin.low(b6);
		time.sleep_ms(500);
	}
}
