// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Cristian Garzón
// Date: 2023 - 2024
// Description: UART3 functions (WCH-CH582F)

module uart3

@[inline]
pub fn uart3.any() {
	C.R8_UART3_RFC 
}