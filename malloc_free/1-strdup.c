#include "main.h"
#include <stdlib.h>


/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the new string, or NULL if insufficient memory
 *         was available or if str is NULL.
 */
char *_strdup(char *str)
{
	int i, len;
	char *strcpy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	strcpy = malloc((len + 1) * sizeof(char));

	if (strcpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		strcpy[i] = str[i];
	}
	strcpy[len] = '\0';
	return (strcpy);
}
