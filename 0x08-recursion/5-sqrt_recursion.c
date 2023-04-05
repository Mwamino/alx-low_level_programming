#include "main.h"

int sqrts(int n, int i);

/**
 * _sqrt_recursion -  natural square root of a number
 * @n: integer number
 * Return: -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	int a = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (sqrts(n, a));
}

/**
 * sqrts - calculates square root of number
 * @i: number
 * @j: square
 * Return: square root
 */

int sqrts(int i, int j)
{
	if ((i * i) == j)
	{
		return (i);
	}
	if (i == (j / 2))
	{
		return (-1);
	}
	return (sqrts(j, i + 1));
}
