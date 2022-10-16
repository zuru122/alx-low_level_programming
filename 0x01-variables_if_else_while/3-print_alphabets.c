#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: always return 0
 */
int main(void)
{
	char alphabet;
	char ch;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
