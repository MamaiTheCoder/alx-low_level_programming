#include "main.h"

/**
 * print_chessboard - prints a chessboard
 *
 * @a: input pointer
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int p, q = 0;

	for (p = 0; p < 64; p++)
	{
		if (p % 8 == 0 && p != 0)
		{
			q = p;
			_putchar('\n');
		}
		_putchar(a[p / 8][p - q]);
	}
	_putchar('\n');
}
