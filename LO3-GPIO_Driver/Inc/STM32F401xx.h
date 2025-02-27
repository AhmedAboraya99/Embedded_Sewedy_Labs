/*
 * STM32F401xx.h
 *
 *  Created on: Feb 23, 2025
 *      Author: Ahmed.AboRaya
 */

#ifndef STM32F401XX_H_
#define STM32F401XX_H_


#define GPIOA_BASE_ADDRESS 		0x40020000
#define GPIOB_BASE_ADDRESS		0x40020400
#define GPIOC_BASE_ADDRESS		0x40020800
#define RCC_BASE_ADDRESS		0x40023800

typedef volatile int vuint;

typedef struct
{
	vuint MODER;
	vuint OTYPER;
	vuint OSPEEDER;
	vuint PUPDR;
	vuint IDR;
	vuint ODR;

}GPIOx_TypeDef;

typedef struct
{
	vuint RCC_CR;		//0x00
	vuint RCC_PLLCFGR;	//0x04
	vuint RCC_CFGR;
	vuint RCC_CIR;
	vuint RCC_AHB1RSTR;
	vuint RCC_AHB2RSTR;
	int Reserved[2];
	vuint RCC_ABP1RSTR;
	vuint RCC_ABP2RSTR;
	int Reserved1[2];
	vuint RCC_AHB1ENR;
	vuint RCC_AHB2ENR;
}RCC_TypeDef;

#define GPIOA 	((GPIOx_TypeDef*)GPIOA_BASE_ADDRESS)
#define GPIOB 	((GPIOx_TypeDef*)GPIOB_BASE_ADDRESS)
#define GPIOC 	((GPIOx_TypeDef*)GPIOC_BASE_ADDRESS)

#define RCC 	((RCC_TypeDef*) RCC_BASE_ADDRESS)
#endif /* STM32F401XX_H_ */
