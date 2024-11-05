#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - function designed to print an 8x8 chessboard
 * @a: pointer to a 2D array representing a chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int k;
	int r;

	for (k = 0; k < 8; k++)
	{
		for (r = 0; r < 8; r++)
			_putchar(a[k][r]);
		_putchar('\n');
	}
}
