#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: The destination to copy the string
 * @src: The source of the string
 * @n: The number f bytes from source
 *
 * Return: Pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
