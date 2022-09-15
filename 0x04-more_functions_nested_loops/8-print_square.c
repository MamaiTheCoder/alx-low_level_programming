#include "main.h"

/**
 * print_square - print squares and a new line
 *
 * @size: The size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n ++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
