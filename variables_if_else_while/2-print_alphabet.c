#include <stdio.h>
/**
 * main - print alphabet in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
