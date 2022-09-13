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

	if (n < 0)
	{
		lastDigit = -1 * (n % 10);
	}
	else
	{
		lastDigit = n % 10;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
