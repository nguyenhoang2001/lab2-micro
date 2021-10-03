/*
 * function_configuration.c
 *
 *  Created on: Oct 3, 2021
 *      Author: MSI-
 */

#include "main.h"
#include "function_configuration.h"

#define NUMBER_OF_DECIMAL_DIGITS	10

static uint8_t sevenSegmentLEDConversion[NUMBER_OF_DECIMAL_DIGITS] = {0x01, 0x4f, 0x12, 0x06, 0x4C, 0x24, 0x20, 0x0f, 0x00, 0x04};

void led1hour(int num) {
		uint8_t the_number = sevenSegmentLEDConversion[num];
		HAL_GPIO_WritePin(HOUR_LED1_G_GPIO_Port, HOUR_LED1_G_Pin, the_number & 0x01);
		HAL_GPIO_WritePin(HOUR_LED1_F_GPIO_Port, HOUR_LED1_F_Pin, the_number & 0x02);
		HAL_GPIO_WritePin(HOUR_LED1_E_GPIO_Port, HOUR_LED1_E_Pin, the_number & 0x04);
		HAL_GPIO_WritePin(HOUR_LED1_D_GPIO_Port, HOUR_LED1_D_Pin, the_number & 0x08);
		HAL_GPIO_WritePin(HOUR_LED1_C_GPIO_Port, HOUR_LED1_C_Pin, the_number & 0x10);
		HAL_GPIO_WritePin(HOUR_LED1_B_GPIO_Port, HOUR_LED1_B_Pin, the_number & 0x20);
		HAL_GPIO_WritePin(HOUR_LED1_A_GPIO_Port, HOUR_LED1_A_Pin, the_number & 0x40);
}

void led2hour(int num) {
		uint8_t the_number = sevenSegmentLEDConversion[num];
		HAL_GPIO_WritePin(HOUR_LED2_G_GPIO_Port, HOUR_LED2_G_Pin, the_number & 0x01);
		HAL_GPIO_WritePin(HOUR_LED2_F_GPIO_Port, HOUR_LED2_F_Pin, the_number & 0x02);
		HAL_GPIO_WritePin(HOUR_LED2_E_GPIO_Port, HOUR_LED2_E_Pin, the_number & 0x04);
		HAL_GPIO_WritePin(HOUR_LED2_D_GPIO_Port, HOUR_LED2_D_Pin, the_number & 0x08);
		HAL_GPIO_WritePin(HOUR_LED2_C_GPIO_Port, HOUR_LED2_C_Pin, the_number & 0x10);
		HAL_GPIO_WritePin(HOUR_LED2_B_GPIO_Port, HOUR_LED2_B_Pin, the_number & 0x20);
		HAL_GPIO_WritePin(HOUR_LED2_A_GPIO_Port, HOUR_LED2_A_Pin, the_number & 0x40);
}

void led1min(int num) {
		uint8_t the_number = sevenSegmentLEDConversion[num];
		HAL_GPIO_WritePin(MIN_LED1_G_GPIO_Port, MIN_LED1_G_Pin, the_number & 0x01);
		HAL_GPIO_WritePin(MIN_LED1_F_GPIO_Port, MIN_LED1_F_Pin, the_number & 0x02);
		HAL_GPIO_WritePin(MIN_LED1_E_GPIO_Port, MIN_LED1_E_Pin, the_number & 0x04);
		HAL_GPIO_WritePin(MIN_LED1_D_GPIO_Port, MIN_LED1_D_Pin, the_number & 0x08);
		HAL_GPIO_WritePin(MIN_LED1_C_GPIO_Port, MIN_LED1_C_Pin, the_number & 0x10);
		HAL_GPIO_WritePin(MIN_LED1_B_GPIO_Port, MIN_LED1_B_Pin, the_number & 0x20);
		HAL_GPIO_WritePin(MIN_LED1_A_GPIO_Port, MIN_LED1_A_Pin, the_number & 0x40);
}

void led2min(int num) {
		uint8_t the_number = sevenSegmentLEDConversion[num];
		HAL_GPIO_WritePin(MIN_LED2_G_GPIO_Port, MIN_LED2_G_Pin, the_number & 0x01);
		HAL_GPIO_WritePin(MIN_LED2_F_GPIO_Port, MIN_LED2_F_Pin, the_number & 0x02);
		HAL_GPIO_WritePin(MIN_LED2_E_GPIO_Port, MIN_LED2_E_Pin, the_number & 0x04);
		HAL_GPIO_WritePin(MIN_LED2_D_GPIO_Port, MIN_LED2_D_Pin, the_number & 0x08);
		HAL_GPIO_WritePin(MIN_LED2_C_GPIO_Port, MIN_LED2_C_Pin, the_number & 0x10);
		HAL_GPIO_WritePin(MIN_LED2_B_GPIO_Port, MIN_LED2_B_Pin, the_number & 0x20);
		HAL_GPIO_WritePin(MIN_LED2_A_GPIO_Port, MIN_LED2_A_Pin, the_number & 0x40);
}
