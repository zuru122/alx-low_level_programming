#include <stdio.h>

/**
 * main - Print the nuber combination 00 to 99,
 *
 * Author: Justice Sunday G.
 * Date 21 May, 2023;
 *
 * Task: Write a program that prints all
 * possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * ou can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');

			if (num1 == 8 &&  num2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
