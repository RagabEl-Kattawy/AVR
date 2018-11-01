/*
 * DIO.c
 *
 *  Created on: Aug 14, 2018
 *      Author: ragab
 */

#include "DIO.h"
/*Set The Direction*/
extern void DIO_vidSetPinDirection(u8 port,u8 pin,u8 direction)
{
	/*catch the port*/
	switch(port)
	{
	case portb:
		if(direction==input)
		{
			clr_bit(DDRB,pin);
		}
		else if(direction==output)
		{
			set_bit(DDRB,pin);
		}
		break;

	case portc:
		if(direction==input)
		{
			clr_bit(DDRC,pin);
		}
		else if(direction==output)
		{
			set_bit(DDRC,pin);
		}
		break;

	case portd:
		if(direction==input)
		{
			clr_bit(DDRD,pin);
		}
		else if(direction==output)
		{
			set_bit(DDRD,pin);
		}
		break;
	}
}
/*set the output status*/
extern void DIO_vidWritePinValue(u8 port,u8 pin,u8 value)
{
	switch(port)
	{
	case portb:
		if(value==input)
		{
			clr_bit(PORTB,pin);
		}
		else if(value==output)
		{
			set_bit(PORTB,pin);
		}
		break;

	case portc:
		if(value==input)
		{
			clr_bit(PORTC,pin);
		}
		else if(value==output)
		{
			set_bit(PORTC,pin);
		}
		break;

	case portd:
		if(value==input)
		{
			clr_bit(PORTD,pin);
		}
		else if(value==output)
		{
			set_bit(PORTD,pin);
		}
		break;
	}
}

extern u8 DIO_u8ReadPinValue(u8 port,u8 pin)
{
	switch(port)
	{
	case portb:
		return get_bit(PINB,pin);

	case portc:
		return get_bit(PINC,pin);

	case portd:
		return get_bit(PIND,pin);

	default:
		return 3;
	}
}

extern void DIO_vidSetPortDirection(u8 port,u8 direction)
{
	switch(port)
	{
	case portb:
		DDRB=direction;
		break;

	case portc:
		DDRC=direction;
		break;

	case portd:
		DDRD=direction;
		break;
	}
}

extern void DIO_vidWritePortValue(u8 port,u8 value)
{
	switch(port)
	{
	case portb:
		PORTB=value;
		break;

	case portc:
		PORTC=value;
		break;

	case portd:
		PORTD=value;
		break;
	}
}

extern u8 DIO_u8ReadPortValue(u8 port)
{
	switch(port)
	{
	case portb:
		return PINB;

	case portc:
		return PINC;

	case portd:
		return PIND;
	}
	return 5;
}

extern void DIO_vidPullUp(u8 port,u8 pin)
{
	switch(port)
	{
	case portb:
		clr_bit(DDRB,pin);
		set_bit(PORTB,pin);
		break;
	case portc:
		clr_bit(DDRC,pin);
		set_bit(PORTC,pin);
		break;
	case portd:
		clr_bit(DDRD,pin);
		set_bit(PORTD,pin);
		break;
	}
}
