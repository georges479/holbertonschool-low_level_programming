#include "main.h"


/**
 * _islower - checks if characters are lowercase
 *
 * c - characters that has to be checked
 *
 * @c parameter: checking c characters
 *
 * Return: Always 0.
 */
int _islower(int c)
{

	c = _islower('I');
	_putchar(c + '0');
	c = _islower('a');
	_putchar(c + '0');
	c = _islower('s');
	_putchar(c + '0');
	c = _islower(70);
	_putchar(c + '0');
	c = _islower(20);
	_putchar(c + '0');
	c = _islower('U');
	_putchar(c + '0');
	c = _islower('n');
	_putchar(c + '0');
	c = _islower(0);
	_putchar(c + '0');
	c = _islower('H');
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}
