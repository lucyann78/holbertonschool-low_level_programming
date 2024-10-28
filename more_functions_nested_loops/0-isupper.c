#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check for uppercase letter
 * @c: The number to be checked
 * Return: 1 for uppercase letter 0 for else
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
