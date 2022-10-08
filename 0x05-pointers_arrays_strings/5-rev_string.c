#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s:  The string that is reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, count, middle, length;
	char temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	middle = length / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s = s[count - i - 1];
		s[count - i - 1] = temp;

	}
}
