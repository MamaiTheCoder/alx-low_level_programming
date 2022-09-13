#include "main.h"

/**
 * _abs - commutes absolute value of an integer
 *
 * @i: an integer value
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
