#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: Sunday Justice G.
 * Date: 21 May, 2023;
 *
 * a program that prints all single digit
 * numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
