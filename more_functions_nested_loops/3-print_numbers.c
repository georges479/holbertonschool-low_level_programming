#include "main.h"


/**
 * print_numbers - Prints the digits from 0 to 9.
 *
 * This function uses a loop to print the numbers
 * from 0 to 9, each followed by a newline character.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
