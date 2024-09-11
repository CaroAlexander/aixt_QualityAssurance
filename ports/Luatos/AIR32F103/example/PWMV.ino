// This Arduino code was automatically generated by Aixt Project
// Device = AIR32F103
// Board = AIR32F103
// Backend = arduino

#define adc__read(PIN_NAME)   analogRead(PIN_NAME)
#define output		OUTPUT
#define input		INPUT
#define pin__in_pullup	INPUT_PULLUP
#define pin__high(PIN_NAME)   digitalWrite(PIN_NAME, HIGH)
#define pin__low(PIN_NAME)   digitalWrite(PIN_NAME, LOW)
#define pin__read(PIN_NAME)   digitalRead(PIN_NAME)
#define pin__setup(PIN_NAME, MODE)    pinMode(PIN_NAME, MODE)
#define pin__write(PIN_NAME, VALUE)   digitalWrite(PIN_NAME, VALUE)
#define pwm__map(MODE, VALUE,VALUE1,VALUE2,VALUE3)   map(MODE, VALUE,VALUE1,VALUE2,VALUE3)
#define pwm__write(PIN_NAME, MODE)   pwmWrite(PIN_NAME, MODE)

void main__init();

void adc__init();

void pin__init();

void pwm__init();

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
	adc__init();
	pin__init();
	pwm__init();
	
}

void adc__init() {
}

void pin__init() {
}

void pwm__init() {
}

void setup() {
	main__init();
	pin__setup(p13, input);
	pin__setup(p20, PWM);
	adc__read(p5);
	pwm__map(adc__read(p5), 4095, 0, 4095, 0);
	pwm__write(p13, PWM);
}
