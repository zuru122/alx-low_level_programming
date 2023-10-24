#include "main.h"

/**
 * _isupper - function to check if an alphabet is upper
 * @c: letter to check
 *
 * Author: Justice Sunday G.
 * Date: 27th May, 2023
 *
 * Return: 1 if c is upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
