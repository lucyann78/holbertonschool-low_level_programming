#include "main.h"

/**
 * print_square - Print a square of size "size" using # char
 * @size: the size of the square to be printed
 * Return: Square figure
 */

void print_square(int size)

{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
