#include "main.h"
#include <stdlib.h>



/**
 * array_range - Creates an array of integers.
 * @min: Minimum integer value (included).
 * @max: Maximum integer value (included).
 *
 * Return: Pointer to the newly created array,
 * or NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int i, j;
	int *t;

	if (min > max)
	{
		return (NULL);
	}
	j = max - min + 1;
	t = malloc(j * sizeof(int));
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		t[i] = min + i;
	}
	return (t);
}
