#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9.
 *
 * Return: nothing.
 */
void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
