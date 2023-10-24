#include "main.h"

/**
 * _islower - A function that checks for lower
 * character
 * @c: The character to be checked.
 *
 * Author: Justice Sunday G.
 * Date: 24th May, 2023
 *
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
