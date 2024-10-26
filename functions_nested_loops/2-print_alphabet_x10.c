#include "main.h"


/**
*print_alphabet_x10 - function that prints alphabet in lowercase x10
*
*Return: no return
*/
void print_alphabet_x10(void)
{
	int n = 0;
	char alphabet;

	while (n < 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar ('n');
		n++;
	}
}
