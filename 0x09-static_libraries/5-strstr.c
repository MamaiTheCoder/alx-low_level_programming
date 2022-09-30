#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: string
 * @needle: substring to be located
 *
 * Return: pointer to the beginning of the located substring
 * NULL if not located
 */
char *_strstr(char *haystack, char *needle)
{
	char *shaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		shaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (shaystack);
		haystack = shaystack + 1;
	}
	return (0);
}
