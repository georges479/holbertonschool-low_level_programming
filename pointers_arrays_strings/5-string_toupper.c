#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: Pointer to the string to modify
 *
 * Return: Pointer to the modified string
 *
 * Description: This function scans the input string and replaces each
 * lowercase letter (de 'a' à 'z') par sa version majuscule correspondante
 * en utilisant les valeurs ASCII.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
