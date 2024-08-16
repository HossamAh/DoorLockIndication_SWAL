#ifndef MCAL_DIO_H
#define MCAL_DIO_H

#include "GPIO_interface.h"
/*simple driver to mimic the DIO in MCAL in BSW to call the needed APIs*/
#define Door_Lock	pin3
#define LED_pin		pin7

#define Port_Used _GPIOA_PORT

unsigned char DIO_ReadChannel(unsigned char ID);
void DIO_Write(unsigned char ID,unsigned char Level);






#endif