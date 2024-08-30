#pragma once

#include "stm32l4xx.h"

HAL_StatusTypeDef EEPROM_READ (uint32_t reg_add, void* data, uint32_t size );

HAL_StatusTypeDef EEPROM_WRITE (uint32_t reg_add, void* data, uint32_t size );

