#include "main.h"
#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{       
	int i, j, fm;
	unsigned int c;

	for (i = 0; s[i] != '\0'; i++)
	{
		fm = 0;
		for (j = 0;accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j] )
			{
				fm = 1;
				c++;
				break;
			}
		}
		if (!fm)
		{
			break;
		}
	}
	return (c);
}
