#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 *
 * @argc: the number of arguments in the command line.
 * @argv: the array having command line arguments.
 *
 * Return: Always 0 (SUcces).
 */
int main(int argc, char *argv[])
{
	int a, b, add;

	add = 0;
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
