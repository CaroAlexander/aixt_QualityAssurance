// This C code was automatically generated by Aixt Project
// Device = PIC16F676
// Board = Nothing
// Backend = c

#include <xc.h>
#include <stdio.h>
#define _XTAL_FREQ 4000000
#define true   1
#define false  0
#pragma config FOSC = INTRCIO
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config MCLRE = OFF
#pragma config BOREN = OFF
#pragma config CP = OFF
#pragma config CPD = OFF
#define TRISa		TRISA	// port setup name equivalents
#define TRISc		TRISC
#define PORTa		PORTA	// port in name equivalents
#define PORTc		PORTC
#define a0_s    TRISAbits.TRISA0    // pin configuration pits
#define a1_s    TRISAbits.TRISA1
#define a2_s    TRISAbits.TRISA2
#define a3_s    TRISAbits.TRISA3
#define a4_s    TRISAbits.TRISA4
#define a5_s    TRISAbits.TRISA5
#define c0_s    TRISCbits.TRISC0    // pin configuration pits
#define c1_s    TRISCbits.TRISC1
#define c2_s    TRISCbits.TRISC2
#define c3_s    TRISCbits.TRISC3
#define c4_s    TRISCbits.TRISC4
#define c5_s    TRISCbits.TRISC5
#define a0      PORTAbits.RA0       // pin input and output pits
#define a1      PORTAbits.RA1
#define a2      PORTAbits.RA2
#define a3      PORTAbits.RA3
#define a4      PORTAbits.RA4
#define a5      PORTAbits.RA5
#define c0      PORTCbits.RC0
#define c1      PORTCbits.RC1
#define c2      PORTCbits.RC2
#define c3      PORTCbits.RC3
#define c4      PORTCbits.RC4
#define c5      PORTCbits.RC5
#define time.sleep_ms(TIME)    __delay_ms(TIME)  // implementing by a macro for saving memory
#define output  0   // pin direction
#define input   1
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

void main__init();

void time.init();

void pin.init();

void main__init() {
	time.init();
	pin.init();
	
}

void time.init() {
}

void pin.init() {
}

void main(void) {
	main__init();
	pin.setup(c0, output);
	pin.setup(c1, output);
	pin.setup(c2, output);
	while(true) {
		pin.high(c0);
		time.sleep_ms(500);
		pin.high(c1);
		time.sleep_ms(500);
		pin.high(c2);
		time.sleep_ms(500);
		pin.low(c0);
		pin.low(c1);
		pin.low(c2);
		time.sleep_ms(500);
	}
}
