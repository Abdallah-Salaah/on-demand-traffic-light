/*
 * app.c
 *
 * Created: 9/13/2022 8:58:52 PM
 *  Author: Abdallah
 */ 
#include "app.h"
int PORT_PIN =0;
void APP_init(void){
		//LED init
		LED_init(PORT_A,0);
		LED_init(PORT_A,1);
		LED_init(PORT_A,2);
		LED_init(PORT_B,0);
		LED_init(PORT_B,1);
		LED_init(PORT_B,2);
		//button init
		Button_init(PORT_D,2);
		//timer init
		TIMER_init();
		//global interrupt and rising edge
		sei();
		RISING_EDGE();
		INT0();
}
void APP_start(void){
	Button_read(PORT_D,2,&ButtonState);
	LED_ON(PORT_A,0);
	PORT_PIN = 1;
	_delay(5000);
	LED_OFF(PORT_A,0);
	LED_toggle(PORT_A,1);
	PORT_PIN = 1;
	_delay(1000);
	LED_toggle(PORT_A,1);
	_delay(1000);
	LED_toggle(PORT_A,1);
	_delay(1000);
	LED_toggle(PORT_A,1);
	_delay(1000);
	LED_toggle(PORT_A,1);
	_delay(1000);
	LED_OFF(PORT_A,1);
	LED_ON(PORT_A,2);
	PORT_PIN = 2;
	_delay(5000);
	LED_OFF(PORT_A,2);
	LED_toggle(PORT_A,1);
	PORT_PIN = 1;
	_delay(1000);
	LED_toggle(PORT_A,1);
	_delay(1000);
	LED_toggle(PORT_A,1);
	_delay(1000);
	LED_toggle(PORT_A,1);
	_delay(1000);
	LED_toggle(PORT_A,1);
	_delay(1000);
	LED_OFF(PORT_A,1);
}
ISR(EXT_INT_0){
	Button_read(PORT_D,2,&ButtonState);
	if (ButtonState == HIGh)
	{
		_delay(5000);
		Button_read(PORT_D,2,&ButtonState);
		if (ButtonState != HIGh){
			switch(PORT_PIN){
				case 1 :
				LED_OFF(PORT_A,0);
				LED_ON(PORT_B,2);
				_delay(5000);
				LED_OFF(PORT_B,2);
				LED_toggle(PORT_A,1);
				LED_toggle(PORT_B,1);
				_delay(1000);
				LED_toggle(PORT_A,1);
				LED_toggle(PORT_B,1);
				_delay(1000);
				LED_toggle(PORT_A,1);
				LED_toggle(PORT_B,1);
				_delay(1000);
				LED_toggle(PORT_A,1);
				LED_toggle(PORT_B,1);
				_delay(1000);
				LED_OFF(PORT_A,1);
				LED_OFF(PORT_B,1);
				LED_ON(PORT_B,0);
				LED_ON(PORT_A,2);
				_delay(5000);
				LED_OFF(PORT_A,2);
				LED_OFF(PORT_B,0);
				break;
				case  2 :
				LED_ON(PORT_A,2);
				LED_ON(PORT_B,0);
				_delay(5000);
				LED_OFF(PORT_A,2);
				LED_OFF(PORT_B,0);
				break;
			}
			LED_OFF(PORT_A,2);
			LED_toggle(PORT_A,1);
			LED_toggle(PORT_B,1);
			_delay(1000);
			LED_toggle(PORT_A,1);
			LED_toggle(PORT_B,1);
			_delay(1000);
			LED_toggle(PORT_A,1);
			LED_toggle(PORT_B,1);
			_delay(1000);
			LED_toggle(PORT_A,1);
			LED_toggle(PORT_B,1);
			_delay(1000);
			LED_OFF(PORT_A,1);
			LED_OFF(PORT_B,1);
			LED_ON(PORT_B,0);
			LED_ON(PORT_A,2);
			_delay(5000);
			LED_OFF(PORT_A,2);
			LED_OFF(PORT_B,0);
			LED_ON(PORT_A,0);
			LED_ON(PORT_B,2);
			_delay(5000);
			LED_OFF(PORT_A,0);
			LED_OFF(PORT_B,2);
		}
	}
}