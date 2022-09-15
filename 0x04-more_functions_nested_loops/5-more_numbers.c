#include "main.h"

/**
 * more_numbers - print 10 times 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int times, dig;

	for (times = 0; times <= 9; times++)
	{
		for (dig = 0; dig <= 14; dig++)
		{
			if (dig <= 9)
			{
				_putchar(dig + '0');
			}
			else
			{
				_putchar((dig / 10) + 48);
				_putchar((dig % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
