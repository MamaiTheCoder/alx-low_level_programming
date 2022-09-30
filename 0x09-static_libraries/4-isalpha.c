#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: ASCII table
 *
 * Return: 1 if c is an an alphabet, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
