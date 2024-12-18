#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Affiche un échiquie
 * @a: Tableau 2D représentant l'échiqui
 *
 * Cette fonction parcourt chaque élément du table
 * et l'affiche sous forme d'échiquie
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
