#include "main.h"

/**
 * more_numbers - print 10 times 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int num, dig1, dig2;

	for (times = 0; times <= 9; times++)
	{
		for (dig1 = 48; dig1 <= 57; dig1++)
		{
			for (dig2 = 48; dig2 <= 52; dig2++)
			{
				_putchar(dig1);
				_putchar(dig2);
			}
		}
		_putchar('\n');
	}
}
