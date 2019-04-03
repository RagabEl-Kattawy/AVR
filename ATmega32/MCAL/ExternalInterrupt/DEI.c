/*
 * AVRInterrupt.c
 *
 *  Created on: Sep 5, 2018
 *      Author: ragab
 */

#include "DEI.h"
#include "DIO.h"
#include "DEI_cfg.h"
/*enable Global Interrupt*/

extern void DEI_vidInitialize(void)
{
	Interrupt_cfg *cfg_ptr = &int_configuration; 			/*pointer to configuration struct*/

	set_bit(SREG,GlobalInterrupt);							/*enable global interrupt*/

	if(cfg_ptr->interrupt0_mode == ENABLE)					/*Interrupt 0 is enabled*/
	{
		set_bit(GICR,INT0E);									/*Enable INT0 in GICR*/

		MCUCR|= cfg_ptr->interrupt0_control;					/*set interrupt sense control mode*/
	}

	/***********************************************************************/

	if(cfg_ptr->interrupt1_mode == ENABLE)					/*Interrupt 1 is enabled*/
	{
		set_bit(GICR,INT1E);								/*Enable INT0 in GICR*/

		MCUCR|= cfg_ptr->interrupt1_control;				/*set interrupt sense control mode*/
	}

		/***********************************************************************/

	if(cfg_ptr->interrupt2_mode == ENABLE)					/*Interrupt 2 is enabled*/
	{
		set_bit(GICR,INT2E);									/*Enable INT0 in GICR*/

		MCUCSR|= cfg_ptr->interrupt2_control;					/*set interrupt sense control mode*/
	}

}

/*INT0 ISR*/
DEI_INT0ISR__;
void DEI_INT0ISR (void)
{
toggle_bit(PORTB,pin0);
}

/*INT1 ISR*/
DEI_INT1ISR__;
void DEI_INT1ISR (void)
{
	toggle_bit(PORTB,pin1);
}

DEI_INT2ISR__;
void DEI_INT2ISR (void)
{
	toggle_bit(PORTB,pin3);
}

