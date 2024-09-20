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
@[inline]
pub fn read(PORT_NAME) {
C.PORT ##  PORT_NAME
}
@[inline]
pub fn setup(PORT_NAME, VALUE) {
	C.TRIS ##  PORT_NAME = VALUE
}
@[inline]
pub fn write(PORT_NAME, VALUE) {
	C.PORT ##  PORT_NAME = VALUE
}
#define time.sleep_ms(TIME)    __delay_ms(TIME)  // implementing by a macro for saving memory

void main__init();

void port.init();

void time.init();

void main__init() {
	port.init();
	time.init();
	
}

void port.init() {
}

void time.init() {
}

void main(void) {
	main__init();
	port.setup(c, 0b00000);
	while(true) {
		port.write(c, 0b010101);
		time.sleep_ms(500);
		port.write(c, 0b101010);
		time.sleep_ms(500);
	}
}
