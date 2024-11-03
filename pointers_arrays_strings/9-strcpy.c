#include "main.h"


/**
 * _strcpy - Copie la chaîne de caractères src dans de
 * @dest: Pointeur vers le buffer de destination
 * @src: Pointeur vers la chaîne sourcea copier
 *
 * Return: Pointeur vers la chaîne de destination (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)

	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;

}
