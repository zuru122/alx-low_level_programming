#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character on a string
 * @s: The string
 * @c: The character
 *
 * Return: a pointer to the first occurence of the character c
 * in the string, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
