/**
 * @file io.h
 * @author Nicholas Zamora (https://github.com/nzamsci)
 * @brief 
 * @version 0.1
 * @date 2022-02-23
 * 
 * @copyright Copyright (c) Nicholas Zamora 2022
 * 
 */
#include <stdint.h>

uint8_t _uart_readc();
void _uart_writec(uint8_t c);
void _uart_writes(uint8_t* str);


