#include "main.h"
#include <stdio.h>


/**
 * _puts_recursion - Affiche une chaîne de caractères suivi d'une nouvelle li
 * @s: Pointeur vers la chai�e de caractère a afficher
 *
 * Return: Rien
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
