#include "main.h"

/**
 * sqrt_int - calcule la racine carrée entière d'un nombre
 * @n: l'entier dont on veut la racine carrée
 *
 * Return: la racine carrée entière de n
 */
int sqrt_int(int n)
{
	int i = 0;

	while (i * i <= n)
	{
		if (i * i == n)
		{
			return (i);
		}
		i++;
	}
	return (i - 1);
}

/**
 * is_prime_number - vérifie si un nombre est premier
 * @n: l'entier à vérifier
 *
 * Return: 1 si le nombre est premier, sinon 0
 */
int is_prime_number(int n)
{
	int i, limit;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}

	limit = sqrt_int(n);
	for (i = 3; i <= limit; i += 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
