#include "main.h"

/**
 * print_square - Prints a square of size 'size'
 * @size: The size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int j, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
