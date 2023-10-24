#include "main.h"

/**
 * print_alphabet - A function that prints the alphabet,
 * in lower case, followed by a new line
 *
 * Author: Justice Sunday G.
 * Date: 24th May, 2023
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
