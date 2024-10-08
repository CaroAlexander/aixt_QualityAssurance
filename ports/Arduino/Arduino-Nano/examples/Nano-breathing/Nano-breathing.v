// Project Name: Blinking
// Author: Fernando M. Santa
// Date: 08/09/20
// Arduino-Nano board

import time
import pin
import pwm

pin.setup(d3, output)

for {
	for level in 0 .. 256 {
		pwm.write(d3, level)
		time.sleep_ms(5) 
	}
	for level in 0 .. 256 {
		pwm.write(d3, 255-level)
		time.sleep_ms(5) 
	}
    time.sleep_ms(100)   
}

