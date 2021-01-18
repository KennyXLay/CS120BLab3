/*	Author: lab
 *  Partner(s) Name: Kenny
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF; //A's 8 pins are inputs.
	DDRC = 0xFF; PORTC = 0x00; //C's 8 pins are outputs.

	unsigned char tmpA = 0x00;
	unsigned char tmpC = 0x00;

    /* Insert your solution below */
    while (1) {
	tmpA = PINA;
	
	if(tmpA == 0x00){
		tmpC = 0x40;
	}
	else if(tmpA == 1 || tmpA == 2){
		tmpC = 0x60;
	}
	else if(tmpA == 3 || tmpA == 4){
                tmpC = 0x70;
        }
	else if(tmpA == 5 || tmpA == 6){
                tmpC = 0x38;
        }
	else if(tmpA == 7 || tmpA == 8 || tmpA == 9){
                tmpC = 0x3C;
        }
	else if(tmpA == 10 || tmpA == 11 || tmpA == 12){
                tmpC = 0x03E;
        }
	else{
		tmpC = 0x3F;
	}
	PORTC = tmpC;
    }
    return 1;
}
