#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: Justice Sunday G
 * Date: 21 May, 2023
 *
 * a program that prints the lowercase
 * alphabet in reverse, followed by a new line
 *
 * putchar is used just twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alph;

	for (lower_alph = 122; lower_alph >= 97; lower_alph--)
	{
		putchar(lower_alph);
	}
	putchar('\n');
	return (0);
}
