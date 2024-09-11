// This Arduino code was automatically generated by Aixt Project
// Device = AIR32F103
// Board = AIR32F103
// Backend = arduino

#define time.sleep_ms(MS)    delay(MS)
#define output		OUTPUT
#define input		INPUT
#define in_pullup	INPUT_PULLUP
#define pin.high(PIN_NAME)   digitalWrite(PIN_NAME, HIGH)
#define pin.low(PIN_NAME)   digitalWrite(PIN_NAME, LOW)
#define pin.read(PIN_NAME)   digitalRead(PIN_NAME)
#define pin.setup(PIN_NAME, MODE)    pinMode(PIN_NAME, MODE)
#define pin.write(PIN_NAME, VALUE)   digitalWrite(PIN_NAME, VALUE)
#define uart.println(MESSAGE)   Serial.println(MESSAGE)
#define uart.println_1(MESSAGE)   Serial1.println(MESSAGE)
#define uart.read   Serial.read
#define uart.ready   Serial.available
#define uart.ready_1   Serial1.available
#define uart.read_1   Serial1.read
#define uart.setup(BAUD_RATE)   Serial.begin(BAUD_RATE)
#define uart.setup_1(BAUD_RATE)   Serial1.begin(BAUD_RATE)
#define uart.write(VALUE)  Serial.write(VALUE)

void main__init();

void time.init();

void pin.init();

void uart.init();

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
	recibe_dato,
	dato,
	envia_dato,
};

void main__init() {
	time.init();
	pin.init();
	uart.init();
	
}

void time.init() {
}

void pin.init() {
}

void uart.init() {
}

void setup() {
	main__init();
	int32_t recibe_dato = 0;
	pin.setup(p5, output);
	pin.setup(p7, output);
	pin.setup(p6, output);
	uart.setup(9600);
}

void loop() {
	if(uart.ready() > 0) {
		recibe_dato == uart.read();
		time.sleep_ms(100);
	}
	if(recibe_dato == '1') {
		pin.high(p5);
		pin.low(p7);
		pin.low(p6);
	}
	else if(recibe_dato == '2') {
		pin.low(p5);
		pin.high(p7);
		pin.low(p6);
	}
	else if(recibe_dato == '3') {
		pin.low(p5);
		pin.low(p7);
		pin.high(p6);
	}
	else {
		pin.low(p5);
		pin.low(p7);
		pin.low(p7);
	}
}
