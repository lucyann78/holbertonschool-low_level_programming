#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - locate a substring within a string
 * @haystack: the string to be searched
 * @needle: the substring to search for
 * Return: a pointer to the beginning of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *P = needle;

		while (*l == *P && *P != '\0')
		{
			l++;
			P++;
		}
		if (*P == '\0')
			return (haystack);
	}
	return (0);
}
