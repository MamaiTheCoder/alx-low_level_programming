#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 32 || i == 34)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
