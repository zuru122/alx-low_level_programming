/*
 * Author: Sunday, Justice Gabriel
 * Task: Bit manipulation
 */

#include "main.h"

/**
 * binary_to_uint - A func that converts binary to unsigned int
 * @b: A pointer to a string of 0 and 1 char.
 * Return: Null if b containes chars not 0 0r 1,
 * else the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (*b == '\0')
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b++ - '0');
	}
	return (result);
}
