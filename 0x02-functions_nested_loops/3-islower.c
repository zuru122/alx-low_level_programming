#incude "main.h"

/**
 * _islower - a function that checks for lower case character
 * @c: single letter
 * * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
