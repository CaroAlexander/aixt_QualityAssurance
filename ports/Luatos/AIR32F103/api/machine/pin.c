// Project Name: Aixt https://github.com/fermarsan/aixt.git
// Author: Fernando M. Santa - Julian Camilo Guzmán Zambrano - Juan Pablo Gonzalez Penagos
// Date: 2022-2024
// License: MIT
//
// // Description: PIN functions (Blue Pill_AIR32F103C)
//              (PC port) 

#define pin.setup(PIN_NAME, MODE)    pinMode(PIN_NAME, MODE)

#define pin.high(PIN_NAME)   digitalWrite(PIN_NAME, HIGH)

#define pin.low(PIN_NAME)   digitalWrite(PIN_NAME, LOW)

#define output OUTPUT

#define input INPUT_PULLUP

#define pin.read(PIN_NAME)   digitalRead(PIN_NAME)