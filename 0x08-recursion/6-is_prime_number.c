#include "main.h"

/**
 * check_prime - checks if a number is a prime number
 *
 * @n: input number
 * @p: iterator
 *
 * Return: 1 if it is a prime number, 0 otherwise.
 */
int check_prime(unsigned int n, unsigned int p)
{
	if (n % p == 0)
	{
		if (n == p)
			return (1);
		else
			return (0);
	}
	return (0 + check_prime(n, p + 1));
}

/**
 * is_prime_number - checks if a number is a prime number.
 *
 * @n: the input number
 *
 * Return: 1 if it is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
		return (0);
	return (check_prime(n, 2));
}
