/*
 * avrInterrupt.h
 *
 *  Created on: Sep 5, 2018
 *      Author: ragab
 */

#ifndef DEI_H_
#define DEI_H_

#include "std_types.h"
#include "utils.h"
#include "registers.h"
#include "DIO.h"

typedef enum{
	DISABLE,
	ENABLE
}MODE;

typedef enum{
	INT0_LOW_LEVEL		=0b00000000,
	INT0_LOGICAL_CHANGE	=0b00000001,
	INT0_FALLING_EDGE	=0b00000010,
	INT0_RISING_EDGE	=0b00000011,

	INT1_LOW_LEVEL		=0b00000000,
	INT1_LOGICAL_CHANGE	=0b00000100,
	INT1_FALLING_EDGE	=0b00001000,
	INT1_RISING_EDGE	=0b00001100,

	INT2_FALLING_EDGE	=0b00000000,
	INT2_RISING_EDGE	=0b01000000

}SENSE_CONTROL;

typedef struct{
	MODE interrupt0_mode;
	SENSE_CONTROL interrupt0_control;
	MODE interrupt1_mode;
	SENSE_CONTROL interrupt1_control;
	MODE interrupt2_mode;
	SENSE_CONTROL interrupt2_control;
}Interrupt_cfg;


/*defining pins*/
#define GlobalInterrupt 7
#define INT0 2
#define INT1 3
#define INT2 2

#define INT0E 6
#define INT1E 7
#define INT2E 5

/*Digital External Interrupt ISR prototypes*/
#define DEI_INT0ISR__ void __vector_1(void) __attribute__((signal,__INTR_ATTRS))
#define DEI_INT1ISR__ void __vector_2(void) __attribute__((signal,__INTR_ATTRS))
#define DEI_INT2ISR__ void __vector_3(void) __attribute__((signal,__INTR_ATTRS))
/*Digital External Interrupt ISR implementation name*/
#define DEI_INT0ISR __vector_1
#define DEI_INT1ISR __vector_2
#define DEI_INT2ISR __vector_3

extern void DEI_vidInitialize(void);

#endif /* DEI_H_ */
