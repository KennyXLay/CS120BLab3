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
	DDRB = 0xFF; PORTB = 0x00; //B's are outputs.
	DDRC = 0xFF; PORTC = 0x00; //C's 8 pins are outputs.

	unsigned char tmpA = 0x00;
	unsigned char tmpC = 0x00;
	unsigned char tmpB = 0x00;

    /* Insert your solution below */
    while (1) {
	tmpA = (PINA & 0xF0) >> 4;
	tmpB = (PINA & 0xF0) << 4;
	tmpC = tmpB;
	tmpB = tmpA;
	
	PORTB = tmpB;
	PORTC = tmpC;
	
    }
    return 1;
}
