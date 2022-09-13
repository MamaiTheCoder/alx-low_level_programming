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
	int b;

	b = a % 10;
	if (b < 0)
	{
		_putchar(-b + 48);
		return (-1);
	}
	else
	{
		_putchar(b + 48);
		return (1);
	}
}
