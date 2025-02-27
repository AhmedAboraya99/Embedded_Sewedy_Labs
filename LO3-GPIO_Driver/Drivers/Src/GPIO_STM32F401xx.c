/*
 * GPIO_STM32F401xx.c
 *
 *  Created on: Feb 27, 2025
 *      Author: Ahmed.AboRaya
 */
#include"STM32F401xx.h"
#include "GPIO_STM32F401xx.h"

//enable clock with RCC
void GPIO_EnableClock(GPIOx_TypeDef * pGPIOx)
{
	if(pGPIOx == GPIOA)
	{
		//register to enable clock for gpio
			RCC->RCC_AHB1ENR |= (1<<0);
	}
	else if(pGPIOx == GPIOB)
	{
		RCC->RCC_AHB1ENR |= (1<<1);
	}
	else if(pGPIOx == GPIOC)
	{
		RCC->RCC_AHB1ENR |= (1<<2);
	}
}

//Initialization
void GPIO_InitPin(GPIOx_TypeDef * pGPIOx,int pinNumber ,int mode, int speed, int outputType, int InputType)
{
	//select mode : input or output
	pGPIOx->MODER &= ~(0b11 <<(pinNumber*2)) ;//clear to adjust
	pGPIOx->MODER |= (mode<<(pinNumber*2));//write the value

	//select speed
	pGPIOx->OSPEEDER &= ~(0b11 <<(pinNumber*2));
	pGPIOx->OSPEEDER |= (speed<<(pinNumber*2));

	//select output type
	if(mode == 0b01)
	{
		pGPIOx->OTYPER &= ~(0b1<<pinNumber);
		pGPIOx->OTYPER |= (outputType<<pinNumber);
	}else if(mode == 0)//input type
	{
		pGPIOx->PUPDR &= ~(0b11 <<(pinNumber*2));
		pGPIOx->PUPDR |= (InputType<<(pinNumber*2));
	}
}
//Read
int GPIO_ReadPin(GPIOx_TypeDef * pGPIOx,int pinNumber)
{
	return (pGPIOx->IDR>>pinNumber)&1;
}
//Write
void GPIO_WritePin(GPIOx_TypeDef * pGPIOx,int pinNumber, int pinValue)
{
	pGPIOx->ODR &= ~(0b1<<pinNumber);
	pGPIOx->ODR |= (pinValue<<pinNumber);

}
//toggle
void GPIO_TogglePin(GPIOx_TypeDef * pGPIOx,int pinNumber)
{
	pGPIOx->ODR ^= (1<<pinNumber);
}
