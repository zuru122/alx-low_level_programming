#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int c = 0;
	char ltemp;
	while (*(s + i) != '\0')
		i += 1;
	i -= 1;
	while (c < i)
	{
		ltemp = s[i];
		s[i] = s[c];
		s[c] = ltemp;
		c++;
		i--;
	}
}
