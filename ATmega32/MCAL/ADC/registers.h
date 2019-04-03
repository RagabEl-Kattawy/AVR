/*
 * registers.h
 *
 *  Created on: Aug 14, 2018
 *      Author: ragab
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_
/*Data Direction Registers*/
#define DDRA *((volatile u8*)0x3A)
#define DDRB *((volatile u8*)0x37)
#define DDRC *((volatile u8*)0x34)
#define DDRD *((volatile u8*)0x31)
/*Data Registers*/
#define PORTA *((volatile u8*)0x3B)
#define PORTB *((volatile u8*)0x38)
#define PORTC *((volatile u8*)0x35)
#define PORTD *((volatile u8*)0x32)
/*Input Status Register*/
#define PINA *((volatile u8*)0x39)
#define PINB *((volatile u8*)0x36)
#define PINC *((volatile u8*)0x33)
#define PIND *((volatile u8*)0x30)

/*status register*/
#define SREG *((volatile u8*)0x5F)
/*MCU Control Register*/
#define MCUCR *((volatile u8*)0x55)
/*MCU Control and Status Register*/
#define MCUCSR *((volatile u8*)0x54)
/*General Interrupt control Register*/
#define GICR *((volatile u8*)0x5B)
/*General Interrupt Flag Register*/
#define GIFR *((volatile u8*)0x5A)

/*ADC*/
/*ADC multiplexer Selection Register*/
#define ADMUX *((volatile u8*)0x27)
/*ADC Control and Status Register A*/
#define ADCSRA *((volatile u8*)0x26)
/*ADC Data Registers*/
#define ADCH *((volatile u8*)0x25)
#define ADCL *((volatile u8*)0x24)
#define ADCHL *((volatile u16*)0x24)
/*Special Function I/O Register*/
#define SFIOR *((volatile u8*)0x50)

/*Timer/Counters*/
/*Timer/Counter Interrupt Mask Register*/
#define TIMSK *((volatile u8*)0x59)
/*Timer/Counter Interrupt Flag Register*/
#define TIFR *((volatile u8*)0x58)

/*Timer/Counter0 Registers*/
/*Timer/Counter0 Control Register*/
#define TCCR0 *((volatile u8*)0x53)
/*Timer/Counter0 Counter Register*/
#define TCNT0 *((volatile u8*)0x52)
/*Timer/Counter0 Output Compare Register*/
#define OCR0 *((volatile u8*)0x5C)

/*Timer/Counter1 Registers*/
/*Timer/Counter1 Control Register A*/
#define TCCR1A *((volatile u8*)0x4F)
/*Timer/Counter1 Control Register B*/
#define TCCR1B *((volatile u8*)0x4E)
/*Timer/Counter1 counter High byte*/
#define TCNT1H *((volatile u8*)0x4D)
/*Timer/Counter1 counter Low byte*/
#define TCNT1L *((volatile u8*)0x4C)
#define TCNT1 *((volatile u16*)0x4C)
/*Timer/Counter1 Output Compare Register A High byte*/
#define OCR1AH *((volatile u8*)0x4B)
/*Timer/Counter1 Output Compare Register A Low byte*/
#define OCR1AL *((volatile u8*)0x4A)
#define OCR1A *((volatile u16*)0x4A)
/*Timer/Counter1 Output Compare Register B High byte*/
#define OCR1BH *((volatile u8*)0x49)
/*Timer/Counter1 Output Compare Register B Low byte*/
#define OCR1BL *((volatile u8*)0x48)
#define OCR1B *((volatile u16*)0x48)
/*Timer/Counter1 Input Capture Register High byte*/
#define ICR1H *((volatile u8*)0x47)
/*Timer/Counter1 Input Capture Register High byte*/
#define ICR1L *((volatile u8*)0x46)
#define ICR1 *((volatile u16*)0x46)

/*Timer/Counter2 Registers*/
/*Timer/Counte2 Control Register*/
#define TCCR2 *((volatile u8*)0x45)
/*Timer/Counter2 Counter Register*/
#define TCNT2 *((volatile u8*)0x44)
/*Timer/Counter2 Output Compare Register*/
#define OCR2 *((volatile u8*)0x43)
/*Timer/Counter2 Asynchronous Status Register*/
#define ASSR *((volatile u8*)0x42)

/*USART*/
/*UART Data Register*/
#define UDR *((volatile u8*)0x2C)
/*UART Control And Status Register A*/
#define UCSRA *((volatile u8*)0x2B)
/*UART Control And Status Register B*/
#define UCSRB *((volatile u8*)0x2A)
/*UART Control And Status Register C*/
#define UCSRC *((volatile u8*)0x40)
/*UART Baud Rate Registers*/
#define UBRRL *((volatile u8*)0x29)
#define UBRRH *((volatile u8*)0x40)

/*SPI*/
/*SPI Control Register*/
#define SPCR *((volatile u8*)0x2D)
/*SPI Status Register*/
#define SPSR *((volatile u8*)0x2E)
/*SPI Data Register*/
#define SPDR *((volatile u8*)0x2F)

/*I2C / TWI*/
/*TWI Bit Rate Register*/
#define TWBR *((volatile u8*)0x20)
/*TWI Control Register*/
#define TWCR *((volatile u8*)0x56)
/*TWI Bit Status Register*/
#define TWSR *((volatile u8*)0x21)
/*TWI Bit Data Register*/
#define TWDR *((volatile u8*)0x23)
/*TWI (slave) Address Register*/
#define TWAR *((volatile u8*)0x22)

#endif /* REGISTERS_H_ */
