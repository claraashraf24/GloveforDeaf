/*
 * DIO_register.h
 *
 *  Created on: Sep 3, 2022
 *      Author: User
 */

#ifndef DIO_REGISTER_H_
#define DIO_REGISTER_H_








#define PORTA_REG  *((volatile uint8 *)0X3B)
#define DDRA_REG  *((volatile uint8*)0X3A)
#define PINA_REG   *((volatile uint8*)0X39)

#define PORTB_REG *((volatile uint8*)0X38)
#define DDRB_REG  *((volatile uint8*)0X37)
#define PINB_REG   *((volatile uint8*)0X36)

#define PORTC_REG *((volatile uint8*)0X35)
#define DDRC_REG  *((volatile uint8*)0X34)
#define PINC_REG   *((volatile uint8*)0X33)

#define PORTD_REG *((volatile uint8*)0X32)
#define DDRD_REG  *((volatile uint8*)0X31)
#define PIND_REG   *((volatile uint8*)0X30)



#endif /* DIO_REGISTER_H_ */
