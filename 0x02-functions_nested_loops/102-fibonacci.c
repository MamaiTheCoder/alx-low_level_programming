#include <stdio.h>

/**
 * main - prints 50 fibonnacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (x = 0; x < 48; x++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	print("\n");
	return (0);
}
