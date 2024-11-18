#include "function_pointers"


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
	{
		return (NULL);
	}
	if (cmp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}

