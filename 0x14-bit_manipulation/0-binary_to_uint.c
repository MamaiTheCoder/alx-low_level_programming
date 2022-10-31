#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: points to a string of 0 and 1 chars
 *
 * Return: Converted number
 * 0 if b is NULL or string has one or more chars
 * nor 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
