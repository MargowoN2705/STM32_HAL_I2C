#include "EEPROM_24AA01.h"
#include <i2c.h>

#define EEPROM_ADDR 0xA0





HAL_StatusTypeDef EEPROM_READ (uint32_t reg_add, void* data, uint32_t size )
{
	return HAL_I2C_Mem_Read(&hi2c1, EEPROM_ADDR, reg_add, 1, data, size, HAL_MAX_DELAY);
}

HAL_StatusTypeDef EEPROM_WRITE (uint32_t reg_add, void* data, uint32_t size )
{
	return  HAL_I2C_Mem_Read(&hi2c1, EEPROM_ADDR, reg_add, 1, data, size, HAL_MAX_DELAY);
}


