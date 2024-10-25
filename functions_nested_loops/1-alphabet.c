#include "main.h"
#include <stdio.h>
/**
 * main - Print the alph
 * Return: void
 */

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	_putchar('\n');
}
