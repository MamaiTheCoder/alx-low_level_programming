#include "main.h"

/**
 * _islower - checks for lower characters
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowecase character, 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
