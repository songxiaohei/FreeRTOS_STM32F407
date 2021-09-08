#ifndef __EXTI_H
#define	__EXTI_H

#include "stm32f4xx.h"

//Òý½Å¶¨Òå
/*******************************************************/


#define KEY1_EXIT_GPIO_PORT                GPIOA
#define KEY1_EXIT_GPIO_CLK                 RCC_AHB1Periph_GPIOA
#define KEY1_EXIT_GPIO_PIN                 GPIO_Pin_0

#define KEY1_EXIT_EXTI_PORTSOURCE          EXTI_PortSourceGPIOA
#define KEY1_EXIT_EXTI_PINSOURCE           EXTI_PinSource0
#define KEY1_EXIT_EXTI_LINE                EXTI_Line0
#define KEY1_EXIT_EXTI_IRQ                 EXTI0_IRQn

#define KEY1_IRQHandler                   EXTI0_IRQHandler

#define KEY2_EXIT_GPIO_PORT                GPIOA
#define KEY2_EXIT_GPIO_CLK                 RCC_AHB1Periph_GPIOA
#define KEY2_EXIT_GPIO_PIN                 GPIO_Pin_15
#define KEY2_EXIT_EXTI_PORTSOURCE          EXTI_PortSourceGPIOA
#define KEY2_EXIT_EXTI_PINSOURCE           EXTI_PinSource13
#define KEY2_EXIT_EXTI_LINE                EXTI_Line15
#define KEY2_EXIT_EXTI_IRQ                 EXTI15_10_IRQn

#define KEY2_IRQHandler                   EXTI15_10_IRQHandler

/*******************************************************/


void EXTI_Key_Config(void);

#endif /* __EXTI_H */
