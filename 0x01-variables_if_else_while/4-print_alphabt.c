#include <stdio.h>
/**
 * main -  program that prints the alphabet in lowercase,
 *  followed by a new line
 *  Return: always return 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet += 1;
		}
		else
		{
			putchar(alphabet);
			alphabet += 1;
		}
	}
	putchar('\n');
	return (0);
}
