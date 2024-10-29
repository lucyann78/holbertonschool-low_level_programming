#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers */
{
	int hum = *a;
	*a = *b;
	*b = hum;
}
