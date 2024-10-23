#include<stdio.h>
#include<stdlib.h>

/**
 * main - Putchar all single numbers base ten
 * Return: 0
 */

int main(void)

{

	/*Print all single numbers of base ten starting from zero*/
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
