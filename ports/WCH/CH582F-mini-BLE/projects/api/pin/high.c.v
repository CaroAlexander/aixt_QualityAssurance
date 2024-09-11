// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Cristian Garzón
// Date: 2023 - 2024
// Description: PIN functions (WCH-CH582F)

module pin

#define pin.high_(port, ...) GPIO##port##_SetBits(GPIO_Pin_##__VA_ARGS__)

#define pin.high(PIN_NAME)  pin.high_(PIN_NAME)
