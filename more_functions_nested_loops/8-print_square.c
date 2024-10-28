#include "main.h"


/**
 * print_square - Prints a square of '#' characters
 * @size: The size of the square to print
 *
 * Description: If size is less or equal to 0, a newline is printed.
 *              Otherwise, a square of size 'size' is printed using '#'
 */
void print_square(int size)
{
	int i, j;
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}

		_putchar ('\n');
		}
	}
}

