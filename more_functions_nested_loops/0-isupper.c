#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character.
 *
 * @c: the character to check.
 *
 * Return: 1 if uppercase, 0 if not.
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
