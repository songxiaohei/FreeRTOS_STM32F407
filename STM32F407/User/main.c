#include "sys.h"
#include "stm32f4xx.h"
#include "bsp_led.h"   
#include "bsp_key.h" 
#include "bsp_exti.h"
/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)
{
		/* 程序来到main函数之前，启动文件：statup_stm32f4xx.s已经调用
		* SystemInit()函数把系统时钟初始化成168MHZ
		* SystemInit()在system_stm32f4xx.c中定义
		* 如果用户想修改系统时钟，可自行编写程序修改
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

