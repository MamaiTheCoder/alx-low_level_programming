#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	int count;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}