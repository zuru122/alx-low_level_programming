#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: Justice Sunday G.
 * Date: 21 May, 2023
 *
 * Task: a program that prints all the
 * numbers of base 16 in lowercase, followed by a new line.
 *
 * You can only use putchar three times in your code
 *
 * Return: Alwasy 0 (Success)
 */
int main(void)
{
	char alpha_num;

	for (alpha_num = 48; alpha_num <= 57; alpha_num++)
	{
		putchar(alpha_num);
	}
	for (alpha_num = 97; alpha_num <= 102; alpha_num++)
	{
		putchar(alpha_num);
	}
	putchar('\n');
	return (0);
}
