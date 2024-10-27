#include "main.h"
/**
 * _islower - checks if characters are lowercase
 *
 * c - characters that has to be checked
 *
 * @c parameter: checking c characters
 *
 * Return: 1 if char in lowercase, otherwise 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
