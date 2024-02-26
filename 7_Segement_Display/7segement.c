/*
 * File:   7segement.c
 * Author: Admin
 *
 * Created on 17 February, 2024, 9:30 AM
 */


#include <xc.h>
# define _XTAL_FREQ 2000000


int main() {
     TRISC = 0;
     //LCD_Setup();
     char seg_code[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90}; // Here we used Hexa Decimal numbers to display 0 to 9
    while(1){
        for(int i=0;i<=9;i++){
            PORTC = seg_code[i];
            __delay_ms(5000);
        }
    }
    return 0;
}
