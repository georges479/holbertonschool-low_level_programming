#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if character is digit.
 *
 * @c: the character to check.
 *
 * Return: 1 id is digit, 0 if not.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
