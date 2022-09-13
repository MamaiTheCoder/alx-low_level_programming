#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/*
			 * if the product is a single number put space
			 * if it is two number place the first digit
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);/*get the first digit*/
			_putchar((prod % 10) + 48);/*get second digit*/
		}
		_putchar('\n');
	}

}
