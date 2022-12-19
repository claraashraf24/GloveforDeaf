

#ifndef BIT_MATH_H_
#define BIT_MATH_H_
#define SET_BIT(REG,BIT)  REG=REG | (1 << BIT) //lights a LED
#define CLEAR_BIT(REG,BIT)  REG = REG & (~(1<<BIT)) //turn off the LED
#define TOG_BIT(REG, BIT)  REG = REG^ (1<<BIT) //turn off the LED if it's on and turn it on if it's off
#define GET_BIT(REG,BIT)  ((REG>>BIT)& 0X01) //gets the switch status



#endif /* BIT_MATH_H_ */



