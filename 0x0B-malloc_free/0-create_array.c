#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size of the array of chars
 * @c: the characters
 *
 * Return: A pointer to the array
 * 0 if  size is NUll, 0 if it fails fails.
 */
char *create_array(unsigned int size, char c)
{
	char *alloc_size;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	alloc_size = malloc(sizeof(c) * size);

	if (alloc_size == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		alloc_size[i] = c;
	}
	return (alloc_size);
}
