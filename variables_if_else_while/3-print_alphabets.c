#include <stdlib.h>
#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */

int main(void)
{
	char letter;

	/*Print lowercase letters*/
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	/*Print uppercase letters*/
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	/*Print a newline character*/
	putchar('\n');
	return (0);
}
