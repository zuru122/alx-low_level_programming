#include <stdio.h>

/**
 * main - Write a program that prints all
 * possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			int first_dig_num1 = num1 / 10;
			int second_dig_num1 = num1 % 10;
			int first_dig_num2 = num2 / 10;
			int second_dig_num2 = num2 % 10;

			putchar(first_dig_num1 + '0');
			putchar(second_dig_num1 + '0');
			putchar(' ');
			putchar(first_dig_num2 + '0');
			putchar(second_dig_num2 + '0');
			if (num1 == 98 && num2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

