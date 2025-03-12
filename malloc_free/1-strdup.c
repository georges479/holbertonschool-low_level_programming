#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Creates a duplicate of a given string in a new memory space
 * @str: The input string to duplicate
 *
 * Return: Pointer to the newly allocated duplicated string,
 *         or NULL if allocation fails or str is NULL.
 */
char *_strdup(char *str)
{
	char *cop;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	cop = malloc(sizeof(char) * (i + 1));
	if (cop == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		cop[j] = str[j];
	}
	cop[i] = '\0';
	return (cop);
}
