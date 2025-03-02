#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the first element of the array
 * @n: The number of elements to print
 *
 * Description: This function prints n elements of an array of integers,
 * separated by a comma and a space. It ends with a new line.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
