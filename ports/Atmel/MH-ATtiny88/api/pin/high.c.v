// Project Nme : Aixt project : http://gitlab.com/fermansan/aixt-project.git

// Author: Fernando M. Santa - Arley Junco - Luis Quevedo 
// Date: 2024
// License : MIT


module pin 

@[inline]
pub fn pin.high(PIN_NAME) {
	C.digitalWrite(PIN_NAME, HIGH)
}


