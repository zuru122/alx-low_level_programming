#include "main.h"

/**
 * _strcpy - Copy a string from the src
 * @dest: This is the destination of the string
 * @src: This is the source string
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
