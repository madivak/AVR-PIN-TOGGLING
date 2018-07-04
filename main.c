/*
 * GSM-INT.c
 *
 * Created: 9/27/2017 11:30:05 AM
 * Author : madiv
 */ 
#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int main(void)
{
	DDRB |= (1<<DDB1); //set PORTB1 as output
	
	while (1)
	{
		if (!(PINB & (1<<PINB2))) // If input of PinB2 is not HIGH
		 {
 			PORTB |= (1<<PORTB1); 	//Toggle PORTB1 HIGH				
 		 } 
		else
		 { 
			PORTB &= ~(1<<PORTB1);	//Toggle PORTB1 LOW
		 }
		//This would also suffice PINB = _BV(PB1);   //note this = and not |= wold toggle pin OFF and ON
	}

}

