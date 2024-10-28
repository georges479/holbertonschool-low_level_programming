#include "main.h"


/**
 * print_line - Imprime une ligne de caractères'_'
 * @n: Le nombre de caractères à imprim
 *
 * Description: Si n est négatif ou zéro, un saut de ligne est imprimé
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
