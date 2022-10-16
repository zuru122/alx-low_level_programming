#include <stdio.h>
/**
 * Write a program that prints all the
 * numbers of base 16 in lowercase,
 * followed by a new line.
 * u can only use the putchar function
 * Return: 0
 */

int main(void)
{
	int n = 48;
	int l = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
