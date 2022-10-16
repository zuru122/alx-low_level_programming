#include <stdio.h>
/**
 * main - program that print the lowercase
 * alphabet in reverse followed by a new line
 * you can only used the putchar function
 * Returen: 0;
 */
int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n -= 1;
	}
	putchar('\n');
	return (0);
}
