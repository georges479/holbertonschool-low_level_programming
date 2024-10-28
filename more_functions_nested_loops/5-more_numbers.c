#include "main.h"


/**
 * more_numbers - imprime les nombres de 0 à 14, dix foi
 */
void more_numbers(void)
{
	const char *numbers[] = {
	"0", "1", "2", "3", "4",
	"5", "6", "7", "8", "9",
	"10", "11", "12", "13", "14"
	};
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
	{
		const char *p = numbers[n];

		while (*p)
	{
		_putchar(*p);
		p++;
	}
	}
		_putchar('\n');
	}
}
