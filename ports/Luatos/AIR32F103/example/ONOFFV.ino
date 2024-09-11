// This Arduino code was automatically generated by Aixt Project
// Device = AIR32F103
// Board = AIR32F103
// Backend = arduino

#define time__sleep_ms(MS)    delay(MS)
#define output		OUTPUT
#define input		INPUT
#define pin__in_pullup	INPUT_PULLUP
#define pin__high(PIN_NAME)   digitalWrite(PIN_NAME, HIGH)
#define pin__low(PIN_NAME)   digitalWrite(PIN_NAME, LOW)
#define pin__read(PIN_NAME)   digitalRead(PIN_NAME)
#define pin__setup(PIN_NAME, MODE)    pinMode(PIN_NAME, MODE)
#define pin__write(PIN_NAME, VALUE)   digitalWrite(PIN_NAME, VALUE)

void main__init();

void time__init();

void pin__init();

enum main____pin_names {
	rx = PA9,
	tx = PA10,
	p1 = PA0,
	p2 = PA1,
	p3 = PA2,
	p4 = PA3,
	p5 = PA4,
	p6 = PA5,
	p7 = PA6,
	p8 = PA7,
	p9 = PA8,
	p10 = PA13,
	p11 = PA14,
	p12 = PA15,
	p13 = PB0,
	p14 = PB1,
	p15 = PB2,
	p16 = PB3,
	p17 = PB4,
	p18 = PB5,
	p19 = PB6,
	p20 = PB7,
	p21 = PB8,
	p22 = PB9,
	p23 = PB10,
	p24 = PB11,
	p25 = PB12,
	p26 = PB13,
	p27 = PB14,
	p28 = PB15,
};

void main__init() {
	time__init();
	pin__init();
	
}

void time__init() {
}

void pin__init() {
}

void setup() {
	main__init();
	pin__setup(p15, output);
	pin__setup(p23, output);
	pin__setup(p24, output);
}

void loop() {
	pin__high(p15);
	time__sleep_ms(1000);
	pin__low(p15);
	time__sleep_ms(1000);
	pin__high(p23);
	time__sleep_ms(1000);
	pin__low(p23);
	time__sleep_ms(1000);
	pin__high(p24);
	time__sleep_ms(1000);
	pin__low(p24);
	time__sleep_ms(1000);
}
