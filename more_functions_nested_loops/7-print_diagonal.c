#include "main.h"

/**
 * print_diagonal - Print a diagonal line
 * @n: The number to print diagonal lines
 * Return: nothing
 */

void print_diagonal(int n)

{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
