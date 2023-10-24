#include "main.h"

/**
 * print_alphabet_x10 -  A function that prints
 * 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Author: Justice Sunday G.
 * Date: 24th May, 2023
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char alph;
	int n = 1;

	while (n <= 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
		n++;
	}
}
