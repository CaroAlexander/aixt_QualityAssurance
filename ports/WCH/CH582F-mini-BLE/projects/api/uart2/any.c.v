// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Cristian Garzón
// Date: 2023 - 2024
// Description: UART2 functions (WCH-CH582F)

module uart2

@[inline]
pub fn uart2.any() {
	C.R8_UART2_RFC 
}