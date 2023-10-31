/*
 * Author: Sunday, Justice Gabriel
 * Task: 0x14. C - Bit manipulation "3-set_bit.c"
 */

#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a givrn index
 * @n: pointer to an unsigned long int
 * @index: The index of the bit to be set (0-based)
 * Return: 1 if it worked, -1 if an error ocured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1); /* Error: index out of range */
	}
	unsigned long int mask = 1UL << index;
	*n = *n | mask; /* using d bitwise OR to set d bit */
	return (1);
}
