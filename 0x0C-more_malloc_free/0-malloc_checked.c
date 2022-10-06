#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: amount of bytes
 *
 * Return: pointer to allocated memory.
 * status value is equal to 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
