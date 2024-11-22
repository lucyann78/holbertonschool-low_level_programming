#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the product od a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: the first integer or numerator
 * @b: the second integer or denominator
 * Result: the result of a divided by b, or exits with an error if b is zero
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculate the remainder of two integers
 * @a: the first integer
 * @b: the second integer
 * Result: the remainder of a divided by b or exits with an error if b is zero
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
