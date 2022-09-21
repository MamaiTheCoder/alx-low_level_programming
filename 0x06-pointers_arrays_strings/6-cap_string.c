#include "main.h"

/**
 * cap_string - capitalize all words of a string
 *
 * @s: the input string
 *
 * Return: The pointer to dest
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int word_separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + i) >= 97 && *(s + i) <= 12)
	{
		*(s + i) = *(s + i) - 32;
	}
	i++;
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(s + i) == word_separators[j])
			{
				if ((*(s + (i + 1)) >= 97) && (*(s + (i + 1)) <= 122))
					*(s + (i + 1)) = *(s + (i + 1)) - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
