#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Pointer to the buffer where the string will be copied
 * @src: Pointer to the source string to copy
 *
 * Return: Pointer to dest
 *
 * Description: This function copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
