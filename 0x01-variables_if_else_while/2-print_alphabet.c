#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase,
 * followed by a new line
 * Return: always return 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
