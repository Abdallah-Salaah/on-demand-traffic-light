/*
 * DIO.c
 *
 * Created: 9/9/2022 5:58:05 PM
 *  Author: Abdallah
 */ 
#include "DIO.h"
//func def

void DIO_init(uint8_t Pin_Number,uint8_t Port_Number,uint8_t Direction){
	switch (Port_Number){
		case PORT_A :
		if (Direction == IN)
		{
			DDRA &= ~(1<<Pin_Number);
		}
		else if (Direction == OUT)
		{
			DDRA |= (1<<Pin_Number);
		}
		else {
			//error handler
		}
		break;
		case PORT_B :
		if (Direction == IN)
		{
			DDRB &= ~(1<<Pin_Number);
		}
		else if (Direction == OUT)
		{
			DDRB |= (1<<Pin_Number);
		}
		else {
			//error handler
		}
		break;
		case PORT_C :
		if (Direction == IN)
		{
			DDRC &= ~(1<<Pin_Number);
		}
		else if (Direction == OUT)
		{
			DDRC |= (1<<Pin_Number);
		}
		else {
			//error handler
		}
		break;
		case PORT_D :
		if (Direction == IN)
		{
			DDRD &= ~(1<<Pin_Number);
		}
		else if (Direction == OUT)
		{
			DDRD |= (1<<Pin_Number);
		}
		else {
			//error handler
		}
		break;
	}
}
void DIO_Write (uint8_t Pin_Number,uint8_t Port_Number,uint8_t Value){
	switch (Port_Number){
		case PORT_A :
		if (Value == LOW)//write 0
		{
			PORTA &= ~(1<<Pin_Number);
		}
		else if (Value == HIGh)
		{
			PORTA |= (1<<Pin_Number);
		}
		else
		{
			//error handler
		}
		break;
		case PORT_C :
		if (Value == LOW)//write 0
		{
			PORTC &= ~(1<<Pin_Number);
		}
		else if (Value == HIGh)
		{
			PORTC |= (1<<Pin_Number);
		}
		else
		{
			//error handler
		}
		break;
		case PORT_B :
		if (Value == LOW)//write 0
		{
			PORTB &= ~(1<<Pin_Number);
		}
		else if (Value == HIGh)
		{
			PORTB |= (1<<Pin_Number);
		}
		else
		{
			//error handler
		}
		break;
		case PORT_D :
		if (Value == LOW)//write 0
		{
			PORTD &= ~(1<<Pin_Number);
		}
		else if (Value == HIGh)
		{
			PORTD |= (1<<Pin_Number);
		}
		else
		{
			//error handler
		}
		break;
	}
}
void DIO_toggle(uint8_t Pin_Number,uint8_t Port_Number){
	switch (Port_Number){
		case PORT_A :
		PORTA ^= (1<<Pin_Number);
		break;
		case PORT_C :
		PORTC ^= (1<<Pin_Number);
		break;
		case PORT_B :
		PORTB ^= (1<<Pin_Number);
		break;
		case PORT_D :
		PORTD ^= (1<<Pin_Number);
		break;
	}
	
}
void DIO_Read(uint8_t Pin_Number,uint8_t Port_Number,uint8_t *Value){
	switch (Port_Number){
		case PORT_A :
		*Value = (PINA & (1<<Pin_Number))>>Pin_Number;
		break;
		case PORT_C :
		*Value = (PINC & (1<<Pin_Number))>>Pin_Number;
		break;
		case PORT_B :
		*Value = (PINB & (1<<Pin_Number))>>Pin_Number;
		break;
		case PORT_D :
		*Value = (PIND & (1<<Pin_Number))>>Pin_Number;
		break;
	}
	
	
}