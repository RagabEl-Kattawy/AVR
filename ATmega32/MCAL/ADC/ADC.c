/*
 * ADC.c
 *
 *  Created on: Sep 12, 2018
 *      Author: ragab
 */
#include "ADC.h"
#include "ADC_cfg.h"
/*
 * a function to initialize the AC
 * input  -> void
 * output -> void
 * The function sets the ADC Configuration bits
 * in registers ADMUX and ADCSRA and auto trigger source
 * The data register Adjustment and prescaler
 */

extern void ADC_vidInitialize(void)
{
	ADC_cfg * cfg_ptr = &configuration;

	/*ADMUX CONFIGURATIONS*/
	/*set voltage reference*/
	ADMUX|= cfg_ptr->voltage_reference;		/*ADMUX Bit 7:6 – REFS1:0: Reference Selection Bits */
	/*resolution adjustment*/
	ADMUX|= cfg_ptr->resolution;			/*ADMUX Bit 5 – ADLAR: ADC Left Adjust Result*/

	/* ADCSRA CONFIGURATIONS*/
	/*enable ADC*/
	set_bit(ADCSRA,ADEN);					/*ADCSRA Bit 7 - ADEN ADC Enable*/

	/*auto trigger or single conversion*/
	ADCSRA|= cfg_ptr->operation_mode;		/*ADCSRA Bit 5 – ADATE: ADC Auto Trigger Enable*/

	/*INTERRUPT*/
	if(cfg_ptr->interrupt_state == INT_ON) /*ADCSRA Bit 3 – ADIE: ADC Interrupt Enable*/
	{
		set_bit(SREG,7);					/*enable global interrupt*/
	}

	/*prescaler*/
	ADCSRA|= cfg_ptr->clock_devision;		/*ADCSRA Bits 2:0 – ADPS2:0: ADC Prescaler Select Bits*/

	/*SFIOR CONFIGURATION*/
	SFIOR|= cfg_ptr->trigger_source;		/*SFIOR Bit 7:5 – ADTS2:0: ADC Auto Trigger Source*/

}

/*
 * A function that sets the channel and reads the data registers of the ADC (Raw Data)
 * input  -> u8 CH#
 * output -> u16 (the ADC raw value)
 * the function disables the ADC to change the channel And then
 * enable it again and start a conversion over the new channel
 */

extern u16 ADC_u16RawData(u8 channel)
{
	ADC_cfg *cfg_ptr = &configuration;

	/*disable ADC*/
	clr_bit(ADCSRA,ADEN);

	/*clear bit2:0 in ADMUX*/
	ADMUX &= 0xf8;

	/*set ADC channel pins*/
	ADMUX |= channel;

	/*enable ADC*/
	set_bit(ADCSRA,ADEN);

	/*start conversion*/
	set_bit(ADCSRA,ADSC);

	/*polling*/
	while(get_bit(ADCSRA,ADIF)==0);
	/*clear flag*/
	set_bit(ADCSRA,ADIF);
	if(cfg_ptr->resolution == _8_BIT)
	{
		return ADCH;
	}
	else
	{
		return ADCHL;

	}
}

extern void ADC_vidFreeRunningStart(void)
{
	/*start conversion*/
	set_bit(ADCSRA,ADSC);
}

extern void ADC_vidFreerunningStop(void)
{
	/*disable ADC*/
	clr_bit(ADCSRA,ADEN);
	/*clear ADSC*/
	clr_bit(ADCSRA,ADSC);
}



_ADC_ISR;
ADC_ISR
{

}
