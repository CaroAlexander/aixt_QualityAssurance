// This Arduino code was automatically generated by Aixt Project
// Device = Arduino-Uno
// Board = Arduino Uno
// Backend = arduino

void  pin__high(uint8_t name);
void  pin__low(uint8_t name);
uint8_t  pin__read(uint8_t name);
void  pin__setup(uint8_t name, uint8_t mode);
void  pin__write(uint8_t name, uint8_t val);
void  time__sleep_ms(int16_t tms);

enum main__Pin_names {
	d0 = 0,
	d1,
	d2,
	d3,
	d4,
	d5,
	d6,
	d7,
	d8,
	d9,
	d10,
	d11,
	d12,
	d13,
	d14,
	d15,
	d16,
	d17,
	d18,
	d19,
};
enum main__Pin_modes {
	input = 0,
	output,
	in_pullup,
};
enum main__ADC_pin_names {
	a0 = 14,
	a1,
	a2,
	a3,
	a4,
	a5,
};
enum main__Port__names {
	b = 0,
	c,
	d,
};
enum main__Builtin_names {
	led0 = 13,
};

inline void  pin__high(uint8_t name) {
	digitalWrite(name, HIGH); 
}

inline void  pin__low(uint8_t name) {
	digitalWrite(name, LOW); 
}

inline uint8_t  pin__read(uint8_t name) {
	return digitalRead(name); 
}

inline void  pin__setup(uint8_t name, uint8_t mode) {
	pinMode(name, mode); 
}

inline void  pin__write(uint8_t name, uint8_t val) {
	digitalWrite(name, val); 
}

inline void  time__sleep_ms(int16_t tms) {
	delay(tms); 
}

void setup() {
	pin__setup(a1, pin__input); 
	 
	pin__setup(a2, pin__output); 
	 
	pin__setup(a3, pin__output); 
	 
	pin__setup(a4, pin__output); 
	 
	while(true) {
		if((pin__read(a1) == 1)) {
			pin__low(a2);
			
			pin__high(a3);
			
			pin__low(a4);
			
			time__sleep_ms(100);
		};
		if((pin__read(a1) == 0)) {
			pin__high(a2);
			
			pin__low(a3);
			
			pin__high(a4);
			
			time__sleep_ms(100);
		};
	} 
}


