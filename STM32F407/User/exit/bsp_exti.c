#include "bsp_exti.h"

// /**
//  * @brief  ����Ƕ�������жϿ�����NVIC
//  * @param  ��
//  * @retval ��
//  */
//static void NVIC_Configuration(void)
//{
//  NVIC_InitTypeDef NVIC_InitStructure;
//  
//  /* ����NVICΪ���ȼ���1 */
//  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
//  
//  /* �����ж�Դ������1 */
//  NVIC_InitStructure.NVIC_IRQChannel = KEY1_INT_EXTI_IRQ;
//  /* ������ռ���ȼ���1 */
//  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
//  /* ���������ȼ���1 */
//  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
//  /* ʹ���ж�ͨ�� */
//  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
//  NVIC_Init(&NVIC_InitStructure);
//  
//  /* �����ж�Դ������2������ʹ������������� */  
//  NVIC_InitStructure.NVIC_IRQChannel = KEY2_INT_EXTI_IRQ;
//  NVIC_Init(&NVIC_InitStructure);
//}

// /**
//  * @brief  ���� PA0 Ϊ���жϿڣ��������ж����ȼ�
//  * @param  ��
//  * @retval ��
//  */
//void EXTI_Key_Config(void)
//{
//	GPIO_InitTypeDef GPIO_InitStructure; 
//	EXTI_InitTypeDef EXTI_InitStructure;
//  
//	/*��������GPIO�ڵ�ʱ��*/
//	RCC_AHB1PeriphClockCmd(KEY1_INT_GPIO_CLK|KEY2_INT_GPIO_CLK ,ENABLE);
//  
//  /* ʹ�� SYSCFG ʱ�� ��ʹ��GPIO�ⲿ�ж�ʱ����ʹ��SYSCFGʱ��*/
//  RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
//  
//  /* ���� NVIC */
//  NVIC_Configuration();
//  
//	/* ѡ�񰴼�1������ */ 
//  GPIO_InitStructure.GPIO_Pin = KEY1_INT_GPIO_PIN;
//  /* ��������Ϊ����ģʽ */ 
//  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;	    		
//  /* �������Ų�����Ҳ������ */
//  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
//  /* ʹ������Ľṹ���ʼ������ */
//  GPIO_Init(KEY1_INT_GPIO_PORT, &GPIO_InitStructure); 

//	/* ���� EXTI �ж�Դ ��key1���� */
//  SYSCFG_EXTILineConfig(KEY1_INT_EXTI_PORTSOURCE,KEY1_INT_EXTI_PINSOURCE);

//  /* ѡ�� EXTI �ж�Դ */
//  EXTI_InitStructure.EXTI_Line = KEY1_INT_EXTI_LINE;
//  /* �ж�ģʽ */
//  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
//  /* �½��ش��� */
//  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising;  
//  /* ʹ���ж�/�¼��� */
//  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
//  EXTI_Init(&EXTI_InitStructure);
//  
//  /* ѡ�񰴼�2������ */ 
//  GPIO_InitStructure.GPIO_Pin = KEY2_INT_GPIO_PIN;  
//  /* ����������������ͬ */
//  GPIO_Init(KEY2_INT_GPIO_PORT, &GPIO_InitStructure);      

//	/* ���� EXTI �ж�Դ ��key2 ���� */
//  SYSCFG_EXTILineConfig(KEY2_INT_EXTI_PORTSOURCE,KEY2_INT_EXTI_PINSOURCE);

//  /* ѡ�� EXTI �ж�Դ */
//  EXTI_InitStructure.EXTI_Line = KEY2_INT_EXTI_LINE;
//  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
//  /* �����ش��� */
//  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;  
//  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
//  EXTI_Init(&EXTI_InitStructure);
//}
///*********************************************END OF FILE**********************/





 /**
  * @brief  ����Ƕ�������жϿ�����NVIC
  * @param  ��
  * @retval ��
  */
static void NVIC_Configuration(void)
{
	NVIC_InitTypeDef NVIC_InitStructure;
	
	
  /* ����NVICΪ���ȼ���1 */
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
	
	NVIC_InitStructure.NVIC_IRQChannel = KEY2_EXIT_EXTI_IRQ;
	
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
	
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;
	
	NVIC_Init(&NVIC_InitStructure);
}

 /**
  * @brief  ���� PA0 Ϊ���жϿڣ��������ж����ȼ�
  * @param  ��
  * @retval ��
  */
void EXTI_Key_Config(void)
{
	GPIO_InitTypeDef GPIO_InitType_Struct;
	EXTI_InitTypeDef EXTI_InitStruct;
	
	RCC_AHB1PeriphClockCmd(KEY1_EXIT_GPIO_CLK|KEY2_EXIT_GPIO_CLK,ENABLE);
 /* ʹ�� SYSCFG ʱ�� ��ʹ��GPIO�ⲿ�ж�ʱ����ʹ��SYSCFGʱ��*/
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
  
  /* ���� NVIC */
  NVIC_Configuration();
	
	GPIO_InitType_Struct.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitType_Struct.GPIO_OType = GPIO_OType_PP;
	GPIO_InitType_Struct.GPIO_Pin = KEY1_EXIT_GPIO_PIN;
	GPIO_InitType_Struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
	
	GPIO_Init(KEY2_EXIT_GPIO_PORT, &GPIO_InitType_Struct);
	/* ���� EXTI �ж�Դ ��key1���� */
  SYSCFG_EXTILineConfig(KEY2_EXIT_EXTI_PORTSOURCE,KEY2_EXIT_EXTI_PINSOURCE);
	EXTI_InitStruct.EXTI_Line = KEY2_EXIT_EXTI_LINE;
	EXTI_InitStruct.EXTI_LineCmd = ENABLE;
	EXTI_InitStruct.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStruct.EXTI_Trigger = EXTI_Trigger_Rising_Falling;

	
		EXTI_Init(&EXTI_InitStruct);
}
/*********************************************END OF FILE**********************/



