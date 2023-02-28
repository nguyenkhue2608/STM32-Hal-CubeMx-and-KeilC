#ifndef __PRINTF_UART__
#define __PRINTF_UART__
#include "stm32f1xx_hal.h"
typedef struct
{
	UART_HandleTypeDef uart_num;
	uint16_t Baudrate;
}Serial;
void Serial_begin(uint16_t Baudrate);
#endif