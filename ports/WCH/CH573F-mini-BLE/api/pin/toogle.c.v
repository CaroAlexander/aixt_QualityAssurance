// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Cristian Garzón
// Date: 2023 - 2024
// Description: PIN functions (WCH-CH573F)

module pin

@[inline]
pub fn pwm.toggle_(port, ...) {
	C.GPIO##port##_InverseBits(GPIO_Pin_##__VA_ARGS__)
}

@[inline]
pub fn pin.toggle(PIN_NAME) {
	C.pin.toggle_(PIN_NAME)
}
