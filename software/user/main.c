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
	
uint16_t ADValue;			//����ADֵ����
float Voltage;				//�����ѹ����
float a;
//int main(void)
//{
//	/*ģ���ʼ��*/
//	OLED_Init();			//OLED��ʼ��
	//AD_Init();				//AD��ʼ��
//	
//	/*��ʾ��̬�ַ���*/
//	OLED_ShowString(1, 1, "ADValue:");
//	OLED_ShowString(2, 1, "Voltage:0.00V");
//	
//	while (1)
//	{
//		ADValue = AD_GetValue();					//��ȡADת����ֵ
//		Voltage = (float)ADValue / 4095 * 3.3;		//��ADֵ���Ա任��0~3.3�ķ�Χ����ʾ��ѹ
//		
//		OLED_ShowNum(1, 9, ADValue, 4);				//��ʾADֵ
//		OLED_ShowNum(2, 9, Voltage, 1);				//��ʾ��ѹֵ����������
//		OLED_ShowNum(2, 11, (uint16_t)(Voltage * 100) % 100, 2);	//��ʾ��ѹֵ��С������
//		
//		Delay_ms(100);			//��ʱ100ms���ֶ�����һЩת���ļ��ʱ��
//	}
//}

//	
		PWM_Init();
		led_Init();
		AD_Init();				//AD��ʼ��
		Serial_Init();
		PWM_SetCompare1(50);
	while(1)
	{
		
		
		delay(100);
		GPIO_SetBits(GPIOA,GPIO_Pin_2);
//		GPIO_SetBits(GPIOA,GPIO_Pin_3);
//		GPIO_SetBits(GPIOA,GPIO_Pin_4);
		
		//ADValue = AD_GetValue();					//��ȡADת����ֵ
		//Voltage = (float)ADValue / 4095 * 3.3;		//��ADֵ���Ա任��0~3.3�ķ�Χ����ʾ��ѹ
		//a =(0.033*5)/Voltage ;//5Ϊ�����ѹ

//		a=80*a;
		
		

//			Serial_SendByte(Voltage);
//			Serial_SendNumber(Voltage, 1);	
		
		//GPIO_SetBits(GPIOA,GPIO_Pin_7);
		
		//PWM_SetCompare1(a);
		
		GPIO_SetBits(GPIOA,GPIO_Pin_0);
		
	}


}
