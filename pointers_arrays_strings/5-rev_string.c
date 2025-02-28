#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Description: This function reverses the characters in a string
 */
void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	int end;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	end = len - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
