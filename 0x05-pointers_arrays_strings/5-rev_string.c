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
	int i, count, middle;
	char temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	i = 0;
	middle = count / 2;

	while (middle--)
	{
		temp = s[count - i - 1];
		s[count - i - 1] = s[i];
		s[i] = temp;
		i++;

	}
}
