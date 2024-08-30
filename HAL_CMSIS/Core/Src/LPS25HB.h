
#pragma once

#define SRC_LPS25HB_H_
#include "stm32l4xx.h"




HAL_StatusTypeDef lps25hb_init(void);


float lps25hb_read_pressure(void);

float lps25hb_read_temp(void);

void lps25hb_cllbrtn (uint16_t value);

float lps25hb_height (float temp, float pressure);

float lps25hb_autozero ();

void lps25hb_set_reference_pressure(float ref_pressure);

