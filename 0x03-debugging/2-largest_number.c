#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 *
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: 0
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > c && c > a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	printf("%d is the largest number", largest);
	return (0);
}
