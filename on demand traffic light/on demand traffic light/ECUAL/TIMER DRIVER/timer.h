/*
 * timer.h
 *
 * Created: 9/13/2022 5:52:27 PM
 *  Author: Abdallah
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include <math.h>
#include "../../utilities/register.h"
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
void TIMER_init();//initialize Timer0
void _delay(uint16_t ms); //delay of ms
#endif /* TIMER_H_ */