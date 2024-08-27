#include "stm32f10x.h"                  // Device header
#include "adc.h" 
#include "pwm.h" 
#include "led.h" 
#include "serial.h" 


void delay(unsigned int n)
{
    unsigned int i=0,j=0;
    for(i=0;i<n;i++)
{
for(j=0;j<120;j++){
}
}
}
int main()
{
	
uint16_t ADValue;			//定义AD值变量
float Voltage;				//定义电压变量
float a;
//int main(void)
//{
//	/*模块初始化*/
//	OLED_Init();			//OLED初始化
	//AD_Init();				//AD初始化
//	
//	/*显示静态字符串*/
//	OLED_ShowString(1, 1, "ADValue:");
//	OLED_ShowString(2, 1, "Voltage:0.00V");
//	
//	while (1)
//	{
//		ADValue = AD_GetValue();					//获取AD转换的值
//		Voltage = (float)ADValue / 4095 * 3.3;		//将AD值线性变换到0~3.3的范围，表示电压
//		
//		OLED_ShowNum(1, 9, ADValue, 4);				//显示AD值
//		OLED_ShowNum(2, 9, Voltage, 1);				//显示电压值的整数部分
//		OLED_ShowNum(2, 11, (uint16_t)(Voltage * 100) % 100, 2);	//显示电压值的小数部分
//		
//		Delay_ms(100);			//延时100ms，手动增加一些转换的间隔时间
//	}
//}

//	
		PWM_Init();
		led_Init();
		AD_Init();				//AD初始化
		Serial_Init();
		PWM_SetCompare1(50);
	while(1)
	{
		
		
		delay(100);
		GPIO_SetBits(GPIOA,GPIO_Pin_2);
//		GPIO_SetBits(GPIOA,GPIO_Pin_3);
//		GPIO_SetBits(GPIOA,GPIO_Pin_4);
		
		//ADValue = AD_GetValue();					//获取AD转换的值
		//Voltage = (float)ADValue / 4095 * 3.3;		//将AD值线性变换到0~3.3的范围，表示电压
		//a =(0.033*5)/Voltage ;//5为输出电压

//		a=80*a;
		
		

//			Serial_SendByte(Voltage);
//			Serial_SendNumber(Voltage, 1);	
		
		//GPIO_SetBits(GPIOA,GPIO_Pin_7);
		
		//PWM_SetCompare1(a);
		
		GPIO_SetBits(GPIOA,GPIO_Pin_0);
		
	}


}
