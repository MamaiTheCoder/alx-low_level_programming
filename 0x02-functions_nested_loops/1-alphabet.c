#include <stdio.h>

/**
 * main - print lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
