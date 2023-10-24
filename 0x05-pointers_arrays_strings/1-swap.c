#include "main.h"

/**
 * swap_int - a function that swaps
 * the value of two integers
 * @a: declaration of a and parameter for the function swap_int
 * @b: declaration of b and parameters for the functino swap_int
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;/*declare of a variable c*/

	c = *a;
	*a = *b;
	*b = c;
}
