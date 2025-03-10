#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: Size of the array to create
 * @c: Character to initialize the array with
 *
 * Return: Pointer to the array, or NULL if allocation fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
