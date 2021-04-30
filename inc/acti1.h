/**
 * @file acti1.h
 * @author ISHWAR KUBASAD (kubsadishwar@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef _ACTI1_H
#define _ACTI1_H

#define AVR_ATmega328

#include <avr/io.h>

/**
 * @brief A macro to check if the button is pressed or not.
 * 
 */
#define SENSOR !(PIND&(1<<PD0))

/**
 * @brief A macro to check if the heater is pressed or not.
 * 
 */
#define HEATER !(PIND&(1<<PD4))

/**
 * @brief A macro to turn on the LED 
 * 
 */
#define SET_LED PORTD|=(1<<PB0)

/**
 * @brief A macro to turn off the LED
 * 
 */
#define CLR_LED PORTD&=~(1<<PB0)

void Buttons_LED_Init();


#endif
