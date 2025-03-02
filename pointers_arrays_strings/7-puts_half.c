#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be printed
 *
 * Description: If the number of characters is odd,
 * the function printsthe last n characters of the string,
 * where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int n, j, len, half;

	len = strlen(str);
	half = len / 2;
	n = (len + 1) / 2;

	if (len % 2 == 0)
	{
		for (j = half; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = n; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
