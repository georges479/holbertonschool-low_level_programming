#include "main.h"
#include <stdlib.h>


/**
 * create_array - Creates an array of chars
 *		and initializes it with a specific char
 * @size: Size of the array
 * @c: Char to initialize array with
 *
 * Return: Pointer to the array, or NULL if size is 0 or if allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *oct;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	oct = malloc(size * sizeof(char));
	if (oct == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		oct[i] = c;
	}
	return (oct);
}
