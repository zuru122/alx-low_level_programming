/*
 * Author: Sunday, Justice Gabriel
 * Task: 0x14. C - Bit manipulation "2-get_bit.c"
 */

#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The unsigned long int to extract the bit from
 * @index: The index of the bit to retrieve (0-based)
 * Return: The value of the bit at the specified index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1); /* Error: index out of range */
	}
	mask <<= index;
	if (mask & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
