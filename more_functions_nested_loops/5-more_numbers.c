#include "main.h"

/**
 * more_numbers - Prints ten times the numbers 0 to 14
 * Return: 1o times the numbers 0 to 14
 */

void more_numbers(void)

{
	int i, j;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
				_putchar(j % 10 + '0');
			}
			else
			{
				_putchar(j + '0');
			}
		}
		_putchar('\n');
	}
}
