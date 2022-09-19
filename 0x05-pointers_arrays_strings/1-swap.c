#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a: first value
 * @b: second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int val = *a;
	*a = *b;
	*b = val;
}
