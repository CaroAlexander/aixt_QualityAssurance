// Project Name: 4-bit echo
// Author: Fernando M. Santa
// Date: 08/09/2024
// Arduino-Nano board
// 4-bit echo, from PORTB LSBs to PORTC LSBs

import time
import port

port.setup(b, 0b11111111)	// all inputs
port.setup(c, 0b11110000)	// 4 LSBs outputs

for {
	port.write(c, port.read(b))
	time.sleep_ms(100)
}


