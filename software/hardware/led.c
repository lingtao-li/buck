#include "stm32f10x.h"     
#include "led.h"   



void led_Init(){
	
	
		GPIO_InitTypeDef GPIO_InitStrcture;
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
		GPIO_InitStrcture.GPIO_Mode=GPIO_Mode_Out_PP;
		GPIO_InitStrcture.GPIO_Pin=GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_0|GPIO_Pin_2;
		GPIO_InitStrcture.GPIO_Speed=GPIO_Speed_50MHz;
		GPIO_Init(GPIOA,&GPIO_InitStrcture);
	
	
}
