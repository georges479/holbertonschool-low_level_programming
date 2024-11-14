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
	unsigned int *p;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, nmemb * size);
	return (p);
}
