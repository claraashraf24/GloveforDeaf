/*
 * DIO_interface.h
 *
 *  Created on: Sep 3, 2022
 *      Author: User
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_




#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_register.h"



#define GROUPA 0
#define GROUPB 1
#define GROUPC 2
#define GROUPD 3


#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7


//port directions
#define PORT_INPUT  0
#define PORT_OUTPUT 1

//pin directions
#define PIN_INPUT 0X00
#define PIN_OUTPUT 0XFF

//pin values
#define PIN_HIGH 1
#define PIN_LOW 0

//port values
#define PORT_HIGH 0XFF
#define PORT_LOW 0X00


//prototypes
void DIO_SetPortDir(uint8 portID, uint8 dir);
void DIO_SetPinDir(uint8 portID, uint8 pinID, uint8 dir);
void DIO_SetPortVal(uint8 portID, uint8 val);
void DIO_SetPinVal(uint8 portID, uint8 pinID, uint8 val);



#endif /* DIO_INTERFACE_H_ */
