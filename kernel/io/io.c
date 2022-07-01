/**
 * @file io.c
 * @author Nicholas Zamora (https://github.com/nzamsci)
 * @brief 
 * @version 0.1
 * @date 2022-02-23
 * 
 * @copyright Copyright (c) Nicholas Zamora 2022
 * 
 */
#include <stdint.h>
#include "tm4c1294ncpdt.h"


/* UART utility functions */
static uint8_t _uart_readc()
{
    uint8_t c;
	while ((UART0_FR_R & (1 << 4)) != 0);
	c = UART0_DR_R;
	return c;
}

static void _uart_writec(uint8_t c)
{
    while ((UART0_FR_R & (1 << 5)) != 0);
	UART0_DR_R = c;
}

static void _uart_writes(uint8_t* str)
{
    for (; *str != '\0';) {
        _uart_writec(*str++);
    }
}
