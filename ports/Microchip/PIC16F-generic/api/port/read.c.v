// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Fernando M. Santa
// Date: 2024
// License: MIT
//
// Description: Pin-port functions (PIC16F84A port)
module port

// read function reads an 8 bit value from a port
@[inline]
pub fn read(name u8) u8 {
	unsafe {
		return u8(*(&C.PORTA + name))
	}	
}