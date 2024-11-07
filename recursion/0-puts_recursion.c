#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string using recursion
 * @s: input
 * Return: void
 */

void _puts_recursion(char *s)

{
	if (*s)
	{
		putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		putchar ('\n');
}
