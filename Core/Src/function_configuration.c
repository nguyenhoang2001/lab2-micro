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

void display7SEG1(int num) {
	uint8_t the_number = sevenSegmentLEDConversion[num];
	HAL_GPIO_WritePin(LED1_G_GPIO_Port, LED1_G_Pin, the_number & 0x01);
	HAL_GPIO_WritePin(LED1_F_GPIO_Port, LED1_F_Pin, the_number & 0x02);
	HAL_GPIO_WritePin(LED1_E_GPIO_Port, LED1_E_Pin, the_number & 0x04);
	HAL_GPIO_WritePin(LED1_D_GPIO_Port, LED1_D_Pin, the_number & 0x08);
	HAL_GPIO_WritePin(LED1_C_GPIO_Port, LED1_C_Pin, the_number & 0x10);
	HAL_GPIO_WritePin(LED1_B_GPIO_Port, LED1_B_Pin, the_number & 0x20);
	HAL_GPIO_WritePin(LED1_A_GPIO_Port, LED1_A_Pin, the_number & 0x40);
}

const int MAX_LED = 4;
int index_led = 0;
static int led_buffer[4] = {1 , 2 , 3 , 4};

void update7SEG ( int index ) {
	 index = index % MAX_LED;
	 switch ( index ) {
	 case 0:
		 // Display the first 7 SEG with led_buffer [0]
		 display7SEG1(led_buffer[0]);
		 break;
	 case 1:
		 // Display the second 7 SEG with led_buffer [1]
		 display7SEG1(led_buffer[1]);
		 break;
	 case 2:
		 // Display the third 7 SEG with led_buffer [2]
		 display7SEG1(led_buffer[2]);
		 break;
	 case 3:
	 // Display the forth 7 SEG with led_buffer [3]
		 display7SEG1(led_buffer[3]);
		 break;
	 default :
		 break;
	 }
 }
void updateClockBuffer(int hour, int min, int second) {

}
