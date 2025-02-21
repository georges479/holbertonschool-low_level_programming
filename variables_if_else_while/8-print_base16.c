#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: always 0.
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
