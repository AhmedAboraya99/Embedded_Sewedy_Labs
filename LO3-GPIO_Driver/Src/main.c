/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdbool.h>
#include "STM32F401xx.h"
#include "GPIO_STM32F401xx.h"


#define LED_PIN	2
#define SWITCH_PIN 4
void delay_ms(int delay)
{
	for(int i= 0; i< delay * 1000; i++)
	{

	}
}

int main(void)
{
	//enable clock for RCC : GPIOA
	GPIO_EnableClock(GPIOA);

	//for led pin 2
	//define mode : output
	GPIO_InitPin(GPIOA,LED_PIN,0b01, 0, 0, 0);
	//input mode : switch pin 4
	GPIO_InitPin(GPIOA,SWITCH_PIN,0b00, 0, 0, 0b10);




    /* Loop forever */
	for(;;)
	{
		int switch_read = GPIO_ReadPin(GPIOA, 4);
		delay_ms(50); // Simple debounce delay
		if(switch_read == 1)
		{

			GPIO_WritePin(GPIOA, 2, 1);

		}else
		{
			GPIO_WritePin(GPIOA, 2, 0);
		}
	}
}
