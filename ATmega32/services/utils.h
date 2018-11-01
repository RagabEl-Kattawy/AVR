/*
 * utils.h
 *
 *  Created on: Aug 14, 2018
 *      Author: ragab
 */

#ifndef UTILS_H_
#define UTILS_H_

#define set_bit(reg,bitno) reg|=(1<<bitno)
#define clr_bit(reg,bitno) reg&=(~(1<<bitno))
#define toggle_bit(reg,bitno) reg^=(1<<bitno)

#define set_lowNibble(reg) reg|=0x0f
#define clr_lowNibble(reg) reg&=0xf0
#define toggle_lowNibble(reg) reg^=0x0f

#define set_highNibble(reg) reg|=0xf0
#define clr_highNibble(reg) reg&=0x0f
#define toggle_highNibble(reg) reg^=0xf0

#define get_bit(reg,bitno) (reg&(1<<bitno))>>bitno
#define get_lowNibble(reg) reg&0x0f
#define get_highNibble(reg) (reg&0xf0)>>4

#define set_reg(reg,value) reg=value
#define clr_reg(reg) reg=0x00

#endif /* UTILS_H_ */
