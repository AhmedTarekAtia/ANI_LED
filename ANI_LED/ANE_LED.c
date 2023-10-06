/*
 * ANE_LED.c
 *
 *  Created on: Sep 11, 2021
 *      Author: Eng Ahmed Tarek
 */


#include <avr/io.h>
#include <avr/delay.h>

void main(void)
{
int x ,i;
	DDRA=0b11111111;

while (1)
{
	for(x=0;x<8;x++)
	{


		PORTA=0b00000001<<x;
		_delay_ms(500);
	}
	for(x=1;x<8;x++)
		{


			PORTA=0b00000001<<x;
			_delay_ms(500);
		}
}












}


