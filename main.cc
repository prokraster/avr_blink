#include <avr/io.h>
#include <util/delay.h>


//Toggles LEDs connected on PORT D8 - D13

int main() {
    PORTB = 0x15;   //0001 0101
    DDRB = 0x3F;    //0011 1111
    while(1){
        PORTB ^= 0x3F;  //0011 1111
        _delay_ms(500);
    }
}