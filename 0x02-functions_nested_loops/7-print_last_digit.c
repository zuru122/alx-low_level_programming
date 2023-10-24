#include "main.h"

/**
 * print_last_digit - A function that prints the
 * last digit of a number
 * @n: the parameter or value to be taken
 *
 * Author: Justice Sunday G
 * Date: 24th May, 2023
 *
 * Return: value
 */
int print_last_digit(int n)
{
	int last_num;

	last_num = n % 10;
	if (last_num < 0)
		last_num *= -1;
	_putchar(48 + last_num);
	return (last_num);
}
