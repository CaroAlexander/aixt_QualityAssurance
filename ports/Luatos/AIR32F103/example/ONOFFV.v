import time {sleep_ms}
import pin

pin.setup(p15, output)

pin.setup(p23, output)

pin.setup(p24, output)

 for{
    pin.high(p15)
	time.sleep_ms(1000)
	pin.low(p15)
	time.sleep_ms(1000)

	pin.high(p23)
	time.sleep_ms(1000)
	pin.low(p23)
	time.sleep_ms(1000)

	pin.high(p24)
	time.sleep_ms(1000)
	pin.low(p24)
	time.sleep_ms(1000)
}  
