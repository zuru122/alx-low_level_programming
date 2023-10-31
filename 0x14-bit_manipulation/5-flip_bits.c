/*
 * Author: Sunday, Jusice Gabriel
 * Task: 0x14. C - Bit manipulation "5-flip_bits.c"
 */

#include "main.h"

/**
 * flip_bits - Calculates the number of bits needed to flip to get from n to m
 * @n: The first unsigned long int number
 * @m: the second unsigned long int number
 * Return: The number of biots to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
