/*
 * avr_Interrupt_cfg.h
 *
 *  Created on: Sep 5, 2018
 *      Author: ragab
 */

#ifndef DEI_CFG_H_
#define DEI_CFG_H_
#include "registers.h"
#warning "Configure Interrupt Pins according to your configurations"
#warning "INT0 D2, INT1 D3, INT2 B2"
//#define Enable 1
//#define Disable 0
//
//#define INT_0 Enable
//#define INT_1 Disable
//#define INT_2 Disable
///*Interrupt Sense Control Modes*/
//#define INT0_FallingEdge Enable
//#define INT0_LowLevel Disable
//#define INT0_LogiclaChange Disable
//#define INT0_RisingEdge Diable
//
//#define INT1_FallingEdge Enable
//#define INT1_LowLevel Disable
//#define INT1_LogicalChange Disable
//#define INT1_RisingEdge Disable
Interrupt_cfg int_configuration ={
		ENABLE,
		INT0_FALLING_EDGE,
		ENABLE,
		INT1_FALLING_EDGE,
		ENABLE,
		INT2_FALLING_EDGE
};


#endif /* DEI_CFG_H_ */
