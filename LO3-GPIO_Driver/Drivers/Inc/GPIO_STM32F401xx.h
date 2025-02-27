/*
 * GPIO_STM32F401xx.h
 *
 *  Created on: Feb 27, 2025
 *      Author: Ahmed.AboRaya
 */

#ifndef DRIVERS_INC_GPIO_STM32F401XX_H_
#define DRIVERS_INC_GPIO_STM32F401XX_H_

#include "STM32F401xx.h"

//enable clock with RCC
void GPIO_EnableClock(GPIOx_TypeDef * pGPIOx);

//Initialization
void GPIO_InitPin(GPIOx_TypeDef * pGPIOx,int pinNumber ,int mode, int speed, int outputType, int InputType);
//Read
int GPIO_ReadPin(GPIOx_TypeDef * pGPIOx,int pinNumber);
//Write
void GPIO_WritePin(GPIOx_TypeDef * pGPIOx,int pinNumber, int pinValue);
//toggle
void GPIO_TogglePin(GPIOx_TypeDef * pGPIOx,int pinNumber);

#endif /* DRIVERS_INC_GPIO_STM32F401XX_H_ */
