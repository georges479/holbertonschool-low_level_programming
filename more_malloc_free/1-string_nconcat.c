#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes of s2 to concatenate.
 *
 * Return: pointer to the newly allocated space in memory containing
 * the concatenated string, or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i1 = 0, i2 = 0;
	char *tui;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i1] != '\0')
	{
		i1++;
	}
	while (s2[i2] != '\0' && i2 < n)
	{
		i2++;
	}
	tui = malloc(sizeof(char) * (i1 + i2 + 1));
	if (tui == NULL)
	{
		return (NULL);
	}
	for (i1 = 0; s1[i1] != '\0'; i1++)
	{
		tui[i1] = s1[i1];
	}
	for (i2 = 0; s2[i2] != '\0' && i2 < n; i2++)
	{
		tui[i1 + i2] = s2[i2];
	}
	tui[i1 + i2] = '\0';
	return (tui);
}
