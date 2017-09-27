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

// #define CAR_ON	PORTA |= (1<<PORTA1)
// #define CAR_OFF	PORTA &= (1<<PORTA1)
// #define TOGGLE	PORTA ^= (1<<PORTA1)

/*#define CALLING PORTB &= (1<<PORTB2)*/



int main(void)
{
	DDRB |= (1<<DDB1); //set PORTB1 as output
	
// 	PCMSK0 |= (1<<PCINT2);
// 	PCICR |= (1<<PCIE0);
// 	
// 	sei(); //Enable global interrupts
//     /* Replace with your application code */
	while (1)
	{
		   if (!(PINB & (1<<PINB2))) // If input of PinB2 is not HIGH
		    {
 				PORTB |= (1<<PORTB1); 	//Toggle PORTB1 HIGH				
 		    } 
			else
			{ 
				PORTB &= ~(1<<PORTB1);	//Toggle PORTB1 LOW
// 			 PINB |= (1<<PINB1);
// 			 _delay_ms(500);
			}
// 		    else
// 		    {
// 				PINA |= (1<<PINA1);
// 				_delay_ms(200);
//		    }
	}

}

