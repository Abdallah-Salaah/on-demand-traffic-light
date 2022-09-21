/*
 * LED.h
 *
 * Created: 9/9/2022 5:59:03 PM
 *  Author: Abdallah
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO DRIVER/DIO.h"

void LED_init (uint8_t LED_PORT, uint8_t LED_PIN);
void LED_ON (uint8_t LED_PORT, uint8_t LED_PIN);
void LED_OFF (uint8_t LED_PORT, uint8_t LED_PIN);
void LED_toggle (uint8_t LED_PORT, uint8_t LED_PIN);

#endif /* LED_H_ */