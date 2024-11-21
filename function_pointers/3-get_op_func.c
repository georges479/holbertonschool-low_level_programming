#include "calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator passed as an argument to the program.
 *
 * Return: A pointer to the function that corresponds to the operator
 *         given as a parameter. If no operator matches, return NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

    	int i;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
