#include "main.h"

/**
 * helper - Aide récursive pour trouver la racine carrée naturelle
 * @n: Le nombre dont on cherche la racine carrée
 * @num: Le nombre à tester comme racine
 *
 * Return: La racine carrée si elle existe, sinon -1
 */
int helper(int n, int num)
{
	if (num * num > n)
	{
		return (-1);
	}
	else if (num * num == n)
	{
		return (num);
	}
	else
	{
		return (helper(n, num + 1));
	}
}

/**
 * _sqrt_recursion - Trouve la racine carrée naturelle d'un nombre
 * @n: Le nombre dont on cherche la racine carrée
 *
 * Return: La racine carrée si elle existe, sinon -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 0));
}
