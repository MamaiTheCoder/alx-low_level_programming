#include "main.h"

/*
 * print_last_digiti - print last digit
 *
 * @r: number
 *
 * Return: last digit of a number
 */
int print_last_digit(int a)
{
	int lastDigit;

	if (a < 0)
	{
		lastDigit = -1 * (n % 10);
	}
	else
	{
		lastDigit = (n % 10);
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
