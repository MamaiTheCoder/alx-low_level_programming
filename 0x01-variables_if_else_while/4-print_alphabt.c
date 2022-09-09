#include <stdio.h>

/**
 * main - prints aphabets in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; i++)
	{
		if (x != 101 || x != 113)
		{
			putchar(x);
		}
	}
	putchar("\n");
	return (0);
}
