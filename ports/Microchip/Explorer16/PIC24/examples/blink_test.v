import time {sleep_ms}
import pin

pin.setup(b3, output)
pin.setup(a6, input)

x := 0

for {
	pin.high(b3)
	sleep_ms(500)
	pin.low(b3)
	sleep_ms(500)

	x = pin.read(a6)	// PIC16
	x = pin.read(a6)	// PIC18
}

