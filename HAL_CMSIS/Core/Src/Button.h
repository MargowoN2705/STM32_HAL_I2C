#pragma once
#include "stm32l4xx.h"

typedef enum {
    Ready2GO,     // Stan gotowy do rozpoczęcia działania
    Press_Test,   // Sprawdzanie stanu naciśnięcia
    Press,        // Przycisk został wciśnięty
    Hold        // Przycisk jest przytrzymywany

} Button_Status;

/*typedef enum {
	Ready2GO,
	Press_Test_Button,
	Press_Button,
	Hold_Button,

}JoyStick_Status;*/

Button_Status Status_Button(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

