// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Cesar Alejandro Roa Acosta and Fernando M. Santa
// Date: 2024
// License: MIT
//
// Description: Pin management functions
//              (PIC16F676 port)
module pin 

@[inline]
pub fn pwm.write(PIN_NAME,VAL) {
	C.PIN_NAME = VAL
}
