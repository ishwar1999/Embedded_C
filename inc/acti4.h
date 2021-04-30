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
#define F_CPU 16000000UL 	//Clock is set to 16 MHz 
/**
 * @brief Function to initialize the USART communication
 * @param[in] unsigned integer to set the baud rate to 9600
 * 
 */
void InitUSART(uint16_t);

/**
 * @brief Function to read the character from UDR register
 * @return Returning the character that is stored in UDR register
 * 
 */
char USARTread();

/**
 * @brief Function to write the character to the USART buffer
 * @param[in] uint16_t type integer is temperature value which is passed as input value
 * 
 */
void USARTwrite(uint16_t);

#endif 
