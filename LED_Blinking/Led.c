#include <xc.h>
#define _XTAL_FREQ 20000000

void main(void) {
    TRISC0=0;
    while(1){
        RC0 = 1;
        __delay_ms(1000);
        RC0 = 0;
        __delay_ms(1000);       
    }
    return;
}
