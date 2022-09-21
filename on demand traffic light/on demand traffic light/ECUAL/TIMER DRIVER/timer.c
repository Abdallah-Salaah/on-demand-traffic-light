/*
 * timer.c
 *
 * Created: 9/13/2022 5:52:38 PM
 *  Author: Abdallah
 */ 
#include "timer.h"

void TIMER_init(){
	TCCR0 = 0x00; 
}
void _delay(uint16_t ms){
	uint16_t numper_of_OverFlow,TimerInitial;
	double MaxDelay,tick;
	uint32_t Over_Flow_count=0;
	tick = 256.0/1000.0; 
	MaxDelay= 65.536; 
	if(ms<MaxDelay)
	{
		TimerInitial = (MaxDelay-ms)/tick;
		numper_of_OverFlow = 1;
		
		}
		else if(ms == (int)MaxDelay)
		{
		TimerInitial=0;
		numper_of_OverFlow=1;
		}
		else
		{
		numper_of_OverFlow = ceil((double)ms/MaxDelay);
		TimerInitial = (1<<8) - ((double)ms/tick)/numper_of_OverFlow;
	}
	TCNT0 = TimerInitial;
	TCCR0 |= (1<<2); 
	while(Over_Flow_count<numper_of_OverFlow){
        while((TIFR & (1<<0)) == 0); //waiting for set overflow flag
 		TIFR |= (1<<0);//clear overflow flag
		Over_Flow_count++;
	}
	TCCR0 = 0x00; //stop the timer
}