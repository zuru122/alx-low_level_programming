#include "main.h"

/**
 * times_table - A function that prints the 9 times table
 * starting with 0
 *
 * Author: Justice Sunday G.
 * Date: 25th May, 2023
 *
 * Return: .
 */
void times_table(void)
{
	int a, b, z, c, u;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			z = (a * b);
			if (z > 9)
			{
				u = z % 10;
				c = (z - u) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(c + '0');
				_putchar(u + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
