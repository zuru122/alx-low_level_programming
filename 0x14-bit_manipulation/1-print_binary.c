/*
 * Author: Sunday, Justice Gabriel
 * Task: 0x14. C - Bit manipulation "1-print_binary.c"
 */

#include "main.h"
/**
 * print_binary - convert number to binary
 * @n: positive number to be converted
 * Return: Null, else the converted decimal to binary
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
		{
			_putchar('0');
		}
		shift--;
	}
}
