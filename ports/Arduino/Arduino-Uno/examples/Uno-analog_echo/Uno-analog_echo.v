// Project Name: Blinking
// Author: Fernando M. Santa
// Date: 09/09/2024
// Arduino-Uno board

import time
import pin
import adc
import pwm

pin.setup(d5, output)

for {
	value := adc.read(a5)
	pwm.write(d5, u8(value/4))
	time.sleep_ms(100)
}

