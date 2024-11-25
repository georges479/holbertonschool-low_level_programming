#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * sum_them_all - Calculates the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The sum of all parameters, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, unsigned int);
	}
	va_end(arg);
	return (sum);
}
