/*
 * interupt_function.c
 *
 *  Created on: Oct 2, 2021
 *      Author: MSI-
 */
#include "main.h"
#include "interupt_function.h"

static int count = 0;
static int countled = 0;
static int typeofled = 0;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  if(++count == 100)
  {
	  HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
	  count = 0;
  }
  if(++countled == 50)
  {
	if(typeofled == 0) {
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
	}
	else if(typeofled == 1) {
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		}
	else if(typeofled == 2) {
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		}
	else {
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
		}

  }
}
