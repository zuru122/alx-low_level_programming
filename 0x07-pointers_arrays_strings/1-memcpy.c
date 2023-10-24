#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: the address of memory to print
 * @src: second val
 * @n:third value
 *
 * Return: char with result memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
