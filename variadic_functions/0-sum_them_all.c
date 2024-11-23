#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: indicates how many additional parameters will be passed.
 * @...: represents a variable numberof parameters.
 * Return: if n == 0, returns 0. Otherwise return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}

