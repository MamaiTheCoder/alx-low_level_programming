#include "main.h"

/**
 * print_to_98 - print natural numbers from n to 98
 *
 * @n: input
 *
 * Return: no return
 */
int add(int, int)
{
	int count;

	if (n > 98)
	{
		for (count = n; count > 98; --count)
		{
			printf("%d, ", count);
		}
	}
	else
	{
		for (count = n; count < 98; ++count)
		{
			printf("%d, ", count);
		}
	}
	printf("%d\n", count);
}
