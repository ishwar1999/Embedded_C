/**
 * @file acti4.h
 * @author ISHWAR KUBASAD (kubsadishwar@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTI4_H_INCLUDED
#define ACTI4_H_INCLUDED
#include<avr/io.h>
#include <util/delay.h>
#include <stdint.h>
#define F_CPU 16000000UL 	//Clock is set 
/**
 * @brief functn to initialize USART communication
 * @param[in] unsign integer to set the baud rate to 9600
 * 
 */
void InitUSART(uint16_t);

/**
 * @brief functn to read  character from UDR register
 * @return return the character that is stored in UDR register
 * 
 */
char USARTread();


void USARTwrite(uint16_t);

#endif 
