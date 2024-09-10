// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Fernando M. Santa
// Date: 2024
// License: MIT
//
// Description: Builtin definitions (Arduino Nano - ATmega328P port)
module main

enum Pin_names { // enumerated type for digital pin names
	d0 = 0 
	d1 
	d2 
	d3 
	d4 
	d5 
	d6 
	d7 
	d8 
	d9 
	d10 
	d11 
	d12 
	d13 
	d14 
	d15 
	d16 
	d17 
	d18 
	d19 
}

enum Pin_modes {
	pin__input = 0
	pin__output
	pin__in_pullup
}

enum ADC_pin_names {
	a0 = 14
	a1
	a2
	a3
	a4
	a5
}

enum Port__names {
	b = 0
	c
	d
}

enum Builtin_names {
	led0 = 13
}
