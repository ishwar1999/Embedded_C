/**
 * @file acti2.h
 * @author ISHWAR KUBASAD (kubsadishwar@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTI2_H_INCLUDED
#define ACTI2_H_INCLUDED

#include<avr/io.h>

/**
 * @brief to read the adc values
 * 
 */
uint16_t ReadADC(uint8_t ch);

void InitADC();

#endif
