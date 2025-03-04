#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string to modify
 *
 * Return: Pointer to the modified string
 *
 * Description: This function converts the first letter of each word
 * to uppercase if it's a lowercase letter. Words are separated by
 * spaces, tabs, newlines, or punctuation marks: , ; . ! ? " ( ) { }
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		 str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
