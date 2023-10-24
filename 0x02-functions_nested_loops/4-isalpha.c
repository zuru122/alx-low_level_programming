#include "main.h"

/**
 * _isalpha - A fucntion that checks
 * for alphabetic character
 * @c: The character to be checked
 *
 * Author: Jutsice Sunday G.
 * Date: 24th May, 2023
 *
 * Return: 1 if Success or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 98 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
