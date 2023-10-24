#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: Justice Sunday G.
 * Date: 21 May, 2023;
 *
 * Write a program that prints the alphabet
 * in lowercase, followed by a new line.
 * print all letter except q and e
 * use only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		else
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
