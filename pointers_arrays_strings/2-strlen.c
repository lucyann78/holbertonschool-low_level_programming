#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @str: The string whose length is to be calculated
 * Return: The total count of character or length of string
 */

int _strlen(const char *str)

{
	int length = 0;

	while (*str++)
	{
	length++;
	}
	return (length);
}
