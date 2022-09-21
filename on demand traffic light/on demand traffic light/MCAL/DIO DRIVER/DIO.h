/*
 * DIO.h
 *
 * Created: 9/9/2022 5:58:15 PM
 *  Author: Abdallah
 */ 

#ifndef DIO_H_
#define DIO_H_

//include register.h

#include "../../utilities/register.h"

//macros

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

//directions

#define IN 0
#define OUT 1

//value

#define LOW 0
#define HIGh 1

//functions

void DIO_init (uint8_t Pin_Number,uint8_t Port_Number,uint8_t Direction);

void DIO_Write (uint8_t Pin_Number,uint8_t Port_Number,uint8_t Value);

void DIO_toggle (uint8_t Pin_Number,uint8_t Port_Number);

void DIO_Read (uint8_t Pin_Number,uint8_t Port_Number,uint8_t *Value);

#endif /* DIO_H_ */