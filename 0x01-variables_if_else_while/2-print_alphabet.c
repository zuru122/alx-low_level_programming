#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: Justice Sunday G.
 * Date: 21-May, 2023;
 *
 * Program that prints the alphabet in lower case
 * followed by a new line, using just putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
