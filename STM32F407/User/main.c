#include "sys.h"
#include "stm32f4xx.h"
#include "bsp_led.h"   
#include "bsp_key.h" 
#include "bsp_exti.h"
/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{
		/* ��������main����֮ǰ�������ļ���statup_stm32f4xx.s�Ѿ�����
		* SystemInit()������ϵͳʱ�ӳ�ʼ����168MHZ
		* SystemInit()��system_stm32f4xx.c�ж���
		* ����û����޸�ϵͳʱ�ӣ������б�д�����޸�
		*/
		  /* add your code here ^_^. */
			LED_GPIO_Config();
//			Key_GPIO_Config();
   		EXTI_Key_Config();
  	  while(1)
			{
//				if(!Key_Scan(KEY1_GPIO_PORT,KEY1_PIN))
//				{	
//							LED1(0);	
//				}
//				else
//				{
//				  LED1(1);
//				}
				
//					LED1(1);
//				delay_ms(1000);
//				 LED1(0);
//				LED1_TOGGLE;
//				delay_ms(1000);
			}

}
//SystemInit
/*********************************************END OF FILE**********************/

