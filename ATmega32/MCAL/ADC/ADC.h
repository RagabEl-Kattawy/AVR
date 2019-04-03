/*
 * ADC.h
 *
 *  Created on: Sep 12, 2018
 *      Author: ragab
 */

#ifndef ADC_H_
#define ADC_H_

#include "std_types.h"
#include "registers.h"
#include "utils.h"

/*ADMUX Bit 7:6 – REFS1:0: Reference Selection Bits */
typedef enum{
	AREF = 			0b00000000,
	AVCC = 			0b01000000,
	INTERNAL_VREF = 0b11000000
}ADC_reference;

/*ADMUX Bit 5 – ADLAR: ADC Left Adjust Result*/
typedef enum{
	_10_BIT=0b00000000,
	_8_BIT =0b00100000
}ADC_resolution;

/*ADMUX Bits 4:0 – MUX4:0: ADC Channel Bits*/
#define CH0 0
#define CH1 1
#define CH2 2
#define CH3 3
#define CH4 4
#define CH5 5
#define CH6 6
#define CH7 7

/*ADCSRA Bit 5 – ADATE: ADC Auto Trigger Enable*/
typedef enum{
	SINGLE_CONVERSION	=0b00000000,
	AUTO_TRIGGER		=0B00100000
}ADC_mode;

/*ADCSRA Bit 3 – ADIE: ADC Interrupt Enable*/
typedef enum{
	INT_OFF	=0b00000000,
	INT_ON	=0b00001000
}ADC_interrupt;

/*ADCSRA Bits 2:0 – ADPS2:0: ADC Prescaler Select Bits*/
typedef enum{
	PRE2	= 0b00000000,
	PRE4	= 0b00000010,
	PRE8	= 0b00000011,
	PRE16	= 0b00000100,
	PRE32	= 0b00000101,
	PRE64	= 0b00000110,
	PRE128	= 0b00000111
}ADC_prescaler;

/*SFIOR Bit 7:5 – ADTS2:0: ADC Auto Trigger Source*/
typedef enum{
	NON 				=0b00000000,
	FREE_RUNNING		=0b00000000,
	ANALOG_COMPARATOR	=0b00100000,
	EXT_INTERRUPT0		=0b01000000,
	TC0_MATCH			=0b01100000,
	TC0_OVF				=0b10000000,
	TC1_MATCH_B			=0b10100000,
	TC1_OVF				=0b11000000,
	TC1_CAP_EVENT		=0b11100000
}ADC_trigger;

/*
 * CONFIGURATION STRUCT
 */
typedef struct{
  	ADC_reference voltage_reference;
  	ADC_resolution resolution;
	ADC_mode operation_mode;
	ADC_interrupt interrupt_state;
	ADC_prescaler clock_devision;
	ADC_trigger trigger_source;
}ADC_cfg;


/*ADCSRA bits*/
#define ADEN 7
#define ADSC 6
#define ADATE 5
#define ADIF 4



void ADC_vidInitialize(void);

#define _ADC_ISR void __vector_16(void) __attribute__((signal,__INTR_ATTRS))
#define ADC_ISR void __vector_16(void)

extern u16 ADC_u16RawData(u8 channel);
extern void ADC_vidFreeRunningStart(void);
extern void ADC_vidFreerunningStop(void);
#endif /* ADC_H_ */
