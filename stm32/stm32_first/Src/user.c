/*
 * user.c

 *
 *  Created on: 2018年12月17日
 *      Author: liguo
 */

#include "stm32f1xx_hal.h"
#include "user.h"
#include "task.h"

void task_led1(void* pvParameters)
{
	while(1)
	{
		HAL_GPIO_WritePin(GPIOE, GPIO_PIN_5, GPIO_PIN_SET);
		vTaskDelay(500 / portTICK_RATE_MS);
		HAL_GPIO_WritePin(GPIOE, GPIO_PIN_5, GPIO_PIN_RESET);
		vTaskDelay(500 / portTICK_RATE_MS);
	}
}

void task_led2(void* pvParameters)
{
	while(1)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
		vTaskDelay(500 / portTICK_RATE_MS);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET);
		vTaskDelay(500 / portTICK_RATE_MS);
	}
}

void test_led()
{
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_5, GPIO_PIN_SET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_5, GPIO_PIN_RESET);
	HAL_Delay(1000);
}
