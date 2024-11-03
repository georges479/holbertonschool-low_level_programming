#include "main.h"
#include <stdio.h>

/**
 * print_array - Affiche n éléments d'un tableau d'entiers
 * @a: Pointeur vers le tableau d'entiers
 * @n: Nombre d'élémen a afficher
 *
 * Description: Les éléments sont affichés séparés par des vir
 * et suivis d'un espace. Une nouvelle ligne est ajoutée à la f
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		{
			printf("%d", a[i]);
		}
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	 printf("\n");
}
