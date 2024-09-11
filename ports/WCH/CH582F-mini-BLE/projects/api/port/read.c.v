// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Cristian Garzón
// Date: 2023 - 2024
// Description: PORT functions (WCH-CH582F)

module port

@[inline]
pub fn port.read(PORT) {
C.GPIO##PORT##_ReadPort()
}


