#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - alloue de la mémoire pour un tableau et initialise à zéro
 * @nmemb: Nombre d'éléments
 * @size: Taille de chaque élément
 *
 * Return: Un pointeur vers la mémoire allouée, ou NULL en cas d'échec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int ts, i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ts = nmemb * size;
	p = malloc(ts);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ts; i++)
	{
		p[i] = 0;
	}
	return (p);
}
