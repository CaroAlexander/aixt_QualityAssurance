import time {sleep_ms}
import pin

pin.setup (c0, output)
pin.setup (c1, output)
pin.setup (c2, output)

for{

	pin.high (c0)
	sleep_ms(500)

	pin.high (c1)
	sleep_ms(500)

	pin.high (c2)
	sleep_ms(500)

	pin.low(c0)
	pin.low(c1)
	pin.low(c2)
	sleep_ms(500)

}