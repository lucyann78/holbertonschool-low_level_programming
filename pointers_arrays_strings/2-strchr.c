#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that finds the first ucurrence of a character on a string
 * @s: pointer to the string to be search
 * @c: character to locate in the string
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

