/*
 * ADC_cfg.h
 *
 *  Created on: Sep 12, 2018
 *      Author: ragab
 */

#ifndef ADC_CFG_H_
#define ADC_CFG_H_

/*
  	ADC_reference voltage_reference;
  	ADC_resolution resolution;
	ADC_mode operation_mode;
	ADC_interrupt interrupt_state;
	ADC_prescaler clock_devision;
	ADC_trigger trigger_source;


 */
ADC_cfg configuration ={
		AVCC,
		_10_BIT,
		SINGLE_CONVERSION,
		INT_ON,
		PRE16,
		NON
};

#endif /* ADC_CFG_H_ */
