// Project Nme : Aixt project : http://gitlab.com/fermansan/aixt-project.git

// Author: Farith Ochoa León, Delipe Cardozo and Fernando M. Santa 
// License : MIT

module pwm 

@[inline]
pub fn write(PIN, VALUE) {
	C.analogWrite(PIN, VALUE)
}