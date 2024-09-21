// Project Name : Aixt: http://github.com/fermansan/aixt.git
// Authors:
//  - Arley Junco
//  - Luis Quevedo
//  - Fernando M. Santa
// Date: 2024
// License : MIT

module pwm

@[inline]
pub fn write(PIN, VALUE) {
	C.analogWrite(PIN, VALUE)
}