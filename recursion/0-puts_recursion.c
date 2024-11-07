#include "main.h"
#include <stdio.h>

void _puts_recursion(char *s)
{
	int a;

	for (a = 0; s[a] < '\0'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
