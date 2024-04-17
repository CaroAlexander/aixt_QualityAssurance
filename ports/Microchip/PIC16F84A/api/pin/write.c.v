// Project Name: Aixt project, https://gitlab.com/fermarsan/aixt-project.git
// File Name: pin write.c
// Author: Luis Alfredo Pinto Medina and Fernando Martínez Santa
// Date: 2024
// License: MIT
//
// Description: Pin management functions (PIC16F886 port)

module pin

#define pin__write_(PORT_NAME, PIN, VALUE)   PORT ## PORT_NAME ## bits.R ## PORT_NAME ## PIN = VALUE

#define pin__write(PIN_NAME, VALUE)  pin__write_(PIN_NAME, VALUE)