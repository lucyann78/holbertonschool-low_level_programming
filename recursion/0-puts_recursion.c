#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string using recursion
 * @s: input
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
