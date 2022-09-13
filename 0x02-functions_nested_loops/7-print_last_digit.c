#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @n: number
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-1);
	}
	else
	{
		_putchar(l + 48);
		return (1);
	}
}
