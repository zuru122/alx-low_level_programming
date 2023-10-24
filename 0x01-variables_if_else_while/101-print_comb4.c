#include <stdio.h>
/**
 * main -  a program that prints all
 * possible different combinations of three digits
 * numbers must be separated by comma, eg. 012, 013, 014
 *
 * Author: Justice Sunday G.
 * Date: 21 May, 2023
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 7; num1++)
	{
		for (num2 = num1 + 1; num2 <= 8; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if (num1 == 7 && num2 == 8 && num3 == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
