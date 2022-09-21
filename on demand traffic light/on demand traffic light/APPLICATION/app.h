/*
 * app.h
 *
 * Created: 9/13/2022 8:59:02 PM
 *  Author: Abdallah
 */ 


#ifndef APP_H_
#define APP_H_
#include "../utilities/interrupts.h"
#include "../ECUAL/BUTTON DRIVER/BUTTON.h"
#include "../MCAL/DIO DRIVER/DIO.h"
#include "../ECUAL/LED DRIVER/LED.h"
#include "../utilities/register.h"
#include "../ECUAL/TIMER DRIVER/timer.h"
#define F_CPU 1000000UL

void APP_init(void);
void APP_start(void);


#endif /* APP_H_ */