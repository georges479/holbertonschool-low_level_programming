#include "main.h"
#include <stddef.h>


/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to search for
 *
 * Return: a pointer to the first occurrence of the character
 *         c in the string s, or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
