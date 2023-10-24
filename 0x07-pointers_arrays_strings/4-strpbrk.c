#include "main.h"

/**
 * _strpbrk - a function that searches a string for any
 * set of bytes
 * @s: pointer to the string in which the search is performed
 * @accept: pointer to the string containing the character
 * to search for.
 *
 * Return:a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}
