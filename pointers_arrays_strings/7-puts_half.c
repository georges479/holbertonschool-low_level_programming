#include "main.h"



/**
 * puts_half - Affiche la seconde moitié d'une chaînde caractèrs
 * @str: La chaîne de caractèr a traiter
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}
	start = (len % 2 == 0) ? len / 2 : (len / 2) + 1;
	{
		while (str[start] != '\0')
		{
			_putchar(str[start]);
			start++;
		}
		_putchar('\n');
	}
}
