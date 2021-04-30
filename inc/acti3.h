/**
 * @file acti3.h
 * @author ISHWAR KUBASAD (kubsadishwar@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTI3_H_INCLUDED
#define ACTI3_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>


/**
 * @brief A macro to set PB1 bit as a fast PWM output port with timer1, A channel
 * 
 */
#define SET_TIMERPWM TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11)

/**
 * @brief A macro to prescale timer1 for 64 and wave generation mode for 10bit digital input
 * 
 */
#define PRESCALE_TIMER TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10)


#define SET_AS_OUTPUT DDRB|=(1<<PB1)

/**
 * @brief A function to setup timer1 with channel A for pulse width modulation with wave generation mode of 10 bits fast PWM and prescaling of 64.
 * 
 */
void TimerGenMode(void);

/**
 * @brief A function which receives 10 bit of ADC input from temperature sensor
 * 
 * @param ADC_val 
 */
void outputPWM(uint16_t ADC_val);

#endif
