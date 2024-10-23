# include <stdio.h>

/**
 * main - Entry code Print all letters except q and e
 * Return: 0
 */

int main(void)

{
	char letter;

	/*Print lowercase letters except q and e*/
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar (letter);
		}
	}

	/*Print a new line character*/
	putchar ('\n');

	return (0);

}
