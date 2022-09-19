#include "main.h"

/**
 * print_array - prints n elements of an array of integer
 *
 * @a: Input array
 * @n: Input n elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(', ');
	}
	printf("\n");
}
