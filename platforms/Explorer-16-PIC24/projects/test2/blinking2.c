//Generated C file for:
//Device = PIC24FJ128GA010
//Board = Explorer 16

#include "settings.h"

#include "./machine/machine__pin.h"

#include "./time/time__sleep_ms.h"


int main(void) {//AD1PCFG = 0xFFFF; // set all I/O digital


pin(b0, pin_out);
while(true){
pin_high(b0);
sleep_ms(1000);
pin_low(b0);
sleep_ms(1000);
sleep_ms(500);
}
return 0;
}