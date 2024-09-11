// This C code was automatically generated by Aixt Project
// Device = CH573F
// Board = device
// Backend = c


#include "CH57x_common.h"
#define true 1
#define time__sleep_ms(TIME)    DelayMs(TIME)
#define a4  A, 4
#define a5  A, 5
#define a8  A, 8
#define a9  A, 9
#define a10 A, 10
#define a11 A, 11
#define a12 A, 12
#define a13 A, 13
#define a14 A, 14
#define a15 A, 15
#define b4  B, 4
#define b7  B, 7
#define b10 B, 10
#define b11 B, 11
#define b12 B, 12
#define b13 B, 13
#define b14 B, 14
#define b15 B, 15
#define b22 B, 22
#define b23 B, 23
#define output    		GPIO_ModeOut_PP_5mA
#define input     		GPIO_ModeIN_Floating
#define pin__in_pullup		GPIO_ModeIN_PU
#define pin__in_pulldown	GPIO_ModeIN_PD
#define pin__high_(port, ...) GPIO##port##_SetBits(GPIO_Pin_##__VA_ARGS__)
#define pin__high(PIN_NAME)  pin__high_(PIN_NAME)
#define pin__low_(port, ...) GPIO##port##_ResetBits(GPIO_Pin_##__VA_ARGS__)
#define pin__low(PIN_NAME)  pin__low_(PIN_NAME)
#define pin__read_(port, ...) GPIO##port##_ReadPortPin(GPIO_Pin_##__VA_ARGS__)
#define pin__read(PIN_NAME)  pin__read_(PIN_NAME)
#define pin__setup_(port, pin, ...) GPIO##port##_ModeCfg(GPIO_Pin_##pin, ##__VA_ARGS__)
#define pin__setup(PIN_NAME, PIN_MODE)  pin__setup_(PIN_NAME, PIN_MODE)
#define pin__toggle_(port, ...) GPIO##port##_InverseBits(GPIO_Pin_##__VA_ARGS__)
#define pin__toggle(PIN_NAME)  pin__toggle_(PIN_NAME)





int main(void) {

pin__setup(a8, output);
while(true) {
pin__toggle(a8);
time__sleep_ms(150);
}
return 0;
}