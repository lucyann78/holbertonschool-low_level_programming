#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - strin span function
 * @s: string to be scanned
 * @accept: string containing characters to be matched
 * Return: characters counted
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; s[i] != accept[k]; k++)
		{
			if (accept[k] == '\0')
				return (i);
		}
	}
	return (0);
}
