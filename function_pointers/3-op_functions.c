#include "3-calc.h"
#include <stdio.h>


/**
 * op_add - Returns the sum of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Returns the difference of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Returns the product of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Returns the division of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of the division.
 *         Prints an error and exits with status 100 if b is 0.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	return (a / b);
}


/**
 * op_mod - Returns the remainder of the division of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The remainder of the division.
 *         Prints an error and exits with status 100 if b is 0.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
