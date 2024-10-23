#include<stdio.h>
#include<stdlib.h>

/**
 * main - Putchar all single numbers base ten
 * Return: 0
 */

int main(void)

{

	/*Print all single numbers of base ten starting from zero*/
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
