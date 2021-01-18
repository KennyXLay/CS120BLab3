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
	DDRB = 0x00; PORTB = 0xFF; //B's 8 pins are inputs.
	DDRC = 0xFF; PORTC = 0x00; //C's 8 pins are outputs.

	unsigned char count;
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;

    /* Insert your solution below */
    while (1) {
	count = 0x00;
	tmpA = PINA;
	tmpB = PINB;
	
	for(char i = 0; i < 8; i++){
		if(tmpA % 2 == 1){
			count++;
		}
		tmpA = tmpA >> 1;
		if(tmpB % 2 == 1){
                        count++;
                }
		tmpB = tmpB >> 1;
	}	
	PORTC = count;
    }
    return 1;
}
