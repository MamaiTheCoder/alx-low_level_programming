#include "main.h"

/**
 * _isupper - checks if the character is an uppercase
 *
 * @c: the character
 *
 * Return: 1 if it is an uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
