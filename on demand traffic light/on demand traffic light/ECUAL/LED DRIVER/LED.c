/*
 * LED.c
 *
 * Created: 9/9/2022 5:59:13 PM
 *  Author: Abdallah
 */ 
#include "LED.h"

void LED_init(uint8_t LED_PORT, uint8_t LED_PIN){
	
	DIO_init(LED_PIN,LED_PORT,OUT);
	
}

void LED_ON(uint8_t LED_PORT, uint8_t LED_PIN){
	DIO_Write(LED_PIN,LED_PORT,HIGh);
}
void LED_OFF(uint8_t LED_PORT, uint8_t LED_PIN){
	DIO_Write(LED_PIN,LED_PORT,LOW);
}
void LED_toggle(uint8_t LED_PORT, uint8_t LED_PIN){
	DIO_toggle(LED_PIN,LED_PORT);
}