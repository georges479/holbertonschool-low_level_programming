#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to print.
 *
 * Description: This function prints each character of the string
 * one by one using _putchar, and then prints a new line.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
