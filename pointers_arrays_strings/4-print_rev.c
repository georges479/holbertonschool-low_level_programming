#include "main.h"
#include <unistd.h>


/**
 * print_rev - Affiche une chaîne de caractèr a l'envers
 * @s: Pointeur vers la chaîn a afficher
 */
void print_rev(char *s)
{
	int length = 0;

	if (s == NULL)
	return;

	while (s[length] != '\0')
		{
			length++;
		}
	s += length - 1;

	while (length > 0)
		{
			write(1, s, 1);
			s--;
			length--;
		}
	write(1, "\n", 1);
}
