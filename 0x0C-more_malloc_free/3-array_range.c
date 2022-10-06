#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array.
 * NULL if min > max.
 * NULL if malloc fails.
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;
	return (p);
}
