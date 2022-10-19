#include "main.h"

/**
 * Print_alphabet  -  a function that point
 * the alphbaet in a lower case
 * Return: 0
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
