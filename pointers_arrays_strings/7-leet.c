#include "main.h"
#include <stdio.h>

/**
 * leet - converts certain letters in a string to their leet(1337) equivalents
 * @s: the input string to be converte
 * Return: a pointer to the modified string
 *
 */
char *leet(char *s);

char *leet(char *s)
{
	char *r = s;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};
	int i;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
			{
				*s = n[i];
				break;
			}
		}
		s++;
	}
	return (r);
}
