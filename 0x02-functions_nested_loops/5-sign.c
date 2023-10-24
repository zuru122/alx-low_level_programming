#include "main.h"

/**
 * print_sign - A function that prints the
 * sign of a number
 * @n: The number to check the sign
 *
 * Author: Justice Sunday G
 * Date: 24th May, 2023
 *
 * Return: 1 if positive 0 if 0 and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
