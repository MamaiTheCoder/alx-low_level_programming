#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: The destination of the strings
 * @src: The source of the strings
 * @n: number of bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
