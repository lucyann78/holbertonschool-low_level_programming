#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - finds the first character ocurrence in a specified set in string
 * @s: the string to be searched
 * @accept: the string containig the characters to match
 * Return: a pointer to the first ocurrence of a char from accepts in s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
