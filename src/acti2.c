/**
 * @file acti2.c
 * @author ISHWAR KUBASAD (kubsadishwar@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include<acti2.h>
/**
 * @brief A functn to initialise the analog to digital converter
 * 
 */
void InitADC()
{
    ADMUX=(1<<REFS0);   //AVCC = +5V
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}


/**
 * @brief A funtn to receive temp sensor inputs from analog pin and output it to a register ADC which has 2 8 bit registers ADCL and ADCH.
 * 
 * @param  
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch)
{
    //Select ADC Channel(ch) which must be from 0-7
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    
    ADCSRA|=(1<<ADSC);

   
    while(!(ADCSRA & (1<<ADIF)));
    
    
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
