/*
 * DIO_program.c
 *
 *  Created on: Sep 3, 2022
 *      Author: User
 */


#include "DIO_interface.h"


void DIO_SetPinDir(uint8 portID, uint8 pinID, uint8 dir)
{
	if (dir == PIN_OUTPUT)
	{
		switch(portID)
		{
		case GROUPA: SET_BIT(DDRA_REG, pinID);
		break;
		case GROUPB: SET_BIT(DDRB_REG, pinID);
		break;
		case GROUPC: SET_BIT(DDRC_REG, pinID);
		break;
		case GROUPD: SET_BIT(DDRD_REG, pinID);
		break;


		}
	}
	else if(dir == PIN_INPUT)
	{
		switch(portID)
		{
         case GROUPA: CLEAR_BIT(DDRA_REG, pinID);
		break;
		case GROUPB: CLEAR_BIT(DDRB_REG, pinID);
		break;
		case GROUPC: CLEAR_BIT(DDRC_REG, pinID);
		break;
		case GROUPD: CLEAR_BIT(DDRD_REG, pinID);
		break;
		}
	}
}


void DIO_SetPortDir(uint8 portID, uint8 dir)
{
	if (dir == PIN_OUTPUT)
		{
			switch(portID)
			{
			case GROUPA: DDRA_REG = PORT_OUTPUT;
			break;
			case GROUPB: DDRB_REG = PORT_OUTPUT;
	  		break;
			case GROUPC: DDRC_REG = PORT_OUTPUT;
			break;
			case GROUPD: DDRD_REG = PORT_OUTPUT;
			break;


			}
		}
		else if(dir == PIN_INPUT)
		{
			switch(portID)
			{
	        case GROUPA: DDRA_REG = PORT_INPUT;
			break;
			case GROUPB: DDRB_REG = PORT_INPUT;
			break;
			case GROUPC: DDRC_REG = PORT_INPUT;
			break;
			case GROUPD: DDRD_REG = PORT_INPUT;
			break;
			}
		}
}


void DIO_SetPinVal(uint8 portID, uint8 pinID, uint8 val)
{
	if (val == PIN_HIGH)
		{
			switch(portID)
			{
			case GROUPA: SET_BIT(PORTA_REG, pinID);
			break;
			case GROUPB: SET_BIT(PORTB_REG, pinID);
			break;
			case GROUPC: SET_BIT(PORTC_REG, pinID);
			break;
			case GROUPD: SET_BIT(PORTD_REG, pinID);
			break;


			}
		}
		else if(val == PIN_LOW)
		{
			switch(portID)

			{
	        case GROUPA: CLEAR_BIT(PORTA_REG, pinID);
			break;
			case GROUPB: CLEAR_BIT(PORTB_REG, pinID);
			break;
			case GROUPC: CLEAR_BIT(PORTC_REG, pinID);
			break;
			case GROUPD: CLEAR_BIT(PORTD_REG, pinID);
			break;
		}
}
}


void DIO_SetPortVal(uint8 portID, uint8 val)
{
	if (val == PIN_HIGH)
		{
			switch(portID)
			{
			case GROUPA: PORTA_REG = PORT_HIGH;
			break;
			case GROUPB: PORTB_REG = PORT_HIGH;
			break;
			case GROUPC: PORTC_REG = PORT_HIGH;
			break;
			case GROUPD: PORTD_REG = PORT_HIGH;
			break;


			}
		}
		else if(val == PIN_LOW)
		{
			switch(portID)
		{
	       case GROUPA: PORTA_REG = PORT_LOW;
			break;
			case GROUPB: PORTB_REG = PORT_LOW;
			break;
			case GROUPC: PORTC_REG = PORT_LOW;
			break;
			case GROUPD: PORTD_REG = PORT_LOW;
			break;
		}
}
}


