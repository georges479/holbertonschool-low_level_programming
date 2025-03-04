#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Description: This function compares two strings character by character.
 * It returns:
 * - 0 if the strings are identical,
 * - A positive value if the first string is greater than the second,
 * - A negative value if the first string is less than the second.
 *
 * Return: The difference between the first unmatched characters or 0 if equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
