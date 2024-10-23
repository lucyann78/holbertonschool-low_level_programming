#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point Function to print the alphabet in lowercase
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char letter;

	/*Print letters from 'a' to 'z'*/
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}

	/*Print a newline character*/
	{
	putchar('\n');
	}

	return (0);
}
