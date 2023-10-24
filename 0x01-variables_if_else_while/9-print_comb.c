#include <stdio.h>

/**
 * main -Entry point
 *
 * Author: Justice Sunday G.
 * Date 21 May, 2023;
 *
 * Task: a program that prints all possible combinations
 * of single-digit numbers.
 * Numbers must be separated by ',' followed by a space
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: Always 0 "Success"
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
