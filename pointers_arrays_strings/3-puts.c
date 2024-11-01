#include "main.h"
#include <stdio.h>


/**
 * _puts - Affiche une chaîne de caractères suivie d'un saut de ligne
 * @str: Pointeur vers la chaîne à affich
 */
void _puts(char *str)
{
	if (str == NULL)
	return;
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
