#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function first finds the length of the string,
 * then prints each character in reverse order using _putchar.
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
