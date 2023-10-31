/*
 * Author: Sunday, Justice Gabriel
 * Task: 0x14. C - Bit manipulation "4-clear_bit.c"
 */

#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to an unsigned lonh int
 * @index: The index of the bit to the cleared (0-based)
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1); /*Error: index out of range*/
	}
	*n = (*n & ~mask); /* used bitwise AND with the mask complement */
	return (1);
}
