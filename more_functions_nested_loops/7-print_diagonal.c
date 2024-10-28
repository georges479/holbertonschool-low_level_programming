#include "main.h"


/**
 * print_diagonal - Prints a diagonal of characters '\'
 * @n: The number of lines to print
 *
 * Description: If n is negative, it prints a newline.
 *              Otherwise, it prints n lines of the character '\'
 *              offset to form a diagonal.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
