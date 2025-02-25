#include "main.h"

/**
 * print_line - imprime une ligne de caractères.
 *
 * @n: nombre de fois à imprimer le caractère.
 */
void print_line(int n)
{
	char c = 95;
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
