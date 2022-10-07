#include "main.h"

/**
 * _strlen - computes the length of a string
 *
 * @s: The string
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (count < *s)
		count++;
	return (count);
}
