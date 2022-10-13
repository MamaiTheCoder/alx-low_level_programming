#include "3-calc.h"

/**
 * op_add - adds a and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: SUM.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts b from a
 *
 * @a: first number
 * @b: second number
 *
 * Return: result of substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a  and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: multiple of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds modulus of a and b
 *
 * @a:first number
 * @b:second number
 *
 * Return: remainder of a division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
