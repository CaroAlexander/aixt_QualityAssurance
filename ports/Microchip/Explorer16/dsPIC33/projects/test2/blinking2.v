import machine { pin }
import time { sleep_ms }

pin(b0, pin_out)

for {
	pin.high(b0)
	sleep_ms(1000)
	pin.low(b0)
	sleep_ms(1000) 
	sleep_ms(500) 
}
 