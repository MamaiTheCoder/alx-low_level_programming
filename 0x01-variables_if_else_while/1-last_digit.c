#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The last digit of a number stored in a varibale n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d. It's greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d. It is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d. It's less than 6\n", n, l);
	}
	return (0);

}
