#include "app.h"

const uint8_t buffer[] = "Hello world v2\r\n";

void loop(){
    HAL_UART_Transmit(&huart1, buffer, strlen((char*)buffer), 0xFFFF);
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
    HAL_Delay(100);
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
    HAL_Delay(900);
}