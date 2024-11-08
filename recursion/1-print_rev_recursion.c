#include "main.h"


/**
 * _print_rev_recursion - Imprime une chaîne de aractère l'enver
 * @s: Pointeur vers la chaîne de caactère a afficher
 *
 * Return: Rien
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
