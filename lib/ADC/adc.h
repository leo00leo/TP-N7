#ifndef ADC_H
#define ADC_H
#include "stm32f103xb.h"

void adc_init(int pin);
void adc_read(unsigned int canal);
#endif
