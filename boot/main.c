/**
 * @file main.c
 * @author Nicholas Zamora (https://github.com/nzamsci)
 * @brief 
 * @version 0.1
 * @date 2022-01-17
 * 
 * @copyright Copyright (c) Nicholas Zamora 2022
 * 
 */
#include <stdint.h>
#include "tm4c1294ncpdt.h"
#include "io.h"

void uartprints(char* str);
void uartprintc(char c);
char uartreadc(void);

int main()
{
	// TODO
	// fip on LED
	SYSCTL_RCGCGPIO_R |= (1 << 12);
	GPIO_PORTN_DEN_R |= (1 << 0);
	GPIO_PORTN_DIR_R |= (1 << 0);
	GPIO_PORTN_DATA_R |= (1 << 0);

	// serial console
	SYSCTL_RCGCUART_R |= (1 << 0);	// enable UART0
	SYSCTL_RCGCGPIO_R |= (1 << 0);	// enable GPIOA
	GPIO_PORTA_DEN_R |= (1 << 0) | (1 << 1);
	GPIO_PORTA_AFSEL_R |= (1 << 0) | (1 << 1);	// alt function PA0 and PA1
	GPIO_PORTA_PCTL_R |= (1 << 0) | (1 << 4);	// port control
	// 9600 baud, 8-bit data length, one stop bit, no parity
	UART0_CTL_R &= ~(1 << 0);	// disable UART
	UART0_IBRD_R = 104;
	UART0_FBRD_R = 11;
	UART0_LCRH_R = 0x60;
	UART0_CTL_R |= (1 << 0);	// enable UART

	uartprints("enter a string: \n");
	char str[256];
	char c;
	int i = 0;
	while ((c = uartreadc()) != '\r' && i < 255) {
		uartprintc(c);
		str[i++] = c;
	}
	str[i] = '\0';
	uartprints("\nyou entered: ");
	uartprints(str);

	return 0;
}

void uartprints(char* str)
{
	while (*str) {
		uartprintc(*(str++));
	}
}

void uartprintc(char c) 
{
	while ((UART0_FR_R & (1 << 5)) != 0);
	UART0_DR_R = c;
}

char uartreadc(void) 
{
	char c;
	while ((UART0_FR_R & (1 << 4)) != 0);
	c = UART0_DR_R;
	return c;
}

