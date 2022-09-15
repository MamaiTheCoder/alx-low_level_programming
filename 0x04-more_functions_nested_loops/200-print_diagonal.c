#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 *
 * @n: number of times / will be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int aftern, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (aftern = 1; aftern <= n; aftern++)
		{
			for (space = 1; space <= aftern; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
