/*
 * DIO.h
 *
 *  Created on: Aug 14, 2018
 *      Author: ragab
 */

#ifndef DIO_H_
#define DIO_H_

#include "std_types.h"
#include "registers.h"
#include "utils.h"

/*port definitions*/

#define portb 1
#define portc 2
#define portd 3

#define portB 1
#define portC 2
#define portD 3


/*I/O definitions*/
#define high 1
#define low 0
#define HIGH 1
#define LOW 0
/*comment*/
#define allhigh 0xff
#define alllow 0x00

#define INPUT 0
#define OUTPUT 1
#define input 0
#define output 1
#define IN 0
#define OUT 1

#define allinput 0x00
#define alloutput 0xff

/*pin definitions*/
#define pin0 0
#define pin1 1
#define pin2 2
#define pin3 3
#define pin4 4
#define pin5 5
#define pin6 6
#define pin7 7

#define A0 0,0
#define A1 0,1
#define A2 0,2
#define A3 0,3
#define A4 0,4
#define A5 0,5
#define A6 0,6
#define A7 0,7

#define B0 1,0
#define B1 1,1
#define B2 1,2
#define B3 1,3
#define B4 1,4
#define B5 1,5
#define B6 1,6
#define B7 1,7

#define C0 2,0
#define C1 2,1
#define C2 2,2
#define C3 2,3
#define C4 2,4
#define C5 2,5
#define C6 2,6
#define C7 2,7

#define D0 3,0
#define D1 3,1
#define D2 3,2
#define D3 3,3
#define D4 3,4
#define D5 3,5
#define D6 3,6
#define D7 3,7

extern void DIO_vidSetPinDirection(u8 port,u8 pin,u8 direction);
extern void DIO_vidWritePinValue(u8 port,u8 pin,u8 value);
extern u8 DIO_u8ReadPinValue(u8 port,u8 pin);

extern void DIO_vidSetPortDirection(u8 port,u8 direction);
extern void DIO_vidWritePortValue(u8 port,u8 value);
extern u8 DIO_u8ReadPortValue(u8 port);

extern void DIO_vidPullUp(u8 port,u8 pin);

#endif /* DIO_H_ */
