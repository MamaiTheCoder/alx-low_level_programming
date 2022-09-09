#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is a positive, zero, or a negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is a positive number\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is a negative number\n", n);
	}
	return (0);
}
