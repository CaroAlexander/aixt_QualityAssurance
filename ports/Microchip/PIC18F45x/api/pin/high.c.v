// Project Name: Aixt, https://github.com/fermarsan/aixt.git

// Author: Jan Carlo Peñuela Jurado and Fernando M. Santa
// Date: 2024
// License: MIT
//
// Description: High (PIC18F452)
module pin
#define pin__high(PIN_NAME)  PIN_NAME = 1          // LATBbits.LB0 = 1