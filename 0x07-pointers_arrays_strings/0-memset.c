#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to start of memory area
 * @b: constant byte
 * @n: number of times the bytes needs to be filled
 *
 *
 * Return: pointer to begining of memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;
	unsigned int i = 0;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
