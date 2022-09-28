#include "main.h"

/**
 * power_function - prints natural square root of a number
 *
 * @p: the input number
 * @q: iterator
 *
 * Return: natural square root of a number 0r -1.
 */
int power_function(int p, int q)
{
	if (q % (p / q) == 0)
	{
		if (q * (p / q) == p)
			return (q);
		else
			return (-1);
	}
	return (0 + power_function(p, q + 1));
}

/**
 * _sqrt_recursion - prints natural square root of a number
 *
 * @n: the input number
 *
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_function(n, 2));
}
