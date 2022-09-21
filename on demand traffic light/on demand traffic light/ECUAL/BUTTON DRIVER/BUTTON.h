/*
 * BUTTON.h
 *
 * Created: 9/9/2022 5:59:56 PM
 *  Author: Abdallah
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO DRIVER/DIO.h"

uint8_t ButtonState ;

void Button_init(uint8_t buttonPort, uint8_t buttonPin);

void Button_read(uint8_t buttonPort, uint8_t buttonPin,uint8_t *Value);

#endif /* BUTTON_H_ */