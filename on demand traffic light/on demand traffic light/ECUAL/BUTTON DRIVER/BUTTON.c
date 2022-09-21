/*
 * BUTTON.c
 *
 * Created: 9/9/2022 5:59:41 PM
 *  Author: Abdallah
 */ 
#include "BUTTON.h"

void Button_init(uint8_t buttonPort, uint8_t buttonPin){
	DIO_init(buttonPin,buttonPort,IN);
}

void Button_read(uint8_t buttonPort, uint8_t buttonPin,uint8_t *Value){
	DIO_Read(buttonPin,buttonPort, Value);
}