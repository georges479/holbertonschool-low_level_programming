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
 * check_prime_recursive - vérifie récursivement si un nombre est premier
 * @n: l'entier à vérifier
 * @i: le diviseur actuel à tester
 *
 * Return: 1 si le nombre est premier, sinon 0
 */
int check_prime_recursive(int n, int i)
{
	if (i > sqrt_int(n))
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (check_prime_recursive(n, i + 2));
}

/**
 * is_prime_number - vérifie si un nombre est premier
 * @n: l'entier à vérifier
 *
 * Return: 1 si le nombre est premier, sinon 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (check_prime_recursive(n, 3));
}
