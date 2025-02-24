#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * @c - the character to check.
 *
 * _isupper - function that checks for uppercase character.
 *
 * Return: 1 if is uppercase, 0 if not.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	return (0);
}
