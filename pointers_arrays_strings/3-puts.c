#include "main.h"
#include <unistd.h>


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
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
