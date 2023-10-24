#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: represents the string to be searched.
 * @accept: represents the string containing
 * the characters to search for
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, match;

	for (i = 0, j = 0; s[i] != '\0'; i++)
	{
		for (match = 0; accept[match] != '\0'; match++)
		{
			if (s[i] == accept[match])
			{
				j++;
				break;
			}
		}
		if (accept[match] == '\0')
			break;
	}
	return (j);
}
