#include "main.h"

/**
 * puts_half - prints half of the string
 *
 * @str: The string input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int p = 0, q;

	while (p >= 0)
	{
		if (str[p] == '\0')
		{
			break;
		}
		p++;
	}

	if (p % 2 == 1)
		q = p / 2;
	else
		q = (p - 1) / 2;

	for (q++; q < p; q++)
	{
		_putchar(str[q]);
	}
	_putchar('\n');
}
