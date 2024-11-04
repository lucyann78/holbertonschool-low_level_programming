#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b: the value used to fill the memory
 * @s: pointer to the memory area to be filled
 * @n: the number of bytes to be filled
 * Return: pointer to the filled memory area(s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
