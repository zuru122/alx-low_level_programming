#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the digit to be checked
 *
 * Author: Justice Sunday G.
 * Date: 27th May, 2023;
 * Return: 1 if c is digit and 0 notherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
