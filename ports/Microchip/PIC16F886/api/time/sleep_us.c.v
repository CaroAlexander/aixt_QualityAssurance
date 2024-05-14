// Project Name: Aixt project, https://github.com/fermarsan/aixt.git
// Author: Luis Alfredo Pinto Medina and Fernando Martínez Santa
// Date: 2024
// License: MIT
//
// Description: microseconds delay function (PIC16F886 port)
module time

#define time__sleep_us(TIME)    __delay_us(TIME)  // implementing by a macro for saving memory