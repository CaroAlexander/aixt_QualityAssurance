// Project Name: Aixt https://github.com/fermarsan/aixt.git
// Author: Fernando M. Santa - Julian Camilo Guzmán Zambrano - Juan Pablo Gonzalez Penagos
// Date: 2022-2024
// License: MIT
//
// // Description: UART functions (Blue Pill_STM32F103C)
//              (PC port) 

@[inline]
pub fn setup(baud_rate) {
	C.Serial.begin(baud_rate)
}
@[inline]
pub fn setup(baud_rate) {
	C.Serial.begin(baud_rate)
}

@[inline]
pub fn ready() {
	C.Serial.available()
}
@[inline]
pub fn ready() {
	C.Serial.available()
}

@[inline]
pub fn read() {
	C.Serial.read()
}
@[inline]
pub fn read() {
	C.Serial.read()
}

#define println(message)   Serial.println(message)