#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory space
 * @s1: First input string
 * @s2: Second input string
 *
 * Return: Pointer to the concatenated string, or NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		s3[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		s3[i + k] = s2[k];
	}
	s3[i + j] = '\0';
	return (s3);
}
