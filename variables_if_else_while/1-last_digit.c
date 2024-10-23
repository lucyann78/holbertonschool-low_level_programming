#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point To print the last digit of the number
 * Return: Always returs 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Calculate the last digit*/

	last_digit = n % 10;

	/*Print the last digit and its description*/

	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
