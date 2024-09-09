// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Fernando Martínez Santa
// Date: 2024
// License: MIT
module adc

//read function reads the value from the specified analog pin
@[inline]
pub fn read(name int) int {
	return C.analogRead(name)
}