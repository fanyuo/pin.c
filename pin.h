#ifndef __PIN_H__
#define __PIN_H__

#include "main.h"
#include "gpio.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef enum{
	PA0=0u,PA1,PA2,PA3,PA4,PA5,PA6,PA7,PA8,PA9,PA10,PA11,PA12,PA13,PA14,PA15,
	PB0,PB1,PB2,PB3,PB4,PB5,PB6,PB7,PB8,PB9,PB10,PB11,PB12,PB13,PB14,PB15,
	PC0,PC1,PC2,PC3,PC4,PC5,PC6,PC7,PC8,PC9,PC10,PC11,PC12,PC13,PC14,PC15
}PXX;

GPIO_PinState Pin_Read(PXX pxx);
void Pin_Write(PXX pxx,GPIO_PinState State);




#endif // __PIN_H__
