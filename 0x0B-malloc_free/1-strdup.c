#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: pointer to newly allocated space.
 *
 * Return: On SUccess, pointer to duplicate string.
 * NULL is string equalls to NULL ot if insufficient memmory.
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		strout[j] = str[j];
	return (strout);
}
