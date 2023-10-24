#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: Justice Sunday G.
 * Date: 21 May, 2023;
 *
 * Task: a program that prints all single
 * digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * No use the char variable type
 * use putchar just twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
