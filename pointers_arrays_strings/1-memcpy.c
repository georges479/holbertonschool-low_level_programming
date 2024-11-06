#include "main.h"


/**
 * _memcpy - copies memory area
 * @dest: destination buffer to copy to
 * @src: source buffer to copy from
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination buffer (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
