#include <stdio.h>
/**
 * main - Write a program that prints all the
 * Return:  always return 0
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
