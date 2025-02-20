#include <stdio.h>
/**
 * main - print alphabet in upercase
 *
 * Return: always 0
 */
int main(void)
{
	char ALPHA, alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 65; ALPHA <= 90; ALPHA++)
	{
		putchar(ALPHA);
	}
	putchar('\n');
	return (0);
}
