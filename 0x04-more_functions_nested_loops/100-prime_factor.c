#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int p, k;

	p = 612852475143;
	for (k = 2 ; k <= p; k++)
	{
		if (p % k == 0)
		{
			p /= k;
			k--;
		}
	}
	printf("%ld\n", k);
	return (0);
}
